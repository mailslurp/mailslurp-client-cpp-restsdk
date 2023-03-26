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



#include "CppRestOpenAPIClient/model/EmailProjection.h"

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
    m_Subject = utility::conversions::to_string_t("");
    m_SubjectIsSet = false;
    m_AttachmentsIsSet = false;
    m_InboxId = utility::conversions::to_string_t("");
    m_InboxIdIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
    m_ToIsSet = false;
    m_BccIsSet = false;
    m_CcIsSet = false;
    m_DomainId = utility::conversions::to_string_t("");
    m_DomainIdIsSet = false;
    m_Read = false;
    m_ReadIsSet = false;
    m_BodyExcerpt = utility::conversions::to_string_t("");
    m_BodyExcerptIsSet = false;
    m_TeamAccess = false;
    m_TeamAccessIsSet = false;
    m_BodyMD5Hash = utility::conversions::to_string_t("");
    m_BodyMD5HashIsSet = false;
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
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_FromIsSet)
    {
        val[utility::conversions::to_string_t(U("from"))] = ModelBase::toJson(m_From);
    }
    if(m_SubjectIsSet)
    {
        val[utility::conversions::to_string_t(U("subject"))] = ModelBase::toJson(m_Subject);
    }
    if(m_AttachmentsIsSet)
    {
        val[utility::conversions::to_string_t(U("attachments"))] = ModelBase::toJson(m_Attachments);
    }
    if(m_InboxIdIsSet)
    {
        val[utility::conversions::to_string_t(U("inboxId"))] = ModelBase::toJson(m_InboxId);
    }
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t(U("createdAt"))] = ModelBase::toJson(m_CreatedAt);
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
    if(m_DomainIdIsSet)
    {
        val[utility::conversions::to_string_t(U("domainId"))] = ModelBase::toJson(m_DomainId);
    }
    if(m_ReadIsSet)
    {
        val[utility::conversions::to_string_t(U("read"))] = ModelBase::toJson(m_Read);
    }
    if(m_BodyExcerptIsSet)
    {
        val[utility::conversions::to_string_t(U("bodyExcerpt"))] = ModelBase::toJson(m_BodyExcerpt);
    }
    if(m_TeamAccessIsSet)
    {
        val[utility::conversions::to_string_t(U("teamAccess"))] = ModelBase::toJson(m_TeamAccess);
    }
    if(m_BodyMD5HashIsSet)
    {
        val[utility::conversions::to_string_t(U("bodyMD5Hash"))] = ModelBase::toJson(m_BodyMD5Hash);
    }

    return val;
}

bool EmailProjection::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("read"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("read")));
        if(!fieldValue.is_null())
        {
            bool refVal_setRead;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRead);
            setRead(refVal_setRead);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("bodyExcerpt"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("bodyExcerpt")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setBodyExcerpt;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBodyExcerpt);
            setBodyExcerpt(refVal_setBodyExcerpt);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("teamAccess"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("teamAccess")));
        if(!fieldValue.is_null())
        {
            bool refVal_setTeamAccess;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTeamAccess);
            setTeamAccess(refVal_setTeamAccess);
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
    return ok;
}

void EmailProjection::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_SubjectIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("subject")), m_Subject));
    }
    if(m_AttachmentsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("attachments")), m_Attachments));
    }
    if(m_InboxIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("inboxId")), m_InboxId));
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("createdAt")), m_CreatedAt));
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
    if(m_DomainIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("domainId")), m_DomainId));
    }
    if(m_ReadIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("read")), m_Read));
    }
    if(m_BodyExcerptIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("bodyExcerpt")), m_BodyExcerpt));
    }
    if(m_TeamAccessIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("teamAccess")), m_TeamAccess));
    }
    if(m_BodyMD5HashIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("bodyMD5Hash")), m_BodyMD5Hash));
    }
}

bool EmailProjection::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("inboxId"))))
    {
        utility::string_t refVal_setInboxId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("inboxId"))), refVal_setInboxId );
        setInboxId(refVal_setInboxId);
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("domainId"))))
    {
        utility::string_t refVal_setDomainId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("domainId"))), refVal_setDomainId );
        setDomainId(refVal_setDomainId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("read"))))
    {
        bool refVal_setRead;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("read"))), refVal_setRead );
        setRead(refVal_setRead);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("bodyExcerpt"))))
    {
        utility::string_t refVal_setBodyExcerpt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("bodyExcerpt"))), refVal_setBodyExcerpt );
        setBodyExcerpt(refVal_setBodyExcerpt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("teamAccess"))))
    {
        bool refVal_setTeamAccess;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("teamAccess"))), refVal_setTeamAccess );
        setTeamAccess(refVal_setTeamAccess);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("bodyMD5Hash"))))
    {
        utility::string_t refVal_setBodyMD5Hash;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("bodyMD5Hash"))), refVal_setBodyMD5Hash );
        setBodyMD5Hash(refVal_setBodyMD5Hash);
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
utility::string_t EmailProjection::getDomainId() const
{
    return m_DomainId;
}

void EmailProjection::setDomainId(const utility::string_t& value)
{
    m_DomainId = value;
    m_DomainIdIsSet = true;
}

bool EmailProjection::domainIdIsSet() const
{
    return m_DomainIdIsSet;
}

void EmailProjection::unsetDomainId()
{
    m_DomainIdIsSet = false;
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
}
}
}
}


