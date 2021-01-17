/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.   ## Resources - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://www.mailslurp.com/docs/) - [Examples](https://github.com/mailslurp/examples) repository 
 *
 * The version of the OpenAPI document: 6.5.2
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * ExpiredControllerApi.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_API_ExpiredControllerApi_H_
#define COM_MAILSLURP_CLIENT_API_ExpiredControllerApi_H_


#include "../ApiClient.h"

#include "ExpiredInboxDto.h"
#include "PageExpiredInboxRecordProjection.h"
#include <cpprest/details/basic_types.h>


#include <boost/optional.hpp>

namespace com {
namespace mailslurp {
namespace client {
namespace api {

using namespace com::mailslurp::client::model;



class  ExpiredControllerApi 
{
public:

    explicit ExpiredControllerApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~ExpiredControllerApi();

    /// <summary>
    /// Get expired inbox record for a previously existing inbox
    /// </summary>
    /// <remarks>
    /// Use the inboxId to return an ExpiredInboxRecord if an inbox has expired. Inboxes expire and are disabled if an expiration date is set or plan requires. Returns 404 if no expired inbox is found for the inboxId
    /// </remarks>
    /// <param name="inboxId">ID of inbox you want to retrieve (not the inbox ID)</param>
    pplx::task<std::shared_ptr<ExpiredInboxDto>> getExpiredInboxByInboxId(
        std::shared_ptr<utility::string_t> inboxId
    ) const;
    /// <summary>
    /// Get an expired inbox record
    /// </summary>
    /// <remarks>
    /// Inboxes created with an expiration date will expire after the given date and be moved to an ExpiredInbox entity. You can still read emails in the inbox but it can no longer send or receive emails. Fetch the expired inboxes to view the old inboxes properties
    /// </remarks>
    /// <param name="expiredId">ID of the ExpiredInboxRecord you want to retrieve. This is different from the ID of the inbox you are interested in. See other methods for getting ExpiredInboxRecord for an inbox inboxId)</param>
    pplx::task<std::shared_ptr<ExpiredInboxDto>> getExpiredInboxRecord(
        std::shared_ptr<utility::string_t> expiredId
    ) const;
    /// <summary>
    /// List records of expired inboxes
    /// </summary>
    /// <remarks>
    /// Inboxes created with an expiration date will expire after the given date. An ExpiredInboxRecord is created that records the inboxes old ID and email address. You can still read emails in the inbox (using the inboxes old ID) but the email address associated with the inbox can no longer send or receive emails. Fetch expired inbox records to view the old inboxes properties
    /// </remarks>
    /// <param name="page">Optional page index in inbox sent email list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size in inbox sent email list pagination (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<PageExpiredInboxRecordProjection>> getExpiredInboxes(
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_API_ExpiredControllerApi_H_ */

