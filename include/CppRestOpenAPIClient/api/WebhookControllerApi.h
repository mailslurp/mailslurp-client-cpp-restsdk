/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails and SMS from dynamically allocated email addresses and phone numbers. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://docs.mailslurp.com/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.2.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * WebhookControllerApi.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_API_WebhookControllerApi_H_
#define COM_MAILSLURP_CLIENT_API_WebhookControllerApi_H_



#include "CppRestOpenAPIClient/ApiClient.h"

#include "CppRestOpenAPIClient/model/AbstractWebhookPayload.h"
#include "CppRestOpenAPIClient/model/CountDto.h"
#include "CppRestOpenAPIClient/model/CreateWebhookOptions.h"
#include "CppRestOpenAPIClient/model/JSONSchemaDto.h"
#include "CppRestOpenAPIClient/model/PageWebhookEndpointProjection.h"
#include "CppRestOpenAPIClient/model/PageWebhookProjection.h"
#include "CppRestOpenAPIClient/model/PageWebhookResult.h"
#include "CppRestOpenAPIClient/model/UnseenErrorCountDto.h"
#include "CppRestOpenAPIClient/model/VerifyWebhookSignatureOptions.h"
#include "CppRestOpenAPIClient/model/VerifyWebhookSignatureResults.h"
#include "CppRestOpenAPIClient/model/WebhookBouncePayload.h"
#include "CppRestOpenAPIClient/model/WebhookBounceRecipientPayload.h"
#include "CppRestOpenAPIClient/model/WebhookDeliveryStatusPayload.h"
#include "CppRestOpenAPIClient/model/WebhookDto.h"
#include "CppRestOpenAPIClient/model/WebhookEmailOpenedPayload.h"
#include "CppRestOpenAPIClient/model/WebhookEmailReadPayload.h"
#include "CppRestOpenAPIClient/model/WebhookHeaders.h"
#include "CppRestOpenAPIClient/model/WebhookNewAttachmentPayload.h"
#include "CppRestOpenAPIClient/model/WebhookNewContactPayload.h"
#include "CppRestOpenAPIClient/model/WebhookNewEmailPayload.h"
#include "CppRestOpenAPIClient/model/WebhookNewSmsPayload.h"
#include "CppRestOpenAPIClient/model/WebhookProjection.h"
#include "CppRestOpenAPIClient/model/WebhookRedriveAllResult.h"
#include "CppRestOpenAPIClient/model/WebhookRedriveResult.h"
#include "CppRestOpenAPIClient/model/WebhookResultDto.h"
#include "CppRestOpenAPIClient/model/WebhookTestResult.h"
#include <cpprest/details/basic_types.h>
#include <boost/optional.hpp>

namespace com {
namespace mailslurp {
namespace client {
namespace api {

using namespace com::mailslurp::client::model;



class  WebhookControllerApi 
{
public:

    explicit WebhookControllerApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~WebhookControllerApi();

