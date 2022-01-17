// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "google/cloud/storage/internal/storage_metadata_decorator.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/storage/v2/storage.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace storage {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace internal {

StorageMetadata::StorageMetadata(std::shared_ptr<StorageStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::storage::v2::ReadObjectResponse>>
StorageMetadata::ReadObject(
    std::unique_ptr<grpc::ClientContext> context,
    google::storage::v2::ReadObjectRequest const& request) {
  SetMetadata(*context, {});
  return child_->ReadObject(std::move(context), request);
}

std::unique_ptr<::google::cloud::internal::StreamingWriteRpc<
    google::storage::v2::WriteObjectRequest,
    google::storage::v2::WriteObjectResponse>>
StorageMetadata::WriteObject(std::unique_ptr<grpc::ClientContext> context) {
  SetMetadata(*context, {});
  return child_->WriteObject(std::move(context));
}

StatusOr<google::storage::v2::StartResumableWriteResponse>
StorageMetadata::StartResumableWrite(
    grpc::ClientContext& context,
    google::storage::v2::StartResumableWriteRequest const& request) {
  SetMetadata(context, {});
  return child_->StartResumableWrite(context, request);
}

StatusOr<google::storage::v2::QueryWriteStatusResponse>
StorageMetadata::QueryWriteStatus(
    grpc::ClientContext& context,
    google::storage::v2::QueryWriteStatusRequest const& request) {
  SetMetadata(context, {});
  return child_->QueryWriteStatus(context, request);
}

void StorageMetadata::SetMetadata(grpc::ClientContext& context,
                                  std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  context.AddMetadata("x-goog-api-client", api_client_header_);
}

}  // namespace internal
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storage
}  // namespace cloud
}  // namespace google
