/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails and SMS from dynamically allocated email addresses and phone numbers. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://docs.mailslurp.com/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.2.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOpenAPIClient/model/EmailFeatureSupportStatusPercentage.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



EmailFeatureSupportStatusPercentage::EmailFeatureSupportStatusPercentage()
{
    m_Status = utility::conversions::to_string_t("");
    m_StatusIsSet = false;
    m_Percentage = 0.0f;
    m_PercentageIsSet = false;
}

EmailFeatureSupportStatusPercentage::~EmailFeatureSupportStatusPercentage()
{
}

void EmailFeatureSupportStatusPercentage::validate()
{
    // TODO: implement validation
}

web::json::value EmailFeatureSupportStatusPercentage::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_StatusIsSet)
    {
        val[utility::conversions::to_string_t(U("status"))] = ModelBase::toJson(m_Status);
    }
    if(m_PercentageIsSet)
    {
        val[utility::conversions::to_string_t(U("percentage"))] = ModelBase::toJson(m_Percentage);
    }

    return val;
}

bool EmailFeatureSupportStatusPercentage::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("status"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("status")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setStatus;
            ok &= ModelBase::fromJson(fieldValue, refVal_setStatus);
            setStatus(refVal_setStatus);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("percentage"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("percentage")));
        if(!fieldValue.is_null())
        {
            float refVal_setPercentage;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPercentage);
            setPercentage(refVal_setPercentage);
        }
    }
    return ok;
}

void EmailFeatureSupportStatusPercentage::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("status")), m_Status));
    }
    if(m_PercentageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("percentage")), m_Percentage));
    }
}

bool EmailFeatureSupportStatusPercentage::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("status"))))
    {
        utility::string_t refVal_setStatus;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("status"))), refVal_setStatus );
        setStatus(refVal_setStatus);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("percentage"))))
    {
        float refVal_setPercentage;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("percentage"))), refVal_setPercentage );
        setPercentage(refVal_setPercentage);
    }
    return ok;
}

utility::string_t EmailFeatureSupportStatusPercentage::getStatus() const
{
    return m_Status;
}

void EmailFeatureSupportStatusPercentage::setStatus(const utility::string_t& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool EmailFeatureSupportStatusPercentage::statusIsSet() const
{
    return m_StatusIsSet;
}

void EmailFeatureSupportStatusPercentage::unsetStatus()
{
    m_StatusIsSet = false;
}
float EmailFeatureSupportStatusPercentage::getPercentage() const
{
    return m_Percentage;
}

void EmailFeatureSupportStatusPercentage::setPercentage(float value)
{
    m_Percentage = value;
    m_PercentageIsSet = true;
}

bool EmailFeatureSupportStatusPercentage::percentageIsSet() const
{
    return m_PercentageIsSet;
}

void EmailFeatureSupportStatusPercentage::unsetPercentage()
{
    m_PercentageIsSet = false;
}
}
}
}
}


