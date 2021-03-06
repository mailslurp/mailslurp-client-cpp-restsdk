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



#include "EmailContentMatchResult.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




EmailContentMatchResult::EmailContentMatchResult()
{
    m_MatchesIsSet = false;
    m_Pattern = utility::conversions::to_string_t("");
    m_PatternIsSet = false;
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
    
    if(m_MatchesIsSet)
    {
        val[utility::conversions::to_string_t("matches")] = ModelBase::toJson(m_Matches);
    }
    if(m_PatternIsSet)
    {
        val[utility::conversions::to_string_t("pattern")] = ModelBase::toJson(m_Pattern);
    }

    return val;
}

bool EmailContentMatchResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("matches")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("matches"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_matches;
            ok &= ModelBase::fromJson(fieldValue, refVal_matches);
            setMatches(refVal_matches);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pattern")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pattern"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_pattern;
            ok &= ModelBase::fromJson(fieldValue, refVal_pattern);
            setPattern(refVal_pattern);
        }
    }
    return ok;
}

void EmailContentMatchResult::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_MatchesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("matches"), m_Matches));
    }
    if(m_PatternIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("pattern"), m_Pattern));
    }
}

bool EmailContentMatchResult::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("matches")))
    {
        std::vector<utility::string_t> refVal_matches;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("matches")), refVal_matches );
        setMatches(refVal_matches);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("pattern")))
    {
        utility::string_t refVal_pattern;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("pattern")), refVal_pattern );
        setPattern(refVal_pattern);
    }
    return ok;
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
}
}
}
}


