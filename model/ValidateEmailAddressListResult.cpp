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



#include "ValidateEmailAddressListResult.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




ValidateEmailAddressListResult::ValidateEmailAddressListResult()
{
    m_ValidEmailAddressesIsSet = false;
    m_InvalidEmailAddressesIsSet = false;
    m_ResultMapEmailAddressIsValidIsSet = false;
}

ValidateEmailAddressListResult::~ValidateEmailAddressListResult()
{
}

void ValidateEmailAddressListResult::validate()
{
    // TODO: implement validation
}

web::json::value ValidateEmailAddressListResult::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ValidEmailAddressesIsSet)
    {
        val[utility::conversions::to_string_t("validEmailAddresses")] = ModelBase::toJson(m_ValidEmailAddresses);
    }
    if(m_InvalidEmailAddressesIsSet)
    {
        val[utility::conversions::to_string_t("invalidEmailAddresses")] = ModelBase::toJson(m_InvalidEmailAddresses);
    }
    if(m_ResultMapEmailAddressIsValidIsSet)
    {
        val[utility::conversions::to_string_t("resultMapEmailAddressIsValid")] = ModelBase::toJson(m_ResultMapEmailAddressIsValid);
    }

    return val;
}

bool ValidateEmailAddressListResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("validEmailAddresses")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("validEmailAddresses"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_validEmailAddresses;
            ok &= ModelBase::fromJson(fieldValue, refVal_validEmailAddresses);
            setValidEmailAddresses(refVal_validEmailAddresses);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("invalidEmailAddresses")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("invalidEmailAddresses"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_invalidEmailAddresses;
            ok &= ModelBase::fromJson(fieldValue, refVal_invalidEmailAddresses);
            setInvalidEmailAddresses(refVal_invalidEmailAddresses);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resultMapEmailAddressIsValid")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resultMapEmailAddressIsValid"));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, bool> refVal_resultMapEmailAddressIsValid;
            ok &= ModelBase::fromJson(fieldValue, refVal_resultMapEmailAddressIsValid);
            setResultMapEmailAddressIsValid(refVal_resultMapEmailAddressIsValid);
        }
    }
    return ok;
}

void ValidateEmailAddressListResult::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ValidEmailAddressesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("validEmailAddresses"), m_ValidEmailAddresses));
    }
    if(m_InvalidEmailAddressesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("invalidEmailAddresses"), m_InvalidEmailAddresses));
    }
    if(m_ResultMapEmailAddressIsValidIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("resultMapEmailAddressIsValid"), m_ResultMapEmailAddressIsValid));
    }
}

bool ValidateEmailAddressListResult::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("validEmailAddresses")))
    {
        std::vector<utility::string_t> refVal_validEmailAddresses;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("validEmailAddresses")), refVal_validEmailAddresses );
        setValidEmailAddresses(refVal_validEmailAddresses);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("invalidEmailAddresses")))
    {
        std::vector<utility::string_t> refVal_invalidEmailAddresses;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("invalidEmailAddresses")), refVal_invalidEmailAddresses );
        setInvalidEmailAddresses(refVal_invalidEmailAddresses);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("resultMapEmailAddressIsValid")))
    {
        std::map<utility::string_t, bool> refVal_resultMapEmailAddressIsValid;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("resultMapEmailAddressIsValid")), refVal_resultMapEmailAddressIsValid );
        setResultMapEmailAddressIsValid(refVal_resultMapEmailAddressIsValid);
    }
    return ok;
}

std::vector<utility::string_t>& ValidateEmailAddressListResult::getValidEmailAddresses()
{
    return m_ValidEmailAddresses;
}

void ValidateEmailAddressListResult::setValidEmailAddresses(const std::vector<utility::string_t>& value)
{
    m_ValidEmailAddresses = value;
    m_ValidEmailAddressesIsSet = true;
}

bool ValidateEmailAddressListResult::validEmailAddressesIsSet() const
{
    return m_ValidEmailAddressesIsSet;
}

void ValidateEmailAddressListResult::unsetValidEmailAddresses()
{
    m_ValidEmailAddressesIsSet = false;
}
std::vector<utility::string_t>& ValidateEmailAddressListResult::getInvalidEmailAddresses()
{
    return m_InvalidEmailAddresses;
}

void ValidateEmailAddressListResult::setInvalidEmailAddresses(const std::vector<utility::string_t>& value)
{
    m_InvalidEmailAddresses = value;
    m_InvalidEmailAddressesIsSet = true;
}

bool ValidateEmailAddressListResult::invalidEmailAddressesIsSet() const
{
    return m_InvalidEmailAddressesIsSet;
}

void ValidateEmailAddressListResult::unsetInvalidEmailAddresses()
{
    m_InvalidEmailAddressesIsSet = false;
}
std::map<utility::string_t, bool>& ValidateEmailAddressListResult::getResultMapEmailAddressIsValid()
{
    return m_ResultMapEmailAddressIsValid;
}

void ValidateEmailAddressListResult::setResultMapEmailAddressIsValid(std::map<utility::string_t, bool> value)
{
    m_ResultMapEmailAddressIsValid = value;
    m_ResultMapEmailAddressIsValidIsSet = true;
}

bool ValidateEmailAddressListResult::resultMapEmailAddressIsValidIsSet() const
{
    return m_ResultMapEmailAddressIsValidIsSet;
}

void ValidateEmailAddressListResult::unsetResultMapEmailAddressIsValid()
{
    m_ResultMapEmailAddressIsValidIsSet = false;
}
}
}
}
}


