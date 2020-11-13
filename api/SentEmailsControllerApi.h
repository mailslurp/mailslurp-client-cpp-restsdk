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
 * SentEmailsControllerApi.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_API_SentEmailsControllerApi_H_
#define COM_MAILSLURP_CLIENT_API_SentEmailsControllerApi_H_


#include "../ApiClient.h"

#include "PageSentEmailProjection.h"
#include "SentEmailDto.h"
#include <cpprest/details/basic_types.h>


#include <boost/optional.hpp>

namespace com {
namespace mailslurp {
namespace client {
namespace api {

using namespace com::mailslurp::client::model;



class  SentEmailsControllerApi 
{
public:

    explicit SentEmailsControllerApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~SentEmailsControllerApi();

    /// <summary>
    /// Get sent email receipt
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">id</param>
    pplx::task<std::shared_ptr<SentEmailDto>> getSentEmail(
        std::shared_ptr<utility::string_t> id
    ) const;
    /// <summary>
    /// Get all sent emails in paginated form
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="inboxId">Optional inboxId to filter sender of sent emails by (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="page">Optional page index in inbox sent email list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size in inbox sent email list pagination (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<PageSentEmailProjection>> getSentEmails(
        boost::optional<std::shared_ptr<utility::string_t>> inboxId,
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

#endif /* COM_MAILSLURP_CLIENT_API_SentEmailsControllerApi_H_ */

