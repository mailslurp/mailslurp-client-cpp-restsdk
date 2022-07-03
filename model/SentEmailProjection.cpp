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



#include "SentEmailProjection.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




SentEmailProjection::SentEmailProjection()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_From = utility::conversions::to_string_t("");
    m_FromIsSet = false;
    m_UserId = utility::conversions::to_string_t("");
    m_UserIdIsSet = false;
    m_Subject = utility::conversions::to_string_t("");
    m_SubjectIsSet = false;
    m_InboxId = utility::conversions::to_string_t("");
    m_InboxIdIsSet = false;
    m_AttachmentsIsSet = false;
    m_ToIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
    m_BccIsSet = false;
    m_CcIsSet = false;
    m_BodyMD5Hash = utility::conversions::to_string_t("");
    m_BodyMD5HashIsSet = false;
    m_VirtualSend = false;
    m_VirtualSendIsSet = false;
}

SentEmailProjection::~SentEmailProjection()
{
}

void SentEmailProjection::validate()
{
    // TODO: implement validation
}

web::json::value SentEmailProjection::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_FromIsSet)
    {
        val[utility::conversions::to_string_t("from")] = ModelBase::toJson(m_From);
    }
    if(m_UserIdIsSet)
    {
        val[utility::conversions::to_string_t("userId")] = ModelBase::toJson(m_UserId);
    }
    if(m_SubjectIsSet)
    {
        val[utility::conversions::to_string_t("subject")] = ModelBase::toJson(m_Subject);
    }
    if(m_InboxIdIsSet)
    {
        val[utility::conversions::to_string_t("inboxId")] = ModelBase::toJson(m_InboxId);
    }
    if(m_AttachmentsIsSet)
    {
        val[utility::conversions::to_string_t("attachments")] = ModelBase::toJson(m_Attachments);
    }
    if(m_ToIsSet)
    {
        val[utility::conversions::to_string_t("to")] = ModelBase::toJson(m_To);
    }
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t("createdAt")] = ModelBase::toJson(m_CreatedAt);
    }
    if(m_BccIsSet)
    {
        val[utility::conversions::to_string_t("bcc")] = ModelBase::toJson(m_Bcc);
    }
    if(m_CcIsSet)
    {
        val[utility::conversions::to_string_t("cc")] = ModelBase::toJson(m_Cc);
    }
    if(m_BodyMD5HashIsSet)
    {
        val[utility::conversions::to_string_t("bodyMD5Hash")] = ModelBase::toJson(m_BodyMD5Hash);
    }
    if(m_VirtualSendIsSet)
    {
        val[utility::conversions::to_string_t("virtualSend")] = ModelBase::toJson(m_VirtualSend);
    }

    return val;
}

bool SentEmailProjection::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("attachments")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attachments"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_attachments;
            ok &= ModelBase::fromJson(fieldValue, refVal_attachments);
            setAttachments(refVal_attachments);
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
    if(val.has_field(utility::conversions::to_string_t("bodyMD5Hash")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bodyMD5Hash"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_bodyMD5Hash;
            ok &= ModelBase::fromJson(fieldValue, refVal_bodyMD5Hash);
            setBodyMD5Hash(refVal_bodyMD5Hash);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("virtualSend")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("virtualSend"));
        if(!fieldValue.is_null())
        {
            bool refVal_virtualSend;
            ok &= ModelBase::fromJson(fieldValue, refVal_virtualSend);
            setVirtualSend(refVal_virtualSend);
        }
    }
    return ok;
}

void SentEmailProjection::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_FromIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("from"), m_From));
    }
    if(m_UserIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("userId"), m_UserId));
    }
    if(m_SubjectIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("subject"), m_Subject));
    }
    if(m_InboxIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("inboxId"), m_InboxId));
    }
    if(m_AttachmentsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("attachments"), m_Attachments));
    }
    if(m_ToIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("to"), m_To));
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("createdAt"), m_CreatedAt));
    }
    if(m_BccIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("bcc"), m_Bcc));
    }
    if(m_CcIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("cc"), m_Cc));
    }
    if(m_BodyMD5HashIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("bodyMD5Hash"), m_BodyMD5Hash));
    }
    if(m_VirtualSendIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("virtualSend"), m_VirtualSend));
    }
}

bool SentEmailProjection::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("from")))
    {
        utility::string_t refVal_from;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("from")), refVal_from );
        setFrom(refVal_from);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("userId")))
    {
        utility::string_t refVal_userId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("userId")), refVal_userId );
        setUserId(refVal_userId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("subject")))
    {
        utility::string_t refVal_subject;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("subject")), refVal_subject );
        setSubject(refVal_subject);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("inboxId")))
    {
        utility::string_t refVal_inboxId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("inboxId")), refVal_inboxId );
        setInboxId(refVal_inboxId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("attachments")))
    {
        std::vector<utility::string_t> refVal_attachments;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("attachments")), refVal_attachments );
        setAttachments(refVal_attachments);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("to")))
    {
        std::vector<utility::string_t> refVal_to;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("to")), refVal_to );
        setTo(refVal_to);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("createdAt")))
    {
        utility::datetime refVal_createdAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("createdAt")), refVal_createdAt );
        setCreatedAt(refVal_createdAt);
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
    if(multipart->hasContent(utility::conversions::to_string_t("bodyMD5Hash")))
    {
        utility::string_t refVal_bodyMD5Hash;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("bodyMD5Hash")), refVal_bodyMD5Hash );
        setBodyMD5Hash(refVal_bodyMD5Hash);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("virtualSend")))
    {
        bool refVal_virtualSend;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("virtualSend")), refVal_virtualSend );
        setVirtualSend(refVal_virtualSend);
    }
    return ok;
}

