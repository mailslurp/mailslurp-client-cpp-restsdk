/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://www.mailslurp.com/docs/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "SentEmailDto.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




SentEmailDto::SentEmailDto()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_UserId = utility::conversions::to_string_t("");
    m_UserIdIsSet = false;
    m_InboxId = utility::conversions::to_string_t("");
    m_InboxIdIsSet = false;
    m_ToIsSet = false;
    m_From = utility::conversions::to_string_t("");
    m_FromIsSet = false;
    m_ReplyTo = utility::conversions::to_string_t("");
    m_ReplyToIsSet = false;
    m_CcIsSet = false;
    m_BccIsSet = false;
    m_AttachmentsIsSet = false;
    m_Subject = utility::conversions::to_string_t("");
    m_SubjectIsSet = false;
    m_BodyMD5Hash = utility::conversions::to_string_t("");
    m_BodyMD5HashIsSet = false;
    m_Body = utility::conversions::to_string_t("");
    m_BodyIsSet = false;
    m_Charset = utility::conversions::to_string_t("");
    m_CharsetIsSet = false;
    m_IsHTML = false;
    m_IsHTMLIsSet = false;
    m_SentAt = utility::datetime();
    m_SentAtIsSet = false;
    m_PixelIdsIsSet = false;
}

SentEmailDto::~SentEmailDto()
{
}

void SentEmailDto::validate()
{
    // TODO: implement validation
}

web::json::value SentEmailDto::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_UserIdIsSet)
    {
        val[utility::conversions::to_string_t("userId")] = ModelBase::toJson(m_UserId);
    }
    if(m_InboxIdIsSet)
    {
        val[utility::conversions::to_string_t("inboxId")] = ModelBase::toJson(m_InboxId);
    }
    if(m_ToIsSet)
    {
        val[utility::conversions::to_string_t("to")] = ModelBase::toJson(m_To);
    }
    if(m_FromIsSet)
    {
        val[utility::conversions::to_string_t("from")] = ModelBase::toJson(m_From);
    }
    if(m_ReplyToIsSet)
    {
        val[utility::conversions::to_string_t("replyTo")] = ModelBase::toJson(m_ReplyTo);
    }
    if(m_CcIsSet)
    {
        val[utility::conversions::to_string_t("cc")] = ModelBase::toJson(m_Cc);
    }
    if(m_BccIsSet)
    {
        val[utility::conversions::to_string_t("bcc")] = ModelBase::toJson(m_Bcc);
    }
    if(m_AttachmentsIsSet)
    {
        val[utility::conversions::to_string_t("attachments")] = ModelBase::toJson(m_Attachments);
    }
    if(m_SubjectIsSet)
    {
        val[utility::conversions::to_string_t("subject")] = ModelBase::toJson(m_Subject);
    }
    if(m_BodyMD5HashIsSet)
    {
        val[utility::conversions::to_string_t("bodyMD5Hash")] = ModelBase::toJson(m_BodyMD5Hash);
    }
    if(m_BodyIsSet)
    {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(m_Body);
    }
    if(m_CharsetIsSet)
    {
        val[utility::conversions::to_string_t("charset")] = ModelBase::toJson(m_Charset);
    }
    if(m_IsHTMLIsSet)
    {
        val[utility::conversions::to_string_t("isHTML")] = ModelBase::toJson(m_IsHTML);
    }
    if(m_SentAtIsSet)
    {
        val[utility::conversions::to_string_t("sentAt")] = ModelBase::toJson(m_SentAt);
    }
    if(m_PixelIdsIsSet)
    {
        val[utility::conversions::to_string_t("pixelIds")] = ModelBase::toJson(m_PixelIds);
    }

    return val;
}

bool SentEmailDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("replyTo")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replyTo"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_replyTo;
            ok &= ModelBase::fromJson(fieldValue, refVal_replyTo);
            setReplyTo(refVal_replyTo);
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
    if(val.has_field(utility::conversions::to_string_t("body")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_body;
            ok &= ModelBase::fromJson(fieldValue, refVal_body);
            setBody(refVal_body);
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
    if(val.has_field(utility::conversions::to_string_t("sentAt")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sentAt"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_sentAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_sentAt);
            setSentAt(refVal_sentAt);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pixelIds")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pixelIds"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_pixelIds;
            ok &= ModelBase::fromJson(fieldValue, refVal_pixelIds);
            setPixelIds(refVal_pixelIds);
        }
    }
    return ok;
}

void SentEmailDto::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_UserIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("userId"), m_UserId));
    }
    if(m_InboxIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("inboxId"), m_InboxId));
    }
    if(m_ToIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("to"), m_To));
    }
    if(m_FromIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("from"), m_From));
    }
    if(m_ReplyToIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("replyTo"), m_ReplyTo));
    }
    if(m_CcIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("cc"), m_Cc));
    }
    if(m_BccIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("bcc"), m_Bcc));
    }
    if(m_AttachmentsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("attachments"), m_Attachments));
    }
    if(m_SubjectIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("subject"), m_Subject));
    }
    if(m_BodyMD5HashIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("bodyMD5Hash"), m_BodyMD5Hash));
    }
    if(m_BodyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("body"), m_Body));
    }
    if(m_CharsetIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("charset"), m_Charset));
    }
    if(m_IsHTMLIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("isHTML"), m_IsHTML));
    }
    if(m_SentAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sentAt"), m_SentAt));
    }
    if(m_PixelIdsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("pixelIds"), m_PixelIds));
    }
}

