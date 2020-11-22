/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.   ## Resources - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://www.mailslurp.com/docs/) - [Examples](https://github.com/mailslurp/examples) repository 
 *
 * The version of the OpenAPI document: 6.5.2
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "SentEmail.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




SentEmail::SentEmail()
{
    m_AttachmentsIsSet = false;
    m_BccIsSet = false;
    m_BodyMD5Hash = utility::conversions::to_string_t("");
    m_BodyMD5HashIsSet = false;
    m_BodyS3Key = utility::conversions::to_string_t("");
    m_BodyS3KeyIsSet = false;
    m_CcIsSet = false;
    m_Charset = utility::conversions::to_string_t("");
    m_CharsetIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
    m_From = utility::conversions::to_string_t("");
    m_FromIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_InboxId = utility::conversions::to_string_t("");
    m_InboxIdIsSet = false;
    m_IsHTML = false;
    m_IsHTMLIsSet = false;
    m_Subject = utility::conversions::to_string_t("");
    m_SubjectIsSet = false;
    m_ToIsSet = false;
    m_UpdatedAt = utility::datetime();
    m_UpdatedAtIsSet = false;
    m_UserId = utility::conversions::to_string_t("");
    m_UserIdIsSet = false;
}

SentEmail::~SentEmail()
{
}

void SentEmail::validate()
{
    // TODO: implement validation
}

web::json::value SentEmail::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_AttachmentsIsSet)
    {
        val[utility::conversions::to_string_t("attachments")] = ModelBase::toJson(m_Attachments);
    }
    if(m_BccIsSet)
    {
        val[utility::conversions::to_string_t("bcc")] = ModelBase::toJson(m_Bcc);
    }
    if(m_BodyMD5HashIsSet)
    {
        val[utility::conversions::to_string_t("bodyMD5Hash")] = ModelBase::toJson(m_BodyMD5Hash);
    }
    if(m_BodyS3KeyIsSet)
    {
        val[utility::conversions::to_string_t("bodyS3Key")] = ModelBase::toJson(m_BodyS3Key);
    }
    if(m_CcIsSet)
    {
        val[utility::conversions::to_string_t("cc")] = ModelBase::toJson(m_Cc);
    }
    if(m_CharsetIsSet)
    {
        val[utility::conversions::to_string_t("charset")] = ModelBase::toJson(m_Charset);
    }
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t("createdAt")] = ModelBase::toJson(m_CreatedAt);
    }
    if(m_FromIsSet)
    {
        val[utility::conversions::to_string_t("from")] = ModelBase::toJson(m_From);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_InboxIdIsSet)
    {
        val[utility::conversions::to_string_t("inboxId")] = ModelBase::toJson(m_InboxId);
    }
    if(m_IsHTMLIsSet)
    {
        val[utility::conversions::to_string_t("isHTML")] = ModelBase::toJson(m_IsHTML);
    }
    if(m_SubjectIsSet)
    {
        val[utility::conversions::to_string_t("subject")] = ModelBase::toJson(m_Subject);
    }
    if(m_ToIsSet)
    {
        val[utility::conversions::to_string_t("to")] = ModelBase::toJson(m_To);
    }
    if(m_UpdatedAtIsSet)
    {
        val[utility::conversions::to_string_t("updatedAt")] = ModelBase::toJson(m_UpdatedAt);
    }
    if(m_UserIdIsSet)
    {
        val[utility::conversions::to_string_t("userId")] = ModelBase::toJson(m_UserId);
    }

    return val;
}

