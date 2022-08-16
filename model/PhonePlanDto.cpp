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



#include "PhonePlanDto.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




PhonePlanDto::PhonePlanDto()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_UserId = utility::conversions::to_string_t("");
    m_UserIdIsSet = false;
    m_PhoneCountry = utility::conversions::to_string_t("");
    m_PhoneCountryIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
}

PhonePlanDto::~PhonePlanDto()
{
}

void PhonePlanDto::validate()
{
    // TODO: implement validation
}

web::json::value PhonePlanDto::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_UserIdIsSet)
    {
        val[utility::conversions::to_string_t("userId")] = ModelBase::toJson(m_UserId);
    }
    if(m_PhoneCountryIsSet)
    {
        val[utility::conversions::to_string_t("phoneCountry")] = ModelBase::toJson(m_PhoneCountry);
    }
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t("createdAt")] = ModelBase::toJson(m_CreatedAt);
    }

    return val;
}

bool PhonePlanDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("phoneCountry")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phoneCountry"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_phoneCountry;
            ok &= ModelBase::fromJson(fieldValue, refVal_phoneCountry);
            setPhoneCountry(refVal_phoneCountry);
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

void PhonePlanDto::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_UserIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("userId"), m_UserId));
    }
    if(m_PhoneCountryIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("phoneCountry"), m_PhoneCountry));
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("createdAt"), m_CreatedAt));
    }
}

bool PhonePlanDto::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("userId")))
    {
        utility::string_t refVal_userId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("userId")), refVal_userId );
        setUserId(refVal_userId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("phoneCountry")))
    {
        utility::string_t refVal_phoneCountry;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("phoneCountry")), refVal_phoneCountry );
        setPhoneCountry(refVal_phoneCountry);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("createdAt")))
    {
        utility::datetime refVal_createdAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("createdAt")), refVal_createdAt );
        setCreatedAt(refVal_createdAt);
    }
    return ok;
}

utility::string_t PhonePlanDto::getId() const
{
    return m_Id;
}

void PhonePlanDto::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool PhonePlanDto::idIsSet() const
{
    return m_IdIsSet;
}

void PhonePlanDto::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t PhonePlanDto::getUserId() const
{
    return m_UserId;
}

void PhonePlanDto::setUserId(const utility::string_t& value)
{
    m_UserId = value;
    m_UserIdIsSet = true;
}

bool PhonePlanDto::userIdIsSet() const
{
    return m_UserIdIsSet;
}

void PhonePlanDto::unsetUserId()
{
    m_UserIdIsSet = false;
}
utility::string_t PhonePlanDto::getPhoneCountry() const
{
    return m_PhoneCountry;
}

void PhonePlanDto::setPhoneCountry(const utility::string_t& value)
{
    m_PhoneCountry = value;
    m_PhoneCountryIsSet = true;
}

bool PhonePlanDto::phoneCountryIsSet() const
{
    return m_PhoneCountryIsSet;
}

void PhonePlanDto::unsetPhoneCountry()
{
    m_PhoneCountryIsSet = false;
}
utility::datetime PhonePlanDto::getCreatedAt() const
{
    return m_CreatedAt;
}

void PhonePlanDto::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool PhonePlanDto::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void PhonePlanDto::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
}
}
}
}


