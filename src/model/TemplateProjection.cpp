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



#include "CppRestOpenAPIClient/model/TemplateProjection.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



TemplateProjection::TemplateProjection()
{
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
    m_UpdatedAt = utility::datetime();
    m_UpdatedAtIsSet = false;
    m_VariablesIsSet = false;
}

TemplateProjection::~TemplateProjection()
{
}

void TemplateProjection::validate()
{
    // TODO: implement validation
}

web::json::value TemplateProjection::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t(U("createdAt"))] = ModelBase::toJson(m_CreatedAt);
    }
    if(m_UpdatedAtIsSet)
    {
        val[utility::conversions::to_string_t(U("updatedAt"))] = ModelBase::toJson(m_UpdatedAt);
    }
    if(m_VariablesIsSet)
    {
        val[utility::conversions::to_string_t(U("variables"))] = ModelBase::toJson(m_Variables);
    }

    return val;
}

bool TemplateProjection::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("updatedAt"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("updatedAt")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setUpdatedAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUpdatedAt);
            setUpdatedAt(refVal_setUpdatedAt);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("variables"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("variables")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setVariables;
            ok &= ModelBase::fromJson(fieldValue, refVal_setVariables);
            setVariables(refVal_setVariables);
        }
    }
    return ok;
}

void TemplateProjection::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_Id));
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("createdAt")), m_CreatedAt));
    }
    if(m_UpdatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("updatedAt")), m_UpdatedAt));
    }
    if(m_VariablesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("variables")), m_Variables));
    }
}

bool TemplateProjection::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_setId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_setId );
        setId(refVal_setId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("createdAt"))))
    {
        utility::datetime refVal_setCreatedAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("createdAt"))), refVal_setCreatedAt );
        setCreatedAt(refVal_setCreatedAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("updatedAt"))))
    {
        utility::datetime refVal_setUpdatedAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("updatedAt"))), refVal_setUpdatedAt );
        setUpdatedAt(refVal_setUpdatedAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("variables"))))
    {
        std::vector<utility::string_t> refVal_setVariables;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("variables"))), refVal_setVariables );
        setVariables(refVal_setVariables);
    }
    return ok;
}

utility::string_t TemplateProjection::getName() const
{
    return m_Name;
}

void TemplateProjection::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool TemplateProjection::nameIsSet() const
{
    return m_NameIsSet;
}

void TemplateProjection::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t TemplateProjection::getId() const
{
    return m_Id;
}

void TemplateProjection::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool TemplateProjection::idIsSet() const
{
    return m_IdIsSet;
}

void TemplateProjection::unsetId()
{
    m_IdIsSet = false;
}
utility::datetime TemplateProjection::getCreatedAt() const
{
    return m_CreatedAt;
}

void TemplateProjection::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool TemplateProjection::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void TemplateProjection::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
utility::datetime TemplateProjection::getUpdatedAt() const
{
    return m_UpdatedAt;
}

void TemplateProjection::setUpdatedAt(const utility::datetime& value)
{
    m_UpdatedAt = value;
    m_UpdatedAtIsSet = true;
}

bool TemplateProjection::updatedAtIsSet() const
{
    return m_UpdatedAtIsSet;
}

void TemplateProjection::unsetUpdatedAt()
{
    m_UpdatedAtIsSet = false;
}
std::vector<utility::string_t>& TemplateProjection::getVariables()
{
    return m_Variables;
}

void TemplateProjection::setVariables(const std::vector<utility::string_t>& value)
{
    m_Variables = value;
    m_VariablesIsSet = true;
}

bool TemplateProjection::variablesIsSet() const
{
    return m_VariablesIsSet;
}

void TemplateProjection::unsetVariables()
{
    m_VariablesIsSet = false;
}
}
}
}
}