bool SentEmail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("bodyS3Key")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bodyS3Key"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_bodyS3Key;
            ok &= ModelBase::fromJson(fieldValue, refVal_bodyS3Key);
            setBodyS3Key(refVal_bodyS3Key);
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
    if(val.has_field(utility::conversions::to_string_t("charset")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charset"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_charset;
            ok &= ModelBase::fromJson(fieldValue, refVal_charset);
            setCharset(refVal_charset);
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
    if(val.has_field(utility::conversions::to_string_t("isHTML")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isHTML"));
        if(!fieldValue.is_null())
        {
            bool refVal_isHTML;
            ok &= ModelBase::fromJson(fieldValue, refVal_isHTML);
            setIsHTML(refVal_isHTML);
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
    if(val.has_field(utility::conversions::to_string_t("updatedAt")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updatedAt"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_updatedAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_updatedAt);
            setUpdatedAt(refVal_updatedAt);
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
    return ok;
}

void SentEmail::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_AttachmentsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("attachments"), m_Attachments));
    }
    if(m_BccIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("bcc"), m_Bcc));
    }
    if(m_BodyMD5HashIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("bodyMD5Hash"), m_BodyMD5Hash));
    }
    if(m_BodyS3KeyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("bodyS3Key"), m_BodyS3Key));
    }
    if(m_CcIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("cc"), m_Cc));
    }
    if(m_CharsetIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("charset"), m_Charset));
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("createdAt"), m_CreatedAt));
    }
    if(m_FromIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("from"), m_From));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_InboxIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("inboxId"), m_InboxId));
    }
    if(m_IsHTMLIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("isHTML"), m_IsHTML));
    }
    if(m_SubjectIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("subject"), m_Subject));
    }
    if(m_ToIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("to"), m_To));
    }
    if(m_UpdatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("updatedAt"), m_UpdatedAt));
    }
    if(m_UserIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("userId"), m_UserId));
    }
}

bool SentEmail::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
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
    if(multipart->hasContent(utility::conversions::to_string_t("bodyMD5Hash")))
    {
        utility::string_t refVal_bodyMD5Hash;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("bodyMD5Hash")), refVal_bodyMD5Hash );
        setBodyMD5Hash(refVal_bodyMD5Hash);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("bodyS3Key")))
    {
        utility::string_t refVal_bodyS3Key;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("bodyS3Key")), refVal_bodyS3Key );
        setBodyS3Key(refVal_bodyS3Key);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("cc")))
    {
        std::vector<utility::string_t> refVal_cc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("cc")), refVal_cc );
        setCc(refVal_cc);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("charset")))
    {
        utility::string_t refVal_charset;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("charset")), refVal_charset );
        setCharset(refVal_charset);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("createdAt")))
    {
        utility::datetime refVal_createdAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("createdAt")), refVal_createdAt );
        setCreatedAt(refVal_createdAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("from")))
    {
        utility::string_t refVal_from;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("from")), refVal_from );
        setFrom(refVal_from);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        utility::string_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("id")), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("inboxId")))
    {
        utility::string_t refVal_inboxId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("inboxId")), refVal_inboxId );
        setInboxId(refVal_inboxId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("isHTML")))
    {
        bool refVal_isHTML;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("isHTML")), refVal_isHTML );
        setIsHTML(refVal_isHTML);
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
    if(multipart->hasContent(utility::conversions::to_string_t("updatedAt")))
    {
        utility::datetime refVal_updatedAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("updatedAt")), refVal_updatedAt );
        setUpdatedAt(refVal_updatedAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("userId")))
    {
        utility::string_t refVal_userId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("userId")), refVal_userId );
        setUserId(refVal_userId);
    }
    return ok;
}

std::vector<utility::string_t>& SentEmail::getAttachments()
{
    return m_Attachments;
}

void SentEmail::setAttachments(const std::vector<utility::string_t>& value)
{
    m_Attachments = value;
    m_AttachmentsIsSet = true;
}

bool SentEmail::attachmentsIsSet() const
{
    return m_AttachmentsIsSet;
}

void SentEmail::unsetAttachments()
{
    m_AttachmentsIsSet = false;
}
std::vector<utility::string_t>& SentEmail::getBcc()
{
    return m_Bcc;
}

void SentEmail::setBcc(const std::vector<utility::string_t>& value)
{
    m_Bcc = value;
    m_BccIsSet = true;
}

bool SentEmail::bccIsSet() const
{
    return m_BccIsSet;
}

void SentEmail::unsetBcc()
{
    m_BccIsSet = false;
}
utility::string_t SentEmail::getBodyMD5Hash() const
{
    return m_BodyMD5Hash;
}

void SentEmail::setBodyMD5Hash(const utility::string_t& value)
{
    m_BodyMD5Hash = value;
    m_BodyMD5HashIsSet = true;
}

bool SentEmail::bodyMD5HashIsSet() const
{
    return m_BodyMD5HashIsSet;
}

void SentEmail::unsetBodyMD5Hash()
{
    m_BodyMD5HashIsSet = false;
}
utility::string_t SentEmail::getBodyS3Key() const
{
    return m_BodyS3Key;
}

