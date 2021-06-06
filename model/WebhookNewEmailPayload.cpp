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



#include "WebhookNewEmailPayload.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




WebhookNewEmailPayload::WebhookNewEmailPayload()
{
    m_AttachmentMetaDatasIsSet = false;
    m_BccIsSet = false;
    m_CcIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
    m_EmailId = utility::conversions::to_string_t("");
    m_EmailIdIsSet = false;
    m_EventName = utility::conversions::to_string_t("");
    m_EventNameIsSet = false;
    m_From = utility::conversions::to_string_t("");
    m_FromIsSet = false;
    m_InboxId = utility::conversions::to_string_t("");
    m_InboxIdIsSet = false;
    m_MessageId = utility::conversions::to_string_t("");
    m_MessageIdIsSet = false;
    m_Subject = utility::conversions::to_string_t("");
    m_SubjectIsSet = false;
    m_ToIsSet = false;
    m_WebhookId = utility::conversions::to_string_t("");
    m_WebhookIdIsSet = false;
    m_WebhookName = utility::conversions::to_string_t("");
    m_WebhookNameIsSet = false;
}

WebhookNewEmailPayload::~WebhookNewEmailPayload()
{
}

void WebhookNewEmailPayload::validate()
{
    // TODO: implement validation
}

web::json::value WebhookNewEmailPayload::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_AttachmentMetaDatasIsSet)
    {
        val[utility::conversions::to_string_t("attachmentMetaDatas")] = ModelBase::toJson(m_AttachmentMetaDatas);
    }
    if(m_BccIsSet)
    {
        val[utility::conversions::to_string_t("bcc")] = ModelBase::toJson(m_Bcc);
    }
    if(m_CcIsSet)
    {
        val[utility::conversions::to_string_t("cc")] = ModelBase::toJson(m_Cc);
    }
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t("createdAt")] = ModelBase::toJson(m_CreatedAt);
    }
    if(m_EmailIdIsSet)
    {
        val[utility::conversions::to_string_t("emailId")] = ModelBase::toJson(m_EmailId);
    }
    if(m_EventNameIsSet)
    {
        val[utility::conversions::to_string_t("eventName")] = ModelBase::toJson(m_EventName);
    }
    if(m_FromIsSet)
    {
        val[utility::conversions::to_string_t("from")] = ModelBase::toJson(m_From);
    }
    if(m_InboxIdIsSet)
    {
        val[utility::conversions::to_string_t("inboxId")] = ModelBase::toJson(m_InboxId);
    }
    if(m_MessageIdIsSet)
    {
        val[utility::conversions::to_string_t("messageId")] = ModelBase::toJson(m_MessageId);
    }
    if(m_SubjectIsSet)
    {
        val[utility::conversions::to_string_t("subject")] = ModelBase::toJson(m_Subject);
    }
    if(m_ToIsSet)
    {
        val[utility::conversions::to_string_t("to")] = ModelBase::toJson(m_To);
    }
    if(m_WebhookIdIsSet)
    {
        val[utility::conversions::to_string_t("webhookId")] = ModelBase::toJson(m_WebhookId);
    }
    if(m_WebhookNameIsSet)
    {
        val[utility::conversions::to_string_t("webhookName")] = ModelBase::toJson(m_WebhookName);
    }

    return val;
}

bool WebhookNewEmailPayload::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("attachmentMetaDatas")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attachmentMetaDatas"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<AttachmentMetaData>> refVal_attachmentMetaDatas;
            ok &= ModelBase::fromJson(fieldValue, refVal_attachmentMetaDatas);
            setAttachmentMetaDatas(refVal_attachmentMetaDatas);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bcc")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bcc"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_bcc;
            ok &= ModelBase::fromJson(fieldValue, refVal_bcc);
            setBcc(refVal_bcc);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cc")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cc"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_cc;
            ok &= ModelBase::fromJson(fieldValue, refVal_cc);
            setCc(refVal_cc);
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
    if(val.has_field(utility::conversions::to_string_t("from")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("from"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_from;
            ok &= ModelBase::fromJson(fieldValue, refVal_from);
            setFrom(refVal_from);
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
    if(val.has_field(utility::conversions::to_string_t("subject")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subject"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_subject;
            ok &= ModelBase::fromJson(fieldValue, refVal_subject);
            setSubject(refVal_subject);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("to")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("to"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_to;
            ok &= ModelBase::fromJson(fieldValue, refVal_to);
            setTo(refVal_to);
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

void WebhookNewEmailPayload::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_AttachmentMetaDatasIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("attachmentMetaDatas"), m_AttachmentMetaDatas));
    }
    if(m_BccIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("bcc"), m_Bcc));
    }
    if(m_CcIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("cc"), m_Cc));
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("createdAt"), m_CreatedAt));
    }
    if(m_EmailIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("emailId"), m_EmailId));
    }
    if(m_EventNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("eventName"), m_EventName));
    }
    if(m_FromIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("from"), m_From));
    }
    if(m_InboxIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("inboxId"), m_InboxId));
    }
    if(m_MessageIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("messageId"), m_MessageId));
    }
    if(m_SubjectIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("subject"), m_Subject));
    }
    if(m_ToIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("to"), m_To));
    }
    if(m_WebhookIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("webhookId"), m_WebhookId));
    }
    if(m_WebhookNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("webhookName"), m_WebhookName));
    }
}

