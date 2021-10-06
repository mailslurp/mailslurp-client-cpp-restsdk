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



#include "TrackingPixelProjection.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




TrackingPixelProjection::TrackingPixelProjection()
{
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_InboxId = utility::conversions::to_string_t("");
    m_InboxIdIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Recipient = utility::conversions::to_string_t("");
    m_RecipientIsSet = false;
    m_Seen = false;
    m_SeenIsSet = false;
    m_SeenAt = utility::datetime();
    m_SeenAtIsSet = false;
    m_SentEmailId = utility::conversions::to_string_t("");
    m_SentEmailIdIsSet = false;
    m_UserId = utility::conversions::to_string_t("");
    m_UserIdIsSet = false;
}

TrackingPixelProjection::~TrackingPixelProjection()
{
}

void TrackingPixelProjection::validate()
{
    // TODO: implement validation
}

web::json::value TrackingPixelProjection::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t("createdAt")] = ModelBase::toJson(m_CreatedAt);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_InboxIdIsSet)
    {
        val[utility::conversions::to_string_t("inboxId")] = ModelBase::toJson(m_InboxId);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_RecipientIsSet)
    {
        val[utility::conversions::to_string_t("recipient")] = ModelBase::toJson(m_Recipient);
    }
    if(m_SeenIsSet)
    {
        val[utility::conversions::to_string_t("seen")] = ModelBase::toJson(m_Seen);
    }
    if(m_SeenAtIsSet)
    {
        val[utility::conversions::to_string_t("seenAt")] = ModelBase::toJson(m_SeenAt);
    }
    if(m_SentEmailIdIsSet)
    {
        val[utility::conversions::to_string_t("sentEmailId")] = ModelBase::toJson(m_SentEmailId);
    }
    if(m_UserIdIsSet)
    {
        val[utility::conversions::to_string_t("userId")] = ModelBase::toJson(m_UserId);
    }

    return val;
}

bool TrackingPixelProjection::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("name")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_name;
            ok &= ModelBase::fromJson(fieldValue, refVal_name);
            setName(refVal_name);
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

void TrackingPixelProjection::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("createdAt"), m_CreatedAt));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_InboxIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("inboxId"), m_InboxId));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
    if(m_RecipientIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("recipient"), m_Recipient));
    }
    if(m_SeenIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("seen"), m_Seen));
    }
    if(m_SeenAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("seenAt"), m_SeenAt));
    }
    if(m_SentEmailIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sentEmailId"), m_SentEmailId));
    }
    if(m_UserIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("userId"), m_UserId));
    }
}

bool TrackingPixelProjection::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("createdAt")))
    {
        utility::datetime refVal_createdAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("createdAt")), refVal_createdAt );
        setCreatedAt(refVal_createdAt);
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
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        utility::string_t refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("name")), refVal_name );
        setName(refVal_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("recipient")))
    {
        utility::string_t refVal_recipient;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("recipient")), refVal_recipient );
        setRecipient(refVal_recipient);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("seen")))
    {
        bool refVal_seen;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("seen")), refVal_seen );
        setSeen(refVal_seen);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("seenAt")))
    {
        utility::datetime refVal_seenAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("seenAt")), refVal_seenAt );
        setSeenAt(refVal_seenAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sentEmailId")))
    {
        utility::string_t refVal_sentEmailId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sentEmailId")), refVal_sentEmailId );
        setSentEmailId(refVal_sentEmailId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("userId")))
    {
        utility::string_t refVal_userId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("userId")), refVal_userId );
        setUserId(refVal_userId);
    }
    return ok;
}

utility::datetime TrackingPixelProjection::getCreatedAt() const
{
    return m_CreatedAt;
}

void TrackingPixelProjection::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool TrackingPixelProjection::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void TrackingPixelProjection::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
utility::string_t TrackingPixelProjection::getId() const
{
    return m_Id;
}

void TrackingPixelProjection::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool TrackingPixelProjection::idIsSet() const
{
    return m_IdIsSet;
}

void TrackingPixelProjection::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t TrackingPixelProjection::getInboxId() const
{
    return m_InboxId;
}

void TrackingPixelProjection::setInboxId(const utility::string_t& value)
{
    m_InboxId = value;
    m_InboxIdIsSet = true;
}

bool TrackingPixelProjection::inboxIdIsSet() const
{
    return m_InboxIdIsSet;
}

void TrackingPixelProjection::unsetInboxId()
{
    m_InboxIdIsSet = false;
}
utility::string_t TrackingPixelProjection::getName() const
{
    return m_Name;
}

void TrackingPixelProjection::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool TrackingPixelProjection::nameIsSet() const
{
    return m_NameIsSet;
}

void TrackingPixelProjection::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t TrackingPixelProjection::getRecipient() const
{
    return m_Recipient;
}

void TrackingPixelProjection::setRecipient(const utility::string_t& value)
{
    m_Recipient = value;
    m_RecipientIsSet = true;
}

bool TrackingPixelProjection::recipientIsSet() const
{
    return m_RecipientIsSet;
}

void TrackingPixelProjection::unsetRecipient()
{
    m_RecipientIsSet = false;
}
bool TrackingPixelProjection::isSeen() const
{
    return m_Seen;
}

void TrackingPixelProjection::setSeen(bool value)
{
    m_Seen = value;
    m_SeenIsSet = true;
}

bool TrackingPixelProjection::seenIsSet() const
{
    return m_SeenIsSet;
}

void TrackingPixelProjection::unsetSeen()
{
    m_SeenIsSet = false;
}
utility::datetime TrackingPixelProjection::getSeenAt() const
{
    return m_SeenAt;
}

void TrackingPixelProjection::setSeenAt(const utility::datetime& value)
{
    m_SeenAt = value;
    m_SeenAtIsSet = true;
}

bool TrackingPixelProjection::seenAtIsSet() const
{
    return m_SeenAtIsSet;
}

void TrackingPixelProjection::unsetSeenAt()
{
    m_SeenAtIsSet = false;
}
utility::string_t TrackingPixelProjection::getSentEmailId() const
{
    return m_SentEmailId;
}

void TrackingPixelProjection::setSentEmailId(const utility::string_t& value)
{
    m_SentEmailId = value;
    m_SentEmailIdIsSet = true;
}

bool TrackingPixelProjection::sentEmailIdIsSet() const
{
    return m_SentEmailIdIsSet;
}

void TrackingPixelProjection::unsetSentEmailId()
{
    m_SentEmailIdIsSet = false;
}
utility::string_t TrackingPixelProjection::getUserId() const
{
    return m_UserId;
}

void TrackingPixelProjection::setUserId(const utility::string_t& value)
{
    m_UserId = value;
    m_UserIdIsSet = true;
}

bool TrackingPixelProjection::userIdIsSet() const
{
    return m_UserIdIsSet;
}

void TrackingPixelProjection::unsetUserId()
{
    m_UserIdIsSet = false;
}
}
}
}
}


