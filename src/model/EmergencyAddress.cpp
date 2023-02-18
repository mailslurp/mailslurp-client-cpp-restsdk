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



#include "CppRestOpenAPIClient/model/EmergencyAddress.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



EmergencyAddress::EmergencyAddress()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Sid = utility::conversions::to_string_t("");
    m_SidIsSet = false;
    m_UserId = utility::conversions::to_string_t("");
    m_UserIdIsSet = false;
    m_DisplayName = utility::conversions::to_string_t("");
    m_DisplayNameIsSet = false;
    m_CustomerName = utility::conversions::to_string_t("");
    m_CustomerNameIsSet = false;
    m_Address1 = utility::conversions::to_string_t("");
    m_Address1IsSet = false;
    m_City = utility::conversions::to_string_t("");
    m_CityIsSet = false;
    m_Region = utility::conversions::to_string_t("");
    m_RegionIsSet = false;
    m_PostalCode = utility::conversions::to_string_t("");
    m_PostalCodeIsSet = false;
    m_PhoneCountry = utility::conversions::to_string_t("");
    m_PhoneCountryIsSet = false;
    m_AccountSid = utility::conversions::to_string_t("");
    m_AccountSidIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
    m_UpdatedAt = utility::datetime();
    m_UpdatedAtIsSet = false;
}

EmergencyAddress::~EmergencyAddress()
{
}

void EmergencyAddress::validate()
{
    // TODO: implement validation
}

web::json::value EmergencyAddress::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_SidIsSet)
    {
        val[utility::conversions::to_string_t(U("sid"))] = ModelBase::toJson(m_Sid);
    }
    if(m_UserIdIsSet)
    {
        val[utility::conversions::to_string_t(U("userId"))] = ModelBase::toJson(m_UserId);
    }
    if(m_DisplayNameIsSet)
    {
        val[utility::conversions::to_string_t(U("displayName"))] = ModelBase::toJson(m_DisplayName);
    }
    if(m_CustomerNameIsSet)
    {
        val[utility::conversions::to_string_t(U("customerName"))] = ModelBase::toJson(m_CustomerName);
    }
    if(m_Address1IsSet)
    {
        val[utility::conversions::to_string_t(U("address1"))] = ModelBase::toJson(m_Address1);
    }
    if(m_CityIsSet)
    {
        val[utility::conversions::to_string_t(U("city"))] = ModelBase::toJson(m_City);
    }
    if(m_RegionIsSet)
    {
        val[utility::conversions::to_string_t(U("region"))] = ModelBase::toJson(m_Region);
    }
    if(m_PostalCodeIsSet)
    {
        val[utility::conversions::to_string_t(U("postalCode"))] = ModelBase::toJson(m_PostalCode);
    }
    if(m_PhoneCountryIsSet)
    {
        val[utility::conversions::to_string_t(U("phoneCountry"))] = ModelBase::toJson(m_PhoneCountry);
    }
    if(m_AccountSidIsSet)
    {
        val[utility::conversions::to_string_t(U("accountSid"))] = ModelBase::toJson(m_AccountSid);
    }
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t(U("createdAt"))] = ModelBase::toJson(m_CreatedAt);
    }
    if(m_UpdatedAtIsSet)
    {
        val[utility::conversions::to_string_t(U("updatedAt"))] = ModelBase::toJson(m_UpdatedAt);
    }

    return val;
}

