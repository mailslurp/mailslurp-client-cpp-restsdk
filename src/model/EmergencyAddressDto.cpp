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



#include "CppRestOpenAPIClient/model/EmergencyAddressDto.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



EmergencyAddressDto::EmergencyAddressDto()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Address1 = utility::conversions::to_string_t("");
    m_Address1IsSet = false;
    m_PhoneCountry = utility::conversions::to_string_t("");
    m_PhoneCountryIsSet = false;
}

EmergencyAddressDto::~EmergencyAddressDto()
{
}

void EmergencyAddressDto::validate()
{
    // TODO: implement validation
}

web::json::value EmergencyAddressDto::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_Address1IsSet)
    {
        val[utility::conversions::to_string_t(U("address1"))] = ModelBase::toJson(m_Address1);
    }
    if(m_PhoneCountryIsSet)
    {
        val[utility::conversions::to_string_t(U("phoneCountry"))] = ModelBase::toJson(m_PhoneCountry);
    }

    return val;
}

bool EmergencyAddressDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t(U("address1"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("address1")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setAddress1;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAddress1);
            setAddress1(refVal_setAddress1);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("phoneCountry"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("phoneCountry")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setPhoneCountry;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPhoneCountry);
            setPhoneCountry(refVal_setPhoneCountry);
        }
    }
    return ok;
}

void EmergencyAddressDto::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_Id));
    }
    if(m_Address1IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("address1")), m_Address1));
    }
    if(m_PhoneCountryIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("phoneCountry")), m_PhoneCountry));
    }
}

bool EmergencyAddressDto::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_setId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_setId );
        setId(refVal_setId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("address1"))))
    {
        utility::string_t refVal_setAddress1;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("address1"))), refVal_setAddress1 );
        setAddress1(refVal_setAddress1);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("phoneCountry"))))
    {
        utility::string_t refVal_setPhoneCountry;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("phoneCountry"))), refVal_setPhoneCountry );
        setPhoneCountry(refVal_setPhoneCountry);
    }
    return ok;
}

utility::string_t EmergencyAddressDto::getId() const
{
    return m_Id;
}

void EmergencyAddressDto::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool EmergencyAddressDto::idIsSet() const
{
    return m_IdIsSet;
}

void EmergencyAddressDto::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t EmergencyAddressDto::getAddress1() const
{
    return m_Address1;
}

void EmergencyAddressDto::setAddress1(const utility::string_t& value)
{
    m_Address1 = value;
    m_Address1IsSet = true;
}

bool EmergencyAddressDto::address1IsSet() const
{
    return m_Address1IsSet;
}

void EmergencyAddressDto::unsetAddress1()
{
    m_Address1IsSet = false;
}
utility::string_t EmergencyAddressDto::getPhoneCountry() const
{
    return m_PhoneCountry;
}

void EmergencyAddressDto::setPhoneCountry(const utility::string_t& value)
{
    m_PhoneCountry = value;
    m_PhoneCountryIsSet = true;
}

bool EmergencyAddressDto::phoneCountryIsSet() const
{
    return m_PhoneCountryIsSet;
}

void EmergencyAddressDto::unsetPhoneCountry()
{
    m_PhoneCountryIsSet = false;
}
}
}
}
}


