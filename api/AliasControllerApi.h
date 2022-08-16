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
 * AliasControllerApi.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_API_AliasControllerApi_H_
#define COM_MAILSLURP_CLIENT_API_AliasControllerApi_H_


#include "../ApiClient.h"

#include "AliasDto.h"
#include "CreateAliasOptions.h"
#include "PageAlias.h"
#include "PageEmailProjection.h"
#include "PageThreadProjection.h"
#include "ReplyToAliasEmailOptions.h"
#include "SendEmailOptions.h"
#include "SentEmailDto.h"
#include "UpdateAliasOptions.h"
#include <cpprest/details/basic_types.h>


#include <boost/optional.hpp>

namespace com {
namespace mailslurp {
namespace client {
namespace api {

using namespace com::mailslurp::client::model;



class  AliasControllerApi 
{
public:

    explicit AliasControllerApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~AliasControllerApi();

    /// <summary>
    /// Create an email alias. Must be verified by clicking link inside verification email that will be sent to the address. Once verified the alias will be active.
    /// </summary>
    /// <remarks>
    /// Email aliases use a MailSlurp randomly generated email address (or a custom domain inbox that you provide) to mask or proxy a real email address. Emails sent to the alias address will be forwarded to the hidden email address it was created for. If you want to send a reply use the threadId attached
    /// </remarks>
    /// <param name="createAliasOptions"></param>
    pplx::task<std::shared_ptr<AliasDto>> createAlias(
        std::shared_ptr<CreateAliasOptions> createAliasOptions
    ) const;
    /// <summary>
    /// Delete an email alias
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="aliasId"></param>
    pplx::task<void> deleteAlias(
        std::shared_ptr<utility::string_t> aliasId
    ) const;
    /// <summary>
    /// Get an email alias
    /// </summary>
    /// <remarks>
    /// Get an email alias by ID
    /// </remarks>
    /// <param name="aliasId"></param>
    pplx::task<std::shared_ptr<AliasDto>> getAlias(
        std::shared_ptr<utility::string_t> aliasId
    ) const;
    /// <summary>
    /// Get emails for an alias
    /// </summary>
    /// <remarks>
    /// Get paginated emails for an alias by ID
    /// </remarks>
    /// <param name="aliasId"></param>
    /// <param name="page">Optional page index alias email list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size alias email list pagination (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="since">Optional filter by sent after given date time (optional, default to utility::datetime())</param>
    /// <param name="before">Optional filter by sent before given date time (optional, default to utility::datetime())</param>
    pplx::task<std::shared_ptr<PageEmailProjection>> getAliasEmails(
        std::shared_ptr<utility::string_t> aliasId,
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort,
        boost::optional<utility::datetime> since,
        boost::optional<utility::datetime> before
    ) const;
    /// <summary>
    /// Get threads created for an alias
    /// </summary>
    /// <remarks>
    /// Returns threads created for an email alias in paginated form
    /// </remarks>
    /// <param name="aliasId"></param>
    /// <param name="page">Optional page index in thread list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size in thread list pagination (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="since">Optional filter by sent after given date time (optional, default to utility::datetime())</param>
    /// <param name="before">Optional filter by sent before given date time (optional, default to utility::datetime())</param>
    pplx::task<std::shared_ptr<PageThreadProjection>> getAliasThreads(
        std::shared_ptr<utility::string_t> aliasId,
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort,
        boost::optional<utility::datetime> since,
        boost::optional<utility::datetime> before
    ) const;
    /// <summary>
    /// Get all email aliases you have created
    /// </summary>
    /// <remarks>
    /// Get all email aliases in paginated form
    /// </remarks>
    /// <param name="page">Optional page index in alias list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size in alias list pagination (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="since">Filter by created at after the given timestamp (optional, default to utility::datetime())</param>
    /// <param name="before">Filter by created at before the given timestamp (optional, default to utility::datetime())</param>
    pplx::task<std::shared_ptr<PageAlias>> getAliases(
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort,
        boost::optional<utility::datetime> since,
        boost::optional<utility::datetime> before
    ) const;
    /// <summary>
    /// Reply to an email
    /// </summary>
    /// <remarks>
    /// Send the reply to the email sender or reply-to and include same subject cc bcc etc. Reply to an email and the contents will be sent with the existing subject to the emails &#x60;to&#x60;, &#x60;cc&#x60;, and &#x60;bcc&#x60;.
    /// </remarks>
    /// <param name="aliasId">ID of the alias that email belongs to</param>
    /// <param name="emailId">ID of the email that should be replied to</param>
    /// <param name="replyToAliasEmailOptions"></param>
    pplx::task<std::shared_ptr<SentEmailDto>> replyToAliasEmail(
        std::shared_ptr<utility::string_t> aliasId,
        std::shared_ptr<utility::string_t> emailId,
        std::shared_ptr<ReplyToAliasEmailOptions> replyToAliasEmailOptions
    ) const;
    /// <summary>
    /// Send an email from an alias inbox
    /// </summary>
    /// <remarks>
    /// Send an email from an alias. Replies to the email will be forwarded to the alias masked email address
    /// </remarks>
    /// <param name="aliasId"></param>
    /// <param name="sendEmailOptions"></param>
    pplx::task<std::shared_ptr<SentEmailDto>> sendAliasEmail(
        std::shared_ptr<utility::string_t> aliasId,
        std::shared_ptr<SendEmailOptions> sendEmailOptions
    ) const;
    /// <summary>
    /// Update an email alias
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="aliasId"></param>
    /// <param name="updateAliasOptions"></param>
    pplx::task<std::shared_ptr<AliasDto>> updateAlias(
        std::shared_ptr<utility::string_t> aliasId,
        std::shared_ptr<UpdateAliasOptions> updateAliasOptions
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_API_AliasControllerApi_H_ */

