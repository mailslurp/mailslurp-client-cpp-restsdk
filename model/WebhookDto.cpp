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



#include "WebhookDto.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




WebhookDto::WebhookDto()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_UserId = utility::conversions::to_string_t("");
    m_UserIdIsSet = false;
    m_BasicAuth = false;
    m_BasicAuthIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_InboxId = utility::conversions::to_string_t("");
    m_InboxIdIsSet = false;
    m_Url = utility::conversions::to_string_t("");
    m_UrlIsSet = false;
    m_Method = utility::conversions::to_string_t("");
    m_MethodIsSet = false;
    m_PayloadJsonSchema = utility::conversions::to_string_t("");
    m_PayloadJsonSchemaIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
    m_UpdatedAt = utility::datetime();
    m_UpdatedAtIsSet = false;
    m_EventName = utility::conversions::to_string_t("");
    m_EventNameIsSet = false;
}

WebhookDto::~WebhookDto()
{
}

void WebhookDto::validate()
{
    // TODO: implement validation
}

web::json::value WebhookDto::toJson() const
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
    if(m_BasicAuthIsSet)
    {
        val[utility::conversions::to_string_t("basicAuth")] = ModelBase::toJson(m_BasicAuth);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_InboxIdIsSet)
    {
        val[utility::conversions::to_string_t("inboxId")] = ModelBase::toJson(m_InboxId);
    }
    if(m_UrlIsSet)
    {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(m_Url);
    }
    if(m_MethodIsSet)
    {
        val[utility::conversions::to_string_t("method")] = ModelBase::toJson(m_Method);
    }
    if(m_PayloadJsonSchemaIsSet)
    {
        val[utility::conversions::to_string_t("payloadJsonSchema")] = ModelBase::toJson(m_PayloadJsonSchema);
    }
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t("createdAt")] = ModelBase::toJson(m_CreatedAt);
    }
    if(m_UpdatedAtIsSet)
    {
        val[utility::conversions::to_string_t("updatedAt")] = ModelBase::toJson(m_UpdatedAt);
    }
    if(m_EventNameIsSet)
    {
        val[utility::conversions::to_string_t("eventName")] = ModelBase::toJson(m_EventName);
    }

    return val;
}

bool WebhookDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("basicAuth")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("basicAuth"));
        if(!fieldValue.is_null())
        {
            bool refVal_basicAuth;
            ok &= ModelBase::fromJson(fieldValue, refVal_basicAuth);
            setBasicAuth(refVal_basicAuth);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_name;
            ok &= ModelBase::fromJson(fieldValue, refVal_name);
            setName(refVal_name);
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
    if(val.has_field(utility::conversions::to_string_t("url")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_url;
            ok &= ModelBase::fromJson(fieldValue, refVal_url);
            setUrl(refVal_url);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("method")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("method"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_method;
            ok &= ModelBase::fromJson(fieldValue, refVal_method);
            setMethod(refVal_method);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("payloadJsonSchema")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("payloadJsonSchema"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_payloadJsonSchema;
            ok &= ModelBase::fromJson(fieldValue, refVal_payloadJsonSchema);
            setPayloadJsonSchema(refVal_payloadJsonSchema);
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
    if(val.has_field(utility::conversions::to_string_t("eventName")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eventName"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_eventName;
            ok &= ModelBase::fromJson(fieldValue, refVal_eventName);
            setEventName(refVal_eventName);
        }
    }
    return ok;
}

void WebhookDto::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_BasicAuthIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("basicAuth"), m_BasicAuth));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
    if(m_InboxIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("inboxId"), m_InboxId));
    }
    if(m_UrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("url"), m_Url));
    }
    if(m_MethodIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("method"), m_Method));
    }
    if(m_PayloadJsonSchemaIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("payloadJsonSchema"), m_PayloadJsonSchema));
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("createdAt"), m_CreatedAt));
    }
    if(m_UpdatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("updatedAt"), m_UpdatedAt));
    }
    if(m_EventNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("eventName"), m_EventName));
    }
}

bool WebhookDto::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("basicAuth")))
    {
        bool refVal_basicAuth;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("basicAuth")), refVal_basicAuth );
        setBasicAuth(refVal_basicAuth);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        utility::string_t refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("name")), refVal_name );
        setName(refVal_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("inboxId")))
    {
        utility::string_t refVal_inboxId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("inboxId")), refVal_inboxId );
        setInboxId(refVal_inboxId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("url")))
    {
        utility::string_t refVal_url;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("url")), refVal_url );
        setUrl(refVal_url);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("method")))
    {
        utility::string_t refVal_method;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("method")), refVal_method );
        setMethod(refVal_method);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("payloadJsonSchema")))
    {
        utility::string_t refVal_payloadJsonSchema;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("payloadJsonSchema")), refVal_payloadJsonSchema );
        setPayloadJsonSchema(refVal_payloadJsonSchema);
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
    if(multipart->hasContent(utility::conversions::to_string_t("eventName")))
    {
        utility::string_t refVal_eventName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("eventName")), refVal_eventName );
        setEventName(refVal_eventName);
    }
    return ok;
}

