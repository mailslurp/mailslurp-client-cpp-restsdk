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

/*
 * BounceControllerApi.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_API_BounceControllerApi_H_
#define COM_MAILSLURP_CLIENT_API_BounceControllerApi_H_


#include "../ApiClient.h"

#include "BouncedEmailDto.h"
#include "BouncedRecipientDto.h"
#include "PageBouncedEmail.h"
#include "PageBouncedRecipients.h"
#include <cpprest/details/basic_types.h>


#include <boost/optional.hpp>

namespace com {
namespace mailslurp {
namespace client {
namespace api {

using namespace com::mailslurp::client::model;



class  BounceControllerApi 
{
public:

    explicit BounceControllerApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~BounceControllerApi();

    /// <summary>
    /// Get a bounced email.
    /// </summary>
    /// <remarks>
    /// Bounced emails are email you have sent that were rejected by a recipient
    /// </remarks>
    /// <param name="id">ID of the bounced email to fetch</param>
    pplx::task<std::shared_ptr<BouncedEmailDto>> getBouncedEmail(
        std::shared_ptr<utility::string_t> id
    ) const;
    /// <summary>
    /// Get paginated list of bounced emails.
    /// </summary>
    /// <remarks>
    /// Bounced emails are email you have sent that were rejected by a recipient
    /// </remarks>
    /// <param name="page">Optional page index (optional, default to 0)</param>
    /// <param name="size">Optional page size  (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="since">Filter by created at after the given timestamp (optional, default to utility::datetime())</param>
    /// <param name="before">Filter by created at before the given timestamp (optional, default to utility::datetime())</param>
    pplx::task<std::shared_ptr<PageBouncedEmail>> getBouncedEmails(
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort,
        boost::optional<utility::datetime> since,
        boost::optional<utility::datetime> before
    ) const;
    /// <summary>
    /// Get a bounced email.
    /// </summary>
    /// <remarks>
    /// Bounced emails are email you have sent that were rejected by a recipient
    /// </remarks>
    /// <param name="id">ID of the bounced recipient</param>
    pplx::task<std::shared_ptr<BouncedRecipientDto>> getBouncedRecipient(
        std::shared_ptr<utility::string_t> id
    ) const;
    /// <summary>
    /// Get paginated list of bounced recipients.
    /// </summary>
    /// <remarks>
    /// Bounced recipients are email addresses that you have sent emails to that did not accept the sent email. Once a recipient is bounced you cannot send emails to that address.
    /// </remarks>
    /// <param name="page">Optional page index  (optional, default to 0)</param>
    /// <param name="size">Optional page size  (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="since">Filter by created at after the given timestamp (optional, default to utility::datetime())</param>
    /// <param name="before">Filter by created at before the given timestamp (optional, default to utility::datetime())</param>
    pplx::task<std::shared_ptr<PageBouncedRecipients>> getBouncedRecipients(
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort,
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

#endif /* COM_MAILSLURP_CLIENT_API_BounceControllerApi_H_ */

