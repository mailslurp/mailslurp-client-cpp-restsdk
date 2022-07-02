/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://docs.mailslurp.com/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "InboxForwarderTestResult.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




InboxForwarderTestResult::InboxForwarderTestResult()
{
    m_MatchesIsSet = false;
    m_DoesMatch = false;
    m_DoesMatchIsSet = false;
}

InboxForwarderTestResult::~InboxForwarderTestResult()
{
}

void InboxForwarderTestResult::validate()
{
    // TODO: implement validation
}

web::json::value InboxForwarderTestResult::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_MatchesIsSet)
    {
        val[utility::conversions::to_string_t("matches")] = ModelBase::toJson(m_Matches);
    }
    if(m_DoesMatchIsSet)
    {
        val[utility::conversions::to_string_t("doesMatch")] = ModelBase::toJson(m_DoesMatch);
    }

    return val;
}

bool InboxForwarderTestResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("matches")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("matches"));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, bool> refVal_matches;
            ok &= ModelBase::fromJson(fieldValue, refVal_matches);
            setMatches(refVal_matches);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("doesMatch")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("doesMatch"));
        if(!fieldValue.is_null())
        {
            bool refVal_doesMatch;
            ok &= ModelBase::fromJson(fieldValue, refVal_doesMatch);
            setDoesMatch(refVal_doesMatch);
        }
    }
    return ok;
}

void InboxForwarderTestResult::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_DoesMatchIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("doesMatch"), m_DoesMatch));
    }
}

bool InboxForwarderTestResult::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("matches")))
    {
        std::map<utility::string_t, bool> refVal_matches;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("matches")), refVal_matches );
        setMatches(refVal_matches);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("doesMatch")))
    {
        bool refVal_doesMatch;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("doesMatch")), refVal_doesMatch );
        setDoesMatch(refVal_doesMatch);
    }
    return ok;
}

std::map<utility::string_t, bool>& InboxForwarderTestResult::getMatches()
{
    return m_Matches;
}

void InboxForwarderTestResult::setMatches(std::map<utility::string_t, bool> value)
{
    m_Matches = value;
    m_MatchesIsSet = true;
}

bool InboxForwarderTestResult::matchesIsSet() const
{
    return m_MatchesIsSet;
}

void InboxForwarderTestResult::unsetMatches()
{
    m_MatchesIsSet = false;
}
bool InboxForwarderTestResult::isDoesMatch() const
{
    return m_DoesMatch;
}

void InboxForwarderTestResult::setDoesMatch(bool value)
{
    m_DoesMatch = value;
    m_DoesMatchIsSet = true;
}

bool InboxForwarderTestResult::doesMatchIsSet() const
{
    return m_DoesMatchIsSet;
}

void InboxForwarderTestResult::unsetDoesMatch()
{
    m_DoesMatchIsSet = false;
}
}
}
}
}


