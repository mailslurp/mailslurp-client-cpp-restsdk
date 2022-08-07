/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://docs.mailslurp.com/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * MissedEmailControllerApi.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_API_MissedEmailControllerApi_H_
#define COM_MAILSLURP_CLIENT_API_MissedEmailControllerApi_H_


#include "../ApiClient.h"

#include "MissedEmail.h"
#include "PageMissedEmailProjection.h"
#include "PageUnknownMissedEmailProjection.h"
#include <cpprest/details/basic_types.h>


#include <boost/optional.hpp>

namespace com {
namespace mailslurp {
namespace client {
namespace api {

using namespace com::mailslurp::client::model;



class  MissedEmailControllerApi 
{
public:

    explicit MissedEmailControllerApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~MissedEmailControllerApi();

    /// <summary>
    /// Get all MissedEmails in paginated format
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="page">Optional page index in list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size in list pagination (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="searchFilter">Optional search filter (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="since">Filter by created at after the given timestamp (optional, default to utility::datetime())</param>
    /// <param name="before">Filter by created at before the given timestamp (optional, default to utility::datetime())</param>
    /// <param name="inboxId">Optional inbox ID filter (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<PageMissedEmailProjection>> getAllMissedEmails(
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort,
        boost::optional<utility::string_t> searchFilter,
        boost::optional<utility::datetime> since,
        boost::optional<utility::datetime> before,
        boost::optional<std::shared_ptr<utility::string_t>> inboxId
    ) const;
    /// <summary>
    /// Get all unknown missed emails in paginated format
    /// </summary>
    /// <remarks>
    /// Unknown missed emails are emails that were sent to MailSlurp but could not be assigned to an existing inbox.
    /// </remarks>
    /// <param name="page">Optional page index in list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size in list pagination (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="searchFilter">Optional search filter (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="since">Filter by created at after the given timestamp (optional, default to utility::datetime())</param>
    /// <param name="before">Filter by created at before the given timestamp (optional, default to utility::datetime())</param>
    /// <param name="inboxId">Optional inbox ID filter (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<PageUnknownMissedEmailProjection>> getAllUnknownMissedEmails(
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort,
        boost::optional<utility::string_t> searchFilter,
        boost::optional<utility::datetime> since,
        boost::optional<utility::datetime> before,
        boost::optional<std::shared_ptr<utility::string_t>> inboxId
    ) const;
    /// <summary>
    /// Get MissedEmail
    /// </summary>
    /// <remarks>
    /// List emails that were missed due to plan limits.
    /// </remarks>
    /// <param name="missedEmailId"></param>
    pplx::task<std::shared_ptr<MissedEmail>> getMissedEmail(
        std::shared_ptr<utility::string_t> missedEmailId
    ) const;
    /// <summary>
    /// Restore missed emails
    /// </summary>
    /// <remarks>
    /// If emails were missed due to a plan limit they are saved as missed emails. If support team enables the canRestore flag these emails can be reload into your account using this method.
    /// </remarks>
    pplx::task<void> restoreMissedEmails(
    ) const;
    /// <summary>
    /// Wait for Nth missed email
    /// </summary>
    /// <remarks>
    /// Wait for 0 based index missed email
    /// </remarks>
    /// <param name="index">Zero based index of the email to wait for. If 1 missed email already and you want to wait for the 2nd email pass index&#x3D;1</param>
    /// <param name="inboxId">Optional inbox ID filter (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="timeout">Optional timeout milliseconds (optional, default to 0L)</param>
    /// <param name="since">Filter by created at after the given timestamp (optional, default to utility::datetime())</param>
    /// <param name="before">Filter by created at before the given timestamp (optional, default to utility::datetime())</param>
    pplx::task<std::shared_ptr<MissedEmail>> waitForNthMissedEmail(
        int32_t index,
        boost::optional<std::shared_ptr<utility::string_t>> inboxId,
        boost::optional<int64_t> timeout,
        boost::optional<utility::datetime> since,
        boost::optional<utility::datetime> before
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_API_MissedEmailControllerApi_H_ */

