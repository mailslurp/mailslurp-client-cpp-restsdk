/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://www.mailslurp.com/docs/) - [Examples](https://github.com/mailslurp/examples) repository 
 *
 * The version of the OpenAPI document: 6.5.2
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
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


#include "../ApiClient.h"

#include "AbstractWebhookPayload.h"
#include "CreateWebhookOptions.h"
#include "PageWebhookProjection.h"
#include "PageWebhookResult.h"
#include "WebhookDto.h"
#include "WebhookNewAttachmentPayload.h"
#include "WebhookNewContactPayload.h"
#include "WebhookNewEmailPayload.h"
#include "WebhookResultEntity.h"
#include "WebhookTestResult.h"
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
    /// Get notified whenever an inbox receives an email via a WebHook URL. An emailID will be posted to this URL every time an email is received for this inbox. The URL must be publicly reachable by the MailSlurp server. You can provide basicAuth values if you wish to secure this endpoint.
    /// </remarks>
    /// <param name="inboxId">inboxId</param>
    /// <param name="webhookOptions">webhookOptions</param>
    pplx::task<std::shared_ptr<WebhookDto>> createWebhook(
        std::shared_ptr<utility::string_t> inboxId,
        std::shared_ptr<CreateWebhookOptions> webhookOptions
    ) const;
    /// <summary>
    /// Delete and disable a Webhook for an Inbox
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="inboxId">inboxId</param>
    /// <param name="webhookId">webhookId</param>
    pplx::task<void> deleteWebhook(
        std::shared_ptr<utility::string_t> inboxId,
        std::shared_ptr<utility::string_t> webhookId
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
    pplx::task<std::shared_ptr<PageWebhookResult>> getAllWebhookResults(
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort
    ) const;
    /// <summary>
    /// List Webhooks Paginated
    /// </summary>
    /// <remarks>
    /// List webhooks in paginated form. Allows for page index, page size, and sort direction.
    /// </remarks>
    /// <param name="page">Optional page index in list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size in list pagination (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<PageWebhookProjection>> getAllWebhooks(
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort
    ) const;
    /// <summary>
    /// Get test webhook payload example. Response content depends on eventName passed. Uses &#x60;EMAIL_RECEIVED&#x60; as default.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="eventName">eventName (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<AbstractWebhookPayload>> getTestWebhookPayload(
        boost::optional<utility::string_t> eventName
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
    /// Get a webhook for an Inbox
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="webhookId">webhookId</param>
    pplx::task<std::shared_ptr<WebhookDto>> getWebhook(
        std::shared_ptr<utility::string_t> webhookId
    ) const;
    /// <summary>
    /// Get a webhook result for a webhook
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="webhookResultId">Webhook Result ID</param>
    pplx::task<std::shared_ptr<WebhookResultEntity>> getWebhookResult(
        std::shared_ptr<utility::string_t> webhookResultId
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
    pplx::task<std::shared_ptr<PageWebhookResult>> getWebhookResults(
        std::shared_ptr<utility::string_t> webhookId,
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort
    ) const;
    /// <summary>
    /// Get all webhooks for an Inbox
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="inboxId">inboxId</param>
    pplx::task<std::vector<std::shared_ptr<WebhookDto>>> getWebhooks(
        std::shared_ptr<utility::string_t> inboxId
    ) const;
    /// <summary>
    /// Send webhook test data
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="webhookId">webhookId</param>
    pplx::task<std::shared_ptr<WebhookTestResult>> sendTestData(
        std::shared_ptr<utility::string_t> webhookId
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_API_WebhookControllerApi_H_ */

