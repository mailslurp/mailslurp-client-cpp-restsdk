/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://www.mailslurp.com/docs/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "InboxRulesetTestResult.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




InboxRulesetTestResult::InboxRulesetTestResult()
{
    m_RulesetMatchesIsSet = false;
    m_Matches = false;
    m_MatchesIsSet = false;
}

InboxRulesetTestResult::~InboxRulesetTestResult()
{
}

void InboxRulesetTestResult::validate()
{
    // TODO: implement validation
}

web::json::value InboxRulesetTestResult::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_RulesetMatchesIsSet)
    {
        val[utility::conversions::to_string_t("rulesetMatches")] = ModelBase::toJson(m_RulesetMatches);
    }
    if(m_MatchesIsSet)
    {
        val[utility::conversions::to_string_t("matches")] = ModelBase::toJson(m_Matches);
    }

    return val;
}

bool InboxRulesetTestResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rulesetMatches")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rulesetMatches"));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, bool> refVal_rulesetMatches;
            ok &= ModelBase::fromJson(fieldValue, refVal_rulesetMatches);
            setRulesetMatches(refVal_rulesetMatches);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("matches")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("matches"));
        if(!fieldValue.is_null())
        {
            bool refVal_matches;
            ok &= ModelBase::fromJson(fieldValue, refVal_matches);
            setMatches(refVal_matches);
        }
    }
    return ok;
}

void InboxRulesetTestResult::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_RulesetMatchesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("rulesetMatches"), m_RulesetMatches));
    }
    if(m_MatchesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("matches"), m_Matches));
    }
}

bool InboxRulesetTestResult::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("rulesetMatches")))
    {
        std::map<utility::string_t, bool> refVal_rulesetMatches;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("rulesetMatches")), refVal_rulesetMatches );
        setRulesetMatches(refVal_rulesetMatches);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("matches")))
    {
        bool refVal_matches;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("matches")), refVal_matches );
        setMatches(refVal_matches);
    }
    return ok;
}

std::map<utility::string_t, bool>& InboxRulesetTestResult::getRulesetMatches()
{
    return m_RulesetMatches;
}

void InboxRulesetTestResult::setRulesetMatches(std::map<utility::string_t, bool> value)
{
    m_RulesetMatches = value;
    m_RulesetMatchesIsSet = true;
}

bool InboxRulesetTestResult::rulesetMatchesIsSet() const
{
    return m_RulesetMatchesIsSet;
}

void InboxRulesetTestResult::unsetRulesetMatches()
{
    m_RulesetMatchesIsSet = false;
}
bool InboxRulesetTestResult::isMatches() const
{
    return m_Matches;
}

void InboxRulesetTestResult::setMatches(bool value)
{
    m_Matches = value;
    m_MatchesIsSet = true;
}

bool InboxRulesetTestResult::matchesIsSet() const
{
    return m_MatchesIsSet;
}

void InboxRulesetTestResult::unsetMatches()
{
    m_MatchesIsSet = false;
}
}
}
}
}


