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



#include "CppRestOpenAPIClient/model/EmailFeatureCategoryName.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



EmailFeatureCategoryName::EmailFeatureCategoryName()
{
    m_Slug = utility::conversions::to_string_t("");
    m_SlugIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
}

EmailFeatureCategoryName::~EmailFeatureCategoryName()
{
}

void EmailFeatureCategoryName::validate()
{
    // TODO: implement validation
}

web::json::value EmailFeatureCategoryName::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_SlugIsSet)
    {
        val[utility::conversions::to_string_t(U("slug"))] = ModelBase::toJson(m_Slug);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }

    return val;
}

bool EmailFeatureCategoryName::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("slug"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("slug")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSlug;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSlug);
            setSlug(refVal_setSlug);
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
    return ok;
}

void EmailFeatureCategoryName::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_SlugIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("slug")), m_Slug));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
}

bool EmailFeatureCategoryName::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("slug"))))
    {
        utility::string_t refVal_setSlug;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("slug"))), refVal_setSlug );
        setSlug(refVal_setSlug);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    return ok;
}

utility::string_t EmailFeatureCategoryName::getSlug() const
{
    return m_Slug;
}

void EmailFeatureCategoryName::setSlug(const utility::string_t& value)
{
    m_Slug = value;
    m_SlugIsSet = true;
}

bool EmailFeatureCategoryName::slugIsSet() const
{
    return m_SlugIsSet;
}

void EmailFeatureCategoryName::unsetSlug()
{
    m_SlugIsSet = false;
}
utility::string_t EmailFeatureCategoryName::getName() const
{
    return m_Name;
}

void EmailFeatureCategoryName::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool EmailFeatureCategoryName::nameIsSet() const
{
    return m_NameIsSet;
}

void EmailFeatureCategoryName::unsetName()
{
    m_NameIsSet = false;
}
}
}
}
}


