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
 * InboxControllerApi.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_API_InboxControllerApi_H_
#define COM_MAILSLURP_CLIENT_API_InboxControllerApi_H_


#include "../ApiClient.h"

#include "CreateInboxDto.h"
#include "EmailPreview.h"
#include "Inbox.h"
#include "PageEmailPreview.h"
#include "PageInboxProjection.h"
#include "PageSentEmailProjection.h"
#include "SendEmailOptions.h"
#include "SentEmailDto.h"
#include "SetInboxFavouritedOptions.h"
#include "UpdateInboxOptions.h"
#include <cpprest/details/basic_types.h>


#include <boost/optional.hpp>

namespace com {
namespace mailslurp {
namespace client {
namespace api {

using namespace com::mailslurp::client::model;



class  InboxControllerApi 
{
public:

    explicit InboxControllerApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~InboxControllerApi();

    /// <summary>
    /// Create an Inbox (email address)
    /// </summary>
    /// <remarks>
    /// Create a new inbox and with a randomized email address to send and receive from. Pass emailAddress parameter if you wish to use a specific email address. Creating an inbox is required before sending or receiving emails. If writing tests it is recommended that you create a new inbox during each test method so that it is unique and empty. 
    /// </remarks>
    /// <param name="description">Optional description for an inbox. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="emailAddress">Optional email address including domain you wish inbox to use (eg: test123@mydomain.com). Only supports domains that you have registered and verified with MailSlurp using dashboard or &#x60;createDomain&#x60; method. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="expiresAt">Optional expires at timestamp. If your plan supports this feature you can specify when an inbox should expire. If left empty inbox will exist permanently or expire when your plan dictates (optional, default to utility::datetime())</param>
    /// <param name="favourite">Is inbox favourited. (optional, default to false)</param>
    /// <param name="name">Optional name for an inbox. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="tags">Optional tags for an inbox. Can be used for searching and filtering inboxes. (optional, default to std::vector&lt;std::shared_ptr&lt;utility::string_t&gt;&gt;())</param>
    pplx::task<std::shared_ptr<Inbox>> createInbox(
        boost::optional<utility::string_t> description,
        boost::optional<utility::string_t> emailAddress,
        boost::optional<utility::datetime> expiresAt,
        boost::optional<bool> favourite,
        boost::optional<utility::string_t> name,
        boost::optional<std::vector<utility::string_t>> tags
    ) const;
    /// <summary>
    /// Create an inbox with additional options
    /// </summary>
    /// <remarks>
    /// Additional endpoint that allows inbox creation with request body options. Can be more flexible that other methods for some clients.
    /// </remarks>
    /// <param name="createInboxDto">createInboxDto</param>
    pplx::task<std::shared_ptr<Inbox>> createInboxWithOptions(
        std::shared_ptr<CreateInboxDto> createInboxDto
    ) const;
    /// <summary>
    /// Delete all inboxes
    /// </summary>
    /// <remarks>
    /// Permanently delete all inboxes and associated email addresses. This will also delete all emails within the inboxes. Be careful as inboxes cannot be recovered once deleted. Note: deleting inboxes will not impact your usage limits. Monthly inbox creation limits are based on how many inboxes were created in the last 30 days, not how many inboxes you currently have.
    /// </remarks>
    pplx::task<void> deleteAllInboxes(
    ) const;
    /// <summary>
    /// Delete inbox
    /// </summary>
    /// <remarks>
    /// Permanently delete an inbox and associated email address aswell as all emails within the given inbox. This action cannot be undone. Note: deleting an inbox will not affect your account usage. Monthly inbox usage is based on how many inboxes you create within 30 days, not how many exist at time of request.
    /// </remarks>
    /// <param name="inboxId">inboxId</param>
    pplx::task<void> deleteInbox(
        std::shared_ptr<utility::string_t> inboxId
    ) const;
    /// <summary>
    /// List All Inboxes Paginated
    /// </summary>
    /// <remarks>
    /// List inboxes in paginated form. The results are available on the &#x60;content&#x60; property of the returned object. This method allows for page index (zero based), page size (how many results to return(, and a sort direction (based on createdAt time). You Can also filter by whether an inbox is favorited or use email address pattern. This method is the recommended way to query inboxes. The alternative &#x60;getInboxes&#x60; method returns a full list of inboxes but is limited to 100 results.
    /// </remarks>
    /// <param name="favourite">Optionally filter results for favourites only (optional, default to false)</param>
    /// <param name="page">Optional page index in inbox list pagination (optional, default to 0)</param>
    /// <param name="search">Optionally filter by search words partial matching ID, tags, name, and email address (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="size">Optional page size in inbox list pagination (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="tag">Optionally filter by tags (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<PageInboxProjection>> getAllInboxes(
        boost::optional<bool> favourite,
        boost::optional<int32_t> page,
        boost::optional<utility::string_t> search,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort,
        boost::optional<utility::string_t> tag
    ) const;
    /// <summary>
    /// Get emails in an Inbox. This method is not idempotent as it allows retries and waits if you want certain conditions to be met before returning. For simple listing and sorting of known emails use the email controller instead.
    /// </summary>
    /// <remarks>
    /// List emails that an inbox has received. Only emails that are sent to the inbox&#39;s email address will appear in the inbox. It may take several seconds for any email you send to an inbox&#39;s email address to appear in the inbox. To make this endpoint wait for a minimum number of emails use the &#x60;minCount&#x60; parameter. The server will retry the inbox database until the &#x60;minCount&#x60; is satisfied or the &#x60;retryTimeout&#x60; is reached
    /// </remarks>
    /// <param name="inboxId">Id of inbox that emails belongs to</param>
    /// <param name="limit">Limit the result set, ordered by received date time sort direction. Maximum 100. For more listing options see the email controller (optional, default to 0)</param>
    /// <param name="minCount">Minimum acceptable email count. Will cause request to hang (and retry) until minCount is satisfied or retryTimeout is reached. (optional, default to 0L)</param>
    /// <param name="retryTimeout">Maximum milliseconds to spend retrying inbox database until minCount emails are returned (optional, default to 0L)</param>
    /// <param name="since">Exclude emails received before this ISO 8601 date time (optional, default to utility::datetime())</param>
    /// <param name="size">Alias for limit. Assessed first before assessing any passed limit. (optional, default to 0)</param>
    /// <param name="sort">Sort the results by received date and direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::vector<std::shared_ptr<EmailPreview>>> getEmails(
        std::shared_ptr<utility::string_t> inboxId,
        boost::optional<int32_t> limit,
        boost::optional<int64_t> minCount,
        boost::optional<int64_t> retryTimeout,
        boost::optional<utility::datetime> since,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort
    ) const;
    /// <summary>
    /// Get Inbox
    /// </summary>
    /// <remarks>
    /// Returns an inbox&#39;s properties, including its email address and ID.
    /// </remarks>
    /// <param name="inboxId">inboxId</param>
    pplx::task<std::shared_ptr<Inbox>> getInbox(
        std::shared_ptr<utility::string_t> inboxId
    ) const;
    /// <summary>
    /// Get inbox emails paginated
    /// </summary>
    /// <remarks>
    /// Get a paginated list of emails in an inbox. Does not hold connections open.
    /// </remarks>
    /// <param name="inboxId">Id of inbox that emails belongs to</param>
    /// <param name="page">Optional page index in inbox emails list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size in inbox emails list pagination (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<PageEmailPreview>> getInboxEmailsPaginated(
        std::shared_ptr<utility::string_t> inboxId,
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort
    ) const;
    /// <summary>
    /// Get Inbox Sent Emails
    /// </summary>
    /// <remarks>
    /// Returns an inbox&#39;s sent email receipts. Call individual sent email endpoints for more details. Note for privacy reasons the full body of sent emails is never stored. An MD5 hash hex is available for comparison instead.
    /// </remarks>
    /// <param name="inboxId">inboxId</param>
    /// <param name="page">Optional page index in inbox sent email list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size in inbox sent email list pagination (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<PageSentEmailProjection>> getInboxSentEmails(
        std::shared_ptr<utility::string_t> inboxId,
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort
    ) const;
    /// <summary>
    /// Get inbox tags
    /// </summary>
    /// <remarks>
    /// Get all inbox tags
    /// </remarks>
    pplx::task<std::vector<utility::string_t>> getInboxTags(
    ) const;
    /// <summary>
    /// List Inboxes / Email Addresses
    /// </summary>
    /// <remarks>
    /// List the inboxes you have created. Note use of the more advanced &#x60;getAllEmails&#x60; is recommended. You can provide a limit and sort parameter.
    /// </remarks>
    /// <param name="size">Optional result size limit. Note an automatic limit of 100 results is applied. See the paginated &#x60;getAllEmails&#x60; for larger queries. (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::vector<std::shared_ptr<Inbox>>> getInboxes(
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort
    ) const;
    /// <summary>
    /// Send Email
    /// </summary>
    /// <remarks>
    /// Send an email from an inbox&#39;s email address.  The request body should contain the &#x60;SendEmailOptions&#x60; that include recipients, attachments, body etc. See &#x60;SendEmailOptions&#x60; for all available properties. Note the &#x60;inboxId&#x60; refers to the inbox&#39;s id not the inbox&#39;s email address. See https://www.mailslurp.com/guides/ for more information on how to send emails. This method does not return a sent email entity due to legacy reasons. To send and get a sent email as returned response use the sister method &#x60;sendEmailAndConfirm&#x60;.
    /// </remarks>
    /// <param name="inboxId">ID of the inbox you want to send the email from</param>
    /// <param name="sendEmailOptions">Options for the email (optional)</param>
    pplx::task<void> sendEmail(
        std::shared_ptr<utility::string_t> inboxId,
        boost::optional<std::shared_ptr<SendEmailOptions>> sendEmailOptions
    ) const;
    /// <summary>
    /// Send email and return sent confirmation
    /// </summary>
    /// <remarks>
    /// Sister method for standard &#x60;sendEmail&#x60; method with the benefit of returning a &#x60;SentEmail&#x60; entity confirming the successful sending of the email with link the the sent object created for it.
    /// </remarks>
    /// <param name="inboxId">ID of the inbox you want to send the email from</param>
    /// <param name="sendEmailOptions">Options for the email (optional)</param>
    pplx::task<std::shared_ptr<SentEmailDto>> sendEmailAndConfirm(
        std::shared_ptr<utility::string_t> inboxId,
        boost::optional<std::shared_ptr<SendEmailOptions>> sendEmailOptions
    ) const;
    /// <summary>
    /// Set inbox favourited state
    /// </summary>
    /// <remarks>
    /// Set and return new favourite state for an inbox
    /// </remarks>
    /// <param name="inboxId">inboxId</param>
    /// <param name="setInboxFavouritedOptions">setInboxFavouritedOptions</param>
    pplx::task<std::shared_ptr<Inbox>> setInboxFavourited(
        std::shared_ptr<utility::string_t> inboxId,
        std::shared_ptr<SetInboxFavouritedOptions> setInboxFavouritedOptions
    ) const;
    /// <summary>
    /// Update Inbox
    /// </summary>
    /// <remarks>
    /// Update editable fields on an inbox
    /// </remarks>
    /// <param name="inboxId">inboxId</param>
    /// <param name="updateInboxOptions">updateInboxOptions</param>
    pplx::task<std::shared_ptr<Inbox>> updateInbox(
        std::shared_ptr<utility::string_t> inboxId,
        std::shared_ptr<UpdateInboxOptions> updateInboxOptions
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_API_InboxControllerApi_H_ */

