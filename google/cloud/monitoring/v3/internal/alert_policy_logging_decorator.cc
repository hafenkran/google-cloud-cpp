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
// source: google/monitoring/v3/alert_service.proto

#include "google/cloud/monitoring/v3/internal/alert_policy_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/monitoring/v3/alert_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace monitoring_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AlertPolicyServiceLogging::AlertPolicyServiceLogging(
    std::shared_ptr<AlertPolicyServiceStub> child,
    TracingOptions tracing_options, std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

StatusOr<google::monitoring::v3::ListAlertPoliciesResponse>
AlertPolicyServiceLogging::ListAlertPolicies(
    grpc::ClientContext& context, Options const& options,
    google::monitoring::v3::ListAlertPoliciesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::monitoring::v3::ListAlertPoliciesRequest const& request) {
        return child_->ListAlertPolicies(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::monitoring::v3::AlertPolicy>
AlertPolicyServiceLogging::GetAlertPolicy(
    grpc::ClientContext& context, Options const& options,
    google::monitoring::v3::GetAlertPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::monitoring::v3::GetAlertPolicyRequest const& request) {
        return child_->GetAlertPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::monitoring::v3::AlertPolicy>
AlertPolicyServiceLogging::CreateAlertPolicy(
    grpc::ClientContext& context, Options const& options,
    google::monitoring::v3::CreateAlertPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::monitoring::v3::CreateAlertPolicyRequest const& request) {
        return child_->CreateAlertPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status AlertPolicyServiceLogging::DeleteAlertPolicy(
    grpc::ClientContext& context, Options const& options,
    google::monitoring::v3::DeleteAlertPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::monitoring::v3::DeleteAlertPolicyRequest const& request) {
        return child_->DeleteAlertPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::monitoring::v3::AlertPolicy>
AlertPolicyServiceLogging::UpdateAlertPolicy(
    grpc::ClientContext& context, Options const& options,
    google::monitoring::v3::UpdateAlertPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::monitoring::v3::UpdateAlertPolicyRequest const& request) {
        return child_->UpdateAlertPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_v3_internal
}  // namespace cloud
}  // namespace google
