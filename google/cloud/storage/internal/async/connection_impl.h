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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGE_INTERNAL_ASYNC_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGE_INTERNAL_ASYNC_CONNECTION_IMPL_H

#include "google/cloud/storage/idempotency_policy.h"
#include "google/cloud/storage/internal/async/connection.h"
#include "google/cloud/storage/internal/invocation_id_generator.h"
#include "google/cloud/storage/options.h"
#include "google/cloud/storage/retry_policy.h"
#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/version.h"
#include "absl/strings/cord.h"
#include "absl/strings/string_view.h"
#include <memory>
#include <string>
#include <vector>

namespace google {
namespace cloud {
namespace storage_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
class GrpcChannelRefresh;
class StorageStub;

class AsyncConnectionImpl : public AsyncConnection {
 public:
  explicit AsyncConnectionImpl(CompletionQueue cq,
                               std::shared_ptr<GrpcChannelRefresh> refresh,
                               std::shared_ptr<StorageStub> stub,
                               Options options);
  ~AsyncConnectionImpl() override = default;

  Options options() const override { return options_; }

  future<StatusOr<storage::ObjectMetadata>> AsyncInsertObject(
      InsertObjectParams p) override;

  future<storage_experimental::AsyncReadObjectRangeResponse>
  AsyncReadObjectRange(
      storage::internal::ReadObjectRangeRequest request) override;

  future<StatusOr<storage::ObjectMetadata>> AsyncComposeObject(
      ComposeObjectParams p) override;

  future<Status> AsyncDeleteObject(DeleteObjectParams p) override;

 private:
  CompletionQueue cq_;
  std::shared_ptr<GrpcChannelRefresh> refresh_;
  std::shared_ptr<StorageStub> stub_;
  Options options_;
  storage::internal::InvocationIdGenerator invocation_id_generator_;
};

/// Create a connection with the default stub.
std::shared_ptr<AsyncConnection> MakeAsyncConnection(
    CompletionQueue cq, Options options = Options{});

/// Create a connection with a custom stub (usually a mock).
std::shared_ptr<AsyncConnection> MakeAsyncConnection(
    CompletionQueue cq, std::shared_ptr<StorageStub> stub, Options options);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storage_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGE_INTERNAL_ASYNC_CONNECTION_IMPL_H
