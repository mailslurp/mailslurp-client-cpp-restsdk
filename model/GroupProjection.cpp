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



#include "GroupProjection.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




GroupProjection::GroupProjection()
{
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
}

GroupProjection::~GroupProjection()
{
}

void GroupProjection::validate()
{
    // TODO: implement validation
}

web::json::value GroupProjection::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_DescriptionIsSet)
    {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(m_Description);
    }
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t("createdAt")] = ModelBase::toJson(m_CreatedAt);
    }

    return val;
}

bool GroupProjection::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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

void GroupProjection::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("description"), m_Description));
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("createdAt"), m_CreatedAt));
    }
}

bool GroupProjection::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        utility::string_t refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("name")), refVal_name );
        setName(refVal_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        utility::string_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("id")), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("description")))
    {
        utility::string_t refVal_description;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("description")), refVal_description );
        setDescription(refVal_description);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("createdAt")))
    {
        utility::datetime refVal_createdAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("createdAt")), refVal_createdAt );
        setCreatedAt(refVal_createdAt);
    }
    return ok;
}

utility::string_t GroupProjection::getName() const
{
    return m_Name;
}

void GroupProjection::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool GroupProjection::nameIsSet() const
{
    return m_NameIsSet;
}

void GroupProjection::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t GroupProjection::getId() const
{
    return m_Id;
}

void GroupProjection::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool GroupProjection::idIsSet() const
{
    return m_IdIsSet;
}

void GroupProjection::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t GroupProjection::getDescription() const
{
    return m_Description;
}

void GroupProjection::setDescription(const utility::string_t& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}

bool GroupProjection::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void GroupProjection::unsetDescription()
{
    m_DescriptionIsSet = false;
}
utility::datetime GroupProjection::getCreatedAt() const
{
    return m_CreatedAt;
}

void GroupProjection::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool GroupProjection::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void GroupProjection::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
}
}
}
}


