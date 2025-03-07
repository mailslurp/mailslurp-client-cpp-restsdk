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

/*
 * InboxRulesetControllerApi.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_API_InboxRulesetControllerApi_H_
#define COM_MAILSLURP_CLIENT_API_InboxRulesetControllerApi_H_



#include "CppRestOpenAPIClient/ApiClient.h"

#include "CppRestOpenAPIClient/model/CreateInboxRulesetOptions.h"
#include "CppRestOpenAPIClient/model/InboxRulesetDto.h"
#include "CppRestOpenAPIClient/model/InboxRulesetTestOptions.h"
#include "CppRestOpenAPIClient/model/InboxRulesetTestResult.h"
#include "CppRestOpenAPIClient/model/PageInboxRulesetDto.h"
#include "CppRestOpenAPIClient/model/TestInboxRulesetReceivingOptions.h"
#include "CppRestOpenAPIClient/model/TestInboxRulesetReceivingResult.h"
#include "CppRestOpenAPIClient/model/TestInboxRulesetSendingOptions.h"
#include "CppRestOpenAPIClient/model/TestInboxRulesetSendingResult.h"
#include "CppRestOpenAPIClient/model/TestNewInboxRulesetOptions.h"
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
    /// <param name="createInboxRulesetOptions"></param>
    /// <param name="inboxId">Inbox id to attach ruleset to (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<InboxRulesetDto>> createNewInboxRuleset(
        std::shared_ptr<CreateInboxRulesetOptions> createInboxRulesetOptions,
        boost::optional<utility::string_t> inboxId
    ) const;
    /// <summary>
    /// Delete an inbox ruleset
    /// </summary>
    /// <remarks>
    /// Delete inbox ruleset
    /// </remarks>
    /// <param name="id">ID of inbox ruleset</param>
    pplx::task<void> deleteInboxRuleset(
        utility::string_t id
    ) const;
    /// <summary>
    /// Delete inbox rulesets
    /// </summary>
    /// <remarks>
    /// Delete inbox rulesets. Accepts optional inboxId filter.
    /// </remarks>
    /// <param name="inboxId">Optional inbox id to attach ruleset to (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<void> deleteInboxRulesets(
        boost::optional<utility::string_t> inboxId
    ) const;
    /// <summary>
    /// Get an inbox ruleset
    /// </summary>
    /// <remarks>
    /// Get inbox ruleset
    /// </remarks>
    /// <param name="id">ID of inbox ruleset</param>
    pplx::task<std::shared_ptr<InboxRulesetDto>> getInboxRuleset(
        utility::string_t id
    ) const;
    /// <summary>
    /// List inbox rulesets
    /// </summary>
    /// <remarks>
    /// List all rulesets attached to an inbox
    /// </remarks>
    /// <param name="inboxId">Optional inbox id to get rulesets from (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="page">Optional page index in inbox ruleset list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size in inbox ruleset list pagination (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="searchFilter">Optional search filter (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="since">Filter by created at after the given timestamp (optional, default to utility::datetime())</param>
    /// <param name="before">Filter by created at before the given timestamp (optional, default to utility::datetime())</param>
    pplx::task<std::shared_ptr<PageInboxRulesetDto>> getInboxRulesets(
        boost::optional<utility::string_t> inboxId,
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort,
        boost::optional<utility::string_t> searchFilter,
        boost::optional<utility::datetime> since,
        boost::optional<utility::datetime> before
    ) const;
    /// <summary>
    /// Test an inbox ruleset
    /// </summary>
    /// <remarks>
    /// Test an inbox ruleset
    /// </remarks>
    /// <param name="id">ID of inbox ruleset</param>
    /// <param name="inboxRulesetTestOptions"></param>
    pplx::task<std::shared_ptr<InboxRulesetTestResult>> testInboxRuleset(
        utility::string_t id,
        std::shared_ptr<InboxRulesetTestOptions> inboxRulesetTestOptions
    ) const;
    /// <summary>
    /// Test receiving with inbox rulesets
    /// </summary>
    /// <remarks>
    /// Test whether inbound emails from an email address would be blocked or allowed by inbox rulesets
    /// </remarks>
    /// <param name="testInboxRulesetReceivingOptions"></param>
    pplx::task<std::shared_ptr<TestInboxRulesetReceivingResult>> testInboxRulesetReceiving(
        std::shared_ptr<TestInboxRulesetReceivingOptions> testInboxRulesetReceivingOptions
    ) const;
    /// <summary>
    /// Test sending with inbox rulesets
    /// </summary>
    /// <remarks>
    /// Test whether outbound emails to an email address would be blocked or allowed by inbox rulesets
    /// </remarks>
    /// <param name="testInboxRulesetSendingOptions"></param>
    pplx::task<std::shared_ptr<TestInboxRulesetSendingResult>> testInboxRulesetSending(
        std::shared_ptr<TestInboxRulesetSendingOptions> testInboxRulesetSendingOptions
    ) const;
    /// <summary>
    /// Test inbox rulesets for inbox
    /// </summary>
    /// <remarks>
    /// Test inbox rulesets for inbox
    /// </remarks>
    /// <param name="inboxId">ID of inbox</param>
    /// <param name="inboxRulesetTestOptions"></param>
    pplx::task<std::shared_ptr<InboxRulesetTestResult>> testInboxRulesetsForInbox(
        utility::string_t inboxId,
        std::shared_ptr<InboxRulesetTestOptions> inboxRulesetTestOptions
    ) const;
    /// <summary>
    /// Test new inbox ruleset
    /// </summary>
    /// <remarks>
    /// Test new inbox ruleset
    /// </remarks>
    /// <param name="testNewInboxRulesetOptions"></param>
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

