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
 * InboxRulesetControllerApi.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_API_InboxRulesetControllerApi_H_
#define COM_MAILSLURP_CLIENT_API_InboxRulesetControllerApi_H_


#include "../ApiClient.h"

#include "CreateInboxRulesetOptions.h"
#include "InboxRulesetDto.h"
#include "InboxRulesetTestOptions.h"
#include "InboxRulesetTestResult.h"
#include "PageInboxRulesetDto.h"
#include "TestNewInboxRulesetOptions.h"
#include <cpprest/details/basic_types.h>


#include <boost/optional.hpp>

namespace com {
namespace mailslurp {
namespace client {
namespace api {

using namespace com::mailslurp::client::model;



class  InboxRulesetControllerApi 
{
public:

    explicit InboxRulesetControllerApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~InboxRulesetControllerApi();

    /// <summary>
    /// Create an inbox ruleset
    /// </summary>
    /// <remarks>
    /// Create a new inbox rule for forwarding, blocking, and allowing emails when sending and receiving
    /// </remarks>
    /// <param name="createInboxRulesetOptions">createInboxRulesetOptions</param>
    /// <param name="inboxId">Inbox id to attach ruleset to (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<InboxRulesetDto>> createNewInboxRuleset(
        std::shared_ptr<CreateInboxRulesetOptions> createInboxRulesetOptions,
        boost::optional<std::shared_ptr<utility::string_t>> inboxId
    ) const;
    /// <summary>
    /// Delete an inbox ruleset
    /// </summary>
    /// <remarks>
    /// Delete inbox ruleset
    /// </remarks>
    /// <param name="id">ID of inbox ruleset</param>
    pplx::task<void> deleteInboxRuleset(
        std::shared_ptr<utility::string_t> id
    ) const;
    /// <summary>
    /// Delete inbox rulesets
    /// </summary>
    /// <remarks>
    /// Delete inbox rulesets. Accepts optional inboxId filter.
    /// </remarks>
    /// <param name="inboxId">Optional inbox id to attach ruleset to (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<void> deleteInboxRulesets(
        boost::optional<std::shared_ptr<utility::string_t>> inboxId
    ) const;
    /// <summary>
    /// Get an inbox ruleset
    /// </summary>
    /// <remarks>
    /// Get inbox ruleset
    /// </remarks>
    /// <param name="id">ID of inbox ruleset</param>
    pplx::task<std::shared_ptr<InboxRulesetDto>> getInboxRuleset(
        std::shared_ptr<utility::string_t> id
    ) const;
    /// <summary>
    /// List inbox rulesets
    /// </summary>
    /// <remarks>
    /// List all rulesets attached to an inbox
    /// </remarks>
    /// <param name="inboxId">Optional inbox id to get rulesets from (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="page">Optional page index in inbox ruleset list pagination (optional, default to 0)</param>
    /// <param name="searchFilter">Optional search filter (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="size">Optional page size in inbox ruleset list pagination (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<PageInboxRulesetDto>> getInboxRulesets(
        boost::optional<std::shared_ptr<utility::string_t>> inboxId,
        boost::optional<int32_t> page,
        boost::optional<utility::string_t> searchFilter,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort
    ) const;
    /// <summary>
    /// Test an inbox ruleset
    /// </summary>
    /// <remarks>
    /// Test an inbox ruleset
    /// </remarks>
    /// <param name="id">ID of inbox ruleset</param>
    /// <param name="inboxRulesetTestOptions">inboxRulesetTestOptions</param>
    pplx::task<std::shared_ptr<InboxRulesetTestResult>> testInboxRuleset(
        std::shared_ptr<utility::string_t> id,
        std::shared_ptr<InboxRulesetTestOptions> inboxRulesetTestOptions
    ) const;
    /// <summary>
    /// Test inbox rulesets for inbox
    /// </summary>
    /// <remarks>
    /// Test inbox rulesets for inbox
    /// </remarks>
    /// <param name="inboxId">ID of inbox</param>
    /// <param name="inboxRulesetTestOptions">inboxRulesetTestOptions</param>
    pplx::task<std::shared_ptr<InboxRulesetTestResult>> testInboxRulesetsForInbox(
        std::shared_ptr<utility::string_t> inboxId,
        std::shared_ptr<InboxRulesetTestOptions> inboxRulesetTestOptions
    ) const;
    /// <summary>
    /// Test new inbox ruleset
    /// </summary>
    /// <remarks>
    /// Test new inbox ruleset
    /// </remarks>
    /// <param name="testNewInboxRulesetOptions">testNewInboxRulesetOptions</param>
    pplx::task<std::shared_ptr<InboxRulesetTestResult>> testNewInboxRuleset(
        std::shared_ptr<TestNewInboxRulesetOptions> testNewInboxRulesetOptions
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_API_InboxRulesetControllerApi_H_ */

