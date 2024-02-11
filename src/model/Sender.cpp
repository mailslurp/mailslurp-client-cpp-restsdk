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



#include "CppRestOpenAPIClient/model/Sender.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



Sender::Sender()
{
    m_RawValue = utility::conversions::to_string_t("");
    m_RawValueIsSet = false;
    m_EmailAddress = utility::conversions::to_string_t("");
    m_EmailAddressIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
}

Sender::~Sender()
{
}

void Sender::validate()
{
    // TODO: implement validation
}

web::json::value Sender::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_RawValueIsSet)
    {
        val[utility::conversions::to_string_t(U("rawValue"))] = ModelBase::toJson(m_RawValue);
    }
    if(m_EmailAddressIsSet)
    {
        val[utility::conversions::to_string_t(U("emailAddress"))] = ModelBase::toJson(m_EmailAddress);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }

    return val;
}

bool Sender::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("rawValue"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("rawValue")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setRawValue;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRawValue);
            setRawValue(refVal_setRawValue);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("emailAddress"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("emailAddress")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setEmailAddress;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEmailAddress);
            setEmailAddress(refVal_setEmailAddress);
        }
    }
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
    return ok;
}

void Sender::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_RawValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("rawValue")), m_RawValue));
    }
    if(m_EmailAddressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("emailAddress")), m_EmailAddress));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
}

bool Sender::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("rawValue"))))
    {
        utility::string_t refVal_setRawValue;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("rawValue"))), refVal_setRawValue );
        setRawValue(refVal_setRawValue);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("emailAddress"))))
    {
        utility::string_t refVal_setEmailAddress;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("emailAddress"))), refVal_setEmailAddress );
        setEmailAddress(refVal_setEmailAddress);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    return ok;
}

utility::string_t Sender::getRawValue() const
{
    return m_RawValue;
}

void Sender::setRawValue(const utility::string_t& value)
{
    m_RawValue = value;
    m_RawValueIsSet = true;
}

bool Sender::rawValueIsSet() const
{
    return m_RawValueIsSet;
}

void Sender::unsetRawValue()
{
    m_RawValueIsSet = false;
}
utility::string_t Sender::getEmailAddress() const
{
    return m_EmailAddress;
}

void Sender::setEmailAddress(const utility::string_t& value)
{
    m_EmailAddress = value;
    m_EmailAddressIsSet = true;
}

bool Sender::emailAddressIsSet() const
{
    return m_EmailAddressIsSet;
}

void Sender::unsetEmailAddress()
{
    m_EmailAddressIsSet = false;
}
utility::string_t Sender::getName() const
{
    return m_Name;
}

void Sender::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool Sender::nameIsSet() const
{
    return m_NameIsSet;
}

void Sender::unsetName()
{
    m_NameIsSet = false;
}
}
}
}
}


