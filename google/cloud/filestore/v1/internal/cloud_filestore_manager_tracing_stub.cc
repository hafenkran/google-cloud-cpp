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

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/filestore/v1/cloud_filestore_service.proto

#include "google/cloud/filestore/v1/internal/cloud_filestore_manager_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace filestore_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

CloudFilestoreManagerTracingStub::CloudFilestoreManagerTracingStub(
    std::shared_ptr<CloudFilestoreManagerStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::filestore::v1::ListInstancesResponse>
CloudFilestoreManagerTracingStub::ListInstances(
    grpc::ClientContext& context,
    google::cloud::filestore::v1::ListInstancesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.filestore.v1.CloudFilestoreManager", "ListInstances");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListInstances(context, request));
}

StatusOr<google::cloud::filestore::v1::Instance>
CloudFilestoreManagerTracingStub::GetInstance(
    grpc::ClientContext& context,
    google::cloud::filestore::v1::GetInstanceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.filestore.v1.CloudFilestoreManager", "GetInstance");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetInstance(context, request));
}

future<StatusOr<google::longrunning::Operation>>
CloudFilestoreManagerTracingStub::AsyncCreateInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::filestore::v1::CreateInstanceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.filestore.v1.CloudFilestoreManager", "CreateInstance");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateInstance(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
CloudFilestoreManagerTracingStub::AsyncUpdateInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::filestore::v1::UpdateInstanceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.filestore.v1.CloudFilestoreManager", "UpdateInstance");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateInstance(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
CloudFilestoreManagerTracingStub::AsyncRestoreInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::filestore::v1::RestoreInstanceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.filestore.v1.CloudFilestoreManager", "RestoreInstance");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncRestoreInstance(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
CloudFilestoreManagerTracingStub::AsyncRevertInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::filestore::v1::RevertInstanceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.filestore.v1.CloudFilestoreManager", "RevertInstance");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncRevertInstance(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
CloudFilestoreManagerTracingStub::AsyncDeleteInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::filestore::v1::DeleteInstanceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.filestore.v1.CloudFilestoreManager", "DeleteInstance");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteInstance(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::filestore::v1::ListSnapshotsResponse>
CloudFilestoreManagerTracingStub::ListSnapshots(
    grpc::ClientContext& context,
    google::cloud::filestore::v1::ListSnapshotsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.filestore.v1.CloudFilestoreManager", "ListSnapshots");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListSnapshots(context, request));
}

StatusOr<google::cloud::filestore::v1::Snapshot>
CloudFilestoreManagerTracingStub::GetSnapshot(
    grpc::ClientContext& context,
    google::cloud::filestore::v1::GetSnapshotRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.filestore.v1.CloudFilestoreManager", "GetSnapshot");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetSnapshot(context, request));
}

future<StatusOr<google::longrunning::Operation>>
CloudFilestoreManagerTracingStub::AsyncCreateSnapshot(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::filestore::v1::CreateSnapshotRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.filestore.v1.CloudFilestoreManager", "CreateSnapshot");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateSnapshot(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
CloudFilestoreManagerTracingStub::AsyncDeleteSnapshot(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::filestore::v1::DeleteSnapshotRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.filestore.v1.CloudFilestoreManager", "DeleteSnapshot");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteSnapshot(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
CloudFilestoreManagerTracingStub::AsyncUpdateSnapshot(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::filestore::v1::UpdateSnapshotRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.filestore.v1.CloudFilestoreManager", "UpdateSnapshot");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateSnapshot(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::filestore::v1::ListBackupsResponse>
CloudFilestoreManagerTracingStub::ListBackups(
    grpc::ClientContext& context,
    google::cloud::filestore::v1::ListBackupsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.filestore.v1.CloudFilestoreManager", "ListBackups");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListBackups(context, request));
}

StatusOr<google::cloud::filestore::v1::Backup>
CloudFilestoreManagerTracingStub::GetBackup(
    grpc::ClientContext& context,
    google::cloud::filestore::v1::GetBackupRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.filestore.v1.CloudFilestoreManager", "GetBackup");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->GetBackup(context, request));
}

future<StatusOr<google::longrunning::Operation>>
CloudFilestoreManagerTracingStub::AsyncCreateBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::filestore::v1::CreateBackupRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.filestore.v1.CloudFilestoreManager", "CreateBackup");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateBackup(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
CloudFilestoreManagerTracingStub::AsyncDeleteBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::filestore::v1::DeleteBackupRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.filestore.v1.CloudFilestoreManager", "DeleteBackup");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteBackup(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
CloudFilestoreManagerTracingStub::AsyncUpdateBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::filestore::v1::UpdateBackupRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.filestore.v1.CloudFilestoreManager", "UpdateBackup");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateBackup(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
CloudFilestoreManagerTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncGetOperation(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> CloudFilestoreManagerTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCancelOperation(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<CloudFilestoreManagerStub> MakeCloudFilestoreManagerTracingStub(
    std::shared_ptr<CloudFilestoreManagerStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<CloudFilestoreManagerTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace filestore_v1_internal
}  // namespace cloud
}  // namespace google
