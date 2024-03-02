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
 * WebhookDto.h
 *
 * Representation of a webhook for an inbox. The URL specified will be using by MailSlurp whenever an email is received by the attached inbox. A webhook entity should have a URL that points to your server. Your server should accept HTTP/S POST requests and return a success 200. MailSlurp will retry your webhooks if they fail. See https://api.mailslurp.com/schemas/webhook-payload for the payload schema.
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_WebhookDto_H_
#define COM_MAILSLURP_CLIENT_MODEL_WebhookDto_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/WebhookHeaders.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace mailslurp {
namespace client {
namespace model {

class WebhookHeaders;

/// <summary>
/// Representation of a webhook for an inbox. The URL specified will be using by MailSlurp whenever an email is received by the attached inbox. A webhook entity should have a URL that points to your server. Your server should accept HTTP/S POST requests and return a success 200. MailSlurp will retry your webhooks if they fail. See https://api.mailslurp.com/schemas/webhook-payload for the payload schema.
/// </summary>
class  WebhookDto
    : public ModelBase
{
public:
    WebhookDto();
    virtual ~WebhookDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// WebhookDto members

    /// <summary>
    /// ID of the Webhook
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// User ID of the Webhook
    /// </summary>
    utility::string_t getUserId() const;
    bool userIdIsSet() const;
    void unsetUserId();

    void setUserId(const utility::string_t& value);

    /// <summary>
    /// Does webhook expect basic authentication? If true it means you created this webhook with a username and password. MailSlurp will use these in the URL to authenticate itself.
    /// </summary>
    bool isBasicAuth() const;
    bool basicAuthIsSet() const;
    void unsetBasicAuth();

    void setBasicAuth(bool value);

    /// <summary>
    /// Name of the webhook
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// The phoneNumberId that the Webhook will be triggered by. If null then webhook triggered at account level or inbox level if inboxId set
    /// </summary>
    utility::string_t getPhoneId() const;
    bool phoneIdIsSet() const;
    void unsetPhoneId();

    void setPhoneId(const utility::string_t& value);

    /// <summary>
    /// The inbox that the Webhook will be triggered by. If null then webhook triggered at account level or phone level if phoneId set
    /// </summary>
    utility::string_t getInboxId() const;
    bool inboxIdIsSet() const;
    void unsetInboxId();

    void setInboxId(const utility::string_t& value);

    /// <summary>
    /// Request body template for HTTP request that will be sent for the webhook. Use Moustache style template variables to insert values from the original event payload.
    /// </summary>
    utility::string_t getRequestBodyTemplate() const;
    bool requestBodyTemplateIsSet() const;
    void unsetRequestBodyTemplate();

    void setRequestBodyTemplate(const utility::string_t& value);

    /// <summary>
    /// URL of your server that the webhook will be sent to. The schema of the JSON that is sent is described by the payloadJsonSchema.
    /// </summary>
    utility::string_t getUrl() const;
    bool urlIsSet() const;
    void unsetUrl();

    void setUrl(const utility::string_t& value);

    /// <summary>
    /// HTTP method that your server endpoint must listen for
    /// </summary>
    utility::string_t getMethod() const;
    bool methodIsSet() const;
    void unsetMethod();

    void setMethod(const utility::string_t& value);

    /// <summary>
    /// Deprecated. Fetch JSON Schema for webhook using the getJsonSchemaForWebhookPayload method
    /// </summary>
    utility::string_t getPayloadJsonSchema() const;
    bool payloadJsonSchemaIsSet() const;
    void unsetPayloadJsonSchema();

    void setPayloadJsonSchema(const utility::string_t& value);

    /// <summary>
    /// When the webhook was created
    /// </summary>
    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetCreatedAt();

    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetUpdatedAt();

    void setUpdatedAt(const utility::datetime& value);

    /// <summary>
    /// Webhook trigger event name
    /// </summary>
    utility::string_t getEventName() const;
    bool eventNameIsSet() const;
    void unsetEventName();

    void setEventName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<WebhookHeaders> getRequestHeaders() const;
    bool requestHeadersIsSet() const;
    void unsetRequestHeaders();

    void setRequestHeaders(const std::shared_ptr<WebhookHeaders>& value);

    /// <summary>
    /// Should notifier ignore insecure SSL certificates
    /// </summary>
    bool isIgnoreInsecureSslCertificates() const;
    bool ignoreInsecureSslCertificatesIsSet() const;
    void unsetIgnoreInsecureSslCertificates();

    void setIgnoreInsecureSslCertificates(bool value);

    /// <summary>
    /// Should notifier use static IP range when sending webhook payload
    /// </summary>
    bool isUseStaticIpRange() const;
    bool useStaticIpRangeIsSet() const;
    void unsetUseStaticIpRange();

    void setUseStaticIpRange(bool value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_UserId;
    bool m_UserIdIsSet;
    bool m_BasicAuth;
    bool m_BasicAuthIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_PhoneId;
    bool m_PhoneIdIsSet;
    utility::string_t m_InboxId;
    bool m_InboxIdIsSet;
    utility::string_t m_RequestBodyTemplate;
    bool m_RequestBodyTemplateIsSet;
    utility::string_t m_Url;
    bool m_UrlIsSet;
    utility::string_t m_Method;
    bool m_MethodIsSet;
    utility::string_t m_PayloadJsonSchema;
    bool m_PayloadJsonSchemaIsSet;
    utility::datetime m_CreatedAt;
    bool m_CreatedAtIsSet;
    utility::datetime m_UpdatedAt;
    bool m_UpdatedAtIsSet;
    utility::string_t m_EventName;
    bool m_EventNameIsSet;
    std::shared_ptr<WebhookHeaders> m_RequestHeaders;
    bool m_RequestHeadersIsSet;
    bool m_IgnoreInsecureSslCertificates;
    bool m_IgnoreInsecureSslCertificatesIsSet;
    bool m_UseStaticIpRange;
    bool m_UseStaticIpRangeIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_WebhookDto_H_ */
