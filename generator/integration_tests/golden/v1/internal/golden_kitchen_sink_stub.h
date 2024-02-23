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
// source: generator/integration_tests/test.proto

#ifndef GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_V1_INTERNAL_GOLDEN_KITCHEN_SINK_STUB_H
#define GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_V1_INTERNAL_GOLDEN_KITCHEN_SINK_STUB_H

#include "google/cloud/async_streaming_read_write_rpc.h"
#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/async_streaming_read_rpc.h"
#include "google/cloud/internal/async_streaming_write_rpc.h"
#include "google/cloud/internal/streaming_read_rpc.h"
#include "google/cloud/internal/streaming_write_rpc.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <generator/integration_tests/backup.pb.h>
#include <generator/integration_tests/test.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace golden_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class GoldenKitchenSinkStub {
 public:
  virtual ~GoldenKitchenSinkStub() = 0;

  virtual StatusOr<google::test::admin::database::v1::GenerateAccessTokenResponse> GenerateAccessToken(
      grpc::ClientContext& context,
      Options const& options,
      google::test::admin::database::v1::GenerateAccessTokenRequest const& request) = 0;

  virtual StatusOr<google::test::admin::database::v1::GenerateIdTokenResponse> GenerateIdToken(
      grpc::ClientContext& context,
      Options const& options,
      google::test::admin::database::v1::GenerateIdTokenRequest const& request) = 0;

  virtual StatusOr<google::test::admin::database::v1::WriteLogEntriesResponse> WriteLogEntries(
      grpc::ClientContext& context,
      Options const& options,
      google::test::admin::database::v1::WriteLogEntriesRequest const& request) = 0;

  virtual StatusOr<google::test::admin::database::v1::ListLogsResponse> ListLogs(
      grpc::ClientContext& context,
      Options const& options,
      google::test::admin::database::v1::ListLogsRequest const& request) = 0;

  virtual StatusOr<google::test::admin::database::v1::ListServiceAccountKeysResponse> ListServiceAccountKeys(
      grpc::ClientContext& context,
      Options const& options,
      google::test::admin::database::v1::ListServiceAccountKeysRequest const& request) = 0;

  virtual Status DoNothing(
      grpc::ClientContext& context,
      Options const& options,
      google::protobuf::Empty const& request) = 0;

  virtual Status Deprecated2(
      grpc::ClientContext& context,
      Options const& options,
      google::test::admin::database::v1::GenerateAccessTokenRequest const& request) = 0;

  virtual std::unique_ptr<google::cloud::internal::StreamingReadRpc<google::test::admin::database::v1::Response>>
  StreamingRead(
    std::shared_ptr<grpc::ClientContext> context,
    Options const& options,
    google::test::admin::database::v1::Request const& request) = 0;

  virtual std::unique_ptr<::google::cloud::internal::StreamingWriteRpc<
      google::test::admin::database::v1::Request,
      google::test::admin::database::v1::Response>>
  StreamingWrite(
      std::shared_ptr<grpc::ClientContext> context,
      Options const& options) = 0;

  virtual std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      google::test::admin::database::v1::Request,
      google::test::admin::database::v1::Response>>
  AsyncStreamingReadWrite(
      google::cloud::CompletionQueue const& cq,
      std::shared_ptr<grpc::ClientContext> context) = 0;

  virtual Status ExplicitRouting1(
      grpc::ClientContext& context,
      Options const& options,
      google::test::admin::database::v1::ExplicitRoutingRequest const& request) = 0;

  virtual Status ExplicitRouting2(
      grpc::ClientContext& context,
      Options const& options,
      google::test::admin::database::v1::ExplicitRoutingRequest const& request) = 0;

  virtual std::unique_ptr<::google::cloud::internal::AsyncStreamingReadRpc<
      google::test::admin::database::v1::Response>>
  AsyncStreamingRead(
      google::cloud::CompletionQueue const& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::test::admin::database::v1::Request const& request) = 0;

  virtual std::unique_ptr<::google::cloud::internal::AsyncStreamingWriteRpc<
      google::test::admin::database::v1::Request, google::test::admin::database::v1::Response>>
  AsyncStreamingWrite(
      google::cloud::CompletionQueue const& cq,
      std::shared_ptr<grpc::ClientContext> context) = 0;
};