bool WebhookNewEmailPayload::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("attachmentMetaDatas")))
    {
        std::vector<std::shared_ptr<AttachmentMetaData>> refVal_attachmentMetaDatas;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("attachmentMetaDatas")), refVal_attachmentMetaDatas );
        setAttachmentMetaDatas(refVal_attachmentMetaDatas);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("bcc")))
    {
        std::vector<utility::string_t> refVal_bcc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("bcc")), refVal_bcc );
        setBcc(refVal_bcc);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("cc")))
    {
        std::vector<utility::string_t> refVal_cc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("cc")), refVal_cc );
        setCc(refVal_cc);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("createdAt")))
    {
        utility::datetime refVal_createdAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("createdAt")), refVal_createdAt );
        setCreatedAt(refVal_createdAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("emailId")))
    {
        utility::string_t refVal_emailId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("emailId")), refVal_emailId );
        setEmailId(refVal_emailId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("eventName")))
    {
        utility::string_t refVal_eventName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("eventName")), refVal_eventName );
        setEventName(refVal_eventName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("from")))
    {
        utility::string_t refVal_from;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("from")), refVal_from );
        setFrom(refVal_from);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("inboxId")))
    {
        utility::string_t refVal_inboxId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("inboxId")), refVal_inboxId );
        setInboxId(refVal_inboxId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("messageId")))
    {
        utility::string_t refVal_messageId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("messageId")), refVal_messageId );
        setMessageId(refVal_messageId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("subject")))
    {
        utility::string_t refVal_subject;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("subject")), refVal_subject );
        setSubject(refVal_subject);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("to")))
    {
        std::vector<utility::string_t> refVal_to;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("to")), refVal_to );
        setTo(refVal_to);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("webhookId")))
    {
        utility::string_t refVal_webhookId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("webhookId")), refVal_webhookId );
        setWebhookId(refVal_webhookId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("webhookName")))
    {
        utility::string_t refVal_webhookName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("webhookName")), refVal_webhookName );
        setWebhookName(refVal_webhookName);
    }
    return ok;
}

std::vector<std::shared_ptr<AttachmentMetaData>>& WebhookNewEmailPayload::getAttachmentMetaDatas()
{
    return m_AttachmentMetaDatas;
}

void WebhookNewEmailPayload::setAttachmentMetaDatas(const std::vector<std::shared_ptr<AttachmentMetaData>>& value)
{
    m_AttachmentMetaDatas = value;
    m_AttachmentMetaDatasIsSet = true;
}

bool WebhookNewEmailPayload::attachmentMetaDatasIsSet() const
{
    return m_AttachmentMetaDatasIsSet;
}

void WebhookNewEmailPayload::unsetAttachmentMetaDatas()
{
    m_AttachmentMetaDatasIsSet = false;
}
std::vector<utility::string_t>& WebhookNewEmailPayload::getBcc()
{
    return m_Bcc;
}

void WebhookNewEmailPayload::setBcc(const std::vector<utility::string_t>& value)
{
    m_Bcc = value;
    m_BccIsSet = true;
}

bool WebhookNewEmailPayload::bccIsSet() const
{
    return m_BccIsSet;
}

void WebhookNewEmailPayload::unsetBcc()
{
    m_BccIsSet = false;
}
std::vector<utility::string_t>& WebhookNewEmailPayload::getCc()
{
    return m_Cc;
}

void WebhookNewEmailPayload::setCc(const std::vector<utility::string_t>& value)
{
    m_Cc = value;
    m_CcIsSet = true;
}

bool WebhookNewEmailPayload::ccIsSet() const
{
    return m_CcIsSet;
}

