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



#include "DNSLookupResults.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




DNSLookupResults::DNSLookupResults()
{
    m_ResultsIsSet = false;
}

DNSLookupResults::~DNSLookupResults()
{
}

void DNSLookupResults::validate()
{
    // TODO: implement validation
}

web::json::value DNSLookupResults::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ResultsIsSet)
    {
        val[utility::conversions::to_string_t("results")] = ModelBase::toJson(m_Results);
    }

    return val;
}

bool DNSLookupResults::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("results")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("results"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<DNSLookupResult>> refVal_results;
            ok &= ModelBase::fromJson(fieldValue, refVal_results);
            setResults(refVal_results);
        }
    }
    return ok;
}

void DNSLookupResults::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ResultsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("results"), m_Results));
    }
}

bool DNSLookupResults::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("results")))
    {
        std::vector<std::shared_ptr<DNSLookupResult>> refVal_results;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("results")), refVal_results );
        setResults(refVal_results);
    }
    return ok;
}

std::vector<std::shared_ptr<DNSLookupResult>>& DNSLookupResults::getResults()
{
    return m_Results;
}

void DNSLookupResults::setResults(const std::vector<std::shared_ptr<DNSLookupResult>>& value)
{
    m_Results = value;
    m_ResultsIsSet = true;
}

bool DNSLookupResults::resultsIsSet() const
{
    return m_ResultsIsSet;
}

void DNSLookupResults::unsetResults()
{
    m_ResultsIsSet = false;
}
}
}
}
}


