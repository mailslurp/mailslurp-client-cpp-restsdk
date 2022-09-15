/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://docs.mailslurp.com/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "ConditionOption.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




ConditionOption::ConditionOption()
{
    m_Condition = utility::conversions::to_string_t("");
    m_ConditionIsSet = false;
    m_Value = utility::conversions::to_string_t("");
    m_ValueIsSet = false;
}

ConditionOption::~ConditionOption()
{
}

void ConditionOption::validate()
{
    // TODO: implement validation
}

web::json::value ConditionOption::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ConditionIsSet)
    {
        val[utility::conversions::to_string_t("condition")] = ModelBase::toJson(m_Condition);
    }
    if(m_ValueIsSet)
    {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(m_Value);
    }

    return val;
}

bool ConditionOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("condition")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("condition"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_condition;
            ok &= ModelBase::fromJson(fieldValue, refVal_condition);
            setCondition(refVal_condition);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_value;
            ok &= ModelBase::fromJson(fieldValue, refVal_value);
            setValue(refVal_value);
        }
    }
    return ok;
}

void ConditionOption::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ConditionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("condition"), m_Condition));
    }
    if(m_ValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("value"), m_Value));
    }
}

bool ConditionOption::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("condition")))
    {
        utility::string_t refVal_condition;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("condition")), refVal_condition );
        setCondition(refVal_condition);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("value")))
    {
        utility::string_t refVal_value;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("value")), refVal_value );
        setValue(refVal_value);
    }
    return ok;
}

utility::string_t ConditionOption::getCondition() const
{
    return m_Condition;
}

void ConditionOption::setCondition(const utility::string_t& value)
{
    m_Condition = value;
    m_ConditionIsSet = true;
}

bool ConditionOption::conditionIsSet() const
{
    return m_ConditionIsSet;
}

void ConditionOption::unsetCondition()
{
    m_ConditionIsSet = false;
}
utility::string_t ConditionOption::getValue() const
{
    return m_Value;
}

void ConditionOption::setValue(const utility::string_t& value)
{
    m_Value = value;
    m_ValueIsSet = true;
}

bool ConditionOption::valueIsSet() const
{
    return m_ValueIsSet;
}

void ConditionOption::unsetValue()
{
    m_ValueIsSet = false;
}
}
}
}
}


