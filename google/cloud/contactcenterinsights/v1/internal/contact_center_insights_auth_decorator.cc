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
// source: google/cloud/contactcenterinsights/v1/contact_center_insights.proto

#include "google/cloud/contactcenterinsights/v1/internal/contact_center_insights_auth_decorator.h"
#include <google/cloud/contactcenterinsights/v1/contact_center_insights.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace contactcenterinsights_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ContactCenterInsightsAuth::ContactCenterInsightsAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<ContactCenterInsightsStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::contactcenterinsights::v1::Conversation>
ContactCenterInsightsAuth::CreateConversation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contactcenterinsights::v1::CreateConversationRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateConversation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ContactCenterInsightsAuth::AsyncUploadConversation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::contactcenterinsights::v1::UploadConversationRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUploadConversation(cq, *std::move(context),
                                              std::move(options), request);
      });
}

StatusOr<google::cloud::contactcenterinsights::v1::Conversation>
ContactCenterInsightsAuth::UpdateConversation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contactcenterinsights::v1::UpdateConversationRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateConversation(context, options, request);
}

StatusOr<google::cloud::contactcenterinsights::v1::Conversation>
ContactCenterInsightsAuth::GetConversation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contactcenterinsights::v1::GetConversationRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetConversation(context, options, request);
}

StatusOr<google::cloud::contactcenterinsights::v1::ListConversationsResponse>
ContactCenterInsightsAuth::ListConversations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contactcenterinsights::v1::ListConversationsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListConversations(context, options, request);
}

Status ContactCenterInsightsAuth::DeleteConversation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contactcenterinsights::v1::DeleteConversationRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteConversation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ContactCenterInsightsAuth::AsyncCreateAnalysis(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::contactcenterinsights::v1::CreateAnalysisRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateAnalysis(cq, *std::move(context),
                                          std::move(options), request);
      });
}

StatusOr<google::cloud::contactcenterinsights::v1::Analysis>
ContactCenterInsightsAuth::GetAnalysis(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contactcenterinsights::v1::GetAnalysisRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetAnalysis(context, options, request);
}

StatusOr<google::cloud::contactcenterinsights::v1::ListAnalysesResponse>
ContactCenterInsightsAuth::ListAnalyses(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contactcenterinsights::v1::ListAnalysesRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListAnalyses(context, options, request);
}