void WebhookNewEmailPayload::unsetCc()
{
    m_CcIsSet = false;
}
utility::datetime WebhookNewEmailPayload::getCreatedAt() const
{
    return m_CreatedAt;
}

void WebhookNewEmailPayload::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool WebhookNewEmailPayload::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void WebhookNewEmailPayload::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
utility::string_t WebhookNewEmailPayload::getEmailId() const
{
    return m_EmailId;
}

void WebhookNewEmailPayload::setEmailId(const utility::string_t& value)
{
    m_EmailId = value;
    m_EmailIdIsSet = true;
}

bool WebhookNewEmailPayload::emailIdIsSet() const
{
    return m_EmailIdIsSet;
}

void WebhookNewEmailPayload::unsetEmailId()
{
    m_EmailIdIsSet = false;
}
utility::string_t WebhookNewEmailPayload::getEventName() const
{
    return m_EventName;
}

void WebhookNewEmailPayload::setEventName(const utility::string_t& value)
{
    m_EventName = value;
    m_EventNameIsSet = true;
}

bool WebhookNewEmailPayload::eventNameIsSet() const
{
    return m_EventNameIsSet;
}

void WebhookNewEmailPayload::unsetEventName()
{
    m_EventNameIsSet = false;
}
utility::string_t WebhookNewEmailPayload::getFrom() const
{
    return m_From;
}

void WebhookNewEmailPayload::setFrom(const utility::string_t& value)
{
    m_From = value;
    m_FromIsSet = true;
}

bool WebhookNewEmailPayload::fromIsSet() const
{
    return m_FromIsSet;
}

void WebhookNewEmailPayload::unsetFrom()
{
    m_FromIsSet = false;
}
utility::string_t WebhookNewEmailPayload::getInboxId() const
{
    return m_InboxId;
}

void WebhookNewEmailPayload::setInboxId(const utility::string_t& value)
{
    m_InboxId = value;
    m_InboxIdIsSet = true;
}

bool WebhookNewEmailPayload::inboxIdIsSet() const
{
    return m_InboxIdIsSet;
}

void WebhookNewEmailPayload::unsetInboxId()
{
    m_InboxIdIsSet = false;
}
utility::string_t WebhookNewEmailPayload::getMessageId() const
{
    return m_MessageId;
}

void WebhookNewEmailPayload::setMessageId(const utility::string_t& value)
{
    m_MessageId = value;
    m_MessageIdIsSet = true;
}

bool WebhookNewEmailPayload::messageIdIsSet() const
{
    return m_MessageIdIsSet;
}

void WebhookNewEmailPayload::unsetMessageId()
{
    m_MessageIdIsSet = false;
}
utility::string_t WebhookNewEmailPayload::getSubject() const
{
    return m_Subject;
}

void WebhookNewEmailPayload::setSubject(const utility::string_t& value)
{
    m_Subject = value;
    m_SubjectIsSet = true;
}

bool WebhookNewEmailPayload::subjectIsSet() const
{
    return m_SubjectIsSet;
}

void WebhookNewEmailPayload::unsetSubject()
{
    m_SubjectIsSet = false;
}
std::vector<utility::string_t>& WebhookNewEmailPayload::getTo()
{
    return m_To;
}

void WebhookNewEmailPayload::setTo(const std::vector<utility::string_t>& value)
{
    m_To = value;
    m_ToIsSet = true;
}

bool WebhookNewEmailPayload::toIsSet() const
{
    return m_ToIsSet;
}

void WebhookNewEmailPayload::unsetTo()
{
    m_ToIsSet = false;
}
utility::string_t WebhookNewEmailPayload::getWebhookId() const
{
    return m_WebhookId;
}

void WebhookNewEmailPayload::setWebhookId(const utility::string_t& value)
{
    m_WebhookId = value;
    m_WebhookIdIsSet = true;
}

bool WebhookNewEmailPayload::webhookIdIsSet() const
{
    return m_WebhookIdIsSet;
}

void WebhookNewEmailPayload::unsetWebhookId()
{
    m_WebhookIdIsSet = false;
}
utility::string_t WebhookNewEmailPayload::getWebhookName() const
{
    return m_WebhookName;
}

void WebhookNewEmailPayload::setWebhookName(const utility::string_t& value)
{
    m_WebhookName = value;
    m_WebhookNameIsSet = true;
}

bool WebhookNewEmailPayload::webhookNameIsSet() const
{
    return m_WebhookNameIsSet;
}

void WebhookNewEmailPayload::unsetWebhookName()
{
    m_WebhookNameIsSet = false;
}
}
}
}
}

