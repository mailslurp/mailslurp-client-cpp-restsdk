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



#include "Inbox.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




Inbox::Inbox()
{
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
    m_EmailAddress = utility::conversions::to_string_t("");
    m_EmailAddressIsSet = false;
    m_ExpiresAt = utility::conversions::to_string_t("");
    m_ExpiresAtIsSet = false;
    m_Favourite = false;
    m_FavouriteIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_InboxType = utility::conversions::to_string_t("");
    m_InboxTypeIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_ReadOnly = false;
    m_ReadOnlyIsSet = false;
    m_TagsIsSet = false;
    m_TeamAccess = false;
    m_TeamAccessIsSet = false;
    m_UserId = utility::conversions::to_string_t("");
    m_UserIdIsSet = false;
}

Inbox::~Inbox()
{
}

void Inbox::validate()
{
    // TODO: implement validation
}

web::json::value Inbox::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t("createdAt")] = ModelBase::toJson(m_CreatedAt);
    }
    if(m_DescriptionIsSet)
    {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(m_Description);
    }
    if(m_EmailAddressIsSet)
    {
        val[utility::conversions::to_string_t("emailAddress")] = ModelBase::toJson(m_EmailAddress);
    }
    if(m_ExpiresAtIsSet)
    {
        val[utility::conversions::to_string_t("expiresAt")] = ModelBase::toJson(m_ExpiresAt);
    }
    if(m_FavouriteIsSet)
    {
        val[utility::conversions::to_string_t("favourite")] = ModelBase::toJson(m_Favourite);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_InboxTypeIsSet)
    {
        val[utility::conversions::to_string_t("inboxType")] = ModelBase::toJson(m_InboxType);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_ReadOnlyIsSet)
    {
        val[utility::conversions::to_string_t("readOnly")] = ModelBase::toJson(m_ReadOnly);
    }
    if(m_TagsIsSet)
    {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(m_Tags);
    }
    if(m_TeamAccessIsSet)
    {
        val[utility::conversions::to_string_t("teamAccess")] = ModelBase::toJson(m_TeamAccess);
    }
    if(m_UserIdIsSet)
    {
        val[utility::conversions::to_string_t("userId")] = ModelBase::toJson(m_UserId);
    }

    return val;
}

bool Inbox::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_description;
            ok &= ModelBase::fromJson(fieldValue, refVal_description);
            setDescription(refVal_description);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("emailAddress")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("emailAddress"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_emailAddress;
            ok &= ModelBase::fromJson(fieldValue, refVal_emailAddress);
            setEmailAddress(refVal_emailAddress);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expiresAt")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expiresAt"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_expiresAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_expiresAt);
            setExpiresAt(refVal_expiresAt);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("favourite")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("favourite"));
        if(!fieldValue.is_null())
        {
            bool refVal_favourite;
            ok &= ModelBase::fromJson(fieldValue, refVal_favourite);
            setFavourite(refVal_favourite);
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
    if(val.has_field(utility::conversions::to_string_t("inboxType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inboxType"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_inboxType;
            ok &= ModelBase::fromJson(fieldValue, refVal_inboxType);
            setInboxType(refVal_inboxType);
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
    if(val.has_field(utility::conversions::to_string_t("readOnly")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("readOnly"));
        if(!fieldValue.is_null())
        {
            bool refVal_readOnly;
            ok &= ModelBase::fromJson(fieldValue, refVal_readOnly);
            setReadOnly(refVal_readOnly);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_tags;
            ok &= ModelBase::fromJson(fieldValue, refVal_tags);
            setTags(refVal_tags);
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

void Inbox::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("description"), m_Description));
    }
    if(m_EmailAddressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("emailAddress"), m_EmailAddress));
    }
    if(m_ExpiresAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("expiresAt"), m_ExpiresAt));
    }
    if(m_FavouriteIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("favourite"), m_Favourite));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_InboxTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("inboxType"), m_InboxType));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
    if(m_ReadOnlyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("readOnly"), m_ReadOnly));
    }
    if(m_TagsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("tags"), m_Tags));
    }
    if(m_TeamAccessIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("teamAccess"), m_TeamAccess));
    }
    if(m_UserIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("userId"), m_UserId));
    }
}

