/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://docs.mailslurp.com/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.2.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * CreateWebhookOptions.h
 *
 * Options for creating a webhook. Webhooks can be attached to inboxes and MailSlurp will POST a webhook payload to the URL specified whenever the webhook&#39;s event is triggered. Webhooks are great for processing many inbound emails and responding to other events at scale. Customize the payload sent to your endpoint by setting the &#x60;requestBodyTemplate&#x60; property to a string with moustache style variables. Property names from the standard payload model for the given event are available as variables.
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_CreateWebhookOptions_H_
#define COM_MAILSLURP_CLIENT_MODEL_CreateWebhookOptions_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/WebhookHeaders.h"
#include "CppRestOpenAPIClient/model/BasicAuthOptions.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace mailslurp {
namespace client {
namespace model {

class BasicAuthOptions;
class WebhookHeaders;

/// <summary>
/// Options for creating a webhook. Webhooks can be attached to inboxes and MailSlurp will POST a webhook payload to the URL specified whenever the webhook&#39;s event is triggered. Webhooks are great for processing many inbound emails and responding to other events at scale. Customize the payload sent to your endpoint by setting the &#x60;requestBodyTemplate&#x60; property to a string with moustache style variables. Property names from the standard payload model for the given event are available as variables.
/// </summary>
class  CreateWebhookOptions
    : public ModelBase
{
public:
    CreateWebhookOptions();
    virtual ~CreateWebhookOptions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CreateWebhookOptions members

    /// <summary>
    /// Public URL on your server that MailSlurp can post WebhookNotification payload to when an email is received or an event is trigger. The payload of the submitted JSON is dependent on the webhook event type. See docs.mailslurp.com/webhooks for event payload documentation.
    /// </summary>
    utility::string_t getUrl() const;
    bool urlIsSet() const;
    void unsetUrl();

    void setUrl(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BasicAuthOptions> getBasicAuth() const;
    bool basicAuthIsSet() const;
    void unsetBasicAuth();

    void setBasicAuth(const std::shared_ptr<BasicAuthOptions>& value);

    /// <summary>
    /// Optional name for the webhook
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// Optional webhook event name. Default is &#x60;EMAIL_RECEIVED&#x60; and is triggered when an email is received by the inbox associated with the webhook. Payload differ according to the webhook event name.
    /// </summary>
    utility::string_t getEventName() const;
    bool eventNameIsSet() const;
    void unsetEventName();

    void setEventName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<WebhookHeaders> getIncludeHeaders() const;
    bool includeHeadersIsSet() const;
    void unsetIncludeHeaders();

    void setIncludeHeaders(const std::shared_ptr<WebhookHeaders>& value);

    /// <summary>
    /// Template for the JSON body of the webhook request that will be sent to your server. Use Moustache style &#x60;{{variableName}}&#x60; templating to use parts of the standard webhook payload for the given event.
    /// </summary>
    utility::string_t getRequestBodyTemplate() const;
    bool requestBodyTemplateIsSet() const;
    void unsetRequestBodyTemplate();

    void setRequestBodyTemplate(const utility::string_t& value);


protected:
    utility::string_t m_Url;
    bool m_UrlIsSet;
    std::shared_ptr<BasicAuthOptions> m_BasicAuth;
    bool m_BasicAuthIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_EventName;
    bool m_EventNameIsSet;
    std::shared_ptr<WebhookHeaders> m_IncludeHeaders;
    bool m_IncludeHeadersIsSet;
    utility::string_t m_RequestBodyTemplate;
    bool m_RequestBodyTemplateIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_CreateWebhookOptions_H_ */