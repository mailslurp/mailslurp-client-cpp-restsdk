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



#include "CppRestOpenAPIClient/model/LookupMtaStsDomainOptions.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



LookupMtaStsDomainOptions::LookupMtaStsDomainOptions()
{
    m_Host = utility::conversions::to_string_t("");
    m_HostIsSet = false;
}

LookupMtaStsDomainOptions::~LookupMtaStsDomainOptions()
{
}

void LookupMtaStsDomainOptions::validate()
{
    // TODO: implement validation
}

web::json::value LookupMtaStsDomainOptions::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_HostIsSet)
    {
        val[utility::conversions::to_string_t(U("host"))] = ModelBase::toJson(m_Host);
    }

    return val;
}

bool LookupMtaStsDomainOptions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("host"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("host")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setHost;
            ok &= ModelBase::fromJson(fieldValue, refVal_setHost);
            setHost(refVal_setHost);
        }
    }
    return ok;
}

void LookupMtaStsDomainOptions::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_HostIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("host")), m_Host));
    }
}

bool LookupMtaStsDomainOptions::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("host"))))
    {
        utility::string_t refVal_setHost;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("host"))), refVal_setHost );
        setHost(refVal_setHost);
    }
    return ok;
}

utility::string_t LookupMtaStsDomainOptions::getHost() const
{
    return m_Host;
}

void LookupMtaStsDomainOptions::setHost(const utility::string_t& value)
{
    m_Host = value;
    m_HostIsSet = true;
}

bool LookupMtaStsDomainOptions::hostIsSet() const
{
    return m_HostIsSet;
}

void LookupMtaStsDomainOptions::unsetHost()
{
    m_HostIsSet = false;
}
}
}
}
}

