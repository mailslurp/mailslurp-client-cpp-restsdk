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



#include "EmailProjection.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




EmailProjection::EmailProjection()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_From = utility::conversions::to_string_t("");
    m_FromIsSet = false;
    m_TeamAccess = false;
    m_TeamAccessIsSet = false;
    m_Read = false;
    m_ReadIsSet = false;
    m_BodyMD5Hash = utility::conversions::to_string_t("");
    m_BodyMD5HashIsSet = false;
    m_BodyExcerpt = utility::conversions::to_string_t("");
    m_BodyExcerptIsSet = false;
    m_Subject = utility::conversions::to_string_t("");
    m_SubjectIsSet = false;
    m_InboxId = utility::conversions::to_string_t("");
    m_InboxIdIsSet = false;
    m_ToIsSet = false;
    m_AttachmentsIsSet = false;
    m_BccIsSet = false;
    m_CcIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
}

EmailProjection::~EmailProjection()
{
}

void EmailProjection::validate()
{
    // TODO: implement validation
}

web::json::value EmailProjection::toJson() const
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
    if(m_TeamAccessIsSet)
    {
        val[utility::conversions::to_string_t("teamAccess")] = ModelBase::toJson(m_TeamAccess);
    }
    if(m_ReadIsSet)
    {
        val[utility::conversions::to_string_t("read")] = ModelBase::toJson(m_Read);
    }
    if(m_BodyMD5HashIsSet)
    {
        val[utility::conversions::to_string_t("bodyMD5Hash")] = ModelBase::toJson(m_BodyMD5Hash);
    }
    if(m_BodyExcerptIsSet)
    {
        val[utility::conversions::to_string_t("bodyExcerpt")] = ModelBase::toJson(m_BodyExcerpt);
    }
    if(m_SubjectIsSet)
    {
        val[utility::conversions::to_string_t("subject")] = ModelBase::toJson(m_Subject);
    }
    if(m_InboxIdIsSet)
    {
        val[utility::conversions::to_string_t("inboxId")] = ModelBase::toJson(m_InboxId);
    }
    if(m_ToIsSet)
    {
        val[utility::conversions::to_string_t("to")] = ModelBase::toJson(m_To);
    }
    if(m_AttachmentsIsSet)
    {
        val[utility::conversions::to_string_t("attachments")] = ModelBase::toJson(m_Attachments);
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

    return val;
}

bool EmailProjection::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("teamAccess")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("teamAccess"));
        if(!fieldValue.is_null())
        {
            bool refVal_teamAccess;
            ok &= ModelBase::fromJson(fieldValue, refVal_teamAccess);
            setTeamAccess(refVal_teamAccess);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("read")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("read"));
        if(!fieldValue.is_null())
        {
            bool refVal_read;
            ok &= ModelBase::fromJson(fieldValue, refVal_read);
            setRead(refVal_read);
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
    if(val.has_field(utility::conversions::to_string_t("bodyExcerpt")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bodyExcerpt"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_bodyExcerpt;
            ok &= ModelBase::fromJson(fieldValue, refVal_bodyExcerpt);
            setBodyExcerpt(refVal_bodyExcerpt);
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
    return ok;
}

void EmailProjection::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_TeamAccessIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("teamAccess"), m_TeamAccess));
    }
    if(m_ReadIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("read"), m_Read));
    }
    if(m_BodyMD5HashIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("bodyMD5Hash"), m_BodyMD5Hash));
    }
    if(m_BodyExcerptIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("bodyExcerpt"), m_BodyExcerpt));
    }
    if(m_SubjectIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("subject"), m_Subject));
    }
    if(m_InboxIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("inboxId"), m_InboxId));
    }
    if(m_ToIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("to"), m_To));
    }
    if(m_AttachmentsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("attachments"), m_Attachments));
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
}

bool EmailProjection::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("teamAccess")))
    {
        bool refVal_teamAccess;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("teamAccess")), refVal_teamAccess );
        setTeamAccess(refVal_teamAccess);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("read")))
    {
        bool refVal_read;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("read")), refVal_read );
        setRead(refVal_read);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("bodyMD5Hash")))
    {
        utility::string_t refVal_bodyMD5Hash;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("bodyMD5Hash")), refVal_bodyMD5Hash );
        setBodyMD5Hash(refVal_bodyMD5Hash);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("bodyExcerpt")))
    {
        utility::string_t refVal_bodyExcerpt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("bodyExcerpt")), refVal_bodyExcerpt );
        setBodyExcerpt(refVal_bodyExcerpt);
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
    if(multipart->hasContent(utility::conversions::to_string_t("to")))
    {
        std::vector<utility::string_t> refVal_to;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("to")), refVal_to );
        setTo(refVal_to);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("attachments")))
    {
        std::vector<utility::string_t> refVal_attachments;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("attachments")), refVal_attachments );
        setAttachments(refVal_attachments);
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
    return ok;
}

utility::string_t EmailProjection::getId() const
{
    return m_Id;
}

