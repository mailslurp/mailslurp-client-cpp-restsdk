/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://docs.mailslurp.com/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "WebhookResultDto.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




WebhookResultDto::WebhookResultDto()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_UserId = utility::conversions::to_string_t("");
    m_UserIdIsSet = false;
    m_InboxId = utility::conversions::to_string_t("");
    m_InboxIdIsSet = false;
    m_WebhookId = utility::conversions::to_string_t("");
    m_WebhookIdIsSet = false;
    m_WebhookUrl = utility::conversions::to_string_t("");
    m_WebhookUrlIsSet = false;
    m_MessageId = utility::conversions::to_string_t("");
    m_MessageIdIsSet = false;
    m_RedriveId = utility::conversions::to_string_t("");
    m_RedriveIdIsSet = false;
    m_HttpMethod = utility::conversions::to_string_t("");
    m_HttpMethodIsSet = false;
    m_WebhookEvent = utility::conversions::to_string_t("");
    m_WebhookEventIsSet = false;
    m_ResponseStatus = 0;
    m_ResponseStatusIsSet = false;
    m_ResponseTimeMillis = 0L;
    m_ResponseTimeMillisIsSet = false;
    m_ResponseBodyExtract = utility::conversions::to_string_t("");
    m_ResponseBodyExtractIsSet = false;
    m_ResultType = utility::conversions::to_string_t("");
    m_ResultTypeIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
    m_UpdatedAt = utility::datetime();
    m_UpdatedAtIsSet = false;
    m_Seen = false;
    m_SeenIsSet = false;
}

WebhookResultDto::~WebhookResultDto()
{
}

void WebhookResultDto::validate()
{
    // TODO: implement validation
}

web::json::value WebhookResultDto::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_UserIdIsSet)
    {
        val[utility::conversions::to_string_t("userId")] = ModelBase::toJson(m_UserId);
    }
    if(m_InboxIdIsSet)
    {
        val[utility::conversions::to_string_t("inboxId")] = ModelBase::toJson(m_InboxId);
    }
    if(m_WebhookIdIsSet)
    {
        val[utility::conversions::to_string_t("webhookId")] = ModelBase::toJson(m_WebhookId);
    }
    if(m_WebhookUrlIsSet)
    {
        val[utility::conversions::to_string_t("webhookUrl")] = ModelBase::toJson(m_WebhookUrl);
    }
    if(m_MessageIdIsSet)
    {
        val[utility::conversions::to_string_t("messageId")] = ModelBase::toJson(m_MessageId);
    }
    if(m_RedriveIdIsSet)
    {
        val[utility::conversions::to_string_t("redriveId")] = ModelBase::toJson(m_RedriveId);
    }
    if(m_HttpMethodIsSet)
    {
        val[utility::conversions::to_string_t("httpMethod")] = ModelBase::toJson(m_HttpMethod);
    }
    if(m_WebhookEventIsSet)
    {
        val[utility::conversions::to_string_t("webhookEvent")] = ModelBase::toJson(m_WebhookEvent);
    }
    if(m_ResponseStatusIsSet)
    {
        val[utility::conversions::to_string_t("responseStatus")] = ModelBase::toJson(m_ResponseStatus);
    }
    if(m_ResponseTimeMillisIsSet)
    {
        val[utility::conversions::to_string_t("responseTimeMillis")] = ModelBase::toJson(m_ResponseTimeMillis);
    }
    if(m_ResponseBodyExtractIsSet)
    {
        val[utility::conversions::to_string_t("responseBodyExtract")] = ModelBase::toJson(m_ResponseBodyExtract);
    }
    if(m_ResultTypeIsSet)
    {
        val[utility::conversions::to_string_t("resultType")] = ModelBase::toJson(m_ResultType);
    }
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t("createdAt")] = ModelBase::toJson(m_CreatedAt);
    }
    if(m_UpdatedAtIsSet)
    {
        val[utility::conversions::to_string_t("updatedAt")] = ModelBase::toJson(m_UpdatedAt);
    }
    if(m_SeenIsSet)
    {
        val[utility::conversions::to_string_t("seen")] = ModelBase::toJson(m_Seen);
    }

    return val;
}