    /// <summary>
    /// Attach a WebHook URL to an inbox
    /// </summary>
    /// <remarks>
    /// Get notified of account level events such as bounce and bounce recipient.
    /// </remarks>
    /// <param name="createWebhookOptions"></param>
    pplx::task<std::shared_ptr<WebhookDto>> createAccountWebhook(
        std::shared_ptr<CreateWebhookOptions> createWebhookOptions
    ) const;
    /// <summary>
    /// Attach a WebHook URL to an inbox
    /// </summary>
    /// <remarks>
    /// Get notified whenever an inbox receives an email via a WebHook URL. An emailID will be posted to this URL every time an email is received for this inbox. The URL must be publicly reachable by the MailSlurp server. You can provide basicAuth values if you wish to secure this endpoint.
    /// </remarks>
    /// <param name="inboxId"></param>
    /// <param name="createWebhookOptions"></param>
    pplx::task<std::shared_ptr<WebhookDto>> createWebhook(
        utility::string_t inboxId,
        std::shared_ptr<CreateWebhookOptions> createWebhookOptions
    ) const;
    /// <summary>
    /// Attach a WebHook URL to a phone number
    /// </summary>
    /// <remarks>
    /// Get notified whenever a phone number receives an SMS via a WebHook URL.
    /// </remarks>
    /// <param name="phoneNumberId"></param>
    /// <param name="createWebhookOptions"></param>
    pplx::task<std::shared_ptr<WebhookDto>> createWebhookForPhoneNumber(
        utility::string_t phoneNumberId,
        std::shared_ptr<CreateWebhookOptions> createWebhookOptions
    ) const;
    /// <summary>
    /// Delete all webhooks
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="before">before (optional, default to utility::datetime())</param>
    pplx::task<void> deleteAllWebhooks(
        boost::optional<utility::datetime> before
    ) const;
    /// <summary>
    /// Delete and disable a Webhook for an Inbox
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="inboxId"></param>
    /// <param name="webhookId"></param>
    pplx::task<void> deleteWebhook(
        utility::string_t inboxId,
        utility::string_t webhookId
    ) const;
    /// <summary>
    /// Delete a webhook
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="webhookId"></param>
    pplx::task<void> deleteWebhookById(
        utility::string_t webhookId
    ) const;
    /// <summary>
    /// List account webhooks Paginated
    /// </summary>
    /// <remarks>
    /// List account webhooks in paginated form. Allows for page index, page size, and sort direction.
    /// </remarks>
    /// <param name="page">Optional page index in list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size for paginated result list. (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="since">Filter by created at after the given timestamp (optional, default to utility::datetime())</param>
    /// <param name="before">Filter by created at before the given timestamp (optional, default to utility::datetime())</param>
    /// <param name="eventType">Optional event type (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="health">Filter by webhook health (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="searchFilter">Optional search filter (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<PageWebhookProjection>> getAllAccountWebhooks(
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort,
        boost::optional<utility::datetime> since,
        boost::optional<utility::datetime> before,
        boost::optional<utility::string_t> eventType,
        boost::optional<utility::string_t> health,
        boost::optional<utility::string_t> searchFilter
    ) const;
    /// <summary>
    /// List Webhooks endpoints Paginated
    /// </summary>
    /// <remarks>
    /// List webhooks URL in paginated form. Allows for page index, page size, and sort direction.
    /// </remarks>
    /// <param name="page">Optional page index in list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size for paginated result list. (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="searchFilter">Optional search filter (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="since">Filter by created at after the given timestamp (optional, default to utility::datetime())</param>
    /// <param name="inboxId">Filter by inboxId (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="phoneId">Filter by phoneId (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="before">Filter by created at before the given timestamp (optional, default to utility::datetime())</param>
    /// <param name="health">Filter by webhook health (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="eventType">Optional event type (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<PageWebhookEndpointProjection>> getAllWebhookEndpoints(
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort,
        boost::optional<utility::string_t> searchFilter,
        boost::optional<utility::datetime> since,
        boost::optional<utility::string_t> inboxId,
        boost::optional<utility::string_t> phoneId,
        boost::optional<utility::datetime> before,
        boost::optional<utility::string_t> health,
        boost::optional<utility::string_t> eventType
    ) const;
    /// <summary>
    /// Get results for all webhooks
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="page">Optional page index in list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size in list pagination (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="searchFilter">Optional search filter (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="since">Filter by created at after the given timestamp (optional, default to utility::datetime())</param>
    /// <param name="before">Filter by created at before the given timestamp (optional, default to utility::datetime())</param>
    /// <param name="unseenOnly">Filter for unseen exceptions only (optional, default to false)</param>
    /// <param name="resultType">Filter by result type (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="eventName">Filter by event name (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="minStatusCode">Minimum response status (optional, default to 0)</param>
    /// <param name="maxStatusCode">Maximum response status (optional, default to 0)</param>
    /// <param name="inboxId">Inbox ID (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="smsId">Sms ID (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="attachmentId">Attachment ID (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="emailId">Email ID (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="phoneId">Phone ID (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<PageWebhookResult>> getAllWebhookResults(
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort,
        boost::optional<utility::string_t> searchFilter,
        boost::optional<utility::datetime> since,
        boost::optional<utility::datetime> before,
        boost::optional<bool> unseenOnly,
        boost::optional<utility::string_t> resultType,
        boost::optional<utility::string_t> eventName,
        boost::optional<int32_t> minStatusCode,
        boost::optional<int32_t> maxStatusCode,
        boost::optional<utility::string_t> inboxId,
        boost::optional<utility::string_t> smsId,
        boost::optional<utility::string_t> attachmentId,
        boost::optional<utility::string_t> emailId,
        boost::optional<utility::string_t> phoneId
    ) const;
    /// <summary>
    /// List Webhooks Paginated
    /// </summary>
    /// <remarks>
    /// List webhooks in paginated form. Allows for page index, page size, and sort direction.
    /// </remarks>
    /// <param name="page">Optional page index in list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size for paginated result list. (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="searchFilter">Optional search filter (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="since">Filter by created at after the given timestamp (optional, default to utility::datetime())</param>
    /// <param name="inboxId">Filter by inboxId (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="phoneId">Filter by phoneId (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="before">Filter by created at before the given timestamp (optional, default to utility::datetime())</param>
    /// <param name="health">Filter by webhook health (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="eventType">Optional event type (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="url">Optional url endpoint filter (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<PageWebhookProjection>> getAllWebhooks(
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort,
        boost::optional<utility::string_t> searchFilter,
        boost::optional<utility::datetime> since,
        boost::optional<utility::string_t> inboxId,
        boost::optional<utility::string_t> phoneId,
        boost::optional<utility::datetime> before,
        boost::optional<utility::string_t> health,
        boost::optional<utility::string_t> eventType,
        boost::optional<utility::string_t> url
    ) const;
    /// <summary>
    /// Get paginated webhooks for an Inbox
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="inboxId"></param>
    /// <param name="page">Optional page index in list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size in list pagination (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="searchFilter">Optional search filter (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="since">Filter by created at after the given timestamp (optional, default to utility::datetime())</param>
    /// <param name="before">Filter by created at before the given timestamp (optional, default to utility::datetime())</param>
    /// <param name="health">Filter by webhook health (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="eventType">Optional event type (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<PageWebhookProjection>> getInboxWebhooksPaginated(
        utility::string_t inboxId,
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort,
        boost::optional<utility::string_t> searchFilter,
        boost::optional<utility::datetime> since,
        boost::optional<utility::datetime> before,
        boost::optional<utility::string_t> health,
        boost::optional<utility::string_t> eventType
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get JSON Schema definition for webhook payload by event
    /// </remarks>
    /// <param name="event"></param>
    pplx::task<std::shared_ptr<JSONSchemaDto>> getJsonSchemaForWebhookEvent(
        utility::string_t event
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get JSON Schema definition for webhook payload
    /// </remarks>
    /// <param name="webhookId"></param>
    pplx::task<std::shared_ptr<JSONSchemaDto>> getJsonSchemaForWebhookPayload(
        utility::string_t webhookId
    ) const;
    /// <summary>
    /// Get paginated webhooks for a phone number
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="phoneId"></param>
    /// <param name="page">Optional page index in list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size in list pagination (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="since">Filter by created at after the given timestamp (optional, default to utility::datetime())</param>
    /// <param name="before">Filter by created at before the given timestamp (optional, default to utility::datetime())</param>
    /// <param name="eventType">Optional event type (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="searchFilter">Optional search filter (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="health">Filter by webhook health (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<PageWebhookProjection>> getPhoneNumberWebhooksPaginated(
        utility::string_t phoneId,
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort,
        boost::optional<utility::datetime> since,
        boost::optional<utility::datetime> before,
        boost::optional<utility::string_t> eventType,
        boost::optional<utility::string_t> searchFilter,
        boost::optional<utility::string_t> health
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get test webhook payload example. Response content depends on eventName passed. Uses &#x60;EMAIL_RECEIVED&#x60; as default.
    /// </remarks>
    /// <param name="eventName"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<AbstractWebhookPayload>> getTestWebhookPayload(
        boost::optional<utility::string_t> eventName
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get webhook test payload for bounce
    /// </remarks>
    pplx::task<std::shared_ptr<WebhookBouncePayload>> getTestWebhookPayloadBounce(
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get webhook test payload for bounce recipient
    /// </remarks>
    pplx::task<std::shared_ptr<WebhookBounceRecipientPayload>> getTestWebhookPayloadBounceRecipient(
    ) const;
    /// <summary>
    /// Get webhook test payload for delivery status event
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<std::shared_ptr<WebhookDeliveryStatusPayload>> getTestWebhookPayloadDeliveryStatus(
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get webhook test payload for email opened event
    /// </remarks>
    pplx::task<std::shared_ptr<WebhookEmailOpenedPayload>> getTestWebhookPayloadEmailOpened(
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get webhook test payload for email opened event
    /// </remarks>
    pplx::task<std::shared_ptr<WebhookEmailReadPayload>> getTestWebhookPayloadEmailRead(
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get example payload for webhook
    /// </remarks>
    /// <param name="webhookId"></param>
    pplx::task<std::shared_ptr<AbstractWebhookPayload>> getTestWebhookPayloadForWebhook(
        utility::string_t webhookId
    ) const;
    /// <summary>
    /// Get webhook test payload for new attachment event
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<std::shared_ptr<WebhookNewAttachmentPayload>> getTestWebhookPayloadNewAttachment(
    ) const;
    /// <summary>
    /// Get webhook test payload for new contact event
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<std::shared_ptr<WebhookNewContactPayload>> getTestWebhookPayloadNewContact(
    ) const;
    /// <summary>
    /// Get webhook test payload for new email event
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<std::shared_ptr<WebhookNewEmailPayload>> getTestWebhookPayloadNewEmail(
    ) const;
    /// <summary>
    /// Get webhook test payload for new sms event
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<std::shared_ptr<WebhookNewSmsPayload>> getTestWebhookPayloadNewSms(
    ) const;
    /// <summary>
    /// Get a webhook
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="webhookId"></param>
    pplx::task<std::shared_ptr<WebhookDto>> getWebhook(
        utility::string_t webhookId
    ) const;
    /// <summary>
    /// Get a webhook result for a webhook
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="webhookResultId">Webhook Result ID</param>
    pplx::task<std::shared_ptr<WebhookResultDto>> getWebhookResult(
        utility::string_t webhookResultId
    ) const;
    /// <summary>
    /// Get a webhook results for a webhook
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="webhookId">ID of webhook to get results for</param>
    /// <param name="page">Optional page index in list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size in list pagination (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="searchFilter">Optional search filter (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="since">Filter by created at after the given timestamp (optional, default to utility::datetime())</param>
    /// <param name="before">Filter by created at before the given timestamp (optional, default to utility::datetime())</param>
    /// <param name="unseenOnly">Filter for unseen exceptions only (optional, default to false)</param>
    /// <param name="resultType">Filter by result type (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="eventName">Filter by event name (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="minStatusCode">Minimum response status (optional, default to 0)</param>
    /// <param name="maxStatusCode">Maximum response status (optional, default to 0)</param>
    /// <param name="inboxId">Inbox ID (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="smsId">Sms ID (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="attachmentId">Attachment ID (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="emailId">Email ID (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="phoneId">Phone ID (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<PageWebhookResult>> getWebhookResults(
        utility::string_t webhookId,
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort,
        boost::optional<utility::string_t> searchFilter,
        boost::optional<utility::datetime> since,
        boost::optional<utility::datetime> before,
        boost::optional<bool> unseenOnly,
        boost::optional<utility::string_t> resultType,
        boost::optional<utility::string_t> eventName,
        boost::optional<int32_t> minStatusCode,
        boost::optional<int32_t> maxStatusCode,
        boost::optional<utility::string_t> inboxId,
        boost::optional<utility::string_t> smsId,
        boost::optional<utility::string_t> attachmentId,
        boost::optional<utility::string_t> emailId,
        boost::optional<utility::string_t> phoneId
    ) const;
    /// <summary>
    /// Get a webhook results count for a webhook
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="webhookId">ID of webhook to get results for</param>
    pplx::task<std::shared_ptr<CountDto>> getWebhookResultsCount(
        utility::string_t webhookId
    ) const;
    /// <summary>
    /// Get count of unseen webhook results with error status
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<std::shared_ptr<UnseenErrorCountDto>> getWebhookResultsUnseenErrorCount(
    ) const;
    /// <summary>
    /// Get all webhooks for an Inbox
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="inboxId"></param>
    /// <param name="page">Optional page index in list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size in list pagination (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::vector<std::shared_ptr<WebhookProjection>>> getWebhooks(
        utility::string_t inboxId,
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort
    ) const;
    /// <summary>
    /// Redrive all webhook results that have failed status
    /// </summary>
    /// <remarks>
    /// Allows you to resend webhook payloads for any recorded webhook result that failed to deliver the payload.
    /// </remarks>
    pplx::task<std::shared_ptr<WebhookRedriveAllResult>> redriveAllWebhookResults(
    ) const;
    /// <summary>
    /// Get a webhook result and try to resend the original webhook payload
    /// </summary>
    /// <remarks>
    /// Allows you to resend a webhook payload that was already sent. Webhooks that fail are retried automatically for 24 hours and then put in a dead letter queue. You can retry results manually using this method.
    /// </remarks>
    /// <param name="webhookResultId">Webhook Result ID</param>
    pplx::task<std::shared_ptr<WebhookRedriveResult>> redriveWebhookResult(
        utility::string_t webhookResultId
    ) const;
    /// <summary>
    /// Send webhook test data
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="webhookId"></param>
    pplx::task<std::shared_ptr<WebhookTestResult>> sendTestData(
        utility::string_t webhookId
    ) const;
    /// <summary>
    /// Update a webhook
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="webhookId"></param>
    /// <param name="createWebhookOptions"></param>
    /// <param name="inboxId"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="phoneNumberId"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="overrideAuth"> (optional, default to false)</param>
    pplx::task<std::shared_ptr<WebhookDto>> updateWebhook(
        utility::string_t webhookId,
        std::shared_ptr<CreateWebhookOptions> createWebhookOptions,
        boost::optional<utility::string_t> inboxId,
        boost::optional<utility::string_t> phoneNumberId,
        boost::optional<bool> overrideAuth
    ) const;
    /// <summary>
    /// Update a webhook request headers
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="webhookId"></param>
    /// <param name="webhookHeaders"></param>
    pplx::task<std::shared_ptr<WebhookDto>> updateWebhookHeaders(
        utility::string_t webhookId,
        std::shared_ptr<WebhookHeaders> webhookHeaders
    ) const;
    /// <summary>
    /// Verify a webhook payload signature
    /// </summary>
    /// <remarks>
    /// Verify a webhook payload using the messageId and signature. This allows you to be sure that MailSlurp sent the payload and not another server.
    /// </remarks>
    /// <param name="verifyWebhookSignatureOptions"></param>
    pplx::task<std::shared_ptr<VerifyWebhookSignatureResults>> verifyWebhookSignature(
        std::shared_ptr<VerifyWebhookSignatureOptions> verifyWebhookSignatureOptions
    ) const;
    /// <summary>
    /// Wait for webhook results for a webhook
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="webhookId">ID of webhook to get results for</param>
    /// <param name="expectedCount">Expected result count</param>
    /// <param name="timeout">Max time to wait in milliseconds</param>
    pplx::task<std::vector<std::shared_ptr<WebhookResultDto>>> waitForWebhookResults(
        utility::string_t webhookId,
        int32_t expectedCount,
        int32_t timeout
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_API_WebhookControllerApi_H_ */

