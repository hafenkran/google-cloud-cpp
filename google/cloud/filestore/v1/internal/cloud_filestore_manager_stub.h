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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FILESTORE_V1_INTERNAL_CLOUD_FILESTORE_MANAGER_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FILESTORE_V1_INTERNAL_CLOUD_FILESTORE_MANAGER_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/filestore/v1/cloud_filestore_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace filestore_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class CloudFilestoreManagerStub {
 public:
  virtual ~CloudFilestoreManagerStub() = 0;

  virtual StatusOr<google::cloud::filestore::v1::ListInstancesResponse>
  ListInstances(
      grpc::ClientContext& context,
      google::cloud::filestore::v1::ListInstancesRequest const& request) = 0;

  virtual StatusOr<google::cloud::filestore::v1::Instance> GetInstance(
      grpc::ClientContext& context,
      google::cloud::filestore::v1::GetInstanceRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::filestore::v1::CreateInstanceRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncUpdateInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::filestore::v1::UpdateInstanceRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncRestoreInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::filestore::v1::RestoreInstanceRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncRevertInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::filestore::v1::RevertInstanceRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeleteInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::filestore::v1::DeleteInstanceRequest const& request) = 0;

  virtual StatusOr<google::cloud::filestore::v1::ListSnapshotsResponse>
  ListSnapshots(
      grpc::ClientContext& context,
      google::cloud::filestore::v1::ListSnapshotsRequest const& request) = 0;

  virtual StatusOr<google::cloud::filestore::v1::Snapshot> GetSnapshot(
      grpc::ClientContext& context,
      google::cloud::filestore::v1::GetSnapshotRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateSnapshot(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::filestore::v1::CreateSnapshotRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeleteSnapshot(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::filestore::v1::DeleteSnapshotRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncUpdateSnapshot(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::filestore::v1::UpdateSnapshotRequest const& request) = 0;

  virtual StatusOr<google::cloud::filestore::v1::ListBackupsResponse>
  ListBackups(
      grpc::ClientContext& context,
      google::cloud::filestore::v1::ListBackupsRequest const& request) = 0;

  virtual StatusOr<google::cloud::filestore::v1::Backup> GetBackup(
      grpc::ClientContext& context,
      google::cloud::filestore::v1::GetBackupRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateBackup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::filestore::v1::CreateBackupRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeleteBackup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::filestore::v1::DeleteBackupRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncUpdateBackup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::filestore::v1::UpdateBackupRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) = 0;
};

class DefaultCloudFilestoreManagerStub : public CloudFilestoreManagerStub {
 public:
  DefaultCloudFilestoreManagerStub(
      std::unique_ptr<
          google::cloud::filestore::v1::CloudFilestoreManager::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)), operations_(std::move(operations)) {}

  StatusOr<google::cloud::filestore::v1::ListInstancesResponse> ListInstances(
      grpc::ClientContext& context,
      google::cloud::filestore::v1::ListInstancesRequest const& request)
      override;

  StatusOr<google::cloud::filestore::v1::Instance> GetInstance(
      grpc::ClientContext& context,
      google::cloud::filestore::v1::GetInstanceRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::filestore::v1::CreateInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::filestore::v1::UpdateInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncRestoreInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::filestore::v1::RestoreInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncRevertInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::filestore::v1::RevertInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::filestore::v1::DeleteInstanceRequest const& request)
      override;

  StatusOr<google::cloud::filestore::v1::ListSnapshotsResponse> ListSnapshots(
      grpc::ClientContext& context,
      google::cloud::filestore::v1::ListSnapshotsRequest const& request)
      override;

  StatusOr<google::cloud::filestore::v1::Snapshot> GetSnapshot(
      grpc::ClientContext& context,
      google::cloud::filestore::v1::GetSnapshotRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateSnapshot(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::filestore::v1::CreateSnapshotRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteSnapshot(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::filestore::v1::DeleteSnapshotRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateSnapshot(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::filestore::v1::UpdateSnapshotRequest const& request)
      override;

  StatusOr<google::cloud::filestore::v1::ListBackupsResponse> ListBackups(
      grpc::ClientContext& context,
      google::cloud::filestore::v1::ListBackupsRequest const& request) override;

  StatusOr<google::cloud::filestore::v1::Backup> GetBackup(
      grpc::ClientContext& context,
      google::cloud::filestore::v1::GetBackupRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateBackup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::filestore::v1::CreateBackupRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteBackup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::filestore::v1::DeleteBackupRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateBackup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::filestore::v1::UpdateBackupRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<
      google::cloud::filestore::v1::CloudFilestoreManager::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace filestore_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FILESTORE_V1_INTERNAL_CLOUD_FILESTORE_MANAGER_STUB_H
