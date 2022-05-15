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



#include "WebhookEmailReadPayload.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




WebhookEmailReadPayload::WebhookEmailReadPayload()
{
    m_MessageId = utility::conversions::to_string_t("");
    m_MessageIdIsSet = false;
    m_WebhookId = utility::conversions::to_string_t("");
    m_WebhookIdIsSet = false;
    m_EventName = utility::conversions::to_string_t("");
    m_EventNameIsSet = false;
    m_WebhookName = utility::conversions::to_string_t("");
    m_WebhookNameIsSet = false;
    m_EmailId = utility::conversions::to_string_t("");
    m_EmailIdIsSet = false;
    m_InboxId = utility::conversions::to_string_t("");
    m_InboxIdIsSet = false;
    m_EmailIsRead = false;
    m_EmailIsReadIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
}

WebhookEmailReadPayload::~WebhookEmailReadPayload()
{
}

void WebhookEmailReadPayload::validate()
{
    // TODO: implement validation
}

web::json::value WebhookEmailReadPayload::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_MessageIdIsSet)
    {
        val[utility::conversions::to_string_t("messageId")] = ModelBase::toJson(m_MessageId);
    }
    if(m_WebhookIdIsSet)
    {
        val[utility::conversions::to_string_t("webhookId")] = ModelBase::toJson(m_WebhookId);
    }
    if(m_EventNameIsSet)
    {
        val[utility::conversions::to_string_t("eventName")] = ModelBase::toJson(m_EventName);
    }
    if(m_WebhookNameIsSet)
    {
        val[utility::conversions::to_string_t("webhookName")] = ModelBase::toJson(m_WebhookName);
    }
    if(m_EmailIdIsSet)
    {
        val[utility::conversions::to_string_t("emailId")] = ModelBase::toJson(m_EmailId);
    }
    if(m_InboxIdIsSet)
    {
        val[utility::conversions::to_string_t("inboxId")] = ModelBase::toJson(m_InboxId);
    }
    if(m_EmailIsReadIsSet)
    {
        val[utility::conversions::to_string_t("emailIsRead")] = ModelBase::toJson(m_EmailIsRead);
    }
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t("createdAt")] = ModelBase::toJson(m_CreatedAt);
    }

    return val;
}

bool WebhookEmailReadPayload::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("emailId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("emailId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_emailId;
            ok &= ModelBase::fromJson(fieldValue, refVal_emailId);
            setEmailId(refVal_emailId);
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
    if(val.has_field(utility::conversions::to_string_t("emailIsRead")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("emailIsRead"));
        if(!fieldValue.is_null())
        {
            bool refVal_emailIsRead;
            ok &= ModelBase::fromJson(fieldValue, refVal_emailIsRead);
            setEmailIsRead(refVal_emailIsRead);
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
    return ok;
}

void WebhookEmailReadPayload::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_MessageIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("messageId"), m_MessageId));
    }
    if(m_WebhookIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("webhookId"), m_WebhookId));
    }
    if(m_EventNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("eventName"), m_EventName));
    }
    if(m_WebhookNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("webhookName"), m_WebhookName));
    }
    if(m_EmailIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("emailId"), m_EmailId));
    }
    if(m_InboxIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("inboxId"), m_InboxId));
    }
    if(m_EmailIsReadIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("emailIsRead"), m_EmailIsRead));
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("createdAt"), m_CreatedAt));
    }
}

bool WebhookEmailReadPayload::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("messageId")))
    {
        utility::string_t refVal_messageId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("messageId")), refVal_messageId );
        setMessageId(refVal_messageId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("webhookId")))
    {
        utility::string_t refVal_webhookId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("webhookId")), refVal_webhookId );
        setWebhookId(refVal_webhookId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("eventName")))
    {
        utility::string_t refVal_eventName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("eventName")), refVal_eventName );
        setEventName(refVal_eventName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("webhookName")))
    {
        utility::string_t refVal_webhookName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("webhookName")), refVal_webhookName );
        setWebhookName(refVal_webhookName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("emailId")))
    {
        utility::string_t refVal_emailId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("emailId")), refVal_emailId );
        setEmailId(refVal_emailId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("inboxId")))
    {
        utility::string_t refVal_inboxId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("inboxId")), refVal_inboxId );
        setInboxId(refVal_inboxId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("emailIsRead")))
    {
        bool refVal_emailIsRead;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("emailIsRead")), refVal_emailIsRead );
        setEmailIsRead(refVal_emailIsRead);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("createdAt")))
    {
        utility::datetime refVal_createdAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("createdAt")), refVal_createdAt );
        setCreatedAt(refVal_createdAt);
    }
    return ok;
}