class DefaultGoldenKitchenSinkStub : public GoldenKitchenSinkStub {
 public:
  explicit DefaultGoldenKitchenSinkStub(
      std::unique_ptr<google::test::admin::database::v1::GoldenKitchenSink::StubInterface> grpc_stub)
      : grpc_stub_(std::move(grpc_stub)) {}

  StatusOr<google::test::admin::database::v1::GenerateAccessTokenResponse> GenerateAccessToken(
      grpc::ClientContext& context,
      Options const& options,
      google::test::admin::database::v1::GenerateAccessTokenRequest const& request) override;

  StatusOr<google::test::admin::database::v1::GenerateIdTokenResponse> GenerateIdToken(
      grpc::ClientContext& context,
      Options const& options,
      google::test::admin::database::v1::GenerateIdTokenRequest const& request) override;

  StatusOr<google::test::admin::database::v1::WriteLogEntriesResponse> WriteLogEntries(
      grpc::ClientContext& context,
      Options const& options,
      google::test::admin::database::v1::WriteLogEntriesRequest const& request) override;

  StatusOr<google::test::admin::database::v1::ListLogsResponse> ListLogs(
      grpc::ClientContext& context,
      Options const& options,
      google::test::admin::database::v1::ListLogsRequest const& request) override;

  StatusOr<google::test::admin::database::v1::ListServiceAccountKeysResponse> ListServiceAccountKeys(
      grpc::ClientContext& context,
      Options const& options,
      google::test::admin::database::v1::ListServiceAccountKeysRequest const& request) override;

  Status DoNothing(
      grpc::ClientContext& context,
      Options const& options,
      google::protobuf::Empty const& request) override;

  Status Deprecated2(
      grpc::ClientContext& context,
      Options const& options,
      google::test::admin::database::v1::GenerateAccessTokenRequest const& request) override;

  std::unique_ptr<google::cloud::internal::StreamingReadRpc<google::test::admin::database::v1::Response>>
  StreamingRead(
      std::shared_ptr<grpc::ClientContext> context,
      Options const& options,
      google::test::admin::database::v1::Request const& request) override;

  std::unique_ptr<::google::cloud::internal::StreamingWriteRpc<
      google::test::admin::database::v1::Request,
      google::test::admin::database::v1::Response>>
  StreamingWrite(
      std::shared_ptr<grpc::ClientContext> context,
      Options const& options) override;

  std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      google::test::admin::database::v1::Request,
      google::test::admin::database::v1::Response>>
  AsyncStreamingReadWrite(
      google::cloud::CompletionQueue const& cq,
      std::shared_ptr<grpc::ClientContext> context) override;

  Status ExplicitRouting1(
      grpc::ClientContext& context,
      Options const& options,
      google::test::admin::database::v1::ExplicitRoutingRequest const& request) override;

  Status ExplicitRouting2(
      grpc::ClientContext& context,
      Options const& options,
      google::test::admin::database::v1::ExplicitRoutingRequest const& request) override;

  std::unique_ptr<::google::cloud::internal::AsyncStreamingReadRpc<
      google::test::admin::database::v1::Response>>
  AsyncStreamingRead(
      google::cloud::CompletionQueue const& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::test::admin::database::v1::Request const& request) override;

  std::unique_ptr<::google::cloud::internal::AsyncStreamingWriteRpc<
      google::test::admin::database::v1::Request, google::test::admin::database::v1::Response>>
  AsyncStreamingWrite(
      google::cloud::CompletionQueue const& cq,
      std::shared_ptr<grpc::ClientContext> context) override;

 private:
  std::unique_ptr<google::test::admin::database::v1::GoldenKitchenSink::StubInterface> grpc_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace golden_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_V1_INTERNAL_GOLDEN_KITCHEN_SINK_STUB_H