bool Inbox::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("description")))
    {
        utility::string_t refVal_description;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("description")), refVal_description );
        setDescription(refVal_description);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("emailAddress")))
    {
        utility::string_t refVal_emailAddress;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("emailAddress")), refVal_emailAddress );
        setEmailAddress(refVal_emailAddress);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("expiresAt")))
    {
        utility::string_t refVal_expiresAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("expiresAt")), refVal_expiresAt );
        setExpiresAt(refVal_expiresAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("favourite")))
    {
        bool refVal_favourite;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("favourite")), refVal_favourite );
        setFavourite(refVal_favourite);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        utility::string_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("id")), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("inboxType")))
    {
        utility::string_t refVal_inboxType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("inboxType")), refVal_inboxType );
        setInboxType(refVal_inboxType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        utility::string_t refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("name")), refVal_name );
        setName(refVal_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("readOnly")))
    {
        bool refVal_readOnly;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("readOnly")), refVal_readOnly );
        setReadOnly(refVal_readOnly);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("tags")))
    {
        std::vector<utility::string_t> refVal_tags;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("tags")), refVal_tags );
        setTags(refVal_tags);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("teamAccess")))
    {
        bool refVal_teamAccess;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("teamAccess")), refVal_teamAccess );
        setTeamAccess(refVal_teamAccess);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("userId")))
    {
        utility::string_t refVal_userId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("userId")), refVal_userId );
        setUserId(refVal_userId);
    }
    return ok;
}

utility::datetime Inbox::getCreatedAt() const
{
    return m_CreatedAt;
}

void Inbox::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool Inbox::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void Inbox::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
utility::string_t Inbox::getDescription() const
{
    return m_Description;
}

void Inbox::setDescription(const utility::string_t& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}

bool Inbox::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void Inbox::unsetDescription()
{
    m_DescriptionIsSet = false;
}
utility::string_t Inbox::getEmailAddress() const
{
    return m_EmailAddress;
}

void Inbox::setEmailAddress(const utility::string_t& value)
{
    m_EmailAddress = value;
    m_EmailAddressIsSet = true;
}

bool Inbox::emailAddressIsSet() const
{
    return m_EmailAddressIsSet;
}

void Inbox::unsetEmailAddress()
{
    m_EmailAddressIsSet = false;
}
utility::string_t Inbox::getExpiresAt() const
{
    return m_ExpiresAt;
}

void Inbox::setExpiresAt(const utility::string_t& value)
{
    m_ExpiresAt = value;
    m_ExpiresAtIsSet = true;
}

bool Inbox::expiresAtIsSet() const
{
    return m_ExpiresAtIsSet;
}

void Inbox::unsetExpiresAt()
{
    m_ExpiresAtIsSet = false;
}
bool Inbox::isFavourite() const
{
    return m_Favourite;
}

void Inbox::setFavourite(bool value)
{
    m_Favourite = value;
    m_FavouriteIsSet = true;
}

bool Inbox::favouriteIsSet() const
{
    return m_FavouriteIsSet;
}

void Inbox::unsetFavourite()
{
    m_FavouriteIsSet = false;
}
utility::string_t Inbox::getId() const
{
    return m_Id;
}

void Inbox::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool Inbox::idIsSet() const
{
    return m_IdIsSet;
}

void Inbox::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t Inbox::getInboxType() const
{
    return m_InboxType;
}

void Inbox::setInboxType(const utility::string_t& value)
{
    m_InboxType = value;
    m_InboxTypeIsSet = true;
}

bool Inbox::inboxTypeIsSet() const
{
    return m_InboxTypeIsSet;
}

void Inbox::unsetInboxType()
{
    m_InboxTypeIsSet = false;
}
utility::string_t Inbox::getName() const
{
    return m_Name;
}

void Inbox::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool Inbox::nameIsSet() const
{
    return m_NameIsSet;
}

void Inbox::unsetName()
{
    m_NameIsSet = false;
}
bool Inbox::isReadOnly() const
{
    return m_ReadOnly;
}

void Inbox::setReadOnly(bool value)
{
    m_ReadOnly = value;
    m_ReadOnlyIsSet = true;
}

bool Inbox::readOnlyIsSet() const
{
    return m_ReadOnlyIsSet;
}

void Inbox::unsetReadOnly()
{
    m_ReadOnlyIsSet = false;
}
std::vector<utility::string_t>& Inbox::getTags()
{
    return m_Tags;
}

void Inbox::setTags(const std::vector<utility::string_t>& value)
{
    m_Tags = value;
    m_TagsIsSet = true;
}

bool Inbox::tagsIsSet() const
{
    return m_TagsIsSet;
}

void Inbox::unsetTags()
{
    m_TagsIsSet = false;
}
bool Inbox::isTeamAccess() const
{
    return m_TeamAccess;
}

void Inbox::setTeamAccess(bool value)
{
    m_TeamAccess = value;
    m_TeamAccessIsSet = true;
}

bool Inbox::teamAccessIsSet() const
{
    return m_TeamAccessIsSet;
}

void Inbox::unsetTeamAccess()
{
    m_TeamAccessIsSet = false;
}
utility::string_t Inbox::getUserId() const
{
    return m_UserId;
}

void Inbox::setUserId(const utility::string_t& value)
{
    m_UserId = value;
    m_UserIdIsSet = true;
}

bool Inbox::userIdIsSet() const
{
    return m_UserIdIsSet;
}

void Inbox::unsetUserId()
{
    m_UserIdIsSet = false;
}
}
}
}
}


