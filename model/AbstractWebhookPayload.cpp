/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://docs.mailslurp.com/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "AbstractWebhookPayload.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




AbstractWebhookPayload::AbstractWebhookPayload()
{
    m_EventName = utility::conversions::to_string_t("");
    m_EventNameIsSet = false;
    m_WebhookId = utility::conversions::to_string_t("");
    m_WebhookIdIsSet = false;
    m_MessageId = utility::conversions::to_string_t("");
    m_MessageIdIsSet = false;
    m_WebhookName = utility::conversions::to_string_t("");
    m_WebhookNameIsSet = false;
}

AbstractWebhookPayload::~AbstractWebhookPayload()
{
}

void AbstractWebhookPayload::validate()
{
    // TODO: implement validation
}

web::json::value AbstractWebhookPayload::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_EventNameIsSet)
    {
        val[utility::conversions::to_string_t("eventName")] = ModelBase::toJson(m_EventName);
    }
    if(m_WebhookIdIsSet)
    {
        val[utility::conversions::to_string_t("webhookId")] = ModelBase::toJson(m_WebhookId);
    }
    if(m_MessageIdIsSet)
    {
        val[utility::conversions::to_string_t("messageId")] = ModelBase::toJson(m_MessageId);
    }
    if(m_WebhookNameIsSet)
    {
        val[utility::conversions::to_string_t("webhookName")] = ModelBase::toJson(m_WebhookName);
    }

    return val;
}

bool AbstractWebhookPayload::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("webhookName")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("webhookName"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_webhookName;
            ok &= ModelBase::fromJson(fieldValue, refVal_webhookName);
            setWebhookName(refVal_webhookName);
        }
    }
    return ok;
}

void AbstractWebhookPayload::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_EventNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("eventName"), m_EventName));
    }
    if(m_WebhookIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("webhookId"), m_WebhookId));
    }
    if(m_MessageIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("messageId"), m_MessageId));
    }
    if(m_WebhookNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("webhookName"), m_WebhookName));
    }
}

bool AbstractWebhookPayload::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("eventName")))
    {
        utility::string_t refVal_eventName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("eventName")), refVal_eventName );
        setEventName(refVal_eventName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("webhookId")))
    {
        utility::string_t refVal_webhookId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("webhookId")), refVal_webhookId );
        setWebhookId(refVal_webhookId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("messageId")))
    {
        utility::string_t refVal_messageId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("messageId")), refVal_messageId );
        setMessageId(refVal_messageId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("webhookName")))
    {
        utility::string_t refVal_webhookName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("webhookName")), refVal_webhookName );
        setWebhookName(refVal_webhookName);
    }
    return ok;
}

utility::string_t AbstractWebhookPayload::getEventName() const
{
    return m_EventName;
}

void AbstractWebhookPayload::setEventName(const utility::string_t& value)
{
    m_EventName = value;
    m_EventNameIsSet = true;
}

bool AbstractWebhookPayload::eventNameIsSet() const
{
    return m_EventNameIsSet;
}

void AbstractWebhookPayload::unsetEventName()
{
    m_EventNameIsSet = false;
}
utility::string_t AbstractWebhookPayload::getWebhookId() const
{
    return m_WebhookId;
}

void AbstractWebhookPayload::setWebhookId(const utility::string_t& value)
{
    m_WebhookId = value;
    m_WebhookIdIsSet = true;
}

bool AbstractWebhookPayload::webhookIdIsSet() const
{
    return m_WebhookIdIsSet;
}

void AbstractWebhookPayload::unsetWebhookId()
{
    m_WebhookIdIsSet = false;
}
utility::string_t AbstractWebhookPayload::getMessageId() const
{
    return m_MessageId;
}

void AbstractWebhookPayload::setMessageId(const utility::string_t& value)
{
    m_MessageId = value;
    m_MessageIdIsSet = true;
}

bool AbstractWebhookPayload::messageIdIsSet() const
{
    return m_MessageIdIsSet;
}

void AbstractWebhookPayload::unsetMessageId()
{
    m_MessageIdIsSet = false;
}
utility::string_t AbstractWebhookPayload::getWebhookName() const
{
    return m_WebhookName;
}

void AbstractWebhookPayload::setWebhookName(const utility::string_t& value)
{
    m_WebhookName = value;
    m_WebhookNameIsSet = true;
}

bool AbstractWebhookPayload::webhookNameIsSet() const
{
    return m_WebhookNameIsSet;
}

void AbstractWebhookPayload::unsetWebhookName()
{
    m_WebhookNameIsSet = false;
}
}
}
}
}


