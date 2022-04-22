/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://docs.mailslurp.com/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
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

#include "CountDto.h"
#include "CreateInboxDto.h"
#include "CreateInboxRulesetOptions.h"
#include "Email.h"
#include "EmailPreview.h"
#include "FlushExpiredInboxesResult.h"
#include "ImapSmtpAccessDetails.h"
#include "InboxByEmailAddressResult.h"
#include "InboxDto.h"
#include "InboxExistsDto.h"
#include "InboxIdsResult.h"
#include "InboxRulesetDto.h"
#include "PageEmailPreview.h"
#include "PageInboxProjection.h"
#include "PageInboxRulesetDto.h"
#include "PageOrganizationInboxProjection.h"
#include "PageSentEmailProjection.h"
#include "PageTrackingPixelProjection.h"
#include "SendEmailOptions.h"
#include "SendSMTPEnvelopeOptions.h"
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
    /// Create an inbox email address. An inbox has a real email address and can send and receive emails. Inboxes can be either &#x60;SMTP&#x60; or &#x60;HTTP&#x60; inboxes.
    /// </summary>
    /// <remarks>
    /// Create a new inbox and with a randomized email address to send and receive from. Pass emailAddress parameter if you wish to use a specific email address. Creating an inbox is required before sending or receiving emails. If writing tests it is recommended that you create a new inbox during each test method so that it is unique and empty. 
    /// </remarks>
    /// <param name="emailAddress">A custom email address to use with the inbox. Defaults to null. When null MailSlurp will assign a random email address to the inbox such as &#x60;123@mailslurp.com&#x60;. If you use the &#x60;useDomainPool&#x60; option when the email address is null it will generate an email address with a more varied domain ending such as &#x60;123@mailslurp.info&#x60; or &#x60;123@mailslurp.biz&#x60;. When a custom email address is provided the address is split into a domain and the domain is queried against your user. If you have created the domain in the MailSlurp dashboard and verified it you can use any email address that ends with the domain. Note domain types must match the inbox type - so &#x60;SMTP&#x60; inboxes will only work with &#x60;SMTP&#x60; type domains. Avoid &#x60;SMTP&#x60; inboxes if you need to send emails as they can only receive. Send an email to this address and the inbox will receive and store it for you. To retrieve the email use the Inbox and Email Controller endpoints with the inbox ID. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="tags">Tags that inbox has been tagged with. Tags can be added to inboxes to group different inboxes within an account. You can also search for inboxes by tag in the dashboard UI. (optional, default to std::vector&lt;std::shared_ptr&lt;utility::string_t&gt;&gt;())</param>
    /// <param name="name">Optional name of the inbox. Displayed in the dashboard for easier search and used as the sender name when sending emails. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="description">Optional description of the inbox for labelling purposes. Is shown in the dashboard and can be used with (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="useDomainPool">Use the MailSlurp domain name pool with this inbox when creating the email address. Defaults to null. If enabled the inbox will be an email address with a domain randomly chosen from a list of the MailSlurp domains. This is useful when the default &#x60;@mailslurp.com&#x60; email addresses used with inboxes are blocked or considered spam by a provider or receiving service. When domain pool is enabled an email address will be generated ending in &#x60;@mailslurp.{world,info,xyz,...}&#x60; . This means a TLD is randomly selecting from a list of &#x60;.biz&#x60;, &#x60;.info&#x60;, &#x60;.xyz&#x60; etc to add variance to the generated email addresses. When null or false MailSlurp uses the default behavior of &#x60;@mailslurp.com&#x60; or custom email address provided by the emailAddress field. Note this feature is only available for &#x60;HTTP&#x60; inbox types. (optional, default to false)</param>
    /// <param name="favourite">Is the inbox a favorite. Marking an inbox as a favorite is typically done in the dashboard for quick access or filtering (optional, default to false)</param>
    /// <param name="expiresAt">Optional inbox expiration date. If null then this inbox is permanent and the emails in it won&#39;t be deleted. If an expiration date is provided or is required by your plan the inbox will be closed when the expiration time is reached. Expired inboxes still contain their emails but can no longer send or receive emails. An ExpiredInboxRecord is created when an inbox and the email address and inbox ID are recorded. The expiresAt property is a timestamp string in ISO DateTime Format yyyy-MM-dd&#39;T&#39;HH:mm:ss.SSSXXX. (optional, default to utility::datetime())</param>
    /// <param name="expiresIn">Number of milliseconds that inbox should exist for (optional, default to 0L)</param>
    /// <param name="allowTeamAccess">DEPRECATED (team access is always true). Grant team access to this inbox and the emails that belong to it for team members of your organization. (optional, default to false)</param>
    /// <param name="inboxType">HTTP (default) or SMTP inbox type. HTTP inboxes are default and best solution for most cases. SMTP inboxes are more reliable for public inbound email consumption (but do not support sending emails). When using custom domains the domain type must match the inbox type. HTTP inboxes are processed by AWS SES while SMTP inboxes use a custom mail server running at &#x60;mx.mailslurp.com&#x60;. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<InboxDto>> createInbox(
        boost::optional<utility::string_t> emailAddress,
        boost::optional<std::vector<utility::string_t>> tags,
        boost::optional<utility::string_t> name,
        boost::optional<utility::string_t> description,
        boost::optional<bool> useDomainPool,
        boost::optional<bool> favourite,
        boost::optional<utility::datetime> expiresAt,
        boost::optional<int64_t> expiresIn,
        boost::optional<bool> allowTeamAccess,
        boost::optional<utility::string_t> inboxType
    ) const;
    /// <summary>
    /// Create an inbox ruleset
    /// </summary>
    /// <remarks>
    /// Create a new inbox rule for forwarding, blocking, and allowing emails when sending and receiving
    /// </remarks>
    /// <param name="inboxId">inboxId</param>
    /// <param name="createInboxRulesetOptions"></param>
    pplx::task<std::shared_ptr<InboxRulesetDto>> createInboxRuleset(
        std::shared_ptr<utility::string_t> inboxId,
        std::shared_ptr<CreateInboxRulesetOptions> createInboxRulesetOptions
    ) const;
    /// <summary>
    /// Create an inbox with default options. Uses MailSlurp domain pool address and is private.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<std::shared_ptr<InboxDto>> createInboxWithDefaults(
    ) const;
    /// <summary>
    /// Create an inbox with options. Extended options for inbox creation.
    /// </summary>
    /// <remarks>
    /// Additional endpoint that allows inbox creation with request body options. Can be more flexible that other methods for some clients.
    /// </remarks>
    /// <param name="createInboxDto"></param>
    pplx::task<std::shared_ptr<InboxDto>> createInboxWithOptions(
        std::shared_ptr<CreateInboxDto> createInboxDto
    ) const;
    /// <summary>
    /// Delete all emails in a given inboxes.
    /// </summary>
    /// <remarks>
    /// Deletes all emails in an inbox. Be careful as emails cannot be recovered
    /// </remarks>
    /// <param name="inboxId"></param>
    pplx::task<void> deleteAllInboxEmails(
        std::shared_ptr<utility::string_t> inboxId
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
    /// <param name="inboxId"></param>
    pplx::task<void> deleteInbox(
        std::shared_ptr<utility::string_t> inboxId
    ) const;
    /// <summary>
    /// Does inbox exist
    /// </summary>
    /// <remarks>
    /// Check if inboxes exist by email address. Useful if you are sending emails to mailslurp addresses
    /// </remarks>
    /// <param name="emailAddress">Email address</param>
    pplx::task<std::shared_ptr<InboxExistsDto>> doesInboxExist(
        utility::string_t emailAddress
    ) const;
    /// <summary>
    /// Remove expired inboxes
    /// </summary>
    /// <remarks>
    /// Remove any expired inboxes for your account (instead of waiting for scheduled removal on server)
    /// </remarks>
    /// <param name="before">Optional expired at before flag to flush expired inboxes that have expired before the given time (optional, default to utility::datetime())</param>
    pplx::task<std::shared_ptr<FlushExpiredInboxesResult>> flushExpired(
        boost::optional<utility::datetime> before
    ) const;
    /// <summary>
    /// List All Inboxes Paginated
    /// </summary>
    /// <remarks>
    /// List inboxes in paginated form. The results are available on the &#x60;content&#x60; property of the returned object. This method allows for page index (zero based), page size (how many results to return), and a sort direction (based on createdAt time). You Can also filter by whether an inbox is favorited or use email address pattern. This method is the recommended way to query inboxes. The alternative &#x60;getInboxes&#x60; method returns a full list of inboxes but is limited to 100 results.
    /// </remarks>
    /// <param name="page">Optional page index in list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size in list pagination (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="favourite">Optionally filter results for favourites only (optional, default to false)</param>
    /// <param name="search">Optionally filter by search words partial matching ID, tags, name, and email address (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="tag">Optionally filter by tags. Will return inboxes that include given tags (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="teamAccess">DEPRECATED. Optionally filter by team access. (optional, default to false)</param>
    /// <param name="since">Optional filter by created after given date time (optional, default to utility::datetime())</param>
    /// <param name="before">Optional filter by created before given date time (optional, default to utility::datetime())</param>
    pplx::task<std::shared_ptr<PageInboxProjection>> getAllInboxes(
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort,
        boost::optional<bool> favourite,
        boost::optional<utility::string_t> search,
        boost::optional<utility::string_t> tag,
        boost::optional<bool> teamAccess,
        boost::optional<utility::datetime> since,
        boost::optional<utility::datetime> before
    ) const;
    /// <summary>
    /// Get emails in an Inbox. This method is not idempotent as it allows retries and waits if you want certain conditions to be met before returning. For simple listing and sorting of known emails use the email controller instead.
    /// </summary>
    /// <remarks>
    /// List emails that an inbox has received. Only emails that are sent to the inbox&#39;s email address will appear in the inbox. It may take several seconds for any email you send to an inbox&#39;s email address to appear in the inbox. To make this endpoint wait for a minimum number of emails use the &#x60;minCount&#x60; parameter. The server will retry the inbox database until the &#x60;minCount&#x60; is satisfied or the &#x60;retryTimeout&#x60; is reached
    /// </remarks>
    /// <param name="inboxId">Id of inbox that emails belongs to</param>
    /// <param name="size">Alias for limit. Assessed first before assessing any passed limit. (optional, default to 0)</param>
    /// <param name="limit">Limit the result set, ordered by received date time sort direction. Maximum 100. For more listing options see the email controller (optional, default to 0)</param>
    /// <param name="sort">Sort the results by received date and direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="retryTimeout">Maximum milliseconds to spend retrying inbox database until minCount emails are returned (optional, default to 0L)</param>
    /// <param name="delayTimeout"> (optional, default to 0L)</param>
    /// <param name="minCount">Minimum acceptable email count. Will cause request to hang (and retry) until minCount is satisfied or retryTimeout is reached. (optional, default to 0L)</param>
    /// <param name="unreadOnly"> (optional, default to false)</param>
    /// <param name="before">Exclude emails received after this ISO 8601 date time (optional, default to utility::datetime())</param>
    /// <param name="since">Exclude emails received before this ISO 8601 date time (optional, default to utility::datetime())</param>
    pplx::task<std::vector<std::shared_ptr<EmailPreview>>> getEmails(
        std::shared_ptr<utility::string_t> inboxId,
        boost::optional<int32_t> size,
        boost::optional<int32_t> limit,
        boost::optional<utility::string_t> sort,
        boost::optional<int64_t> retryTimeout,
        boost::optional<int64_t> delayTimeout,
        boost::optional<int64_t> minCount,
        boost::optional<bool> unreadOnly,
        boost::optional<utility::datetime> before,
        boost::optional<utility::datetime> since
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get IMAP and SMTP access usernames and passwords
    /// </remarks>
    /// <param name="inboxId">Inbox ID (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<ImapSmtpAccessDetails>> getImapSmtpAccess(
        boost::optional<std::shared_ptr<utility::string_t>> inboxId
    ) const;
    /// <summary>
    /// Get Inbox. Returns properties of an inbox.
    /// </summary>
    /// <remarks>
    /// Returns an inbox&#39;s properties, including its email address and ID.
    /// </remarks>
    /// <param name="inboxId"></param>
    pplx::task<std::shared_ptr<InboxDto>> getInbox(
        std::shared_ptr<utility::string_t> inboxId
    ) const;
    /// <summary>
    /// Search for an inbox with the provided email address
    /// </summary>
    /// <remarks>
    /// Get a inbox result by email address
    /// </remarks>
    /// <param name="emailAddress"></param>
    pplx::task<std::shared_ptr<InboxByEmailAddressResult>> getInboxByEmailAddress(
        utility::string_t emailAddress
    ) const;
    /// <summary>
    /// Get total inbox count
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<std::shared_ptr<CountDto>> getInboxCount(
    ) const;
    /// <summary>
    /// Get email count in inbox
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="inboxId">Id of inbox that emails belongs to</param>
    pplx::task<std::shared_ptr<CountDto>> getInboxEmailCount(
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
    /// <param name="since">Optional filter by received after given date time (optional, default to utility::datetime())</param>
    /// <param name="before">Optional filter by received before given date time (optional, default to utility::datetime())</param>
    pplx::task<std::shared_ptr<PageEmailPreview>> getInboxEmailsPaginated(
        std::shared_ptr<utility::string_t> inboxId,
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort,
        boost::optional<utility::datetime> since,
        boost::optional<utility::datetime> before
    ) const;
    /// <summary>
    /// Get all inbox IDs
    /// </summary>
    /// <remarks>
    /// Get list of inbox IDs
    /// </remarks>
    pplx::task<std::shared_ptr<InboxIdsResult>> getInboxIds(
    ) const;
    /// <summary>
    /// Get Inbox Sent Emails
    /// </summary>
    /// <remarks>
    /// Returns an inbox&#39;s sent email receipts. Call individual sent email endpoints for more details. Note for privacy reasons the full body of sent emails is never stored. An MD5 hash hex is available for comparison instead.
    /// </remarks>
    /// <param name="inboxId"></param>
    /// <param name="page">Optional page index in inbox sent email list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size in inbox sent email list pagination (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="searchFilter">Optional sent email search (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="since">Optional filter by sent after given date time (optional, default to utility::datetime())</param>
    /// <param name="before">Optional filter by sent before given date time (optional, default to utility::datetime())</param>
    pplx::task<std::shared_ptr<PageSentEmailProjection>> getInboxSentEmails(
        std::shared_ptr<utility::string_t> inboxId,
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort,
        boost::optional<utility::string_t> searchFilter,
        boost::optional<utility::datetime> since,
        boost::optional<utility::datetime> before
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
    /// List Inboxes and email addresses
    /// </summary>
    /// <remarks>
    /// List the inboxes you have created. Note use of the more advanced &#x60;getAllEmails&#x60; is recommended and allows paginated access using a limit and sort parameter.
    /// </remarks>
    /// <param name="size">Optional result size limit. Note an automatic limit of 100 results is applied. See the paginated &#x60;getAllEmails&#x60; for larger queries. (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="since">Optional filter by created after given date time (optional, default to utility::datetime())</param>
    /// <param name="before">Optional filter by created before given date time (optional, default to utility::datetime())</param>
    pplx::task<std::vector<std::shared_ptr<InboxDto>>> getInboxes(
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort,
        boost::optional<utility::datetime> since,
        boost::optional<utility::datetime> before
    ) const;
    /// <summary>
    /// Get latest email in an inbox. Use &#x60;WaitForController&#x60; to get emails that may not have arrived yet.
    /// </summary>
    /// <remarks>
    /// Get the newest email in an inbox or wait for one to arrive
    /// </remarks>
    /// <param name="inboxId">ID of the inbox you want to get the latest email from</param>
    /// <param name="timeoutMillis">Timeout milliseconds to wait for latest email</param>
    pplx::task<std::shared_ptr<Email>> getLatestEmailInInbox(
        std::shared_ptr<utility::string_t> inboxId,
        int64_t timeoutMillis
    ) const;
    /// <summary>
    /// List Organization Inboxes Paginated
    /// </summary>
    /// <remarks>
    /// List organization inboxes in paginated form. These are inboxes created with &#x60;allowTeamAccess&#x60; flag enabled. Organization inboxes are &#x60;readOnly&#x60; for non-admin users. The results are available on the &#x60;content&#x60; property of the returned object. This method allows for page index (zero based), page size (how many results to return), and a sort direction (based on createdAt time). 
    /// </remarks>
    /// <param name="page">Optional page index in list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size in list pagination (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="searchFilter">Optional search filter (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="since">Optional filter by created after given date time (optional, default to utility::datetime())</param>
    /// <param name="before">Optional filter by created before given date time (optional, default to utility::datetime())</param>
    pplx::task<std::shared_ptr<PageOrganizationInboxProjection>> getOrganizationInboxes(
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort,
        boost::optional<utility::string_t> searchFilter,
        boost::optional<utility::datetime> since,
        boost::optional<utility::datetime> before
    ) const;
    /// <summary>
    /// List inbox rulesets
    /// </summary>
    /// <remarks>
    /// List all rulesets attached to an inbox
    /// </remarks>
    /// <param name="inboxId"></param>
    /// <param name="page">Optional page index in inbox ruleset list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size in inbox ruleset list pagination (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="searchFilter">Optional search filter (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="since">Optional filter by created after given date time (optional, default to utility::datetime())</param>
    /// <param name="before">Optional filter by created before given date time (optional, default to utility::datetime())</param>
    pplx::task<std::shared_ptr<PageInboxRulesetDto>> listInboxRulesets(
        std::shared_ptr<utility::string_t> inboxId,
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort,
        boost::optional<utility::string_t> searchFilter,
        boost::optional<utility::datetime> since,
        boost::optional<utility::datetime> before
    ) const;
    /// <summary>
    /// List inbox tracking pixels
    /// </summary>
    /// <remarks>
    /// List all tracking pixels sent from an inbox
    /// </remarks>
    /// <param name="inboxId"></param>
    /// <param name="page">Optional page index in inbox tracking pixel list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size in inbox tracking pixel list pagination (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="searchFilter">Optional search filter (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="since">Optional filter by created after given date time (optional, default to utility::datetime())</param>
    /// <param name="before">Optional filter by created before given date time (optional, default to utility::datetime())</param>
    pplx::task<std::shared_ptr<PageTrackingPixelProjection>> listInboxTrackingPixels(
        std::shared_ptr<utility::string_t> inboxId,
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort,
        boost::optional<utility::string_t> searchFilter,
        boost::optional<utility::datetime> since,
        boost::optional<utility::datetime> before
    ) const;
    /// <summary>
    /// Send Email
    /// </summary>
    /// <remarks>
    /// Send an email from an inbox&#39;s email address.  The request body should contain the &#x60;SendEmailOptions&#x60; that include recipients, attachments, body etc. See &#x60;SendEmailOptions&#x60; for all available properties. Note the &#x60;inboxId&#x60; refers to the inbox&#39;s id not the inbox&#39;s email address. See https://www.mailslurp.com/guides/ for more information on how to send emails. This method does not return a sent email entity due to legacy reasons. To send and get a sent email as returned response use the sister method &#x60;sendEmailAndConfirm&#x60;.
    /// </remarks>
    /// <param name="inboxId">ID of the inbox you want to send the email from</param>
    /// <param name="sendEmailOptions"></param>
    pplx::task<void> sendEmail(
        std::shared_ptr<utility::string_t> inboxId,
        std::shared_ptr<SendEmailOptions> sendEmailOptions
    ) const;
    /// <summary>
    /// Send email and return sent confirmation
    /// </summary>
    /// <remarks>
    /// Sister method for standard &#x60;sendEmail&#x60; method with the benefit of returning a &#x60;SentEmail&#x60; entity confirming the successful sending of the email with a link to the sent object created for it.
    /// </remarks>
    /// <param name="inboxId">ID of the inbox you want to send the email from</param>
    /// <param name="sendEmailOptions"></param>
    pplx::task<std::shared_ptr<SentEmailDto>> sendEmailAndConfirm(
        std::shared_ptr<utility::string_t> inboxId,
        std::shared_ptr<SendEmailOptions> sendEmailOptions
    ) const;
    /// <summary>
    /// Send email using an SMTP mail envelope and message body and return sent confirmation
    /// </summary>
    /// <remarks>
    /// Send email using an SMTP envelope containing RCPT TO, MAIL FROM, and a SMTP BODY.
    /// </remarks>
    /// <param name="inboxId">ID of the inbox you want to send the email from</param>
    /// <param name="sendSMTPEnvelopeOptions"></param>
    pplx::task<std::shared_ptr<SentEmailDto>> sendSmtpEnvelope(
        std::shared_ptr<utility::string_t> inboxId,
        std::shared_ptr<SendSMTPEnvelopeOptions> sendSMTPEnvelopeOptions
    ) const;
    /// <summary>
    /// Send a test email to inbox
    /// </summary>
    /// <remarks>
    /// Send an inbox a test email to test email receiving is working
    /// </remarks>
    /// <param name="inboxId"></param>
    pplx::task<void> sendTestEmail(
        std::shared_ptr<utility::string_t> inboxId
    ) const;
    /// <summary>
    /// Set inbox favourited state
    /// </summary>
    /// <remarks>
    /// Set and return new favourite state for an inbox
    /// </remarks>
    /// <param name="inboxId"></param>
    /// <param name="setInboxFavouritedOptions"></param>
    pplx::task<std::shared_ptr<InboxDto>> setInboxFavourited(
        std::shared_ptr<utility::string_t> inboxId,
        std::shared_ptr<SetInboxFavouritedOptions> setInboxFavouritedOptions
    ) const;
    /// <summary>
    /// Update Inbox. Change name and description. Email address is not editable.
    /// </summary>
    /// <remarks>
    /// Update editable fields on an inbox
    /// </remarks>
    /// <param name="inboxId"></param>
    /// <param name="updateInboxOptions"></param>
    pplx::task<std::shared_ptr<InboxDto>> updateInbox(
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