bool EmergencyAddress::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("sid"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("sid")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSid;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSid);
            setSid(refVal_setSid);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("userId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("userId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setUserId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUserId);
            setUserId(refVal_setUserId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("displayName"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("displayName")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDisplayName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDisplayName);
            setDisplayName(refVal_setDisplayName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("customerName"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("customerName")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCustomerName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCustomerName);
            setCustomerName(refVal_setCustomerName);
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
    if(val.has_field(utility::conversions::to_string_t(U("city"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("city")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCity;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCity);
            setCity(refVal_setCity);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("region"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("region")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setRegion;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRegion);
            setRegion(refVal_setRegion);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("postalCode"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("postalCode")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setPostalCode;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPostalCode);
            setPostalCode(refVal_setPostalCode);
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
    if(val.has_field(utility::conversions::to_string_t(U("accountSid"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("accountSid")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setAccountSid;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAccountSid);
            setAccountSid(refVal_setAccountSid);
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
    return ok;
}

void EmergencyAddress::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_SidIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("sid")), m_Sid));
    }
    if(m_UserIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("userId")), m_UserId));
    }
    if(m_DisplayNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("displayName")), m_DisplayName));
    }
    if(m_CustomerNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("customerName")), m_CustomerName));
    }
    if(m_Address1IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("address1")), m_Address1));
    }
    if(m_CityIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("city")), m_City));
    }
    if(m_RegionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("region")), m_Region));
    }
    if(m_PostalCodeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("postalCode")), m_PostalCode));
    }
    if(m_PhoneCountryIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("phoneCountry")), m_PhoneCountry));
    }
    if(m_AccountSidIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("accountSid")), m_AccountSid));
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("createdAt")), m_CreatedAt));
    }
    if(m_UpdatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("updatedAt")), m_UpdatedAt));
    }
}

bool EmergencyAddress::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("sid"))))
    {
        utility::string_t refVal_setSid;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("sid"))), refVal_setSid );
        setSid(refVal_setSid);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("userId"))))
    {
        utility::string_t refVal_setUserId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("userId"))), refVal_setUserId );
        setUserId(refVal_setUserId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("displayName"))))
    {
        utility::string_t refVal_setDisplayName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("displayName"))), refVal_setDisplayName );
        setDisplayName(refVal_setDisplayName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("customerName"))))
    {
        utility::string_t refVal_setCustomerName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("customerName"))), refVal_setCustomerName );
        setCustomerName(refVal_setCustomerName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("address1"))))
    {
        utility::string_t refVal_setAddress1;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("address1"))), refVal_setAddress1 );
        setAddress1(refVal_setAddress1);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("city"))))
    {
        utility::string_t refVal_setCity;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("city"))), refVal_setCity );
        setCity(refVal_setCity);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("region"))))
    {
        utility::string_t refVal_setRegion;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("region"))), refVal_setRegion );
        setRegion(refVal_setRegion);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("postalCode"))))
    {
        utility::string_t refVal_setPostalCode;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("postalCode"))), refVal_setPostalCode );
        setPostalCode(refVal_setPostalCode);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("phoneCountry"))))
    {
        utility::string_t refVal_setPhoneCountry;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("phoneCountry"))), refVal_setPhoneCountry );
        setPhoneCountry(refVal_setPhoneCountry);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("accountSid"))))
    {
        utility::string_t refVal_setAccountSid;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("accountSid"))), refVal_setAccountSid );
        setAccountSid(refVal_setAccountSid);
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
    return ok;
}

utility::string_t EmergencyAddress::getId() const
{
    return m_Id;
}

void EmergencyAddress::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool EmergencyAddress::idIsSet() const
{
    return m_IdIsSet;
}

void EmergencyAddress::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t EmergencyAddress::getSid() const
{
    return m_Sid;
}

void EmergencyAddress::setSid(const utility::string_t& value)
{
    m_Sid = value;
    m_SidIsSet = true;
}

bool EmergencyAddress::sidIsSet() const
{
    return m_SidIsSet;
}

void EmergencyAddress::unsetSid()
{
    m_SidIsSet = false;
}
utility::string_t EmergencyAddress::getUserId() const
{
    return m_UserId;
}

void EmergencyAddress::setUserId(const utility::string_t& value)
{
    m_UserId = value;
    m_UserIdIsSet = true;
}

bool EmergencyAddress::userIdIsSet() const
{
    return m_UserIdIsSet;
}

void EmergencyAddress::unsetUserId()
{
    m_UserIdIsSet = false;
}
utility::string_t EmergencyAddress::getDisplayName() const
{
    return m_DisplayName;
}

void EmergencyAddress::setDisplayName(const utility::string_t& value)
{
    m_DisplayName = value;
    m_DisplayNameIsSet = true;
}

