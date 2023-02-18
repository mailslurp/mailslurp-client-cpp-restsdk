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



#include "CppRestOpenAPIClient/model/UpdateInboxOptions.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



UpdateInboxOptions::UpdateInboxOptions()
{
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
    m_TagsIsSet = false;
    m_ExpiresAt = utility::datetime();
    m_ExpiresAtIsSet = false;
    m_Favourite = false;
    m_FavouriteIsSet = false;
}

UpdateInboxOptions::~UpdateInboxOptions()
{
}

void UpdateInboxOptions::validate()
{
    // TODO: implement validation
}

web::json::value UpdateInboxOptions::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_DescriptionIsSet)
    {
        val[utility::conversions::to_string_t(U("description"))] = ModelBase::toJson(m_Description);
    }
    if(m_TagsIsSet)
    {
        val[utility::conversions::to_string_t(U("tags"))] = ModelBase::toJson(m_Tags);
    }
    if(m_ExpiresAtIsSet)
    {
        val[utility::conversions::to_string_t(U("expiresAt"))] = ModelBase::toJson(m_ExpiresAt);
    }
    if(m_FavouriteIsSet)
    {
        val[utility::conversions::to_string_t(U("favourite"))] = ModelBase::toJson(m_Favourite);
    }

    return val;
}

bool UpdateInboxOptions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t(U("description"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("description")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDescription;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDescription);
            setDescription(refVal_setDescription);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("tags"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("tags")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setTags;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTags);
            setTags(refVal_setTags);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("expiresAt"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("expiresAt")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setExpiresAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_setExpiresAt);
            setExpiresAt(refVal_setExpiresAt);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("favourite"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("favourite")));
        if(!fieldValue.is_null())
        {
            bool refVal_setFavourite;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFavourite);
            setFavourite(refVal_setFavourite);
        }
    }
    return ok;
}

void UpdateInboxOptions::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("description")), m_Description));
    }
    if(m_TagsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("tags")), m_Tags));
    }
    if(m_ExpiresAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("expiresAt")), m_ExpiresAt));
    }
    if(m_FavouriteIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("favourite")), m_Favourite));
    }
}

bool UpdateInboxOptions::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("description"))))
    {
        utility::string_t refVal_setDescription;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("description"))), refVal_setDescription );
        setDescription(refVal_setDescription);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("tags"))))
    {
        std::vector<utility::string_t> refVal_setTags;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("tags"))), refVal_setTags );
        setTags(refVal_setTags);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("expiresAt"))))
    {
        utility::datetime refVal_setExpiresAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("expiresAt"))), refVal_setExpiresAt );
        setExpiresAt(refVal_setExpiresAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("favourite"))))
    {
        bool refVal_setFavourite;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("favourite"))), refVal_setFavourite );
        setFavourite(refVal_setFavourite);
    }
    return ok;
}

utility::string_t UpdateInboxOptions::getName() const
{
    return m_Name;
}

void UpdateInboxOptions::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool UpdateInboxOptions::nameIsSet() const
{
    return m_NameIsSet;
}

void UpdateInboxOptions::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t UpdateInboxOptions::getDescription() const
{
    return m_Description;
}

void UpdateInboxOptions::setDescription(const utility::string_t& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}

bool UpdateInboxOptions::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void UpdateInboxOptions::unsetDescription()
{
    m_DescriptionIsSet = false;
}
std::vector<utility::string_t>& UpdateInboxOptions::getTags()
{
    return m_Tags;
}

void UpdateInboxOptions::setTags(const std::vector<utility::string_t>& value)
{
    m_Tags = value;
    m_TagsIsSet = true;
}

bool UpdateInboxOptions::tagsIsSet() const
{
    return m_TagsIsSet;
}

void UpdateInboxOptions::unsetTags()
{
    m_TagsIsSet = false;
}
utility::datetime UpdateInboxOptions::getExpiresAt() const
{
    return m_ExpiresAt;
}

void UpdateInboxOptions::setExpiresAt(const utility::datetime& value)
{
    m_ExpiresAt = value;
    m_ExpiresAtIsSet = true;
}

bool UpdateInboxOptions::expiresAtIsSet() const
{
    return m_ExpiresAtIsSet;
}

void UpdateInboxOptions::unsetExpiresAt()
{
    m_ExpiresAtIsSet = false;
}
bool UpdateInboxOptions::isFavourite() const
{
    return m_Favourite;
}

void UpdateInboxOptions::setFavourite(bool value)
{
    m_Favourite = value;
    m_FavouriteIsSet = true;
}

bool UpdateInboxOptions::favouriteIsSet() const
{
    return m_FavouriteIsSet;
}

void UpdateInboxOptions::unsetFavourite()
{
    m_FavouriteIsSet = false;
}
}
}
}
}