utility::string_t SentEmailProjection::getId() const
{
    return m_Id;
}

void SentEmailProjection::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool SentEmailProjection::idIsSet() const
{
    return m_IdIsSet;
}

void SentEmailProjection::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t SentEmailProjection::getFrom() const
{
    return m_From;
}

void SentEmailProjection::setFrom(const utility::string_t& value)
{
    m_From = value;
    m_FromIsSet = true;
}

bool SentEmailProjection::fromIsSet() const
{
    return m_FromIsSet;
}

void SentEmailProjection::unsetFrom()
{
    m_FromIsSet = false;
}
utility::string_t SentEmailProjection::getUserId() const
{
    return m_UserId;
}

void SentEmailProjection::setUserId(const utility::string_t& value)
{
    m_UserId = value;
    m_UserIdIsSet = true;
}

bool SentEmailProjection::userIdIsSet() const
{
    return m_UserIdIsSet;
}

void SentEmailProjection::unsetUserId()
{
    m_UserIdIsSet = false;
}
utility::string_t SentEmailProjection::getSubject() const
{
    return m_Subject;
}

void SentEmailProjection::setSubject(const utility::string_t& value)
{
    m_Subject = value;
    m_SubjectIsSet = true;
}

bool SentEmailProjection::subjectIsSet() const
{
    return m_SubjectIsSet;
}

void SentEmailProjection::unsetSubject()
{
    m_SubjectIsSet = false;
}
utility::string_t SentEmailProjection::getInboxId() const
{
    return m_InboxId;
}

void SentEmailProjection::setInboxId(const utility::string_t& value)
{
    m_InboxId = value;
    m_InboxIdIsSet = true;
}

bool SentEmailProjection::inboxIdIsSet() const
{
    return m_InboxIdIsSet;
}

void SentEmailProjection::unsetInboxId()
{
    m_InboxIdIsSet = false;
}
std::vector<utility::string_t>& SentEmailProjection::getAttachments()
{
    return m_Attachments;
}

void SentEmailProjection::setAttachments(const std::vector<utility::string_t>& value)
{
    m_Attachments = value;
    m_AttachmentsIsSet = true;
}

bool SentEmailProjection::attachmentsIsSet() const
{
    return m_AttachmentsIsSet;
}

void SentEmailProjection::unsetAttachments()
{
    m_AttachmentsIsSet = false;
}
std::vector<utility::string_t>& SentEmailProjection::getTo()
{
    return m_To;
}

void SentEmailProjection::setTo(const std::vector<utility::string_t>& value)
{
    m_To = value;
    m_ToIsSet = true;
}

bool SentEmailProjection::toIsSet() const
{
    return m_ToIsSet;
}

void SentEmailProjection::unsetTo()
{
    m_ToIsSet = false;
}
utility::datetime SentEmailProjection::getCreatedAt() const
{
    return m_CreatedAt;
}

void SentEmailProjection::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool SentEmailProjection::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void SentEmailProjection::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
std::vector<utility::string_t>& SentEmailProjection::getBcc()
{
    return m_Bcc;
}

void SentEmailProjection::setBcc(const std::vector<utility::string_t>& value)
{
    m_Bcc = value;
    m_BccIsSet = true;
}

bool SentEmailProjection::bccIsSet() const
{
    return m_BccIsSet;
}

void SentEmailProjection::unsetBcc()
{
    m_BccIsSet = false;
}
std::vector<utility::string_t>& SentEmailProjection::getCc()
{
    return m_Cc;
}

void SentEmailProjection::setCc(const std::vector<utility::string_t>& value)
{
    m_Cc = value;
    m_CcIsSet = true;
}

bool SentEmailProjection::ccIsSet() const
{
    return m_CcIsSet;
}

void SentEmailProjection::unsetCc()
{
    m_CcIsSet = false;
}
utility::string_t SentEmailProjection::getBodyMD5Hash() const
{
    return m_BodyMD5Hash;
}

void SentEmailProjection::setBodyMD5Hash(const utility::string_t& value)
{
    m_BodyMD5Hash = value;
    m_BodyMD5HashIsSet = true;
}

bool SentEmailProjection::bodyMD5HashIsSet() const
{
    return m_BodyMD5HashIsSet;
}

void SentEmailProjection::unsetBodyMD5Hash()
{
    m_BodyMD5HashIsSet = false;
}
bool SentEmailProjection::isVirtualSend() const
{
    return m_VirtualSend;
}

void SentEmailProjection::setVirtualSend(bool value)
{
    m_VirtualSend = value;
    m_VirtualSendIsSet = true;
}

bool SentEmailProjection::virtualSendIsSet() const
{
    return m_VirtualSendIsSet;
}

void SentEmailProjection::unsetVirtualSend()
{
    m_VirtualSendIsSet = false;
}
}
}
}
}