bool WebhookResultDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_id);
            setId(refVal_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("userId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_userId;
            ok &= ModelBase::fromJson(fieldValue, refVal_userId);
            setUserId(refVal_userId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inboxId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inboxId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_inboxId;
            ok &= ModelBase::fromJson(fieldValue, refVal_inboxId);
            setInboxId(refVal_inboxId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("webhookId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("webhookId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_webhookId;
            ok &= ModelBase::fromJson(fieldValue, refVal_webhookId);
            setWebhookId(refVal_webhookId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("webhookUrl")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("webhookUrl"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_webhookUrl;
            ok &= ModelBase::fromJson(fieldValue, refVal_webhookUrl);
            setWebhookUrl(refVal_webhookUrl);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("messageId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("messageId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_messageId;
            ok &= ModelBase::fromJson(fieldValue, refVal_messageId);
            setMessageId(refVal_messageId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("redriveId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("redriveId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_redriveId;
            ok &= ModelBase::fromJson(fieldValue, refVal_redriveId);
            setRedriveId(refVal_redriveId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("httpMethod")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("httpMethod"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_httpMethod;
            ok &= ModelBase::fromJson(fieldValue, refVal_httpMethod);
            setHttpMethod(refVal_httpMethod);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("webhookEvent")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("webhookEvent"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_webhookEvent;
            ok &= ModelBase::fromJson(fieldValue, refVal_webhookEvent);
            setWebhookEvent(refVal_webhookEvent);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("responseStatus")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("responseStatus"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_responseStatus;
            ok &= ModelBase::fromJson(fieldValue, refVal_responseStatus);
            setResponseStatus(refVal_responseStatus);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("responseTimeMillis")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("responseTimeMillis"));
        if(!fieldValue.is_null())
        {
            int64_t refVal_responseTimeMillis;
            ok &= ModelBase::fromJson(fieldValue, refVal_responseTimeMillis);
            setResponseTimeMillis(refVal_responseTimeMillis);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("responseBodyExtract")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("responseBodyExtract"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_responseBodyExtract;
            ok &= ModelBase::fromJson(fieldValue, refVal_responseBodyExtract);
            setResponseBodyExtract(refVal_responseBodyExtract);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resultType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resultType"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_resultType;
            ok &= ModelBase::fromJson(fieldValue, refVal_resultType);
            setResultType(refVal_resultType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("createdAt")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("createdAt"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_createdAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_createdAt);
            setCreatedAt(refVal_createdAt);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updatedAt")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updatedAt"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_updatedAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_updatedAt);
            setUpdatedAt(refVal_updatedAt);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("seen")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("seen"));
        if(!fieldValue.is_null())
        {
            bool refVal_seen;
            ok &= ModelBase::fromJson(fieldValue, refVal_seen);
            setSeen(refVal_seen);
        }
    }
    return ok;
}

void WebhookResultDto::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_UserIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("userId"), m_UserId));
    }
    if(m_InboxIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("inboxId"), m_InboxId));
    }
    if(m_WebhookIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("webhookId"), m_WebhookId));
    }
    if(m_WebhookUrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("webhookUrl"), m_WebhookUrl));
    }
    if(m_MessageIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("messageId"), m_MessageId));
    }
    if(m_RedriveIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("redriveId"), m_RedriveId));
    }
    if(m_HttpMethodIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("httpMethod"), m_HttpMethod));
    }
    if(m_WebhookEventIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("webhookEvent"), m_WebhookEvent));
    }
    if(m_ResponseStatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("responseStatus"), m_ResponseStatus));
    }
    if(m_ResponseTimeMillisIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("responseTimeMillis"), m_ResponseTimeMillis));
    }
    if(m_ResponseBodyExtractIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("responseBodyExtract"), m_ResponseBodyExtract));
    }
    if(m_ResultTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("resultType"), m_ResultType));
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("createdAt"), m_CreatedAt));
    }
    if(m_UpdatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("updatedAt"), m_UpdatedAt));
    }
    if(m_SeenIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("seen"), m_Seen));
    }
}

