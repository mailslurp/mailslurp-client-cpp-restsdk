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



#include "TrackingPixelDto.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




TrackingPixelDto::TrackingPixelDto()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Seen = false;
    m_SeenIsSet = false;
    m_Recipient = utility::conversions::to_string_t("");
    m_RecipientIsSet = false;
    m_Html = utility::conversions::to_string_t("");
    m_HtmlIsSet = false;
    m_Url = utility::conversions::to_string_t("");
    m_UrlIsSet = false;
    m_InboxId = utility::conversions::to_string_t("");
    m_InboxIdIsSet = false;
    m_SentEmailId = utility::conversions::to_string_t("");
    m_SentEmailIdIsSet = false;
    m_SeenAt = utility::datetime();
    m_SeenAtIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
}

TrackingPixelDto::~TrackingPixelDto()
{
}

void TrackingPixelDto::validate()
{
    // TODO: implement validation
}

web::json::value TrackingPixelDto::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_SeenIsSet)
    {
        val[utility::conversions::to_string_t("seen")] = ModelBase::toJson(m_Seen);
    }
    if(m_RecipientIsSet)
    {
        val[utility::conversions::to_string_t("recipient")] = ModelBase::toJson(m_Recipient);
    }
    if(m_HtmlIsSet)
    {
        val[utility::conversions::to_string_t("html")] = ModelBase::toJson(m_Html);
    }
    if(m_UrlIsSet)
    {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(m_Url);
    }
    if(m_InboxIdIsSet)
    {
        val[utility::conversions::to_string_t("inboxId")] = ModelBase::toJson(m_InboxId);
    }
    if(m_SentEmailIdIsSet)
    {
        val[utility::conversions::to_string_t("sentEmailId")] = ModelBase::toJson(m_SentEmailId);
    }
    if(m_SeenAtIsSet)
    {
        val[utility::conversions::to_string_t("seenAt")] = ModelBase::toJson(m_SeenAt);
    }
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t("createdAt")] = ModelBase::toJson(m_CreatedAt);
    }

    return val;
}

bool TrackingPixelDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("seen")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("seen"));
        if(!fieldValue.is_null())
        {
            bool refVal_seen;
            ok &= ModelBase::fromJson(fieldValue, refVal_seen);
            setSeen(refVal_seen);
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
    if(val.has_field(utility::conversions::to_string_t("html")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("html"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_html;
            ok &= ModelBase::fromJson(fieldValue, refVal_html);
            setHtml(refVal_html);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_url;
            ok &= ModelBase::fromJson(fieldValue, refVal_url);
            setUrl(refVal_url);
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
    if(val.has_field(utility::conversions::to_string_t("seenAt")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("seenAt"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_seenAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_seenAt);
            setSeenAt(refVal_seenAt);
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

void TrackingPixelDto::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_SeenIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("seen"), m_Seen));
    }
    if(m_RecipientIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("recipient"), m_Recipient));
    }
    if(m_HtmlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("html"), m_Html));
    }
    if(m_UrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("url"), m_Url));
    }
    if(m_InboxIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("inboxId"), m_InboxId));
    }
    if(m_SentEmailIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sentEmailId"), m_SentEmailId));
    }
    if(m_SeenAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("seenAt"), m_SeenAt));
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("createdAt"), m_CreatedAt));
    }
}

bool TrackingPixelDto::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("seen")))
    {
        bool refVal_seen;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("seen")), refVal_seen );
        setSeen(refVal_seen);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("recipient")))
    {
        utility::string_t refVal_recipient;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("recipient")), refVal_recipient );
        setRecipient(refVal_recipient);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("html")))
    {
        utility::string_t refVal_html;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("html")), refVal_html );
        setHtml(refVal_html);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("url")))
    {
        utility::string_t refVal_url;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("url")), refVal_url );
        setUrl(refVal_url);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("inboxId")))
    {
        utility::string_t refVal_inboxId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("inboxId")), refVal_inboxId );
        setInboxId(refVal_inboxId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sentEmailId")))
    {
        utility::string_t refVal_sentEmailId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sentEmailId")), refVal_sentEmailId );
        setSentEmailId(refVal_sentEmailId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("seenAt")))
    {
        utility::datetime refVal_seenAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("seenAt")), refVal_seenAt );
        setSeenAt(refVal_seenAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("createdAt")))
    {
        utility::datetime refVal_createdAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("createdAt")), refVal_createdAt );
        setCreatedAt(refVal_createdAt);
    }
    return ok;
}

