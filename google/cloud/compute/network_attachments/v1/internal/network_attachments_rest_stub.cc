// Copyright 2023 Google LLC
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
// source: google/cloud/compute/network_attachments/v1/network_attachments.proto

#include "google/cloud/compute/network_attachments/v1/internal/network_attachments_rest_stub.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/rest_stub_helpers.h"
#include "google/cloud/status_or.h"
#include <google/cloud/compute/network_attachments/v1/network_attachments.pb.h>
#include <google/cloud/compute/region_operations/v1/region_operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_network_attachments_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DefaultNetworkAttachmentsRestStub::DefaultNetworkAttachmentsRestStub(
    Options options)
    : service_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      operations_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      options_(std::move(options)) {}

DefaultNetworkAttachmentsRestStub::DefaultNetworkAttachmentsRestStub(
    std::shared_ptr<rest_internal::RestClient> service,
    std::shared_ptr<rest_internal::RestClient> operations, Options options)
    : service_(std::move(service)),
      operations_(std::move(operations)),
      options_(std::move(options)) {}

StatusOr<google::cloud::cpp::compute::v1::NetworkAttachmentAggregatedList>
DefaultNetworkAttachmentsRestStub::AggregatedListNetworkAttachments(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::network_attachments::v1::
        AggregatedListNetworkAttachmentsRequest const& request) {
  return rest_internal::Get<
      google::cloud::cpp::compute::v1::NetworkAttachmentAggregatedList>(
      *service_, rest_context, request,
      absl::StrCat("/", "compute", "/", "v1", "/", "projects", "/",
                   request.project(), "/", "aggregated", "/",
                   "networkAttachments"),
      rest_internal::TrimEmptyQueryParameters(
          {std::make_pair("filter", request.filter()),
           std::make_pair("include_all_scopes",
                          request.include_all_scopes() ? "1" : "0"),
           std::make_pair("max_results", std::to_string(request.max_results())),
           std::make_pair("order_by", request.order_by()),
           std::make_pair("page_token", request.page_token()),
           std::make_pair("return_partial_success",
                          request.return_partial_success() ? "1" : "0")}));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultNetworkAttachmentsRestStub::AsyncDeleteNetworkAttachment(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::network_attachments::v1::
        DeleteNetworkAttachmentRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(
            rest_internal::Delete<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request,
                absl::StrCat("/", "compute", "/", "v1", "/", "projects", "/",
                             request.project(), "/", "regions", "/",
                             request.region(), "/", "networkAttachments", "/",
                             request.network_attachment()),
                rest_internal::TrimEmptyQueryParameters(
                    {std::make_pair("request_id", request.request_id())})));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::NetworkAttachment>
DefaultNetworkAttachmentsRestStub::GetNetworkAttachment(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::network_attachments::v1::
        GetNetworkAttachmentRequest const& request) {
  return rest_internal::Get<google::cloud::cpp::compute::v1::NetworkAttachment>(
      *service_, rest_context, request,
      absl::StrCat("/", "compute", "/", "v1", "/", "projects", "/",
                   request.project(), "/", "regions", "/", request.region(),
                   "/", "networkAttachments", "/",
                   request.network_attachment()));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
DefaultNetworkAttachmentsRestStub::GetIamPolicy(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::network_attachments::v1::
        GetIamPolicyRequest const& request) {
  return rest_internal::Get<google::cloud::cpp::compute::v1::Policy>(
      *service_, rest_context, request,
      absl::StrCat("/", "compute", "/", "v1", "/", "projects", "/",
                   request.project(), "/", "regions", "/", request.region(),
                   "/", "networkAttachments", "/", request.resource(), "/",
                   "getIamPolicy"),
      rest_internal::TrimEmptyQueryParameters({std::make_pair(
          "options_requested_policy_version",
          std::to_string(request.options_requested_policy_version()))}));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultNetworkAttachmentsRestStub::AsyncInsertNetworkAttachment(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::network_attachments::v1::
        InsertNetworkAttachmentRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request.network_attachment_resource(),
                absl::StrCat("/", "compute", "/", "v1", "/", "projects", "/",
                             request.project(), "/", "regions", "/",
                             request.region(), "/", "networkAttachments"),
                rest_internal::TrimEmptyQueryParameters(
                    {std::make_pair("request_id", request.request_id())})));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::NetworkAttachmentList>
DefaultNetworkAttachmentsRestStub::ListNetworkAttachments(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::network_attachments::v1::
        ListNetworkAttachmentsRequest const& request) {
  return rest_internal::Get<
      google::cloud::cpp::compute::v1::NetworkAttachmentList>(
      *service_, rest_context, request,
      absl::StrCat("/", "compute", "/", "v1", "/", "projects", "/",
                   request.project(), "/", "regions", "/", request.region(),
                   "/", "networkAttachments"),
      rest_internal::TrimEmptyQueryParameters(
          {std::make_pair("filter", request.filter()),
           std::make_pair("max_results", std::to_string(request.max_results())),
           std::make_pair("order_by", request.order_by()),
           std::make_pair("page_token", request.page_token()),
           std::make_pair("return_partial_success",
                          request.return_partial_success() ? "1" : "0")}));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
DefaultNetworkAttachmentsRestStub::SetIamPolicy(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::network_attachments::v1::
        SetIamPolicyRequest const& request) {
  return rest_internal::Post<google::cloud::cpp::compute::v1::Policy>(
      *service_, rest_context, request.region_set_policy_request_resource(),
      absl::StrCat("/", "compute", "/", "v1", "/", "projects", "/",
                   request.project(), "/", "regions", "/", request.region(),
                   "/", "networkAttachments", "/", request.resource(), "/",
                   "setIamPolicy"));
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
DefaultNetworkAttachmentsRestStub::TestIamPermissions(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::network_attachments::v1::
        TestIamPermissionsRequest const& request) {
  return rest_internal::Post<
      google::cloud::cpp::compute::v1::TestPermissionsResponse>(
      *service_, rest_context, request.test_permissions_request_resource(),
      absl::StrCat("/", "compute", "/", "v1", "/", "projects", "/",
                   request.project(), "/", "regions", "/", request.region(),
                   "/", "networkAttachments", "/", request.resource(), "/",
                   "testIamPermissions"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultNetworkAttachmentsRestStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_operations::v1::
        GetOperationRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto operations, auto request, auto rest_context) {
        p.set_value(
            rest_internal::Get<google::cloud::cpp::compute::v1::Operation>(
                *operations, *rest_context, request,
                absl::StrCat("/compute/v1/projects/", request.project(),
                             "/regions/", request.region(), "/operations/",
                             request.operation())));
      },
      std::move(p), operations_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<Status> DefaultNetworkAttachmentsRestStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_operations::v1::
        DeleteOperationRequest const& request) {
  promise<StatusOr<google::protobuf::Empty>> p;
  future<StatusOr<google::protobuf::Empty>> f = p.get_future();
  std::thread t{[](auto p, auto operations, auto request, auto rest_context) {
                  p.set_value(rest_internal::Post<google::protobuf::Empty>(
                      *operations, *rest_context, request,
                      absl::StrCat("/compute/v1/projects/", request.project(),
                                   "/regions/", request.region(),
                                   "/operations/", request.operation())));
                },
                std::move(p), operations_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get().status();
  });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_network_attachments_v1_internal
}  // namespace cloud
}  // namespace google