void EmailProjection::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool EmailProjection::idIsSet() const
{
    return m_IdIsSet;
}

void EmailProjection::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t EmailProjection::getFrom() const
{
    return m_From;
}

void EmailProjection::setFrom(const utility::string_t& value)
{
    m_From = value;
    m_FromIsSet = true;
}

bool EmailProjection::fromIsSet() const
{
    return m_FromIsSet;
}

void EmailProjection::unsetFrom()
{
    m_FromIsSet = false;
}
bool EmailProjection::isTeamAccess() const
{
    return m_TeamAccess;
}

void EmailProjection::setTeamAccess(bool value)
{
    m_TeamAccess = value;
    m_TeamAccessIsSet = true;
}

bool EmailProjection::teamAccessIsSet() const
{
    return m_TeamAccessIsSet;
}

void EmailProjection::unsetTeamAccess()
{
    m_TeamAccessIsSet = false;
}
bool EmailProjection::isRead() const
{
    return m_Read;
}

void EmailProjection::setRead(bool value)
{
    m_Read = value;
    m_ReadIsSet = true;
}

bool EmailProjection::readIsSet() const
{
    return m_ReadIsSet;
}

void EmailProjection::unsetRead()
{
    m_ReadIsSet = false;
}
utility::string_t EmailProjection::getBodyMD5Hash() const
{
    return m_BodyMD5Hash;
}

void EmailProjection::setBodyMD5Hash(const utility::string_t& value)
{
    m_BodyMD5Hash = value;
    m_BodyMD5HashIsSet = true;
}

bool EmailProjection::bodyMD5HashIsSet() const
{
    return m_BodyMD5HashIsSet;
}

void EmailProjection::unsetBodyMD5Hash()
{
    m_BodyMD5HashIsSet = false;
}
utility::string_t EmailProjection::getBodyExcerpt() const
{
    return m_BodyExcerpt;
}

void EmailProjection::setBodyExcerpt(const utility::string_t& value)
{
    m_BodyExcerpt = value;
    m_BodyExcerptIsSet = true;
}

bool EmailProjection::bodyExcerptIsSet() const
{
    return m_BodyExcerptIsSet;
}

void EmailProjection::unsetBodyExcerpt()
{
    m_BodyExcerptIsSet = false;
}
utility::string_t EmailProjection::getSubject() const
{
    return m_Subject;
}

void EmailProjection::setSubject(const utility::string_t& value)
{
    m_Subject = value;
    m_SubjectIsSet = true;
}

bool EmailProjection::subjectIsSet() const
{
    return m_SubjectIsSet;
}

void EmailProjection::unsetSubject()
{
    m_SubjectIsSet = false;
}
utility::string_t EmailProjection::getInboxId() const
{
    return m_InboxId;
}

void EmailProjection::setInboxId(const utility::string_t& value)
{
    m_InboxId = value;
    m_InboxIdIsSet = true;
}

bool EmailProjection::inboxIdIsSet() const
{
    return m_InboxIdIsSet;
}

void EmailProjection::unsetInboxId()
{
    m_InboxIdIsSet = false;
}
std::vector<utility::string_t>& EmailProjection::getTo()
{
    return m_To;
}

void EmailProjection::setTo(const std::vector<utility::string_t>& value)
{
    m_To = value;
    m_ToIsSet = true;
}

bool EmailProjection::toIsSet() const
{
    return m_ToIsSet;
}

void EmailProjection::unsetTo()
{
    m_ToIsSet = false;
}
std::vector<utility::string_t>& EmailProjection::getAttachments()
{
    return m_Attachments;
}

void EmailProjection::setAttachments(const std::vector<utility::string_t>& value)
{
    m_Attachments = value;
    m_AttachmentsIsSet = true;
}

bool EmailProjection::attachmentsIsSet() const
{
    return m_AttachmentsIsSet;
}

void EmailProjection::unsetAttachments()
{
    m_AttachmentsIsSet = false;
}
std::vector<utility::string_t>& EmailProjection::getBcc()
{
    return m_Bcc;
}

void EmailProjection::setBcc(const std::vector<utility::string_t>& value)
{
    m_Bcc = value;
    m_BccIsSet = true;
}

bool EmailProjection::bccIsSet() const
{
    return m_BccIsSet;
}

void EmailProjection::unsetBcc()
{
    m_BccIsSet = false;
}
std::vector<utility::string_t>& EmailProjection::getCc()
{
    return m_Cc;
}

void EmailProjection::setCc(const std::vector<utility::string_t>& value)
{
    m_Cc = value;
    m_CcIsSet = true;
}

bool EmailProjection::ccIsSet() const
{
    return m_CcIsSet;
}

void EmailProjection::unsetCc()
{
    m_CcIsSet = false;
}
utility::datetime EmailProjection::getCreatedAt() const
{
    return m_CreatedAt;
}

void EmailProjection::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool EmailProjection::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void EmailProjection::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
}
}
}
}


