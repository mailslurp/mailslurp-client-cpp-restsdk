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
 * WebhookResultEntity.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_WebhookResultEntity_H_
#define COM_MAILSLURP_CLIENT_MODEL_WebhookResultEntity_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  WebhookResultEntity
    : public ModelBase
{
public:
    WebhookResultEntity();
    virtual ~WebhookResultEntity();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// WebhookResultEntity members

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetCreatedAt();

    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getHttpMethod() const;
    bool httpMethodIsSet() const;
    void unsetHttpMethod();

    void setHttpMethod(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getInboxId() const;
    bool inboxIdIsSet() const;
    void unsetInboxId();

    void setInboxId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getMessageId() const;
    bool messageIdIsSet() const;
    void unsetMessageId();

    void setMessageId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getResponseBodyExtract() const;
    bool responseBodyExtractIsSet() const;
    void unsetResponseBodyExtract();

    void setResponseBodyExtract(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getResponseStatus() const;
    bool responseStatusIsSet() const;
    void unsetResponseStatus();

    void setResponseStatus(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getResponseTimeMillis() const;
    bool responseTimeMillisIsSet() const;
    void unsetResponseTimeMillis();

    void setResponseTimeMillis(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getResultType() const;
    bool resultTypeIsSet() const;
    void unsetResultType();

    void setResultType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetUpdatedAt();

    void setUpdatedAt(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getUserId() const;
    bool userIdIsSet() const;
    void unsetUserId();

    void setUserId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getWebhookEvent() const;
    bool webhookEventIsSet() const;
    void unsetWebhookEvent();

    void setWebhookEvent(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getWebhookId() const;
    bool webhookIdIsSet() const;
    void unsetWebhookId();

    void setWebhookId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getWebhookUrl() const;
    bool webhookUrlIsSet() const;
    void unsetWebhookUrl();

    void setWebhookUrl(const utility::string_t& value);


protected:
    utility::datetime m_CreatedAt;
    bool m_CreatedAtIsSet;
    utility::string_t m_HttpMethod;
    bool m_HttpMethodIsSet;
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_InboxId;
    bool m_InboxIdIsSet;
    utility::string_t m_MessageId;
    bool m_MessageIdIsSet;
    utility::string_t m_ResponseBodyExtract;
    bool m_ResponseBodyExtractIsSet;
    int32_t m_ResponseStatus;
    bool m_ResponseStatusIsSet;
    int64_t m_ResponseTimeMillis;
    bool m_ResponseTimeMillisIsSet;
    utility::string_t m_ResultType;
    bool m_ResultTypeIsSet;
    utility::datetime m_UpdatedAt;
    bool m_UpdatedAtIsSet;
    utility::string_t m_UserId;
    bool m_UserIdIsSet;
    utility::string_t m_WebhookEvent;
    bool m_WebhookEventIsSet;
    utility::string_t m_WebhookId;
    bool m_WebhookIdIsSet;
    utility::string_t m_WebhookUrl;
    bool m_WebhookUrlIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_WebhookResultEntity_H_ */