bool EmergencyAddress::displayNameIsSet() const
{
    return m_DisplayNameIsSet;
}

void EmergencyAddress::unsetDisplayName()
{
    m_DisplayNameIsSet = false;
}
utility::string_t EmergencyAddress::getCustomerName() const
{
    return m_CustomerName;
}

void EmergencyAddress::setCustomerName(const utility::string_t& value)
{
    m_CustomerName = value;
    m_CustomerNameIsSet = true;
}

bool EmergencyAddress::customerNameIsSet() const
{
    return m_CustomerNameIsSet;
}

void EmergencyAddress::unsetCustomerName()
{
    m_CustomerNameIsSet = false;
}
utility::string_t EmergencyAddress::getAddress1() const
{
    return m_Address1;
}

void EmergencyAddress::setAddress1(const utility::string_t& value)
{
    m_Address1 = value;
    m_Address1IsSet = true;
}

bool EmergencyAddress::address1IsSet() const
{
    return m_Address1IsSet;
}

void EmergencyAddress::unsetAddress1()
{
    m_Address1IsSet = false;
}
utility::string_t EmergencyAddress::getCity() const
{
    return m_City;
}

void EmergencyAddress::setCity(const utility::string_t& value)
{
    m_City = value;
    m_CityIsSet = true;
}

bool EmergencyAddress::cityIsSet() const
{
    return m_CityIsSet;
}

void EmergencyAddress::unsetCity()
{
    m_CityIsSet = false;
}
utility::string_t EmergencyAddress::getRegion() const
{
    return m_Region;
}

void EmergencyAddress::setRegion(const utility::string_t& value)
{
    m_Region = value;
    m_RegionIsSet = true;
}

bool EmergencyAddress::regionIsSet() const
{
    return m_RegionIsSet;
}

void EmergencyAddress::unsetRegion()
{
    m_RegionIsSet = false;
}
utility::string_t EmergencyAddress::getPostalCode() const
{
    return m_PostalCode;
}

void EmergencyAddress::setPostalCode(const utility::string_t& value)
{
    m_PostalCode = value;
    m_PostalCodeIsSet = true;
}

bool EmergencyAddress::postalCodeIsSet() const
{
    return m_PostalCodeIsSet;
}

void EmergencyAddress::unsetPostalCode()
{
    m_PostalCodeIsSet = false;
}
utility::string_t EmergencyAddress::getPhoneCountry() const
{
    return m_PhoneCountry;
}

void EmergencyAddress::setPhoneCountry(const utility::string_t& value)
{
    m_PhoneCountry = value;
    m_PhoneCountryIsSet = true;
}

bool EmergencyAddress::phoneCountryIsSet() const
{
    return m_PhoneCountryIsSet;
}

void EmergencyAddress::unsetPhoneCountry()
{
    m_PhoneCountryIsSet = false;
}
utility::string_t EmergencyAddress::getAccountSid() const
{
    return m_AccountSid;
}

void EmergencyAddress::setAccountSid(const utility::string_t& value)
{
    m_AccountSid = value;
    m_AccountSidIsSet = true;
}

bool EmergencyAddress::accountSidIsSet() const
{
    return m_AccountSidIsSet;
}

void EmergencyAddress::unsetAccountSid()
{
    m_AccountSidIsSet = false;
}
utility::datetime EmergencyAddress::getCreatedAt() const
{
    return m_CreatedAt;
}

void EmergencyAddress::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool EmergencyAddress::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void EmergencyAddress::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
utility::datetime EmergencyAddress::getUpdatedAt() const
{
    return m_UpdatedAt;
}

void EmergencyAddress::setUpdatedAt(const utility::datetime& value)
{
    m_UpdatedAt = value;
    m_UpdatedAtIsSet = true;
}

bool EmergencyAddress::updatedAtIsSet() const
{
    return m_UpdatedAtIsSet;
}

void EmergencyAddress::unsetUpdatedAt()
{
    m_UpdatedAtIsSet = false;
}
}
}
}
}

