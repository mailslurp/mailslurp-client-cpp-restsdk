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



#include "CppRestOpenAPIClient/model/EmailContentMatchResult.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



EmailContentMatchResult::EmailContentMatchResult()
{
    m_Pattern = utility::conversions::to_string_t("");
    m_PatternIsSet = false;
    m_MatchesIsSet = false;
}

EmailContentMatchResult::~EmailContentMatchResult()
{
}

void EmailContentMatchResult::validate()
{
    // TODO: implement validation
}

web::json::value EmailContentMatchResult::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_PatternIsSet)
    {
        val[utility::conversions::to_string_t(U("pattern"))] = ModelBase::toJson(m_Pattern);
    }
    if(m_MatchesIsSet)
    {
        val[utility::conversions::to_string_t(U("matches"))] = ModelBase::toJson(m_Matches);
    }

    return val;
}

bool EmailContentMatchResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("pattern"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("pattern")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setPattern;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPattern);
            setPattern(refVal_setPattern);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("matches"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("matches")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setMatches;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMatches);
            setMatches(refVal_setMatches);
        }
    }
    return ok;
}

void EmailContentMatchResult::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_PatternIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("pattern")), m_Pattern));
    }
    if(m_MatchesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("matches")), m_Matches));
    }
}

bool EmailContentMatchResult::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("pattern"))))
    {
        utility::string_t refVal_setPattern;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("pattern"))), refVal_setPattern );
        setPattern(refVal_setPattern);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("matches"))))
    {
        std::vector<utility::string_t> refVal_setMatches;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("matches"))), refVal_setMatches );
        setMatches(refVal_setMatches);
    }
    return ok;
}

utility::string_t EmailContentMatchResult::getPattern() const
{
    return m_Pattern;
}

void EmailContentMatchResult::setPattern(const utility::string_t& value)
{
    m_Pattern = value;
    m_PatternIsSet = true;
}

bool EmailContentMatchResult::patternIsSet() const
{
    return m_PatternIsSet;
}

void EmailContentMatchResult::unsetPattern()
{
    m_PatternIsSet = false;
}
std::vector<utility::string_t>& EmailContentMatchResult::getMatches()
{
    return m_Matches;
}

void EmailContentMatchResult::setMatches(const std::vector<utility::string_t>& value)
{
    m_Matches = value;
    m_MatchesIsSet = true;
}

bool EmailContentMatchResult::matchesIsSet() const
{
    return m_MatchesIsSet;
}

void EmailContentMatchResult::unsetMatches()
{
    m_MatchesIsSet = false;
}
}
}
}
}