bool WebhookResultDto::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        utility::string_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("id")), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("userId")))
    {
        utility::string_t refVal_userId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("userId")), refVal_userId );
        setUserId(refVal_userId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("inboxId")))
    {
        utility::string_t refVal_inboxId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("inboxId")), refVal_inboxId );
        setInboxId(refVal_inboxId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("webhookId")))
    {
        utility::string_t refVal_webhookId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("webhookId")), refVal_webhookId );
        setWebhookId(refVal_webhookId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("webhookUrl")))
    {
        utility::string_t refVal_webhookUrl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("webhookUrl")), refVal_webhookUrl );
        setWebhookUrl(refVal_webhookUrl);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("messageId")))
    {
        utility::string_t refVal_messageId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("messageId")), refVal_messageId );
        setMessageId(refVal_messageId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("redriveId")))
    {
        utility::string_t refVal_redriveId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("redriveId")), refVal_redriveId );
        setRedriveId(refVal_redriveId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("httpMethod")))
    {
        utility::string_t refVal_httpMethod;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("httpMethod")), refVal_httpMethod );
        setHttpMethod(refVal_httpMethod);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("webhookEvent")))
    {
        utility::string_t refVal_webhookEvent;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("webhookEvent")), refVal_webhookEvent );
        setWebhookEvent(refVal_webhookEvent);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("responseStatus")))
    {
        int32_t refVal_responseStatus;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("responseStatus")), refVal_responseStatus );
        setResponseStatus(refVal_responseStatus);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("responseTimeMillis")))
    {
        int64_t refVal_responseTimeMillis;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("responseTimeMillis")), refVal_responseTimeMillis );
        setResponseTimeMillis(refVal_responseTimeMillis);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("responseBodyExtract")))
    {
        utility::string_t refVal_responseBodyExtract;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("responseBodyExtract")), refVal_responseBodyExtract );
        setResponseBodyExtract(refVal_responseBodyExtract);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("resultType")))
    {
        utility::string_t refVal_resultType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("resultType")), refVal_resultType );
        setResultType(refVal_resultType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("createdAt")))
    {
        utility::datetime refVal_createdAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("createdAt")), refVal_createdAt );
        setCreatedAt(refVal_createdAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("updatedAt")))
    {
        utility::datetime refVal_updatedAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("updatedAt")), refVal_updatedAt );
        setUpdatedAt(refVal_updatedAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("seen")))
    {
        bool refVal_seen;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("seen")), refVal_seen );
        setSeen(refVal_seen);
    }
    return ok;
}

utility::string_t WebhookResultDto::getId() const
{
    return m_Id;
}

void WebhookResultDto::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool WebhookResultDto::idIsSet() const
{
    return m_IdIsSet;
}

void WebhookResultDto::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t WebhookResultDto::getUserId() const
{
    return m_UserId;
}

void WebhookResultDto::setUserId(const utility::string_t& value)
{
    m_UserId = value;
    m_UserIdIsSet = true;
}

bool WebhookResultDto::userIdIsSet() const
{
    return m_UserIdIsSet;
}

void WebhookResultDto::unsetUserId()
{
    m_UserIdIsSet = false;
}
utility::string_t WebhookResultDto::getInboxId() const
{
    return m_InboxId;
}

void WebhookResultDto::setInboxId(const utility::string_t& value)
{
    m_InboxId = value;
    m_InboxIdIsSet = true;
}

bool WebhookResultDto::inboxIdIsSet() const
{
    return m_InboxIdIsSet;
}

void WebhookResultDto::unsetInboxId()
{
    m_InboxIdIsSet = false;
}
utility::string_t WebhookResultDto::getWebhookId() const
{
    return m_WebhookId;
}

void WebhookResultDto::setWebhookId(const utility::string_t& value)
{
    m_WebhookId = value;
    m_WebhookIdIsSet = true;
}

bool WebhookResultDto::webhookIdIsSet() const
{
    return m_WebhookIdIsSet;
}

void WebhookResultDto::unsetWebhookId()
{
    m_WebhookIdIsSet = false;
}
utility::string_t WebhookResultDto::getWebhookUrl() const
{
    return m_WebhookUrl;
}

void WebhookResultDto::setWebhookUrl(const utility::string_t& value)
{
    m_WebhookUrl = value;
    m_WebhookUrlIsSet = true;
}

bool WebhookResultDto::webhookUrlIsSet() const
{
    return m_WebhookUrlIsSet;
}

void WebhookResultDto::unsetWebhookUrl()
{
    m_WebhookUrlIsSet = false;
}
utility::string_t WebhookResultDto::getMessageId() const
{
    return m_MessageId;
}

void WebhookResultDto::setMessageId(const utility::string_t& value)
{
    m_MessageId = value;
    m_MessageIdIsSet = true;
}

bool WebhookResultDto::messageIdIsSet() const
{
    return m_MessageIdIsSet;
}

void WebhookResultDto::unsetMessageId()
{
    m_MessageIdIsSet = false;
}
utility::string_t WebhookResultDto::getRedriveId() const
{
    return m_RedriveId;
}

