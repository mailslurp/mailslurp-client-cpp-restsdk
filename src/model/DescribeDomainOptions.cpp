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



#include "CppRestOpenAPIClient/model/DescribeDomainOptions.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



DescribeDomainOptions::DescribeDomainOptions()
{
    m_Domain = utility::conversions::to_string_t("");
    m_DomainIsSet = false;
}

DescribeDomainOptions::~DescribeDomainOptions()
{
}

void DescribeDomainOptions::validate()
{
    // TODO: implement validation
}

web::json::value DescribeDomainOptions::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_DomainIsSet)
    {
        val[utility::conversions::to_string_t(U("domain"))] = ModelBase::toJson(m_Domain);
    }

    return val;
}

bool DescribeDomainOptions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("domain"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("domain")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDomain;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDomain);
            setDomain(refVal_setDomain);
        }
    }
    return ok;
}

void DescribeDomainOptions::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_DomainIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("domain")), m_Domain));
    }
}

bool DescribeDomainOptions::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("domain"))))
    {
        utility::string_t refVal_setDomain;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("domain"))), refVal_setDomain );
        setDomain(refVal_setDomain);
    }
    return ok;
}

utility::string_t DescribeDomainOptions::getDomain() const
{
    return m_Domain;
}

void DescribeDomainOptions::setDomain(const utility::string_t& value)
{
    m_Domain = value;
    m_DomainIsSet = true;
}

bool DescribeDomainOptions::domainIsSet() const
{
    return m_DomainIsSet;
}

void DescribeDomainOptions::unsetDomain()
{
    m_DomainIsSet = false;
}
}
}
}
}


