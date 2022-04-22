/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://docs.mailslurp.com/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "OrganizationInboxProjection.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




OrganizationInboxProjection::OrganizationInboxProjection()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_EmailAddress = utility::conversions::to_string_t("");
    m_EmailAddressIsSet = false;
    m_Favourite = false;
    m_FavouriteIsSet = false;
    m_TagsIsSet = false;
    m_TeamAccess = false;
    m_TeamAccessIsSet = false;
    m_InboxType = utility::conversions::to_string_t("");
    m_InboxTypeIsSet = false;
    m_ReadOnly = false;
    m_ReadOnlyIsSet = false;
}

OrganizationInboxProjection::~OrganizationInboxProjection()
{
}

void OrganizationInboxProjection::validate()
{
    // TODO: implement validation
}

web::json::value OrganizationInboxProjection::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t("createdAt")] = ModelBase::toJson(m_CreatedAt);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_EmailAddressIsSet)
    {
        val[utility::conversions::to_string_t("emailAddress")] = ModelBase::toJson(m_EmailAddress);
    }
    if(m_FavouriteIsSet)
    {
        val[utility::conversions::to_string_t("favourite")] = ModelBase::toJson(m_Favourite);
    }
    if(m_TagsIsSet)
    {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(m_Tags);
    }
    if(m_TeamAccessIsSet)
    {
        val[utility::conversions::to_string_t("teamAccess")] = ModelBase::toJson(m_TeamAccess);
    }
    if(m_InboxTypeIsSet)
    {
        val[utility::conversions::to_string_t("inboxType")] = ModelBase::toJson(m_InboxType);
    }
    if(m_ReadOnlyIsSet)
    {
        val[utility::conversions::to_string_t("readOnly")] = ModelBase::toJson(m_ReadOnly);
    }

    return val;
}

bool OrganizationInboxProjection::fromJson(const web::json::value& val)
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
    return ok;
}

void OrganizationInboxProjection::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("createdAt"), m_CreatedAt));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
    if(m_EmailAddressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("emailAddress"), m_EmailAddress));
    }
    if(m_FavouriteIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("favourite"), m_Favourite));
    }
    if(m_TagsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("tags"), m_Tags));
    }
    if(m_TeamAccessIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("teamAccess"), m_TeamAccess));
    }
    if(m_InboxTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("inboxType"), m_InboxType));
    }
    if(m_ReadOnlyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("readOnly"), m_ReadOnly));
    }
}

bool OrganizationInboxProjection::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("createdAt")))
    {
        utility::datetime refVal_createdAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("createdAt")), refVal_createdAt );
        setCreatedAt(refVal_createdAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        utility::string_t refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("name")), refVal_name );
        setName(refVal_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("emailAddress")))
    {
        utility::string_t refVal_emailAddress;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("emailAddress")), refVal_emailAddress );
        setEmailAddress(refVal_emailAddress);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("favourite")))
    {
        bool refVal_favourite;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("favourite")), refVal_favourite );
        setFavourite(refVal_favourite);
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
    if(multipart->hasContent(utility::conversions::to_string_t("inboxType")))
    {
        utility::string_t refVal_inboxType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("inboxType")), refVal_inboxType );
        setInboxType(refVal_inboxType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("readOnly")))
    {
        bool refVal_readOnly;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("readOnly")), refVal_readOnly );
        setReadOnly(refVal_readOnly);
    }
    return ok;
}

utility::string_t OrganizationInboxProjection::getId() const
{
    return m_Id;
}

void OrganizationInboxProjection::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool OrganizationInboxProjection::idIsSet() const
{
    return m_IdIsSet;
}

void OrganizationInboxProjection::unsetId()
{
    m_IdIsSet = false;
}
utility::datetime OrganizationInboxProjection::getCreatedAt() const
{
    return m_CreatedAt;
}

void OrganizationInboxProjection::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool OrganizationInboxProjection::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void OrganizationInboxProjection::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
utility::string_t OrganizationInboxProjection::getName() const
{
    return m_Name;
}

void OrganizationInboxProjection::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool OrganizationInboxProjection::nameIsSet() const
{
    return m_NameIsSet;
}

void OrganizationInboxProjection::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t OrganizationInboxProjection::getEmailAddress() const
{
    return m_EmailAddress;
}

void OrganizationInboxProjection::setEmailAddress(const utility::string_t& value)
{
    m_EmailAddress = value;
    m_EmailAddressIsSet = true;
}

bool OrganizationInboxProjection::emailAddressIsSet() const
{
    return m_EmailAddressIsSet;
}

void OrganizationInboxProjection::unsetEmailAddress()
{
    m_EmailAddressIsSet = false;
}
bool OrganizationInboxProjection::isFavourite() const
{
    return m_Favourite;
}

void OrganizationInboxProjection::setFavourite(bool value)
{
    m_Favourite = value;
    m_FavouriteIsSet = true;
}

bool OrganizationInboxProjection::favouriteIsSet() const
{
    return m_FavouriteIsSet;
}

void OrganizationInboxProjection::unsetFavourite()
{
    m_FavouriteIsSet = false;
}
std::vector<utility::string_t>& OrganizationInboxProjection::getTags()
{
    return m_Tags;
}

void OrganizationInboxProjection::setTags(const std::vector<utility::string_t>& value)
{
    m_Tags = value;
    m_TagsIsSet = true;
}

bool OrganizationInboxProjection::tagsIsSet() const
{
    return m_TagsIsSet;
}

void OrganizationInboxProjection::unsetTags()
{
    m_TagsIsSet = false;
}
bool OrganizationInboxProjection::isTeamAccess() const
{
    return m_TeamAccess;
}

void OrganizationInboxProjection::setTeamAccess(bool value)
{
    m_TeamAccess = value;
    m_TeamAccessIsSet = true;
}

bool OrganizationInboxProjection::teamAccessIsSet() const
{
    return m_TeamAccessIsSet;
}

void OrganizationInboxProjection::unsetTeamAccess()
{
    m_TeamAccessIsSet = false;
}
utility::string_t OrganizationInboxProjection::getInboxType() const
{
    return m_InboxType;
}

void OrganizationInboxProjection::setInboxType(const utility::string_t& value)
{
    m_InboxType = value;
    m_InboxTypeIsSet = true;
}

bool OrganizationInboxProjection::inboxTypeIsSet() const
{
    return m_InboxTypeIsSet;
}

void OrganizationInboxProjection::unsetInboxType()
{
    m_InboxTypeIsSet = false;
}
bool OrganizationInboxProjection::isReadOnly() const
{
    return m_ReadOnly;
}

void OrganizationInboxProjection::setReadOnly(bool value)
{
    m_ReadOnly = value;
    m_ReadOnlyIsSet = true;
}

bool OrganizationInboxProjection::readOnlyIsSet() const
{
    return m_ReadOnlyIsSet;
}

void OrganizationInboxProjection::unsetReadOnly()
{
    m_ReadOnlyIsSet = false;
}
}
}
}
}


