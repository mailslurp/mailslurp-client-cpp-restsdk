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



#include "CppRestOpenAPIClient/model/IPAddressResult.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



IPAddressResult::IPAddressResult()
{
    m_Address = utility::conversions::to_string_t("");
    m_AddressIsSet = false;
    m_Hostname = utility::conversions::to_string_t("");
    m_HostnameIsSet = false;
}

IPAddressResult::~IPAddressResult()
{
}

void IPAddressResult::validate()
{
    // TODO: implement validation
}

web::json::value IPAddressResult::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_AddressIsSet)
    {
        val[utility::conversions::to_string_t(U("address"))] = ModelBase::toJson(m_Address);
    }
    if(m_HostnameIsSet)
    {
        val[utility::conversions::to_string_t(U("hostname"))] = ModelBase::toJson(m_Hostname);
    }

    return val;
}

bool IPAddressResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("address"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("address")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setAddress;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAddress);
            setAddress(refVal_setAddress);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("hostname"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("hostname")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setHostname;
            ok &= ModelBase::fromJson(fieldValue, refVal_setHostname);
            setHostname(refVal_setHostname);
        }
    }
    return ok;
}

void IPAddressResult::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_AddressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("address")), m_Address));
    }
    if(m_HostnameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("hostname")), m_Hostname));
    }
}

bool IPAddressResult::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("address"))))
    {
        utility::string_t refVal_setAddress;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("address"))), refVal_setAddress );
        setAddress(refVal_setAddress);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("hostname"))))
    {
        utility::string_t refVal_setHostname;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("hostname"))), refVal_setHostname );
        setHostname(refVal_setHostname);
    }
    return ok;
}

utility::string_t IPAddressResult::getAddress() const
{
    return m_Address;
}

void IPAddressResult::setAddress(const utility::string_t& value)
{
    m_Address = value;
    m_AddressIsSet = true;
}

bool IPAddressResult::addressIsSet() const
{
    return m_AddressIsSet;
}

void IPAddressResult::unsetAddress()
{
    m_AddressIsSet = false;
}
utility::string_t IPAddressResult::getHostname() const
{
    return m_Hostname;
}

void IPAddressResult::setHostname(const utility::string_t& value)
{
    m_Hostname = value;
    m_HostnameIsSet = true;
}

bool IPAddressResult::hostnameIsSet() const
{
    return m_HostnameIsSet;
}

void IPAddressResult::unsetHostname()
{
    m_HostnameIsSet = false;
}
}
}
}
}

