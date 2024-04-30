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
 * CommonActionsControllerApi.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_API_CommonActionsControllerApi_H_
#define COM_MAILSLURP_CLIENT_API_CommonActionsControllerApi_H_



#include "CppRestOpenAPIClient/ApiClient.h"

#include "CppRestOpenAPIClient/model/InboxDto.h"
#include "CppRestOpenAPIClient/model/SimpleSendEmailOptions.h"
#include <cpprest/details/basic_types.h>
#include <boost/optional.hpp>

namespace com {
namespace mailslurp {
namespace client {
namespace api {

using namespace com::mailslurp::client::model;



class  CommonActionsControllerApi 
{
public:

    explicit CommonActionsControllerApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~CommonActionsControllerApi();

    /// <summary>
    /// Create new random inbox
    /// </summary>
    /// <remarks>
    /// Returns an Inbox with an &#x60;id&#x60; and an &#x60;emailAddress&#x60;
    /// </remarks>
    /// <param name="allowTeamAccess"> (optional, default to false)</param>
    /// <param name="useDomainPool"> (optional, default to false)</param>
    /// <param name="expiresAt"> (optional, default to utility::datetime())</param>
    /// <param name="expiresIn"> (optional, default to 0L)</param>
    /// <param name="emailAddress"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="inboxType"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="description"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="name"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="tags"> (optional, default to std::vector&lt;std::shared_ptr&lt;utility::string_t&gt;&gt;())</param>
    /// <param name="favourite"> (optional, default to false)</param>
    /// <param name="virtualInbox"> (optional, default to false)</param>
    /// <param name="useShortAddress"> (optional, default to false)</param>
    /// <param name="domainName"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="domainId"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="prefix"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<InboxDto>> createNewEmailAddress(
        boost::optional<bool> allowTeamAccess,
        boost::optional<bool> useDomainPool,
        boost::optional<utility::datetime> expiresAt,
        boost::optional<int64_t> expiresIn,
        boost::optional<utility::string_t> emailAddress,
        boost::optional<utility::string_t> inboxType,
        boost::optional<utility::string_t> description,
        boost::optional<utility::string_t> name,
        boost::optional<std::vector<utility::string_t>> tags,
        boost::optional<bool> favourite,
        boost::optional<bool> virtualInbox,
        boost::optional<bool> useShortAddress,
        boost::optional<utility::string_t> domainName,
        boost::optional<utility::string_t> domainId,
        boost::optional<utility::string_t> prefix
    ) const;
    /// <summary>
    /// Create new random inbox
    /// </summary>
    /// <remarks>
    /// Returns an Inbox with an &#x60;id&#x60; and an &#x60;emailAddress&#x60;
    /// </remarks>
    /// <param name="allowTeamAccess"> (optional, default to false)</param>
    /// <param name="useDomainPool"> (optional, default to false)</param>
    /// <param name="expiresAt"> (optional, default to utility::datetime())</param>
    /// <param name="expiresIn"> (optional, default to 0L)</param>
    /// <param name="emailAddress"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="inboxType"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="description"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="name"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="tags"> (optional, default to std::vector&lt;std::shared_ptr&lt;utility::string_t&gt;&gt;())</param>
    /// <param name="favourite"> (optional, default to false)</param>
    /// <param name="virtualInbox"> (optional, default to false)</param>
    /// <param name="useShortAddress"> (optional, default to false)</param>
    /// <param name="domainName"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="domainId"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="prefix"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<InboxDto>> createRandomInbox(
        boost::optional<bool> allowTeamAccess,
        boost::optional<bool> useDomainPool,
        boost::optional<utility::datetime> expiresAt,
        boost::optional<int64_t> expiresIn,
        boost::optional<utility::string_t> emailAddress,
        boost::optional<utility::string_t> inboxType,
        boost::optional<utility::string_t> description,
        boost::optional<utility::string_t> name,
        boost::optional<std::vector<utility::string_t>> tags,
        boost::optional<bool> favourite,
        boost::optional<bool> virtualInbox,
        boost::optional<bool> useShortAddress,
        boost::optional<utility::string_t> domainName,
        boost::optional<utility::string_t> domainId,
        boost::optional<utility::string_t> prefix
    ) const;
    /// <summary>
    /// Delete inbox email address by inbox id
    /// </summary>
    /// <remarks>
    /// Deletes inbox email address
    /// </remarks>
    /// <param name="inboxId"></param>
    pplx::task<void> deleteEmailAddress(
        utility::string_t inboxId
    ) const;
    /// <summary>
    /// Delete all emails in an inbox
    /// </summary>
    /// <remarks>
    /// Deletes all emails
    /// </remarks>
    /// <param name="inboxId"></param>
    pplx::task<void> emptyInbox(
        utility::string_t inboxId
    ) const;
    /// <summary>
    /// Send an email using query parameters
    /// </summary>
    /// <remarks>
    /// If no senderId or inboxId provided a random email address will be used to send from. Ensure your parameters are URL encoded.
    /// </remarks>
    /// <param name="to">Email address to send to</param>
    /// <param name="senderId">ID of inbox to send from. If null an inbox will be created for sending (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="body">Body of the email message. Supports HTML (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="subject">Subject line of the email (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<void> sendEmailQuery(
        utility::string_t to,
        boost::optional<utility::string_t> senderId,
        boost::optional<utility::string_t> body,
        boost::optional<utility::string_t> subject
    ) const;
    /// <summary>
    /// Send an email
    /// </summary>
    /// <remarks>
    /// If no senderId or inboxId provided a random email address will be used to send from.
    /// </remarks>
    /// <param name="simpleSendEmailOptions"></param>
    pplx::task<void> sendEmailSimple(
        std::shared_ptr<SimpleSendEmailOptions> simpleSendEmailOptions
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_API_CommonActionsControllerApi_H_ */