utility::string_t WebhookEmailReadPayload::getMessageId() const
{
    return m_MessageId;
}

void WebhookEmailReadPayload::setMessageId(const utility::string_t& value)
{
    m_MessageId = value;
    m_MessageIdIsSet = true;
}

bool WebhookEmailReadPayload::messageIdIsSet() const
{
    return m_MessageIdIsSet;
}

void WebhookEmailReadPayload::unsetMessageId()
{
    m_MessageIdIsSet = false;
}
utility::string_t WebhookEmailReadPayload::getWebhookId() const
{
    return m_WebhookId;
}

void WebhookEmailReadPayload::setWebhookId(const utility::string_t& value)
{
    m_WebhookId = value;
    m_WebhookIdIsSet = true;
}

bool WebhookEmailReadPayload::webhookIdIsSet() const
{
    return m_WebhookIdIsSet;
}

void WebhookEmailReadPayload::unsetWebhookId()
{
    m_WebhookIdIsSet = false;
}
utility::string_t WebhookEmailReadPayload::getEventName() const
{
    return m_EventName;
}

void WebhookEmailReadPayload::setEventName(const utility::string_t& value)
{
    m_EventName = value;
    m_EventNameIsSet = true;
}

bool WebhookEmailReadPayload::eventNameIsSet() const
{
    return m_EventNameIsSet;
}

void WebhookEmailReadPayload::unsetEventName()
{
    m_EventNameIsSet = false;
}
utility::string_t WebhookEmailReadPayload::getWebhookName() const
{
    return m_WebhookName;
}

void WebhookEmailReadPayload::setWebhookName(const utility::string_t& value)
{
    m_WebhookName = value;
    m_WebhookNameIsSet = true;
}

bool WebhookEmailReadPayload::webhookNameIsSet() const
{
    return m_WebhookNameIsSet;
}

void WebhookEmailReadPayload::unsetWebhookName()
{
    m_WebhookNameIsSet = false;
}
utility::string_t WebhookEmailReadPayload::getEmailId() const
{
    return m_EmailId;
}

void WebhookEmailReadPayload::setEmailId(const utility::string_t& value)
{
    m_EmailId = value;
    m_EmailIdIsSet = true;
}

bool WebhookEmailReadPayload::emailIdIsSet() const
{
    return m_EmailIdIsSet;
}

void WebhookEmailReadPayload::unsetEmailId()
{
    m_EmailIdIsSet = false;
}
utility::string_t WebhookEmailReadPayload::getInboxId() const
{
    return m_InboxId;
}

void WebhookEmailReadPayload::setInboxId(const utility::string_t& value)
{
    m_InboxId = value;
    m_InboxIdIsSet = true;
}

bool WebhookEmailReadPayload::inboxIdIsSet() const
{
    return m_InboxIdIsSet;
}

void WebhookEmailReadPayload::unsetInboxId()
{
    m_InboxIdIsSet = false;
}
bool WebhookEmailReadPayload::isEmailIsRead() const
{
    return m_EmailIsRead;
}

void WebhookEmailReadPayload::setEmailIsRead(bool value)
{
    m_EmailIsRead = value;
    m_EmailIsReadIsSet = true;
}

bool WebhookEmailReadPayload::emailIsReadIsSet() const
{
    return m_EmailIsReadIsSet;
}

void WebhookEmailReadPayload::unsetEmailIsRead()
{
    m_EmailIsReadIsSet = false;
}
utility::datetime WebhookEmailReadPayload::getCreatedAt() const
{
    return m_CreatedAt;
}

void WebhookEmailReadPayload::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool WebhookEmailReadPayload::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void WebhookEmailReadPayload::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
}
}
}
}


