/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://docs.mailslurp.com/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.2.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOpenAPIClient/model/SentEmailProjection.h"

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
    m_AttachmentsIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
    m_InboxId = utility::conversions::to_string_t("");
    m_InboxIdIsSet = false;
    m_ToIsSet = false;
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
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_FromIsSet)
    {
        val[utility::conversions::to_string_t(U("from"))] = ModelBase::toJson(m_From);
    }
    if(m_UserIdIsSet)
    {
        val[utility::conversions::to_string_t(U("userId"))] = ModelBase::toJson(m_UserId);
    }
    if(m_SubjectIsSet)
    {
        val[utility::conversions::to_string_t(U("subject"))] = ModelBase::toJson(m_Subject);
    }
    if(m_AttachmentsIsSet)
    {
        val[utility::conversions::to_string_t(U("attachments"))] = ModelBase::toJson(m_Attachments);
    }
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t(U("createdAt"))] = ModelBase::toJson(m_CreatedAt);
    }
    if(m_InboxIdIsSet)
    {
        val[utility::conversions::to_string_t(U("inboxId"))] = ModelBase::toJson(m_InboxId);
    }
    if(m_ToIsSet)
    {
        val[utility::conversions::to_string_t(U("to"))] = ModelBase::toJson(m_To);
    }
    if(m_BccIsSet)
    {
        val[utility::conversions::to_string_t(U("bcc"))] = ModelBase::toJson(m_Bcc);
    }
    if(m_CcIsSet)
    {
        val[utility::conversions::to_string_t(U("cc"))] = ModelBase::toJson(m_Cc);
    }
    if(m_BodyMD5HashIsSet)
    {
        val[utility::conversions::to_string_t(U("bodyMD5Hash"))] = ModelBase::toJson(m_BodyMD5Hash);
    }
    if(m_VirtualSendIsSet)
    {
        val[utility::conversions::to_string_t(U("virtualSend"))] = ModelBase::toJson(m_VirtualSend);
    }

    return val;
}

bool SentEmailProjection::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setId);
            setId(refVal_setId);
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
    if(val.has_field(utility::conversions::to_string_t(U("userId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("userId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setUserId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUserId);
            setUserId(refVal_setUserId);
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
    if(val.has_field(utility::conversions::to_string_t(U("attachments"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("attachments")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setAttachments;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAttachments);
            setAttachments(refVal_setAttachments);
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
    if(val.has_field(utility::conversions::to_string_t(U("bodyMD5Hash"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("bodyMD5Hash")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setBodyMD5Hash;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBodyMD5Hash);
            setBodyMD5Hash(refVal_setBodyMD5Hash);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("virtualSend"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("virtualSend")));
        if(!fieldValue.is_null())
        {
            bool refVal_setVirtualSend;
            ok &= ModelBase::fromJson(fieldValue, refVal_setVirtualSend);
            setVirtualSend(refVal_setVirtualSend);
        }
    }
    return ok;
}

void SentEmailProjection::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_Id));
    }
    if(m_FromIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("from")), m_From));
    }
    if(m_UserIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("userId")), m_UserId));
    }
    if(m_SubjectIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("subject")), m_Subject));
    }
    if(m_AttachmentsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("attachments")), m_Attachments));
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("createdAt")), m_CreatedAt));
    }
    if(m_InboxIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("inboxId")), m_InboxId));
    }
    if(m_ToIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("to")), m_To));
    }
    if(m_BccIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("bcc")), m_Bcc));
    }
    if(m_CcIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("cc")), m_Cc));
    }
    if(m_BodyMD5HashIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("bodyMD5Hash")), m_BodyMD5Hash));
    }
    if(m_VirtualSendIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("virtualSend")), m_VirtualSend));
    }
}

bool SentEmailProjection::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_setId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_setId );
        setId(refVal_setId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("from"))))
    {
        utility::string_t refVal_setFrom;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("from"))), refVal_setFrom );
        setFrom(refVal_setFrom);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("userId"))))
    {
        utility::string_t refVal_setUserId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("userId"))), refVal_setUserId );
        setUserId(refVal_setUserId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("subject"))))
    {
        utility::string_t refVal_setSubject;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("subject"))), refVal_setSubject );
        setSubject(refVal_setSubject);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("attachments"))))
    {
        std::vector<utility::string_t> refVal_setAttachments;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("attachments"))), refVal_setAttachments );
        setAttachments(refVal_setAttachments);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("createdAt"))))
    {
        utility::datetime refVal_setCreatedAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("createdAt"))), refVal_setCreatedAt );
        setCreatedAt(refVal_setCreatedAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("inboxId"))))
    {
        utility::string_t refVal_setInboxId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("inboxId"))), refVal_setInboxId );
        setInboxId(refVal_setInboxId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("to"))))
    {
        std::vector<utility::string_t> refVal_setTo;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("to"))), refVal_setTo );
        setTo(refVal_setTo);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("bcc"))))
    {
        std::vector<utility::string_t> refVal_setBcc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("bcc"))), refVal_setBcc );
        setBcc(refVal_setBcc);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("cc"))))
    {
        std::vector<utility::string_t> refVal_setCc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("cc"))), refVal_setCc );
        setCc(refVal_setCc);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("bodyMD5Hash"))))
    {
        utility::string_t refVal_setBodyMD5Hash;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("bodyMD5Hash"))), refVal_setBodyMD5Hash );
        setBodyMD5Hash(refVal_setBodyMD5Hash);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("virtualSend"))))
    {
        bool refVal_setVirtualSend;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("virtualSend"))), refVal_setVirtualSend );
        setVirtualSend(refVal_setVirtualSend);
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


