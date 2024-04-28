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

/*
 * InboxReplierControllerApi.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_API_InboxReplierControllerApi_H_
#define COM_MAILSLURP_CLIENT_API_InboxReplierControllerApi_H_



#include "CppRestOpenAPIClient/ApiClient.h"

#include "CppRestOpenAPIClient/model/CreateInboxReplierOptions.h"
#include "CppRestOpenAPIClient/model/InboxReplierDto.h"
#include "CppRestOpenAPIClient/model/PageInboxReplierDto.h"
#include "CppRestOpenAPIClient/model/PageInboxReplierEvents.h"
#include "CppRestOpenAPIClient/model/UpdateInboxReplierOptions.h"
#include <cpprest/details/basic_types.h>
#include <boost/optional.hpp>

namespace com {
namespace mailslurp {
namespace client {
namespace api {

using namespace com::mailslurp::client::model;



class  InboxReplierControllerApi 
{
public:

    explicit InboxReplierControllerApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~InboxReplierControllerApi();

    /// <summary>
    /// Create an inbox replier
    /// </summary>
    /// <remarks>
    /// Create a new inbox rule for reply toing, blocking, and allowing emails when sending and receiving
    /// </remarks>
    /// <param name="createInboxReplierOptions"></param>
    pplx::task<std::shared_ptr<InboxReplierDto>> createNewInboxReplier(
        std::shared_ptr<CreateInboxReplierOptions> createInboxReplierOptions
    ) const;
    /// <summary>
    /// Delete an inbox replier
    /// </summary>
    /// <remarks>
    /// Delete inbox replier
    /// </remarks>
    /// <param name="id">ID of inbox replier</param>
    pplx::task<void> deleteInboxReplier(
        utility::string_t id
    ) const;
    /// <summary>
    /// Delete inbox repliers
    /// </summary>
    /// <remarks>
    /// Delete inbox repliers. Accepts optional inboxId filter.
    /// </remarks>
    /// <param name="inboxId">Optional inbox id to attach replier to (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<void> deleteInboxRepliers(
        boost::optional<utility::string_t> inboxId
    ) const;
    /// <summary>
    /// Get an inbox replier
    /// </summary>
    /// <remarks>
    /// Get inbox ruleset
    /// </remarks>
    /// <param name="id">ID of inbox replier</param>
    pplx::task<std::shared_ptr<InboxReplierDto>> getInboxReplier(
        utility::string_t id
    ) const;
    /// <summary>
    /// Get an inbox replier event list
    /// </summary>
    /// <remarks>
    /// Get inbox ruleset events
    /// </remarks>
    /// <param name="id">ID of inbox replier</param>
    /// <param name="page">Optional page index in inbox replier event list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size in inbox replier event list pagination (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<PageInboxReplierEvents>> getInboxReplierEvents(
        utility::string_t id,
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort
    ) const;
    /// <summary>
    /// List inbox repliers
    /// </summary>
    /// <remarks>
    /// List all repliers attached to an inbox
    /// </remarks>
    /// <param name="inboxId">Optional inbox id to get repliers from (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="page">Optional page index in inbox replier list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size in inbox replier list pagination (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="since">Filter by created at after the given timestamp (optional, default to utility::datetime())</param>
    /// <param name="before">Filter by created at before the given timestamp (optional, default to utility::datetime())</param>
    pplx::task<std::shared_ptr<PageInboxReplierDto>> getInboxRepliers(
        boost::optional<utility::string_t> inboxId,
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort,
        boost::optional<utility::datetime> since,
        boost::optional<utility::datetime> before
    ) const;
    /// <summary>
    /// Update an inbox replier
    /// </summary>
    /// <remarks>
    /// Update inbox ruleset
    /// </remarks>
    /// <param name="id">ID of inbox replier</param>
    /// <param name="updateInboxReplierOptions"></param>
    pplx::task<std::shared_ptr<InboxReplierDto>> updateInboxReplier(
        utility::string_t id,
        std::shared_ptr<UpdateInboxReplierOptions> updateInboxReplierOptions
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_API_InboxReplierControllerApi_H_ */

