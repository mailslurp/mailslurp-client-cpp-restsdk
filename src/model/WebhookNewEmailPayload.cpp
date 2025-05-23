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



#include "CppRestOpenAPIClient/model/WebhookNewEmailPayload.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



WebhookNewEmailPayload::WebhookNewEmailPayload()
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
    m_DomainId = utility::conversions::to_string_t("");
    m_DomainIdIsSet = false;
    m_EmailId = utility::conversions::to_string_t("");
    m_EmailIdIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
    m_ToIsSet = false;
    m_From = utility::conversions::to_string_t("");
    m_FromIsSet = false;
    m_CcIsSet = false;
    m_BccIsSet = false;
    m_Subject = utility::conversions::to_string_t("");
    m_SubjectIsSet = false;
    m_AttachmentMetaDatasIsSet = false;
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
    if(m_DomainIdIsSet)
    {
        val[utility::conversions::to_string_t(U("domainId"))] = ModelBase::toJson(m_DomainId);
    }
    if(m_EmailIdIsSet)
    {
        val[utility::conversions::to_string_t(U("emailId"))] = ModelBase::toJson(m_EmailId);
    }
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t(U("createdAt"))] = ModelBase::toJson(m_CreatedAt);
    }
    if(m_ToIsSet)
    {
        val[utility::conversions::to_string_t(U("to"))] = ModelBase::toJson(m_To);
    }
    if(m_FromIsSet)
    {
        val[utility::conversions::to_string_t(U("from"))] = ModelBase::toJson(m_From);
    }
    if(m_CcIsSet)
    {
        val[utility::conversions::to_string_t(U("cc"))] = ModelBase::toJson(m_Cc);
    }
    if(m_BccIsSet)
    {
        val[utility::conversions::to_string_t(U("bcc"))] = ModelBase::toJson(m_Bcc);
    }
    if(m_SubjectIsSet)
    {
        val[utility::conversions::to_string_t(U("subject"))] = ModelBase::toJson(m_Subject);
    }
    if(m_AttachmentMetaDatasIsSet)
    {
        val[utility::conversions::to_string_t(U("attachmentMetaDatas"))] = ModelBase::toJson(m_AttachmentMetaDatas);
    }

    return val;
}

bool WebhookNewEmailPayload::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("domainId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("domainId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDomainId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDomainId);
            setDomainId(refVal_setDomainId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("emailId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("emailId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setEmailId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEmailId);
            setEmailId(refVal_setEmailId);
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
    if(val.has_field(utility::conversions::to_string_t(U("to"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("to")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setTo;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTo);
            setTo(refVal_setTo);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("from"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("from")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setFrom;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFrom);
            setFrom(refVal_setFrom);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("cc"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("cc")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setCc;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCc);
            setCc(refVal_setCc);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("bcc"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("bcc")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setBcc;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBcc);
            setBcc(refVal_setBcc);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("subject"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("subject")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSubject;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSubject);
            setSubject(refVal_setSubject);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("attachmentMetaDatas"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("attachmentMetaDatas")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<AttachmentMetaData>> refVal_setAttachmentMetaDatas;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAttachmentMetaDatas);
            setAttachmentMetaDatas(refVal_setAttachmentMetaDatas);
        }
    }
    return ok;
}

void WebhookNewEmailPayload::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_DomainIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("domainId")), m_DomainId));
    }
    if(m_EmailIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("emailId")), m_EmailId));
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("createdAt")), m_CreatedAt));
    }
    if(m_ToIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("to")), m_To));
    }
    if(m_FromIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("from")), m_From));
    }
    if(m_CcIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("cc")), m_Cc));
    }
    if(m_BccIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("bcc")), m_Bcc));
    }
    if(m_SubjectIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("subject")), m_Subject));
    }
    if(m_AttachmentMetaDatasIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("attachmentMetaDatas")), m_AttachmentMetaDatas));
    }
}

bool WebhookNewEmailPayload::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("domainId"))))
    {
        utility::string_t refVal_setDomainId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("domainId"))), refVal_setDomainId );
        setDomainId(refVal_setDomainId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("emailId"))))
    {
        utility::string_t refVal_setEmailId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("emailId"))), refVal_setEmailId );
        setEmailId(refVal_setEmailId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("createdAt"))))
    {
        utility::datetime refVal_setCreatedAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("createdAt"))), refVal_setCreatedAt );
        setCreatedAt(refVal_setCreatedAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("to"))))
    {
        std::vector<utility::string_t> refVal_setTo;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("to"))), refVal_setTo );
        setTo(refVal_setTo);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("from"))))
    {
        utility::string_t refVal_setFrom;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("from"))), refVal_setFrom );
        setFrom(refVal_setFrom);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("cc"))))
    {
        std::vector<utility::string_t> refVal_setCc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("cc"))), refVal_setCc );
        setCc(refVal_setCc);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("bcc"))))
    {
        std::vector<utility::string_t> refVal_setBcc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("bcc"))), refVal_setBcc );
        setBcc(refVal_setBcc);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("subject"))))
    {
        utility::string_t refVal_setSubject;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("subject"))), refVal_setSubject );
        setSubject(refVal_setSubject);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("attachmentMetaDatas"))))
    {
        std::vector<std::shared_ptr<AttachmentMetaData>> refVal_setAttachmentMetaDatas;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("attachmentMetaDatas"))), refVal_setAttachmentMetaDatas );
        setAttachmentMetaDatas(refVal_setAttachmentMetaDatas);
    }
    return ok;
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
utility::string_t WebhookNewEmailPayload::getDomainId() const
{
    return m_DomainId;
}

void WebhookNewEmailPayload::setDomainId(const utility::string_t& value)
{
    m_DomainId = value;
    m_DomainIdIsSet = true;
}

bool WebhookNewEmailPayload::domainIdIsSet() const
{
    return m_DomainIdIsSet;
}

void WebhookNewEmailPayload::unsetDomainId()
{
    m_DomainIdIsSet = false;
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
}
}
}
}


