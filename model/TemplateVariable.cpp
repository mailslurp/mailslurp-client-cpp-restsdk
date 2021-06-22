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



#include "TemplateVariable.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




TemplateVariable::TemplateVariable()
{
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_VariableType = utility::conversions::to_string_t("");
    m_VariableTypeIsSet = false;
}

TemplateVariable::~TemplateVariable()
{
}

void TemplateVariable::validate()
{
    // TODO: implement validation
}

web::json::value TemplateVariable::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_VariableTypeIsSet)
    {
        val[utility::conversions::to_string_t("variableType")] = ModelBase::toJson(m_VariableType);
    }

    return val;
}

bool TemplateVariable::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("variableType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("variableType"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_variableType;
            ok &= ModelBase::fromJson(fieldValue, refVal_variableType);
            setVariableType(refVal_variableType);
        }
    }
    return ok;
}

void TemplateVariable::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_VariableTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("variableType"), m_VariableType));
    }
}

bool TemplateVariable::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("variableType")))
    {
        utility::string_t refVal_variableType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("variableType")), refVal_variableType );
        setVariableType(refVal_variableType);
    }
    return ok;
}

utility::string_t TemplateVariable::getName() const
{
    return m_Name;
}

void TemplateVariable::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool TemplateVariable::nameIsSet() const
{
    return m_NameIsSet;
}

void TemplateVariable::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t TemplateVariable::getVariableType() const
{
    return m_VariableType;
}

void TemplateVariable::setVariableType(const utility::string_t& value)
{
    m_VariableType = value;
    m_VariableTypeIsSet = true;
}

bool TemplateVariable::variableTypeIsSet() const
{
    return m_VariableTypeIsSet;
}

void TemplateVariable::unsetVariableType()
{
    m_VariableTypeIsSet = false;
}
}
}
}
}


