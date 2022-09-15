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



#include "PhoneNumberProjection.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




PhoneNumberProjection::PhoneNumberProjection()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_UserId = utility::conversions::to_string_t("");
    m_UserIdIsSet = false;
    m_PhoneNumber = utility::conversions::to_string_t("");
    m_PhoneNumberIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
    m_PhoneCountry = utility::conversions::to_string_t("");
    m_PhoneCountryIsSet = false;
}

PhoneNumberProjection::~PhoneNumberProjection()
{
}

void PhoneNumberProjection::validate()
{
    // TODO: implement validation
}

web::json::value PhoneNumberProjection::toJson() const
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
    if(m_PhoneNumberIsSet)
    {
        val[utility::conversions::to_string_t("phoneNumber")] = ModelBase::toJson(m_PhoneNumber);
    }
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t("createdAt")] = ModelBase::toJson(m_CreatedAt);
    }
    if(m_PhoneCountryIsSet)
    {
        val[utility::conversions::to_string_t("phoneCountry")] = ModelBase::toJson(m_PhoneCountry);
    }

    return val;
}

bool PhoneNumberProjection::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("phoneNumber")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phoneNumber"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_phoneNumber;
            ok &= ModelBase::fromJson(fieldValue, refVal_phoneNumber);
            setPhoneNumber(refVal_phoneNumber);
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
    return ok;
}

void PhoneNumberProjection::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_PhoneNumberIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("phoneNumber"), m_PhoneNumber));
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("createdAt"), m_CreatedAt));
    }
    if(m_PhoneCountryIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("phoneCountry"), m_PhoneCountry));
    }
}

bool PhoneNumberProjection::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("phoneNumber")))
    {
        utility::string_t refVal_phoneNumber;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("phoneNumber")), refVal_phoneNumber );
        setPhoneNumber(refVal_phoneNumber);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("createdAt")))
    {
        utility::datetime refVal_createdAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("createdAt")), refVal_createdAt );
        setCreatedAt(refVal_createdAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("phoneCountry")))
    {
        utility::string_t refVal_phoneCountry;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("phoneCountry")), refVal_phoneCountry );
        setPhoneCountry(refVal_phoneCountry);
    }
    return ok;
}

utility::string_t PhoneNumberProjection::getId() const
{
    return m_Id;
}

void PhoneNumberProjection::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool PhoneNumberProjection::idIsSet() const
{
    return m_IdIsSet;
}

void PhoneNumberProjection::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t PhoneNumberProjection::getUserId() const
{
    return m_UserId;
}

void PhoneNumberProjection::setUserId(const utility::string_t& value)
{
    m_UserId = value;
    m_UserIdIsSet = true;
}

bool PhoneNumberProjection::userIdIsSet() const
{
    return m_UserIdIsSet;
}

void PhoneNumberProjection::unsetUserId()
{
    m_UserIdIsSet = false;
}
utility::string_t PhoneNumberProjection::getPhoneNumber() const
{
    return m_PhoneNumber;
}

void PhoneNumberProjection::setPhoneNumber(const utility::string_t& value)
{
    m_PhoneNumber = value;
    m_PhoneNumberIsSet = true;
}

bool PhoneNumberProjection::phoneNumberIsSet() const
{
    return m_PhoneNumberIsSet;
}

void PhoneNumberProjection::unsetPhoneNumber()
{
    m_PhoneNumberIsSet = false;
}
utility::datetime PhoneNumberProjection::getCreatedAt() const
{
    return m_CreatedAt;
}

void PhoneNumberProjection::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool PhoneNumberProjection::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void PhoneNumberProjection::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
utility::string_t PhoneNumberProjection::getPhoneCountry() const
{
    return m_PhoneCountry;
}

void PhoneNumberProjection::setPhoneCountry(const utility::string_t& value)
{
    m_PhoneCountry = value;
    m_PhoneCountryIsSet = true;
}

bool PhoneNumberProjection::phoneCountryIsSet() const
{
    return m_PhoneCountryIsSet;
}

void PhoneNumberProjection::unsetPhoneCountry()
{
    m_PhoneCountryIsSet = false;
}
}
}
}
}


