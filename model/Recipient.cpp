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



#include "Recipient.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




Recipient::Recipient()
{
    m_RawValue = utility::conversions::to_string_t("");
    m_RawValueIsSet = false;
    m_EmailAddress = utility::conversions::to_string_t("");
    m_EmailAddressIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
}

Recipient::~Recipient()
{
}

void Recipient::validate()
{
    // TODO: implement validation
}

web::json::value Recipient::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_RawValueIsSet)
    {
        val[utility::conversions::to_string_t("rawValue")] = ModelBase::toJson(m_RawValue);
    }
    if(m_EmailAddressIsSet)
    {
        val[utility::conversions::to_string_t("emailAddress")] = ModelBase::toJson(m_EmailAddress);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }

    return val;
}

bool Recipient::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rawValue")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rawValue"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_rawValue;
            ok &= ModelBase::fromJson(fieldValue, refVal_rawValue);
            setRawValue(refVal_rawValue);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("emailAddress")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("emailAddress"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_emailAddress;
            ok &= ModelBase::fromJson(fieldValue, refVal_emailAddress);
            setEmailAddress(refVal_emailAddress);
        }
    }
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
    return ok;
}

void Recipient::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_RawValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("rawValue"), m_RawValue));
    }
    if(m_EmailAddressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("emailAddress"), m_EmailAddress));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
}

bool Recipient::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("rawValue")))
    {
        utility::string_t refVal_rawValue;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("rawValue")), refVal_rawValue );
        setRawValue(refVal_rawValue);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("emailAddress")))
    {
        utility::string_t refVal_emailAddress;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("emailAddress")), refVal_emailAddress );
        setEmailAddress(refVal_emailAddress);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        utility::string_t refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("name")), refVal_name );
        setName(refVal_name);
    }
    return ok;
}

utility::string_t Recipient::getRawValue() const
{
    return m_RawValue;
}

void Recipient::setRawValue(const utility::string_t& value)
{
    m_RawValue = value;
    m_RawValueIsSet = true;
}

bool Recipient::rawValueIsSet() const
{
    return m_RawValueIsSet;
}

void Recipient::unsetRawValue()
{
    m_RawValueIsSet = false;
}
utility::string_t Recipient::getEmailAddress() const
{
    return m_EmailAddress;
}

void Recipient::setEmailAddress(const utility::string_t& value)
{
    m_EmailAddress = value;
    m_EmailAddressIsSet = true;
}

bool Recipient::emailAddressIsSet() const
{
    return m_EmailAddressIsSet;
}

void Recipient::unsetEmailAddress()
{
    m_EmailAddressIsSet = false;
}
utility::string_t Recipient::getName() const
{
    return m_Name;
}

void Recipient::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool Recipient::nameIsSet() const
{
    return m_NameIsSet;
}

void Recipient::unsetName()
{
    m_NameIsSet = false;
}
}
}
}
}


