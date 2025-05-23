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



#include "CppRestOpenAPIClient/model/WebhookEmailOpenedPayload.h"

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
        val[utility::conversions::to_string_t(U("messageId"))] = ModelBase::toJson(m_MessageId);
    }
    if(m_WebhookIdIsSet)
    {
        val[utility::conversions::to_string_t(U("webhookId"))] = ModelBase::toJson(m_WebhookId);
    }
    if(m_EventNameIsSet)
    {
        val[utility::conversions::to_string_t(U("eventName"))] = ModelBase::toJson(m_EventName);
    }
    if(m_WebhookNameIsSet)
    {
        val[utility::conversions::to_string_t(U("webhookName"))] = ModelBase::toJson(m_WebhookName);
    }
    if(m_InboxIdIsSet)
    {
        val[utility::conversions::to_string_t(U("inboxId"))] = ModelBase::toJson(m_InboxId);
    }
    if(m_PixelIdIsSet)
    {
        val[utility::conversions::to_string_t(U("pixelId"))] = ModelBase::toJson(m_PixelId);
    }
    if(m_SentEmailIdIsSet)
    {
        val[utility::conversions::to_string_t(U("sentEmailId"))] = ModelBase::toJson(m_SentEmailId);
    }
    if(m_RecipientIsSet)
    {
        val[utility::conversions::to_string_t(U("recipient"))] = ModelBase::toJson(m_Recipient);
    }
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t(U("createdAt"))] = ModelBase::toJson(m_CreatedAt);
    }

    return val;
}

bool WebhookEmailOpenedPayload::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("messageId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("messageId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setMessageId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMessageId);
            setMessageId(refVal_setMessageId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("webhookId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("webhookId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setWebhookId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setWebhookId);
            setWebhookId(refVal_setWebhookId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("eventName"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("eventName")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setEventName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEventName);
            setEventName(refVal_setEventName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("webhookName"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("webhookName")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setWebhookName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setWebhookName);
            setWebhookName(refVal_setWebhookName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("inboxId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("inboxId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setInboxId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setInboxId);
            setInboxId(refVal_setInboxId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("pixelId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("pixelId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setPixelId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPixelId);
            setPixelId(refVal_setPixelId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("sentEmailId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("sentEmailId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSentEmailId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSentEmailId);
            setSentEmailId(refVal_setSentEmailId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("recipient"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("recipient")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setRecipient;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRecipient);
            setRecipient(refVal_setRecipient);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("createdAt"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("createdAt")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setCreatedAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCreatedAt);
            setCreatedAt(refVal_setCreatedAt);
        }
    }
    return ok;
}

void WebhookEmailOpenedPayload::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_MessageIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("messageId")), m_MessageId));
    }
    if(m_WebhookIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("webhookId")), m_WebhookId));
    }
    if(m_EventNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("eventName")), m_EventName));
    }
    if(m_WebhookNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("webhookName")), m_WebhookName));
    }
    if(m_InboxIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("inboxId")), m_InboxId));
    }
    if(m_PixelIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("pixelId")), m_PixelId));
    }
    if(m_SentEmailIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("sentEmailId")), m_SentEmailId));
    }
    if(m_RecipientIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("recipient")), m_Recipient));
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("createdAt")), m_CreatedAt));
    }
}

bool WebhookEmailOpenedPayload::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("messageId"))))
    {
        utility::string_t refVal_setMessageId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("messageId"))), refVal_setMessageId );
        setMessageId(refVal_setMessageId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("webhookId"))))
    {
        utility::string_t refVal_setWebhookId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("webhookId"))), refVal_setWebhookId );
        setWebhookId(refVal_setWebhookId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("eventName"))))
    {
        utility::string_t refVal_setEventName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("eventName"))), refVal_setEventName );
        setEventName(refVal_setEventName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("webhookName"))))
    {
        utility::string_t refVal_setWebhookName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("webhookName"))), refVal_setWebhookName );
        setWebhookName(refVal_setWebhookName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("inboxId"))))
    {
        utility::string_t refVal_setInboxId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("inboxId"))), refVal_setInboxId );
        setInboxId(refVal_setInboxId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("pixelId"))))
    {
        utility::string_t refVal_setPixelId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("pixelId"))), refVal_setPixelId );
        setPixelId(refVal_setPixelId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("sentEmailId"))))
    {
        utility::string_t refVal_setSentEmailId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("sentEmailId"))), refVal_setSentEmailId );
        setSentEmailId(refVal_setSentEmailId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("recipient"))))
    {
        utility::string_t refVal_setRecipient;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("recipient"))), refVal_setRecipient );
        setRecipient(refVal_setRecipient);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("createdAt"))))
    {
        utility::datetime refVal_setCreatedAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("createdAt"))), refVal_setCreatedAt );
        setCreatedAt(refVal_setCreatedAt);
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