utility::string_t TrackingPixelDto::getId() const
{
    return m_Id;
}

void TrackingPixelDto::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool TrackingPixelDto::idIsSet() const
{
    return m_IdIsSet;
}

void TrackingPixelDto::unsetId()
{
    m_IdIsSet = false;
}
bool TrackingPixelDto::isSeen() const
{
    return m_Seen;
}

void TrackingPixelDto::setSeen(bool value)
{
    m_Seen = value;
    m_SeenIsSet = true;
}

bool TrackingPixelDto::seenIsSet() const
{
    return m_SeenIsSet;
}

void TrackingPixelDto::unsetSeen()
{
    m_SeenIsSet = false;
}
utility::string_t TrackingPixelDto::getRecipient() const
{
    return m_Recipient;
}

void TrackingPixelDto::setRecipient(const utility::string_t& value)
{
    m_Recipient = value;
    m_RecipientIsSet = true;
}

bool TrackingPixelDto::recipientIsSet() const
{
    return m_RecipientIsSet;
}

void TrackingPixelDto::unsetRecipient()
{
    m_RecipientIsSet = false;
}
utility::string_t TrackingPixelDto::getHtml() const
{
    return m_Html;
}

void TrackingPixelDto::setHtml(const utility::string_t& value)
{
    m_Html = value;
    m_HtmlIsSet = true;
}

bool TrackingPixelDto::htmlIsSet() const
{
    return m_HtmlIsSet;
}

void TrackingPixelDto::unsetHtml()
{
    m_HtmlIsSet = false;
}
utility::string_t TrackingPixelDto::getUrl() const
{
    return m_Url;
}

void TrackingPixelDto::setUrl(const utility::string_t& value)
{
    m_Url = value;
    m_UrlIsSet = true;
}

bool TrackingPixelDto::urlIsSet() const
{
    return m_UrlIsSet;
}

void TrackingPixelDto::unsetUrl()
{
    m_UrlIsSet = false;
}
utility::string_t TrackingPixelDto::getInboxId() const
{
    return m_InboxId;
}

void TrackingPixelDto::setInboxId(const utility::string_t& value)
{
    m_InboxId = value;
    m_InboxIdIsSet = true;
}

bool TrackingPixelDto::inboxIdIsSet() const
{
    return m_InboxIdIsSet;
}

void TrackingPixelDto::unsetInboxId()
{
    m_InboxIdIsSet = false;
}
utility::string_t TrackingPixelDto::getSentEmailId() const
{
    return m_SentEmailId;
}

void TrackingPixelDto::setSentEmailId(const utility::string_t& value)
{
    m_SentEmailId = value;
    m_SentEmailIdIsSet = true;
}

bool TrackingPixelDto::sentEmailIdIsSet() const
{
    return m_SentEmailIdIsSet;
}

void TrackingPixelDto::unsetSentEmailId()
{
    m_SentEmailIdIsSet = false;
}
utility::datetime TrackingPixelDto::getSeenAt() const
{
    return m_SeenAt;
}

void TrackingPixelDto::setSeenAt(const utility::datetime& value)
{
    m_SeenAt = value;
    m_SeenAtIsSet = true;
}

bool TrackingPixelDto::seenAtIsSet() const
{
    return m_SeenAtIsSet;
}

void TrackingPixelDto::unsetSeenAt()
{
    m_SeenAtIsSet = false;
}
utility::datetime TrackingPixelDto::getCreatedAt() const
{
    return m_CreatedAt;
}

void TrackingPixelDto::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool TrackingPixelDto::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void TrackingPixelDto::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
}
}
}
}