bool SentEmailDto::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("userId")))
    {
        utility::string_t refVal_userId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("userId")), refVal_userId );
        setUserId(refVal_userId);
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
    if(multipart->hasContent(utility::conversions::to_string_t("from")))
    {
        utility::string_t refVal_from;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("from")), refVal_from );
        setFrom(refVal_from);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("replyTo")))
    {
        utility::string_t refVal_replyTo;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("replyTo")), refVal_replyTo );
        setReplyTo(refVal_replyTo);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("cc")))
    {
        std::vector<utility::string_t> refVal_cc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("cc")), refVal_cc );
        setCc(refVal_cc);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("bcc")))
    {
        std::vector<utility::string_t> refVal_bcc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("bcc")), refVal_bcc );
        setBcc(refVal_bcc);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("attachments")))
    {
        std::vector<utility::string_t> refVal_attachments;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("attachments")), refVal_attachments );
        setAttachments(refVal_attachments);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("subject")))
    {
        utility::string_t refVal_subject;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("subject")), refVal_subject );
        setSubject(refVal_subject);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("bodyMD5Hash")))
    {
        utility::string_t refVal_bodyMD5Hash;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("bodyMD5Hash")), refVal_bodyMD5Hash );
        setBodyMD5Hash(refVal_bodyMD5Hash);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("body")))
    {
        utility::string_t refVal_body;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("body")), refVal_body );
        setBody(refVal_body);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("charset")))
    {
        utility::string_t refVal_charset;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("charset")), refVal_charset );
        setCharset(refVal_charset);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("isHTML")))
    {
        bool refVal_isHTML;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("isHTML")), refVal_isHTML );
        setIsHTML(refVal_isHTML);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sentAt")))
    {
        utility::datetime refVal_sentAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sentAt")), refVal_sentAt );
        setSentAt(refVal_sentAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("pixelIds")))
    {
        std::vector<utility::string_t> refVal_pixelIds;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("pixelIds")), refVal_pixelIds );
        setPixelIds(refVal_pixelIds);
    }
    return ok;
}

utility::string_t SentEmailDto::getId() const
{
    return m_Id;
}

void SentEmailDto::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool SentEmailDto::idIsSet() const
{
    return m_IdIsSet;
}

void SentEmailDto::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t SentEmailDto::getUserId() const
{
    return m_UserId;
}

void SentEmailDto::setUserId(const utility::string_t& value)
{
    m_UserId = value;
    m_UserIdIsSet = true;
}

bool SentEmailDto::userIdIsSet() const
{
    return m_UserIdIsSet;
}

void SentEmailDto::unsetUserId()
{
    m_UserIdIsSet = false;
}
utility::string_t SentEmailDto::getInboxId() const
{
    return m_InboxId;
}

void SentEmailDto::setInboxId(const utility::string_t& value)
{
    m_InboxId = value;
    m_InboxIdIsSet = true;
}

bool SentEmailDto::inboxIdIsSet() const
{
    return m_InboxIdIsSet;
}

void SentEmailDto::unsetInboxId()
{
    m_InboxIdIsSet = false;
}
std::vector<utility::string_t>& SentEmailDto::getTo()
{
    return m_To;
}

void SentEmailDto::setTo(const std::vector<utility::string_t>& value)
{
    m_To = value;
    m_ToIsSet = true;
}

bool SentEmailDto::toIsSet() const
{
    return m_ToIsSet;
}

void SentEmailDto::unsetTo()
{
    m_ToIsSet = false;
}
utility::string_t SentEmailDto::getFrom() const
{
    return m_From;
}

void SentEmailDto::setFrom(const utility::string_t& value)
{
    m_From = value;
    m_FromIsSet = true;
}

bool SentEmailDto::fromIsSet() const
{
    return m_FromIsSet;
}

void SentEmailDto::unsetFrom()
{
    m_FromIsSet = false;
}
utility::string_t SentEmailDto::getReplyTo() const
{
    return m_ReplyTo;
}

