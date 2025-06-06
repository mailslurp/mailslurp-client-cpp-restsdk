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



#include "CppRestOpenAPIClient/model/ImapServerSearchResult.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



ImapServerSearchResult::ImapServerSearchResult()
{
    m_ResultsIsSet = false;
}

ImapServerSearchResult::~ImapServerSearchResult()
{
}

void ImapServerSearchResult::validate()
{
    // TODO: implement validation
}

web::json::value ImapServerSearchResult::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ResultsIsSet)
    {
        val[utility::conversions::to_string_t(U("results"))] = ModelBase::toJson(m_Results);
    }

    return val;
}

bool ImapServerSearchResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("results"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("results")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<ImapEmailProjection>> refVal_setResults;
            ok &= ModelBase::fromJson(fieldValue, refVal_setResults);
            setResults(refVal_setResults);
        }
    }
    return ok;
}

void ImapServerSearchResult::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ResultsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("results")), m_Results));
    }
}

bool ImapServerSearchResult::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("results"))))
    {
        std::vector<std::shared_ptr<ImapEmailProjection>> refVal_setResults;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("results"))), refVal_setResults );
        setResults(refVal_setResults);
    }
    return ok;
}

std::vector<std::shared_ptr<ImapEmailProjection>>& ImapServerSearchResult::getResults()
{
    return m_Results;
}

void ImapServerSearchResult::setResults(const std::vector<std::shared_ptr<ImapEmailProjection>>& value)
{
    m_Results = value;
    m_ResultsIsSet = true;
}

bool ImapServerSearchResult::resultsIsSet() const
{
    return m_ResultsIsSet;
}

void ImapServerSearchResult::unsetResults()
{
    m_ResultsIsSet = false;
}
}
}
}
}