Status ContactCenterInsightsAuth::DeleteAnalysis(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contactcenterinsights::v1::DeleteAnalysisRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteAnalysis(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ContactCenterInsightsAuth::AsyncBulkAnalyzeConversations(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::contactcenterinsights::v1::
        BulkAnalyzeConversationsRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncBulkAnalyzeConversations(
            cq, *std::move(context), std::move(options), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
ContactCenterInsightsAuth::AsyncBulkDeleteConversations(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::contactcenterinsights::v1::
        BulkDeleteConversationsRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncBulkDeleteConversations(cq, *std::move(context),
                                                   std::move(options), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
ContactCenterInsightsAuth::AsyncIngestConversations(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::contactcenterinsights::v1::IngestConversationsRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncIngestConversations(cq, *std::move(context),
                                               std::move(options), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
ContactCenterInsightsAuth::AsyncExportInsightsData(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::contactcenterinsights::v1::ExportInsightsDataRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncExportInsightsData(cq, *std::move(context),
                                              std::move(options), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
ContactCenterInsightsAuth::AsyncCreateIssueModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::contactcenterinsights::v1::CreateIssueModelRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateIssueModel(cq, *std::move(context),
                                            std::move(options), request);
      });
}

StatusOr<google::cloud::contactcenterinsights::v1::IssueModel>
ContactCenterInsightsAuth::UpdateIssueModel(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contactcenterinsights::v1::UpdateIssueModelRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateIssueModel(context, options, request);
}

StatusOr<google::cloud::contactcenterinsights::v1::IssueModel>
ContactCenterInsightsAuth::GetIssueModel(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contactcenterinsights::v1::GetIssueModelRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetIssueModel(context, options, request);
}

StatusOr<google::cloud::contactcenterinsights::v1::ListIssueModelsResponse>
ContactCenterInsightsAuth::ListIssueModels(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contactcenterinsights::v1::ListIssueModelsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListIssueModels(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ContactCenterInsightsAuth::AsyncDeleteIssueModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::contactcenterinsights::v1::DeleteIssueModelRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteIssueModel(cq, *std::move(context),
                                            std::move(options), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
ContactCenterInsightsAuth::AsyncDeployIssueModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::contactcenterinsights::v1::DeployIssueModelRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeployIssueModel(cq, *std::move(context),
                                            std::move(options), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
ContactCenterInsightsAuth::AsyncUndeployIssueModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::contactcenterinsights::v1::UndeployIssueModelRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUndeployIssueModel(cq, *std::move(context),
                                              std::move(options), request);
      });
}

StatusOr<google::cloud::contactcenterinsights::v1::Issue>
ContactCenterInsightsAuth::GetIssue(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contactcenterinsights::v1::GetIssueRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetIssue(context, options, request);
}

StatusOr<google::cloud::contactcenterinsights::v1::ListIssuesResponse>
ContactCenterInsightsAuth::ListIssues(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contactcenterinsights::v1::ListIssuesRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListIssues(context, options, request);
}

StatusOr<google::cloud::contactcenterinsights::v1::Issue>
ContactCenterInsightsAuth::UpdateIssue(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contactcenterinsights::v1::UpdateIssueRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateIssue(context, options, request);
}

Status ContactCenterInsightsAuth::DeleteIssue(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contactcenterinsights::v1::DeleteIssueRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteIssue(context, options, request);
}

StatusOr<
    google::cloud::contactcenterinsights::v1::CalculateIssueModelStatsResponse>
ContactCenterInsightsAuth::CalculateIssueModelStats(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contactcenterinsights::v1::
        CalculateIssueModelStatsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CalculateIssueModelStats(context, options, request);
}

StatusOr<google::cloud::contactcenterinsights::v1::PhraseMatcher>
ContactCenterInsightsAuth::CreatePhraseMatcher(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contactcenterinsights::v1::CreatePhraseMatcherRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreatePhraseMatcher(context, options, request);
}

StatusOr<google::cloud::contactcenterinsights::v1::PhraseMatcher>
ContactCenterInsightsAuth::GetPhraseMatcher(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contactcenterinsights::v1::GetPhraseMatcherRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetPhraseMatcher(context, options, request);
}

StatusOr<google::cloud::contactcenterinsights::v1::ListPhraseMatchersResponse>
ContactCenterInsightsAuth::ListPhraseMatchers(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contactcenterinsights::v1::ListPhraseMatchersRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListPhraseMatchers(context, options, request);
}

Status ContactCenterInsightsAuth::DeletePhraseMatcher(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contactcenterinsights::v1::DeletePhraseMatcherRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeletePhraseMatcher(context, options, request);
}

StatusOr<google::cloud::contactcenterinsights::v1::PhraseMatcher>
ContactCenterInsightsAuth::UpdatePhraseMatcher(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contactcenterinsights::v1::UpdatePhraseMatcherRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdatePhraseMatcher(context, options, request);
}

StatusOr<google::cloud::contactcenterinsights::v1::CalculateStatsResponse>
ContactCenterInsightsAuth::CalculateStats(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contactcenterinsights::v1::CalculateStatsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CalculateStats(context, options, request);
}

StatusOr<google::cloud::contactcenterinsights::v1::Settings>
ContactCenterInsightsAuth::GetSettings(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contactcenterinsights::v1::GetSettingsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetSettings(context, options, request);
}

StatusOr<google::cloud::contactcenterinsights::v1::Settings>
ContactCenterInsightsAuth::UpdateSettings(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contactcenterinsights::v1::UpdateSettingsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateSettings(context, options, request);
}

StatusOr<google::cloud::contactcenterinsights::v1::View>
ContactCenterInsightsAuth::CreateView(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contactcenterinsights::v1::CreateViewRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateView(context, options, request);
}

StatusOr<google::cloud::contactcenterinsights::v1::View>
ContactCenterInsightsAuth::GetView(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contactcenterinsights::v1::GetViewRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetView(context, options, request);
}

StatusOr<google::cloud::contactcenterinsights::v1::ListViewsResponse>
ContactCenterInsightsAuth::ListViews(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contactcenterinsights::v1::ListViewsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListViews(context, options, request);
}

StatusOr<google::cloud::contactcenterinsights::v1::View>
ContactCenterInsightsAuth::UpdateView(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contactcenterinsights::v1::UpdateViewRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateView(context, options, request);
}

Status ContactCenterInsightsAuth::DeleteView(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contactcenterinsights::v1::DeleteViewRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteView(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ContactCenterInsightsAuth::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncGetOperation(cq, *std::move(context),
                                        std::move(options), request);
      });
}

future<Status> ContactCenterInsightsAuth::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCancelOperation(cq, *std::move(context),
                                           std::move(options), request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace contactcenterinsights_v1_internal
}  // namespace cloud
}  // namespace google
