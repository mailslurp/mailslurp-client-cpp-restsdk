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
#include "ExpiredInboxDto.h"
#include "Inbox.h"
#include "PageEmailPreview.h"
#include "PageExpiredInboxRecordProjection.h"
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
    /// <param name="description">Optional description of the inbox for labelling purposes. Is shown in the dashboard and can be used with (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="emailAddress">A custom email address to use with the inbox. Defaults to null. When null MailSlurp will assign a random email address to the inbox such as &#x60;123@mailslurp.com&#x60;. If you use the &#x60;useDomainPool&#x60; option when the email address is null it will generate an email address with a more varied domain ending such as &#x60;123@mailslurp.info&#x60; or &#x60;123@mailslurp.biz&#x60;. When a custom email address is provided the address is split into a domain and the domain is queried against your user. If you have created the domain in the MailSlurp dashboard and verified it you can use any email address that ends with the domain. Send an email to this address and the inbox will receive and store it for you. To retrieve the email use the Inbox and Email Controller endpoints with the inbox ID. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="expiresAt">Optional inbox expiration date. If null then this inbox is permanent and the emails in it won&#39;t be deleted. If an expiration date is provided or is required by your plan the inbox will be closed when the expiration time is reached. Expired inboxes still contain their emails but can no longer send or receive emails. An ExpiredInboxRecord is created when an inbox and the email address and inbox ID are recorded. The expiresAt property is a timestamp string in ISO DateTime Format yyyy-MM-dd&#39;T&#39;HH:mm:ss.SSSXXX. (optional, default to utility::datetime())</param>
    /// <param name="expiresIn">Number of milliseconds that inbox should exist for (optional, default to 0L)</param>
    /// <param name="favourite">Is the inbox favorited. Favouriting inboxes is typically done in the dashboard for quick access or filtering (optional, default to false)</param>
    /// <param name="name">Optional name of the inbox. Displayed in the dashboard for easier search (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="tags">Tags that inbox has been tagged with. Tags can be added to inboxes to group different inboxes within an account. You can also search for inboxes by tag in the dashboard UI. (optional, default to std::vector&lt;std::shared_ptr&lt;utility::string_t&gt;&gt;())</param>
    /// <param name="useDomainPool">Use the MailSlurp domain name pool with this inbox when creating the email address. Defaults to null. If enabled the inbox will be an email address with a domain randomly chosen from a list of the MailSlurp domains. This is useful when the default &#x60;@mailslurp.com&#x60; email addresses used with inboxes are blocked or considered spam by a provider or receiving service. When domain pool is enabled an email address will be generated ending in &#x60;@mailslurp.{world,info,xyz,...}&#x60; . This means a TLD is randomly selecting from a list of &#x60;.biz&#x60;, &#x60;.info&#x60;, &#x60;.xyz&#x60; etc to add variance to the generated email addresses. When null or false MailSlurp uses the default behavior of &#x60;@mailslurp.com&#x60; or custom email address provided by the emailAddress field. (optional, default to false)</param>
    pplx::task<std::shared_ptr<Inbox>> createInbox(
        boost::optional<utility::string_t> description,
        boost::optional<utility::string_t> emailAddress,
        boost::optional<utility::datetime> expiresAt,
        boost::optional<int64_t> expiresIn,
        boost::optional<bool> favourite,
        boost::optional<utility::string_t> name,
        boost::optional<std::vector<utility::string_t>> tags,
        boost::optional<bool> useDomainPool
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
    /// Permanently delete an inbox and associated email address as well as all emails within the given inbox. This action cannot be undone. Note: deleting an inbox will not affect your account usage. Monthly inbox usage is based on how many inboxes you create within 30 days, not how many exist at time of request.
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
    /// Get an expired inbox record
    /// </summary>
    /// <remarks>
    /// Inboxes created with an expiration date will expire after the given date and be moved to an ExpiredInbox entity. You can still read emails in the inbox but it can no longer send or receive emails. Fetch the expired inboxes to view the old inboxes properties
    /// </remarks>
    /// <param name="expiredId">ID of the ExpiredInboxRecord you want to retrieve. This is different from the ID of the inbox you are interested in. See other methods for getting ExpiredInboxRecord for an inbox inboxId)</param>
    pplx::task<std::shared_ptr<ExpiredInboxDto>> getExpiredInboxRecordById(
        std::shared_ptr<utility::string_t> expiredId
    ) const;
    /// <summary>
    /// Get expired inbox record for a previously existing inbox
    /// </summary>
    /// <remarks>
    /// Use the inboxId to return an ExpiredInboxRecord if an inbox has expired. Inboxes expire and are disabled if an expiration date is set or plan requires. Returns 404 if no expired inbox is found for the inboxId
    /// </remarks>
    /// <param name="inboxId">ID of inbox you want to retrieve (not the inbox ID)</param>
    pplx::task<std::shared_ptr<ExpiredInboxDto>> getExpiredInboxRecordByInboxId(
        std::shared_ptr<utility::string_t> inboxId
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
    pplx::task<std::shared_ptr<PageExpiredInboxRecordProjection>> getExpiredInboxRecords(
        boost::optional<int32_t> page,
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

