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



#include "WebhookEmailOpenedPayload.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




WebhookEmailOpenedPayload::WebhookEmailOpenedPayload()
{
    m_MessageId = utility::conversions::to_string_t("");
    m_MessageIdIsSet = false;
    m_WebhookId = utility::conversions::to_string_t("");
    m_WebhookIdIsSet = false;
    m_EventName = utility::conversions::to_string_t("");
    m_EventNameIsSet = false;
    m_WebhookName = utility::conversions::to_string_t("");
    m_WebhookNameIsSet = false;
    m_InboxId = utility::conversions::to_string_t("");
    m_InboxIdIsSet = false;
    m_PixelId = utility::conversions::to_string_t("");
    m_PixelIdIsSet = false;
    m_SentEmailId = utility::conversions::to_string_t("");
    m_SentEmailIdIsSet = false;
    m_Recipient = utility::conversions::to_string_t("");
    m_RecipientIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
}

WebhookEmailOpenedPayload::~WebhookEmailOpenedPayload()
{
}

void WebhookEmailOpenedPayload::validate()
{
    // TODO: implement validation
}

web::json::value WebhookEmailOpenedPayload::toJson() const
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
    if(m_InboxIdIsSet)
    {
        val[utility::conversions::to_string_t("inboxId")] = ModelBase::toJson(m_InboxId);
    }
    if(m_PixelIdIsSet)
    {
        val[utility::conversions::to_string_t("pixelId")] = ModelBase::toJson(m_PixelId);
    }
    if(m_SentEmailIdIsSet)
    {
        val[utility::conversions::to_string_t("sentEmailId")] = ModelBase::toJson(m_SentEmailId);
    }
    if(m_RecipientIsSet)
    {
        val[utility::conversions::to_string_t("recipient")] = ModelBase::toJson(m_Recipient);
    }
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t("createdAt")] = ModelBase::toJson(m_CreatedAt);
    }

    return val;
}

bool WebhookEmailOpenedPayload::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("pixelId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pixelId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_pixelId;
            ok &= ModelBase::fromJson(fieldValue, refVal_pixelId);
            setPixelId(refVal_pixelId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sentEmailId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sentEmailId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sentEmailId;
            ok &= ModelBase::fromJson(fieldValue, refVal_sentEmailId);
            setSentEmailId(refVal_sentEmailId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("recipient")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recipient"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_recipient;
            ok &= ModelBase::fromJson(fieldValue, refVal_recipient);
            setRecipient(refVal_recipient);
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

void WebhookEmailOpenedPayload::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_InboxIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("inboxId"), m_InboxId));
    }
    if(m_PixelIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("pixelId"), m_PixelId));
    }
    if(m_SentEmailIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sentEmailId"), m_SentEmailId));
    }
    if(m_RecipientIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("recipient"), m_Recipient));
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("createdAt"), m_CreatedAt));
    }
}

bool WebhookEmailOpenedPayload::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("inboxId")))
    {
        utility::string_t refVal_inboxId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("inboxId")), refVal_inboxId );
        setInboxId(refVal_inboxId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("pixelId")))
    {
        utility::string_t refVal_pixelId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("pixelId")), refVal_pixelId );
        setPixelId(refVal_pixelId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sentEmailId")))
    {
        utility::string_t refVal_sentEmailId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sentEmailId")), refVal_sentEmailId );
        setSentEmailId(refVal_sentEmailId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("recipient")))
    {
        utility::string_t refVal_recipient;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("recipient")), refVal_recipient );
        setRecipient(refVal_recipient);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("createdAt")))
    {
        utility::datetime refVal_createdAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("createdAt")), refVal_createdAt );
        setCreatedAt(refVal_createdAt);
    }
    return ok;
}

utility::string_t WebhookEmailOpenedPayload::getMessageId() const
{
    return m_MessageId;
}

void WebhookEmailOpenedPayload::setMessageId(const utility::string_t& value)
{
    m_MessageId = value;
    m_MessageIdIsSet = true;
}

