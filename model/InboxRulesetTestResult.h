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

/*
 * InboxRulesetTestResult.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_InboxRulesetTestResult_H_
#define COM_MAILSLURP_CLIENT_MODEL_InboxRulesetTestResult_H_


#include "../ModelBase.h"

#include <map>
#include <vector>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  InboxRulesetTestResult
    : public ModelBase
{
public:
    InboxRulesetTestResult();
    virtual ~InboxRulesetTestResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// InboxRulesetTestResult members

    /// <summary>
    /// Map of inbox ruleset ID to boolean of if target matches
    /// </summary>
    std::map<utility::string_t, bool>& getRulesetMatches();
    bool rulesetMatchesIsSet() const;
    void unsetRulesetMatches();

    void setRulesetMatches(std::map<utility::string_t, bool> value);

    /// <summary>
    /// 
    /// </summary>
    bool isMatches() const;
    bool matchesIsSet() const;
    void unsetMatches();

    void setMatches(bool value);


protected:
    std::map<utility::string_t, bool> m_RulesetMatches;
    bool m_RulesetMatchesIsSet;
    bool m_Matches;
    bool m_MatchesIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_InboxRulesetTestResult_H_ */