void SentEmailDto::setReplyTo(const utility::string_t& value)
{
    m_ReplyTo = value;
    m_ReplyToIsSet = true;
}

bool SentEmailDto::replyToIsSet() const
{
    return m_ReplyToIsSet;
}

void SentEmailDto::unsetReplyTo()
{
    m_ReplyToIsSet = false;
}
std::vector<utility::string_t>& SentEmailDto::getCc()
{
    return m_Cc;
}

void SentEmailDto::setCc(const std::vector<utility::string_t>& value)
{
    m_Cc = value;
    m_CcIsSet = true;
}

bool SentEmailDto::ccIsSet() const
{
    return m_CcIsSet;
}

void SentEmailDto::unsetCc()
{
    m_CcIsSet = false;
}
std::vector<utility::string_t>& SentEmailDto::getBcc()
{
    return m_Bcc;
}

void SentEmailDto::setBcc(const std::vector<utility::string_t>& value)
{
    m_Bcc = value;
    m_BccIsSet = true;
}

bool SentEmailDto::bccIsSet() const
{
    return m_BccIsSet;
}

void SentEmailDto::unsetBcc()
{
    m_BccIsSet = false;
}
std::vector<utility::string_t>& SentEmailDto::getAttachments()
{
    return m_Attachments;
}

void SentEmailDto::setAttachments(const std::vector<utility::string_t>& value)
{
    m_Attachments = value;
    m_AttachmentsIsSet = true;
}

bool SentEmailDto::attachmentsIsSet() const
{
    return m_AttachmentsIsSet;
}

void SentEmailDto::unsetAttachments()
{
    m_AttachmentsIsSet = false;
}
utility::string_t SentEmailDto::getSubject() const
{
    return m_Subject;
}

void SentEmailDto::setSubject(const utility::string_t& value)
{
    m_Subject = value;
    m_SubjectIsSet = true;
}

bool SentEmailDto::subjectIsSet() const
{
    return m_SubjectIsSet;
}

void SentEmailDto::unsetSubject()
{
    m_SubjectIsSet = false;
}
utility::string_t SentEmailDto::getBodyMD5Hash() const
{
    return m_BodyMD5Hash;
}

void SentEmailDto::setBodyMD5Hash(const utility::string_t& value)
{
    m_BodyMD5Hash = value;
    m_BodyMD5HashIsSet = true;
}

bool SentEmailDto::bodyMD5HashIsSet() const
{
    return m_BodyMD5HashIsSet;
}

void SentEmailDto::unsetBodyMD5Hash()
{
    m_BodyMD5HashIsSet = false;
}
utility::string_t SentEmailDto::getBody() const
{
    return m_Body;
}

void SentEmailDto::setBody(const utility::string_t& value)
{
    m_Body = value;
    m_BodyIsSet = true;
}

bool SentEmailDto::bodyIsSet() const
{
    return m_BodyIsSet;
}

void SentEmailDto::unsetBody()
{
    m_BodyIsSet = false;
}
utility::string_t SentEmailDto::getCharset() const
{
    return m_Charset;
}

void SentEmailDto::setCharset(const utility::string_t& value)
{
    m_Charset = value;
    m_CharsetIsSet = true;
}

bool SentEmailDto::charsetIsSet() const
{
    return m_CharsetIsSet;
}

void SentEmailDto::unsetCharset()
{
    m_CharsetIsSet = false;
}
bool SentEmailDto::isIsHTML() const
{
    return m_IsHTML;
}

void SentEmailDto::setIsHTML(bool value)
{
    m_IsHTML = value;
    m_IsHTMLIsSet = true;
}

bool SentEmailDto::isHTMLIsSet() const
{
    return m_IsHTMLIsSet;
}

void SentEmailDto::unsetIsHTML()
{
    m_IsHTMLIsSet = false;
}
utility::datetime SentEmailDto::getSentAt() const
{
    return m_SentAt;
}

void SentEmailDto::setSentAt(const utility::datetime& value)
{
    m_SentAt = value;
    m_SentAtIsSet = true;
}

bool SentEmailDto::sentAtIsSet() const
{
    return m_SentAtIsSet;
}

void SentEmailDto::unsetSentAt()
{
    m_SentAtIsSet = false;
}
std::vector<utility::string_t>& SentEmailDto::getPixelIds()
{
    return m_PixelIds;
}

void SentEmailDto::setPixelIds(const std::vector<utility::string_t>& value)
{
    m_PixelIds = value;
    m_PixelIdsIsSet = true;
}

bool SentEmailDto::pixelIdsIsSet() const
{
    return m_PixelIdsIsSet;
}

void SentEmailDto::unsetPixelIds()
{
    m_PixelIdsIsSet = false;
}
}
}
}
}