bool WebhookEmailOpenedPayload::messageIdIsSet() const
{
    return m_MessageIdIsSet;
}

void WebhookEmailOpenedPayload::unsetMessageId()
{
    m_MessageIdIsSet = false;
}
utility::string_t WebhookEmailOpenedPayload::getWebhookId() const
{
    return m_WebhookId;
}

void WebhookEmailOpenedPayload::setWebhookId(const utility::string_t& value)
{
    m_WebhookId = value;
    m_WebhookIdIsSet = true;
}

bool WebhookEmailOpenedPayload::webhookIdIsSet() const
{
    return m_WebhookIdIsSet;
}

void WebhookEmailOpenedPayload::unsetWebhookId()
{
    m_WebhookIdIsSet = false;
}
utility::string_t WebhookEmailOpenedPayload::getEventName() const
{
    return m_EventName;
}

void WebhookEmailOpenedPayload::setEventName(const utility::string_t& value)
{
    m_EventName = value;
    m_EventNameIsSet = true;
}

bool WebhookEmailOpenedPayload::eventNameIsSet() const
{
    return m_EventNameIsSet;
}

void WebhookEmailOpenedPayload::unsetEventName()
{
    m_EventNameIsSet = false;
}
utility::string_t WebhookEmailOpenedPayload::getWebhookName() const
{
    return m_WebhookName;
}

void WebhookEmailOpenedPayload::setWebhookName(const utility::string_t& value)
{
    m_WebhookName = value;
    m_WebhookNameIsSet = true;
}

bool WebhookEmailOpenedPayload::webhookNameIsSet() const
{
    return m_WebhookNameIsSet;
}

void WebhookEmailOpenedPayload::unsetWebhookName()
{
    m_WebhookNameIsSet = false;
}
utility::string_t WebhookEmailOpenedPayload::getInboxId() const
{
    return m_InboxId;
}

void WebhookEmailOpenedPayload::setInboxId(const utility::string_t& value)
{
    m_InboxId = value;
    m_InboxIdIsSet = true;
}

bool WebhookEmailOpenedPayload::inboxIdIsSet() const
{
    return m_InboxIdIsSet;
}

void WebhookEmailOpenedPayload::unsetInboxId()
{
    m_InboxIdIsSet = false;
}
utility::string_t WebhookEmailOpenedPayload::getPixelId() const
{
    return m_PixelId;
}

void WebhookEmailOpenedPayload::setPixelId(const utility::string_t& value)
{
    m_PixelId = value;
    m_PixelIdIsSet = true;
}

bool WebhookEmailOpenedPayload::pixelIdIsSet() const
{
    return m_PixelIdIsSet;
}

void WebhookEmailOpenedPayload::unsetPixelId()
{
    m_PixelIdIsSet = false;
}
utility::string_t WebhookEmailOpenedPayload::getSentEmailId() const
{
    return m_SentEmailId;
}

void WebhookEmailOpenedPayload::setSentEmailId(const utility::string_t& value)
{
    m_SentEmailId = value;
    m_SentEmailIdIsSet = true;
}

bool WebhookEmailOpenedPayload::sentEmailIdIsSet() const
{
    return m_SentEmailIdIsSet;
}

void WebhookEmailOpenedPayload::unsetSentEmailId()
{
    m_SentEmailIdIsSet = false;
}
utility::string_t WebhookEmailOpenedPayload::getRecipient() const
{
    return m_Recipient;
}

void WebhookEmailOpenedPayload::setRecipient(const utility::string_t& value)
{
    m_Recipient = value;
    m_RecipientIsSet = true;
}

bool WebhookEmailOpenedPayload::recipientIsSet() const
{
    return m_RecipientIsSet;
}

void WebhookEmailOpenedPayload::unsetRecipient()
{
    m_RecipientIsSet = false;
}
utility::datetime WebhookEmailOpenedPayload::getCreatedAt() const
{
    return m_CreatedAt;
}

void WebhookEmailOpenedPayload::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool WebhookEmailOpenedPayload::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void WebhookEmailOpenedPayload::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
}
}
}
}


