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



#include "CppRestOpenAPIClient/model/TrackingPixelProjection.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



TrackingPixelProjection::TrackingPixelProjection()
{
    m_InboxId = utility::conversions::to_string_t("");
    m_InboxIdIsSet = false;
    m_UserId = utility::conversions::to_string_t("");
    m_UserIdIsSet = false;
    m_SentEmailId = utility::conversions::to_string_t("");
    m_SentEmailIdIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
    m_Recipient = utility::conversions::to_string_t("");
    m_RecipientIsSet = false;
    m_Seen = false;
    m_SeenIsSet = false;
    m_SeenAt = utility::datetime();
    m_SeenAtIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
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
    
    if(m_InboxIdIsSet)
    {
        val[utility::conversions::to_string_t(U("inboxId"))] = ModelBase::toJson(m_InboxId);
    }
    if(m_UserIdIsSet)
    {
        val[utility::conversions::to_string_t(U("userId"))] = ModelBase::toJson(m_UserId);
    }
    if(m_SentEmailIdIsSet)
    {
        val[utility::conversions::to_string_t(U("sentEmailId"))] = ModelBase::toJson(m_SentEmailId);
    }
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t(U("createdAt"))] = ModelBase::toJson(m_CreatedAt);
    }
    if(m_RecipientIsSet)
    {
        val[utility::conversions::to_string_t(U("recipient"))] = ModelBase::toJson(m_Recipient);
    }
    if(m_SeenIsSet)
    {
        val[utility::conversions::to_string_t(U("seen"))] = ModelBase::toJson(m_Seen);
    }
    if(m_SeenAtIsSet)
    {
        val[utility::conversions::to_string_t(U("seenAt"))] = ModelBase::toJson(m_SeenAt);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }

    return val;
}

bool TrackingPixelProjection::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t(U("sentEmailId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("sentEmailId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSentEmailId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSentEmailId);
            setSentEmailId(refVal_setSentEmailId);
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
    if(val.has_field(utility::conversions::to_string_t(U("recipient"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("recipient")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setRecipient;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRecipient);
            setRecipient(refVal_setRecipient);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("seen"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("seen")));
        if(!fieldValue.is_null())
        {
            bool refVal_setSeen;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSeen);
            setSeen(refVal_setSeen);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("seenAt"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("seenAt")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setSeenAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSeenAt);
            setSeenAt(refVal_setSeenAt);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setName);
            setName(refVal_setName);
        }
    }
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
    return ok;
}

void TrackingPixelProjection::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_InboxIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("inboxId")), m_InboxId));
    }
    if(m_UserIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("userId")), m_UserId));
    }
    if(m_SentEmailIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("sentEmailId")), m_SentEmailId));
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("createdAt")), m_CreatedAt));
    }
    if(m_RecipientIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("recipient")), m_Recipient));
    }
    if(m_SeenIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("seen")), m_Seen));
    }
    if(m_SeenAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("seenAt")), m_SeenAt));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_Id));
    }
}

bool TrackingPixelProjection::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("inboxId"))))
    {
        utility::string_t refVal_setInboxId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("inboxId"))), refVal_setInboxId );
        setInboxId(refVal_setInboxId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("userId"))))
    {
        utility::string_t refVal_setUserId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("userId"))), refVal_setUserId );
        setUserId(refVal_setUserId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("sentEmailId"))))
    {
        utility::string_t refVal_setSentEmailId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("sentEmailId"))), refVal_setSentEmailId );
        setSentEmailId(refVal_setSentEmailId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("createdAt"))))
    {
        utility::datetime refVal_setCreatedAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("createdAt"))), refVal_setCreatedAt );
        setCreatedAt(refVal_setCreatedAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("recipient"))))
    {
        utility::string_t refVal_setRecipient;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("recipient"))), refVal_setRecipient );
        setRecipient(refVal_setRecipient);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("seen"))))
    {
        bool refVal_setSeen;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("seen"))), refVal_setSeen );
        setSeen(refVal_setSeen);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("seenAt"))))
    {
        utility::datetime refVal_setSeenAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("seenAt"))), refVal_setSeenAt );
        setSeenAt(refVal_setSeenAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_setId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_setId );
        setId(refVal_setId);
    }
    return ok;
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
}
}
}
}