void SentEmail::setBodyS3Key(const utility::string_t& value)
{
    m_BodyS3Key = value;
    m_BodyS3KeyIsSet = true;
}

bool SentEmail::bodyS3KeyIsSet() const
{
    return m_BodyS3KeyIsSet;
}

void SentEmail::unsetBodyS3Key()
{
    m_BodyS3KeyIsSet = false;
}
std::vector<utility::string_t>& SentEmail::getCc()
{
    return m_Cc;
}

void SentEmail::setCc(const std::vector<utility::string_t>& value)
{
    m_Cc = value;
    m_CcIsSet = true;
}

bool SentEmail::ccIsSet() const
{
    return m_CcIsSet;
}

void SentEmail::unsetCc()
{
    m_CcIsSet = false;
}
utility::string_t SentEmail::getCharset() const
{
    return m_Charset;
}

void SentEmail::setCharset(const utility::string_t& value)
{
    m_Charset = value;
    m_CharsetIsSet = true;
}

bool SentEmail::charsetIsSet() const
{
    return m_CharsetIsSet;
}

void SentEmail::unsetCharset()
{
    m_CharsetIsSet = false;
}
utility::datetime SentEmail::getCreatedAt() const
{
    return m_CreatedAt;
}

void SentEmail::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool SentEmail::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void SentEmail::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
utility::string_t SentEmail::getFrom() const
{
    return m_From;
}

void SentEmail::setFrom(const utility::string_t& value)
{
    m_From = value;
    m_FromIsSet = true;
}

bool SentEmail::fromIsSet() const
{
    return m_FromIsSet;
}

void SentEmail::unsetFrom()
{
    m_FromIsSet = false;
}
utility::string_t SentEmail::getId() const
{
    return m_Id;
}

void SentEmail::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool SentEmail::idIsSet() const
{
    return m_IdIsSet;
}

void SentEmail::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t SentEmail::getInboxId() const
{
    return m_InboxId;
}

void SentEmail::setInboxId(const utility::string_t& value)
{
    m_InboxId = value;
    m_InboxIdIsSet = true;
}

bool SentEmail::inboxIdIsSet() const
{
    return m_InboxIdIsSet;
}

void SentEmail::unsetInboxId()
{
    m_InboxIdIsSet = false;
}
bool SentEmail::isIsHTML() const
{
    return m_IsHTML;
}

void SentEmail::setIsHTML(bool value)
{
    m_IsHTML = value;
    m_IsHTMLIsSet = true;
}

bool SentEmail::isHTMLIsSet() const
{
    return m_IsHTMLIsSet;
}

void SentEmail::unsetIsHTML()
{
    m_IsHTMLIsSet = false;
}
utility::string_t SentEmail::getSubject() const
{
    return m_Subject;
}

void SentEmail::setSubject(const utility::string_t& value)
{
    m_Subject = value;
    m_SubjectIsSet = true;
}

bool SentEmail::subjectIsSet() const
{
    return m_SubjectIsSet;
}

void SentEmail::unsetSubject()
{
    m_SubjectIsSet = false;
}
std::vector<utility::string_t>& SentEmail::getTo()
{
    return m_To;
}

void SentEmail::setTo(const std::vector<utility::string_t>& value)
{
    m_To = value;
    m_ToIsSet = true;
}

bool SentEmail::toIsSet() const
{
    return m_ToIsSet;
}

void SentEmail::unsetTo()
{
    m_ToIsSet = false;
}
utility::datetime SentEmail::getUpdatedAt() const
{
    return m_UpdatedAt;
}

void SentEmail::setUpdatedAt(const utility::datetime& value)
{
    m_UpdatedAt = value;
    m_UpdatedAtIsSet = true;
}

bool SentEmail::updatedAtIsSet() const
{
    return m_UpdatedAtIsSet;
}

void SentEmail::unsetUpdatedAt()
{
    m_UpdatedAtIsSet = false;
}
utility::string_t SentEmail::getUserId() const
{
    return m_UserId;
}

void SentEmail::setUserId(const utility::string_t& value)
{
    m_UserId = value;
    m_UserIdIsSet = true;
}

bool SentEmail::userIdIsSet() const
{
    return m_UserIdIsSet;
}

void SentEmail::unsetUserId()
{
    m_UserIdIsSet = false;
}
}
}
}
}


