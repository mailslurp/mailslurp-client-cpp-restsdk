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
 * InboxForwarderControllerApi.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_API_InboxForwarderControllerApi_H_
#define COM_MAILSLURP_CLIENT_API_InboxForwarderControllerApi_H_


#include "../ApiClient.h"

#include "CreateInboxForwarderOptions.h"
#include "InboxForwarderDto.h"
#include "InboxForwarderTestOptions.h"
#include "InboxForwarderTestResult.h"
#include "PageInboxForwarderDto.h"
#include "TestNewInboxForwarderOptions.h"
#include <cpprest/details/basic_types.h>


#include <boost/optional.hpp>

namespace com {
namespace mailslurp {
namespace client {
namespace api {

using namespace com::mailslurp::client::model;



class  InboxForwarderControllerApi 
{
public:

    explicit InboxForwarderControllerApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~InboxForwarderControllerApi();

    /// <summary>
    /// Create an inbox forwarder
    /// </summary>
    /// <remarks>
    /// Create a new inbox rule for forwarding, blocking, and allowing emails when sending and receiving
    /// </remarks>
    /// <param name="createInboxForwarderOptions">createInboxForwarderOptions</param>
    /// <param name="inboxId">Inbox id to attach forwarder to (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<InboxForwarderDto>> createNewInboxForwarder(
        std::shared_ptr<CreateInboxForwarderOptions> createInboxForwarderOptions,
        boost::optional<std::shared_ptr<utility::string_t>> inboxId
    ) const;
    /// <summary>
    /// Delete an inbox forwarder
    /// </summary>
    /// <remarks>
    /// Delete inbox forwarder
    /// </remarks>
    /// <param name="id">ID of inbox forwarder</param>
    pplx::task<void> deleteInboxForwarder(
        std::shared_ptr<utility::string_t> id
    ) const;
    /// <summary>
    /// Delete inbox forwarders
    /// </summary>
    /// <remarks>
    /// Delete inbox forwarders. Accepts optional inboxId filter.
    /// </remarks>
    /// <param name="inboxId">Optional inbox id to attach forwarder to (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<void> deleteInboxForwarders(
        boost::optional<std::shared_ptr<utility::string_t>> inboxId
    ) const;
    /// <summary>
    /// Get an inbox forwarder
    /// </summary>
    /// <remarks>
    /// Get inbox ruleset
    /// </remarks>
    /// <param name="id">ID of inbox forwarder</param>
    pplx::task<std::shared_ptr<InboxForwarderDto>> getInboxForwarder(
        std::shared_ptr<utility::string_t> id
    ) const;
    /// <summary>
    /// List inbox forwarders
    /// </summary>
    /// <remarks>
    /// List all forwarders attached to an inbox
    /// </remarks>
    /// <param name="before">Filter by created at before the given timestamp (optional, default to utility::datetime())</param>
    /// <param name="inboxId">Optional inbox id to get forwarders from (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="page">Optional page index in inbox forwarder list pagination (optional, default to 0)</param>
    /// <param name="searchFilter">Optional search filter (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="since">Filter by created at after the given timestamp (optional, default to utility::datetime())</param>
    /// <param name="size">Optional page size in inbox forwarder list pagination (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<PageInboxForwarderDto>> getInboxForwarders(
        boost::optional<utility::datetime> before,
        boost::optional<std::shared_ptr<utility::string_t>> inboxId,
        boost::optional<int32_t> page,
        boost::optional<utility::string_t> searchFilter,
        boost::optional<utility::datetime> since,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort
    ) const;
    /// <summary>
    /// Test an inbox forwarder
    /// </summary>
    /// <remarks>
    /// Test an inbox forwarder
    /// </remarks>
    /// <param name="id">ID of inbox forwarder</param>
    /// <param name="inboxForwarderTestOptions">inboxForwarderTestOptions</param>
    pplx::task<std::shared_ptr<InboxForwarderTestResult>> testInboxForwarder(
        std::shared_ptr<utility::string_t> id,
        std::shared_ptr<InboxForwarderTestOptions> inboxForwarderTestOptions
    ) const;
    /// <summary>
    /// Test inbox forwarders for inbox
    /// </summary>
    /// <remarks>
    /// Test inbox forwarders for inbox
    /// </remarks>
    /// <param name="inboxId">ID of inbox</param>
    /// <param name="inboxForwarderTestOptions">inboxForwarderTestOptions</param>
    pplx::task<std::shared_ptr<InboxForwarderTestResult>> testInboxForwardersForInbox(
        std::shared_ptr<utility::string_t> inboxId,
        std::shared_ptr<InboxForwarderTestOptions> inboxForwarderTestOptions
    ) const;
    /// <summary>
    /// Test new inbox forwarder
    /// </summary>
    /// <remarks>
    /// Test new inbox forwarder
    /// </remarks>
    /// <param name="testNewInboxForwarderOptions">testNewInboxForwarderOptions</param>
    pplx::task<std::shared_ptr<InboxForwarderTestResult>> testNewInboxForwarder(
        std::shared_ptr<TestNewInboxForwarderOptions> testNewInboxForwarderOptions
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_API_InboxForwarderControllerApi_H_ */