utility::string_t WebhookDto::getId() const
{
    return m_Id;
}

void WebhookDto::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool WebhookDto::idIsSet() const
{
    return m_IdIsSet;
}

void WebhookDto::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t WebhookDto::getUserId() const
{
    return m_UserId;
}

void WebhookDto::setUserId(const utility::string_t& value)
{
    m_UserId = value;
    m_UserIdIsSet = true;
}

bool WebhookDto::userIdIsSet() const
{
    return m_UserIdIsSet;
}

void WebhookDto::unsetUserId()
{
    m_UserIdIsSet = false;
}
bool WebhookDto::isBasicAuth() const
{
    return m_BasicAuth;
}

void WebhookDto::setBasicAuth(bool value)
{
    m_BasicAuth = value;
    m_BasicAuthIsSet = true;
}

bool WebhookDto::basicAuthIsSet() const
{
    return m_BasicAuthIsSet;
}

void WebhookDto::unsetBasicAuth()
{
    m_BasicAuthIsSet = false;
}
utility::string_t WebhookDto::getName() const
{
    return m_Name;
}

void WebhookDto::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool WebhookDto::nameIsSet() const
{
    return m_NameIsSet;
}

void WebhookDto::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t WebhookDto::getInboxId() const
{
    return m_InboxId;
}

void WebhookDto::setInboxId(const utility::string_t& value)
{
    m_InboxId = value;
    m_InboxIdIsSet = true;
}

bool WebhookDto::inboxIdIsSet() const
{
    return m_InboxIdIsSet;
}

void WebhookDto::unsetInboxId()
{
    m_InboxIdIsSet = false;
}
utility::string_t WebhookDto::getUrl() const
{
    return m_Url;
}

void WebhookDto::setUrl(const utility::string_t& value)
{
    m_Url = value;
    m_UrlIsSet = true;
}

bool WebhookDto::urlIsSet() const
{
    return m_UrlIsSet;
}

void WebhookDto::unsetUrl()
{
    m_UrlIsSet = false;
}
utility::string_t WebhookDto::getMethod() const
{
    return m_Method;
}

void WebhookDto::setMethod(const utility::string_t& value)
{
    m_Method = value;
    m_MethodIsSet = true;
}

bool WebhookDto::methodIsSet() const
{
    return m_MethodIsSet;
}

void WebhookDto::unsetMethod()
{
    m_MethodIsSet = false;
}
utility::string_t WebhookDto::getPayloadJsonSchema() const
{
    return m_PayloadJsonSchema;
}

void WebhookDto::setPayloadJsonSchema(const utility::string_t& value)
{
    m_PayloadJsonSchema = value;
    m_PayloadJsonSchemaIsSet = true;
}

bool WebhookDto::payloadJsonSchemaIsSet() const
{
    return m_PayloadJsonSchemaIsSet;
}

void WebhookDto::unsetPayloadJsonSchema()
{
    m_PayloadJsonSchemaIsSet = false;
}
utility::datetime WebhookDto::getCreatedAt() const
{
    return m_CreatedAt;
}

void WebhookDto::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool WebhookDto::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void WebhookDto::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
utility::datetime WebhookDto::getUpdatedAt() const
{
    return m_UpdatedAt;
}

void WebhookDto::setUpdatedAt(const utility::datetime& value)
{
    m_UpdatedAt = value;
    m_UpdatedAtIsSet = true;
}

bool WebhookDto::updatedAtIsSet() const
{
    return m_UpdatedAtIsSet;
}

void WebhookDto::unsetUpdatedAt()
{
    m_UpdatedAtIsSet = false;
}
utility::string_t WebhookDto::getEventName() const
{
    return m_EventName;
}

void WebhookDto::setEventName(const utility::string_t& value)
{
    m_EventName = value;
    m_EventNameIsSet = true;
}

bool WebhookDto::eventNameIsSet() const
{
    return m_EventNameIsSet;
}

void WebhookDto::unsetEventName()
{
    m_EventNameIsSet = false;
}
}
}
}
}