void WebhookResultDto::setRedriveId(const utility::string_t& value)
{
    m_RedriveId = value;
    m_RedriveIdIsSet = true;
}

bool WebhookResultDto::redriveIdIsSet() const
{
    return m_RedriveIdIsSet;
}

void WebhookResultDto::unsetRedriveId()
{
    m_RedriveIdIsSet = false;
}
utility::string_t WebhookResultDto::getHttpMethod() const
{
    return m_HttpMethod;
}

void WebhookResultDto::setHttpMethod(const utility::string_t& value)
{
    m_HttpMethod = value;
    m_HttpMethodIsSet = true;
}

bool WebhookResultDto::httpMethodIsSet() const
{
    return m_HttpMethodIsSet;
}

void WebhookResultDto::unsetHttpMethod()
{
    m_HttpMethodIsSet = false;
}
utility::string_t WebhookResultDto::getWebhookEvent() const
{
    return m_WebhookEvent;
}

void WebhookResultDto::setWebhookEvent(const utility::string_t& value)
{
    m_WebhookEvent = value;
    m_WebhookEventIsSet = true;
}

bool WebhookResultDto::webhookEventIsSet() const
{
    return m_WebhookEventIsSet;
}

void WebhookResultDto::unsetWebhookEvent()
{
    m_WebhookEventIsSet = false;
}
int32_t WebhookResultDto::getResponseStatus() const
{
    return m_ResponseStatus;
}

void WebhookResultDto::setResponseStatus(int32_t value)
{
    m_ResponseStatus = value;
    m_ResponseStatusIsSet = true;
}

bool WebhookResultDto::responseStatusIsSet() const
{
    return m_ResponseStatusIsSet;
}

void WebhookResultDto::unsetResponseStatus()
{
    m_ResponseStatusIsSet = false;
}
int64_t WebhookResultDto::getResponseTimeMillis() const
{
    return m_ResponseTimeMillis;
}

void WebhookResultDto::setResponseTimeMillis(int64_t value)
{
    m_ResponseTimeMillis = value;
    m_ResponseTimeMillisIsSet = true;
}

bool WebhookResultDto::responseTimeMillisIsSet() const
{
    return m_ResponseTimeMillisIsSet;
}

void WebhookResultDto::unsetResponseTimeMillis()
{
    m_ResponseTimeMillisIsSet = false;
}
utility::string_t WebhookResultDto::getResponseBodyExtract() const
{
    return m_ResponseBodyExtract;
}

void WebhookResultDto::setResponseBodyExtract(const utility::string_t& value)
{
    m_ResponseBodyExtract = value;
    m_ResponseBodyExtractIsSet = true;
}

bool WebhookResultDto::responseBodyExtractIsSet() const
{
    return m_ResponseBodyExtractIsSet;
}

void WebhookResultDto::unsetResponseBodyExtract()
{
    m_ResponseBodyExtractIsSet = false;
}
utility::string_t WebhookResultDto::getResultType() const
{
    return m_ResultType;
}

void WebhookResultDto::setResultType(const utility::string_t& value)
{
    m_ResultType = value;
    m_ResultTypeIsSet = true;
}

bool WebhookResultDto::resultTypeIsSet() const
{
    return m_ResultTypeIsSet;
}

void WebhookResultDto::unsetResultType()
{
    m_ResultTypeIsSet = false;
}
utility::datetime WebhookResultDto::getCreatedAt() const
{
    return m_CreatedAt;
}

void WebhookResultDto::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool WebhookResultDto::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void WebhookResultDto::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
utility::datetime WebhookResultDto::getUpdatedAt() const
{
    return m_UpdatedAt;
}

void WebhookResultDto::setUpdatedAt(const utility::datetime& value)
{
    m_UpdatedAt = value;
    m_UpdatedAtIsSet = true;
}

bool WebhookResultDto::updatedAtIsSet() const
{
    return m_UpdatedAtIsSet;
}

void WebhookResultDto::unsetUpdatedAt()
{
    m_UpdatedAtIsSet = false;
}
bool WebhookResultDto::isSeen() const
{
    return m_Seen;
}

void WebhookResultDto::setSeen(bool value)
{
    m_Seen = value;
    m_SeenIsSet = true;
}

bool WebhookResultDto::seenIsSet() const
{
    return m_SeenIsSet;
}

void WebhookResultDto::unsetSeen()
{
    m_SeenIsSet = false;
}
}
}
}
}


