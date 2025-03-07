/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails and SMS from dynamically allocated email addresses and phone numbers. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://docs.mailslurp.com/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.2.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * EmailControllerApi.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_API_EmailControllerApi_H_
#define COM_MAILSLURP_CLIENT_API_EmailControllerApi_H_



#include "CppRestOpenAPIClient/ApiClient.h"

#include "CppRestOpenAPIClient/model/AttachmentMetaData.h"
#include "CppRestOpenAPIClient/model/CanSendEmailResults.h"
#include "CppRestOpenAPIClient/model/CheckEmailBodyFeatureSupportResults.h"
#include "CppRestOpenAPIClient/model/CheckEmailBodyResults.h"
#include "CppRestOpenAPIClient/model/CheckEmailClientSupportOptions.h"
#include "CppRestOpenAPIClient/model/CheckEmailClientSupportResults.h"
#include "CppRestOpenAPIClient/model/ContentMatchOptions.h"
#include "CppRestOpenAPIClient/model/CountDto.h"
#include "CppRestOpenAPIClient/model/DownloadAttachmentDto.h"
#include "CppRestOpenAPIClient/model/Email.h"
#include "CppRestOpenAPIClient/model/EmailContentMatchResult.h"
#include "CppRestOpenAPIClient/model/EmailContentPartResult.h"
#include "CppRestOpenAPIClient/model/EmailHtmlDto.h"
#include "CppRestOpenAPIClient/model/EmailLinksResult.h"
#include "CppRestOpenAPIClient/model/EmailPreview.h"
#include "CppRestOpenAPIClient/model/EmailPreviewUrls.h"
#include "CppRestOpenAPIClient/model/EmailScreenshotResult.h"
#include "CppRestOpenAPIClient/model/EmailTextLinesResult.h"
#include "CppRestOpenAPIClient/model/EmailThreadDto.h"
#include "CppRestOpenAPIClient/model/EmailThreadItemsDto.h"
#include "CppRestOpenAPIClient/model/ForwardEmailOptions.h"
#include "CppRestOpenAPIClient/model/GetEmailScreenshotOptions.h"
#include "CppRestOpenAPIClient/model/GravatarUrl.h"
#include "CppRestOpenAPIClient/model/ImapFlagOperationOptions.h"
#include "CppRestOpenAPIClient/model/PageEmailProjection.h"
#include "CppRestOpenAPIClient/model/PageEmailThreadProjection.h"
#include "CppRestOpenAPIClient/model/RawEmailJson.h"
#include "CppRestOpenAPIClient/model/ReplyToEmailOptions.h"
#include "CppRestOpenAPIClient/model/SearchEmailsOptions.h"
#include "CppRestOpenAPIClient/model/SendEmailOptions.h"
#include "CppRestOpenAPIClient/model/SentEmailDto.h"
#include "CppRestOpenAPIClient/model/UnreadCount.h"
#include "CppRestOpenAPIClient/model/ValidationDto.h"
#include <cpprest/details/basic_types.h>
#include <boost/optional.hpp>

namespace com {
namespace mailslurp {
namespace client {
namespace api {

using namespace com::mailslurp::client::model;



class  EmailControllerApi 
{
public:

    explicit EmailControllerApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~EmailControllerApi();

    /// <summary>
    /// Set IMAP flags associated with a message. Only supports &#39;\\Seen&#39; flag.
    /// </summary>
    /// <remarks>
    /// Apply RFC3501 section-2.3.2 IMAP flag operations on an email
    /// </remarks>
    /// <param name="emailId"></param>
    /// <param name="imapFlagOperationOptions"></param>
    pplx::task<std::shared_ptr<EmailPreview>> applyImapFlagOperation(
        utility::string_t emailId,
        std::shared_ptr<ImapFlagOperationOptions> imapFlagOperationOptions
    ) const;
    /// <summary>
    /// Check if email can be sent and options are valid.
    /// </summary>
    /// <remarks>
    /// Can user send email to given recipient or is the recipient blocked
    /// </remarks>
    /// <param name="inboxId">ID of the inbox you want to send the email from</param>
    /// <param name="sendEmailOptions"></param>
    pplx::task<std::shared_ptr<CanSendEmailResults>> canSend(
        utility::string_t inboxId,
        std::shared_ptr<SendEmailOptions> sendEmailOptions
    ) const;
    /// <summary>
    /// Detect broken links, spelling, and images in email content
    /// </summary>
    /// <remarks>
    /// Find dead links, broken images, and spelling mistakes in email body. Will call included links via HTTP so do not invoke if your links are sensitive or stateful. Any resource that returns a 4xx or 5xx response or is not reachable via HEAD or GET HTTP operations will be considered unhealthy.
    /// </remarks>
    /// <param name="emailId"></param>
    pplx::task<std::shared_ptr<CheckEmailBodyResults>> checkEmailBody(
        utility::string_t emailId
    ) const;
    /// <summary>
    /// Show which mail clients support the HTML and CSS features used in an email body.
    /// </summary>
    /// <remarks>
    /// Detect HTML and CSS features inside an email body and return a report of email client support across different platforms and versions.
    /// </remarks>
    /// <param name="emailId"></param>
    pplx::task<std::shared_ptr<CheckEmailBodyFeatureSupportResults>> checkEmailBodyFeatureSupport(
        utility::string_t emailId
    ) const;
    /// <summary>
    /// Show which email programs and devices support the features used in an email body.
    /// </summary>
    /// <remarks>
    /// Evaluate the features used in an email body and return a report of email client support across different platforms and versions.
    /// </remarks>
    /// <param name="checkEmailClientSupportOptions"></param>
    pplx::task<std::shared_ptr<CheckEmailClientSupportResults>> checkEmailClientSupport(
        std::shared_ptr<CheckEmailClientSupportOptions> checkEmailClientSupportOptions
    ) const;
    /// <summary>
    /// Delete all emails in all inboxes.
    /// </summary>
    /// <remarks>
    /// Deletes all emails in your account. Be careful as emails cannot be recovered
    /// </remarks>
    pplx::task<void> deleteAllEmails(
    ) const;
    /// <summary>
    /// Delete an email
    /// </summary>
    /// <remarks>
    /// Deletes an email and removes it from the inbox. Deleted emails cannot be recovered.
    /// </remarks>
    /// <param name="emailId">ID of email to delete</param>
    pplx::task<void> deleteEmail(
        utility::string_t emailId
    ) const;
    /// <summary>
    /// Get email attachment bytes. Returned as &#x60;octet-stream&#x60; with content type header. If you have trouble with byte responses try the &#x60;downloadAttachmentBase64&#x60; response endpoints and convert the base 64 encoded content to a file or string.
    /// </summary>
    /// <remarks>
    /// Returns the specified attachment for a given email as a stream / array of bytes. You can find attachment ids in email responses endpoint responses. The response type is application/octet-stream.
    /// </remarks>
    /// <param name="emailId">ID of email</param>
    /// <param name="attachmentId">ID of attachment</param>
    /// <param name="apiKey">Can pass apiKey in url for this request if you wish to download the file in a browser. Content type will be set to original content type of the attachment file. This is so that browsers can download the file correctly. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<utility::string_t> downloadAttachment(
        utility::string_t emailId,
        utility::string_t attachmentId,
        boost::optional<utility::string_t> apiKey
    ) const;
    /// <summary>
    /// Get email attachment as base64 encoded string as an alternative to binary responses. Decode the &#x60;base64FileContents&#x60; as a &#x60;utf-8&#x60; encoded string or array of bytes depending on the &#x60;contentType&#x60;.
    /// </summary>
    /// <remarks>
    /// Returns the specified attachment for a given email as a base 64 encoded string. The response type is application/json. This method is similar to the &#x60;downloadAttachment&#x60; method but allows some clients to get around issues with binary responses.
    /// </remarks>
    /// <param name="emailId">ID of email</param>
    /// <param name="attachmentId">ID of attachment</param>
    pplx::task<std::shared_ptr<DownloadAttachmentDto>> downloadAttachmentBase64(
        utility::string_t emailId,
        utility::string_t attachmentId
    ) const;
    /// <summary>
    /// Get email body as string. Returned as &#x60;plain/text&#x60; with content type header.
    /// </summary>
    /// <remarks>
    /// Returns the specified email body for a given email as a string
    /// </remarks>
    /// <param name="emailId">ID of email</param>
    pplx::task<utility::string_t> downloadBody(
        utility::string_t emailId
    ) const;
    /// <summary>
    /// Get email body in bytes. Returned as &#x60;octet-stream&#x60; with content type header.
    /// </summary>
    /// <remarks>
    /// Returns the specified email body for a given email as a stream / array of bytes.
    /// </remarks>
    /// <param name="emailId">ID of email</param>
    pplx::task<utility::string_t> downloadBodyBytes(
        utility::string_t emailId
    ) const;
    /// <summary>
    /// Forward email to recipients
    /// </summary>
    /// <remarks>
    /// Forward an existing email to new recipients. The sender of the email will be the inbox that received the email you are forwarding. You can override the sender with the &#x60;from&#x60; option. Note you must have access to the from address in MailSlurp to use the override. For more control consider fetching the email and sending it a new using the send email endpoints.
    /// </remarks>
    /// <param name="emailId">ID of email</param>
    /// <param name="forwardEmailOptions"></param>
    pplx::task<std::shared_ptr<SentEmailDto>> forwardEmail(
        utility::string_t emailId,
        std::shared_ptr<ForwardEmailOptions> forwardEmailOptions
    ) const;
    /// <summary>
    /// Get email attachment metadata. This is the &#x60;contentType&#x60; and &#x60;contentLength&#x60; of an attachment. To get the individual attachments  use the &#x60;downloadAttachment&#x60; methods.
    /// </summary>
    /// <remarks>
    /// Returns the metadata such as name and content-type for a given attachment and email.
    /// </remarks>
    /// <param name="emailId">ID of email</param>
    /// <param name="attachmentId">ID of attachment</param>
    pplx::task<std::shared_ptr<AttachmentMetaData>> getAttachmentMetaData(
        utility::string_t emailId,
        utility::string_t attachmentId
    ) const;
    /// <summary>
    /// Get email content including headers and body. Expects email to exist by ID. For emails that may not have arrived yet use the WaitForController.
    /// </summary>
    /// <remarks>
    /// Returns a email summary object with headers and content. To retrieve the raw unparsed email use the getRawEmail endpoints
    /// </remarks>
    /// <param name="emailId"></param>
    pplx::task<std::shared_ptr<Email>> getEmail(
        utility::string_t emailId
    ) const;
    /// <summary>
    /// Get all email attachment metadata. Metadata includes name and size of attachments.
    /// </summary>
    /// <remarks>
    /// Returns an array of attachment metadata such as name and content-type for a given email if present.
    /// </remarks>
    /// <param name="emailId">ID of email</param>
    pplx::task<std::vector<std::shared_ptr<AttachmentMetaData>>> getEmailAttachments(
        utility::string_t emailId
    ) const;
    /// <summary>
    /// Get email content regex pattern match results. Runs regex against email body and returns match groups.
    /// </summary>
    /// <remarks>
    /// Return the matches for a given Java style regex pattern. Do not include the typical &#x60;/&#x60; at start or end of regex in some languages. Given an example &#x60;your code is: 12345&#x60; the pattern to extract match looks like &#x60;code is: (\\d{6})&#x60;. This will return an array of matches with the first matching the entire pattern and the subsequent matching the groups: &#x60;[&#39;code is: 123456&#39;, &#39;123456&#39;]&#x60; See https://docs.oracle.com/javase/8/docs/api/java/util/regex/Pattern.html for more information of available patterns. 
    /// </remarks>
    /// <param name="emailId">ID of email to match against</param>
    /// <param name="contentMatchOptions"></param>
    pplx::task<std::shared_ptr<EmailContentMatchResult>> getEmailContentMatch(
        utility::string_t emailId,
        std::shared_ptr<ContentMatchOptions> contentMatchOptions
    ) const;
    /// <summary>
    /// Get email content part by content type
    /// </summary>
    /// <remarks>
    /// Get email body content parts from a multipart email message for a given content type
    /// </remarks>
    /// <param name="emailId">ID of email to match against</param>
    /// <param name="contentType">Content type</param>
    /// <param name="strict">Strict content type match (optional, default to false)</param>
    /// <param name="index">Index of content type part if multiple (optional, default to 0)</param>
    pplx::task<std::shared_ptr<EmailContentPartResult>> getEmailContentPart(
        utility::string_t emailId,
        utility::string_t contentType,
        boost::optional<bool> strict,
        boost::optional<int32_t> index
    ) const;
    /// <summary>
    /// Get email content part by content type raw response
    /// </summary>
    /// <remarks>
    /// Get email body content parts from a multipart email message for a given content type and return as response
    /// </remarks>
    /// <param name="emailId">ID of email to match against</param>
    /// <param name="contentType">Content type</param>
    /// <param name="strict">Strict content type match (optional, default to false)</param>
    /// <param name="index">Index of content type part if multiple. Starts from 0 and applies to the result list after selecting for your content type. Content type parts are sorted by order found in original MIME message. (optional, default to 0)</param>
    pplx::task<utility::string_t> getEmailContentPartContent(
        utility::string_t emailId,
        utility::string_t contentType,
        boost::optional<bool> strict,
        boost::optional<int32_t> index
    ) const;
    /// <summary>
    /// Get email count
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="inboxId"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<CountDto>> getEmailCount(
        boost::optional<utility::string_t> inboxId
    ) const;
    /// <summary>
    /// Get email content as HTML. For displaying emails in browser context.
    /// </summary>
    /// <remarks>
    /// Retrieve email content as HTML response for viewing in browsers. Decodes quoted-printable entities and converts charset to UTF-8. Pass your API KEY as a request parameter when viewing in a browser: &#x60;?apiKey&#x3D;xxx&#x60;. Returns content-type &#x60;text/html;charset&#x3D;utf-8&#x60; so you must call expecting that content response not JSON. For JSON response see the &#x60;getEmailHTMLJson&#x60; method.
    /// </remarks>
    /// <param name="emailId"></param>
    /// <param name="replaceCidImages"> (optional, default to false)</param>
    pplx::task<utility::string_t> getEmailHTML(
        utility::string_t emailId,
        boost::optional<bool> replaceCidImages
    ) const;
    /// <summary>
    /// Get email content as HTML in JSON wrapper. For fetching entity decoded HTML content
    /// </summary>
    /// <remarks>
    /// Retrieve email content as HTML response. Decodes quoted-printable entities and converts charset to UTF-8. Returns content-type &#x60;application/json;charset&#x3D;utf-8&#x60; so you must call expecting that content response not JSON.
    /// </remarks>
    /// <param name="emailId"></param>
    /// <param name="replaceCidImages"> (optional, default to false)</param>
    pplx::task<std::shared_ptr<EmailHtmlDto>> getEmailHTMLJson(
        utility::string_t emailId,
        boost::optional<bool> replaceCidImages
    ) const;
    /// <summary>
    /// Parse and return text from an email, stripping HTML and decoding encoded characters
    /// </summary>
    /// <remarks>
    /// Parse an email body and return the content as an array of text. HTML parsing uses JSoup which supports JQuery/CSS style selectors
    /// </remarks>
    /// <param name="emailId">ID of email to perform HTML query on</param>
    /// <param name="htmlSelector">HTML selector to search for. Uses JQuery/JSoup/CSS style selector like &#39;.my-div&#39; to match content. See https://jsoup.org/apidocs/org/jsoup/select/Selector.html for more information.</param>
    pplx::task<std::shared_ptr<EmailTextLinesResult>> getEmailHTMLQuery(
        utility::string_t emailId,
        utility::string_t htmlSelector
    ) const;
    /// <summary>
    /// Parse and return list of links found in an email (only works for HTML content)
    /// </summary>
    /// <remarks>
    /// HTML parsing uses JSoup and UNIX line separators. Searches content for href attributes
    /// </remarks>
    /// <param name="emailId">ID of email to fetch text for</param>
    /// <param name="selector">Optional HTML query selector for links (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<EmailLinksResult>> getEmailLinks(
        utility::string_t emailId,
        boost::optional<utility::string_t> selector
    ) const;
    /// <summary>
    /// Get email URLs for viewing in browser or downloading
    /// </summary>
    /// <remarks>
    /// Get a list of URLs for email content as text/html or raw SMTP message for viewing the message in a browser.
    /// </remarks>
    /// <param name="emailId"></param>
    pplx::task<std::shared_ptr<EmailPreviewUrls>> getEmailPreviewURLs(
        utility::string_t emailId
    ) const;
    /// <summary>
    /// Take a screenshot of an email in a browser and return base64 encoded string
    /// </summary>
    /// <remarks>
    /// Capture image of email screenshot and return as base64 encoded string. Useful for embedding in HTML. Be careful as this may contain sensitive information.
    /// </remarks>
    /// <param name="emailId"></param>
    /// <param name="getEmailScreenshotOptions"></param>
    pplx::task<std::shared_ptr<EmailScreenshotResult>> getEmailScreenshotAsBase64(
        utility::string_t emailId,
        std::shared_ptr<GetEmailScreenshotOptions> getEmailScreenshotOptions
    ) const;
    /// <summary>
    /// Take a screenshot of an email in a browser
    /// </summary>
    /// <remarks>
    /// Returns binary octet-stream of screenshot of the given email
    /// </remarks>
    /// <param name="emailId"></param>
    /// <param name="getEmailScreenshotOptions"></param>
    pplx::task<void> getEmailScreenshotAsBinary(
        utility::string_t emailId,
        std::shared_ptr<GetEmailScreenshotOptions> getEmailScreenshotOptions
    ) const;
    /// <summary>
    /// Get email data including headers but not body. Expects email to exist by ID. For emails that may not have arrived yet use the WaitForController.
    /// </summary>
    /// <remarks>
    /// Returns a email summary object with headers. To retrieve the body see getEmail and to get raw unparsed email use the getRawEmail endpoints
    /// </remarks>
    /// <param name="emailId"></param>
    /// <param name="decode"> (optional, default to false)</param>
    pplx::task<std::shared_ptr<EmailPreview>> getEmailSummary(
        utility::string_t emailId,
        boost::optional<bool> decode
    ) const;
    /// <summary>
    /// Parse and return text from an email, stripping HTML and decoding encoded characters
    /// </summary>
    /// <remarks>
    /// Parse an email body and return the content as an array of strings. HTML parsing uses JSoup and UNIX line separators.
    /// </remarks>
    /// <param name="emailId">ID of email to fetch text for</param>
    /// <param name="decodeHtmlEntities">Decode HTML entities (optional, default to false)</param>
    /// <param name="lineSeparator">Line separator character (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<EmailTextLinesResult>> getEmailTextLines(
        utility::string_t emailId,
        boost::optional<bool> decodeHtmlEntities,
        boost::optional<utility::string_t> lineSeparator
    ) const;
    /// <summary>
    /// Return email thread information. Use items endpoints to get messages for thread.
    /// </summary>
    /// <remarks>
    /// Return email message thread summary from Message-ID, In-Reply-To, and References header. Get messages using items endpoint
    /// </remarks>
    /// <param name="threadId"></param>
    pplx::task<std::shared_ptr<EmailThreadDto>> getEmailThread(
        utility::string_t threadId
    ) const;
    /// <summary>
    /// Return email thread items.
    /// </summary>
    /// <remarks>
    /// Return email thread messages based on Message-ID, In-Reply-To, and References header
    /// </remarks>
    /// <param name="threadId"></param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<EmailThreadItemsDto>> getEmailThreadItems(
        utility::string_t threadId,
        boost::optional<utility::string_t> sort
    ) const;
    /// <summary>
    /// Return email threads in paginated form
    /// </summary>
    /// <remarks>
    /// Return email message chains built from Message-ID, In-Reply-To, and References header.
    /// </remarks>
    /// <param name="htmlSelector">Optional inbox filter (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="page">Optional page index in email thread pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size in email thread pagination. Maximum size is 100. Use page index and sort to page through larger results (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="searchFilter">Optional search filter search filter for email threads. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="since">Optional filter email threads created since time (optional, default to utility::datetime())</param>
    /// <param name="before">Optional filter emails threads created before given date time (optional, default to utility::datetime())</param>
    pplx::task<std::shared_ptr<PageEmailThreadProjection>> getEmailThreads(
        boost::optional<utility::string_t> htmlSelector,
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort,
        boost::optional<utility::string_t> searchFilter,
        boost::optional<utility::datetime> since,
        boost::optional<utility::datetime> before
    ) const;
    /// <summary>
    /// Get all emails in all inboxes in paginated form. Email API list all.
    /// </summary>
    /// <remarks>
    /// By default returns all emails across all inboxes sorted by ascending created at date. Responses are paginated. You can restrict results to a list of inbox IDs. You can also filter out read messages
    /// </remarks>
    /// <param name="inboxId">Optional inbox ids to filter by. Can be repeated. By default will use all inboxes belonging to your account. (optional, default to std::vector&lt;std::shared_ptr&lt;utility::string_t&gt;&gt;())</param>
    /// <param name="page">Optional page index in email list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size in email list pagination. Maximum size is 100. Use page index and sort to page through larger results (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="unreadOnly">Optional filter for unread emails only. All emails are considered unread until they are viewed in the dashboard or requested directly (optional, default to false)</param>
    /// <param name="searchFilter">Optional search filter. Searches email recipients, sender, subject, email address and ID. Does not search email body (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="since">Optional filter emails received after given date time (optional, default to utility::datetime())</param>
    /// <param name="before">Optional filter emails received before given date time (optional, default to utility::datetime())</param>
    /// <param name="favourited">Optional filter emails that are favourited (optional, default to false)</param>
    /// <param name="syncConnectors">Sync connectors (optional, default to false)</param>
    /// <param name="plusAddressId">Optional plus address ID filter (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<PageEmailProjection>> getEmailsOffsetPaginated(
        boost::optional<std::vector<utility::string_t>> inboxId,
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort,
        boost::optional<bool> unreadOnly,
        boost::optional<utility::string_t> searchFilter,
        boost::optional<utility::datetime> since,
        boost::optional<utility::datetime> before,
        boost::optional<bool> favourited,
        boost::optional<bool> syncConnectors,
        boost::optional<utility::string_t> plusAddressId
    ) const;
    /// <summary>
    /// Get all emails in all inboxes in paginated form. Email API list all.
    /// </summary>
    /// <remarks>
    /// By default returns all emails across all inboxes sorted by ascending created at date. Responses are paginated. You can restrict results to a list of inbox IDs. You can also filter out read messages
    /// </remarks>
    /// <param name="inboxId">Optional inbox ids to filter by. Can be repeated. By default will use all inboxes belonging to your account. (optional, default to std::vector&lt;std::shared_ptr&lt;utility::string_t&gt;&gt;())</param>
    /// <param name="page">Optional page index in email list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size in email list pagination. Maximum size is 100. Use page index and sort to page through larger results (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="unreadOnly">Optional filter for unread emails only. All emails are considered unread until they are viewed in the dashboard or requested directly (optional, default to false)</param>
    /// <param name="searchFilter">Optional search filter. Searches email recipients, sender, subject, email address and ID. Does not search email body (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="since">Optional filter emails received after given date time. If unset will use time 24hours prior to now. (optional, default to utility::datetime())</param>
    /// <param name="before">Optional filter emails received before given date time (optional, default to utility::datetime())</param>
    /// <param name="syncConnectors">Sync connectors (optional, default to false)</param>
    /// <param name="plusAddressId">Optional plus address ID filter (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="favourited">Optional filter emails that are favourited (optional, default to false)</param>
    pplx::task<std::shared_ptr<PageEmailProjection>> getEmailsPaginated(
        boost::optional<std::vector<utility::string_t>> inboxId,
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort,
        boost::optional<bool> unreadOnly,
        boost::optional<utility::string_t> searchFilter,
        boost::optional<utility::datetime> since,
        boost::optional<utility::datetime> before,
        boost::optional<bool> syncConnectors,
        boost::optional<utility::string_t> plusAddressId,
        boost::optional<bool> favourited
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get gravatar url for email address
    /// </remarks>
    /// <param name="emailAddress"></param>
    /// <param name="size"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<GravatarUrl>> getGravatarUrlForEmailAddress(
        utility::string_t emailAddress,
        boost::optional<utility::string_t> size
    ) const;
    /// <summary>
    /// Get latest email in all inboxes. Most recently received.
    /// </summary>
    /// <remarks>
    /// Get the newest email in all inboxes or in a passed set of inbox IDs
    /// </remarks>
    /// <param name="inboxIds">Optional set of inboxes to filter by. Only get the latest email from these inbox IDs. If not provided will search across all inboxes (optional, default to std::vector&lt;std::shared_ptr&lt;utility::string_t&gt;&gt;())</param>
    pplx::task<std::shared_ptr<Email>> getLatestEmail(
        boost::optional<std::vector<utility::string_t>> inboxIds
    ) const;
    /// <summary>
    /// Get latest email in an inbox. Use &#x60;WaitForController&#x60; to get emails that may not have arrived yet.
    /// </summary>
    /// <remarks>
    /// Get the newest email in all inboxes or in a passed set of inbox IDs
    /// </remarks>
    /// <param name="inboxId">ID of the inbox you want to get the latest email from</param>
    pplx::task<std::shared_ptr<Email>> getLatestEmailInInbox1(
        utility::string_t inboxId
    ) const;
    /// <summary>
    /// Get all organization emails. List team or shared test email accounts
    /// </summary>
    /// <remarks>
    /// By default returns all emails across all team inboxes sorted by ascending created at date. Responses are paginated. You can restrict results to a list of inbox IDs. You can also filter out read messages
    /// </remarks>
    /// <param name="inboxId">Optional inbox ids to filter by. Can be repeated. By default will use all inboxes belonging to your account. (optional, default to std::vector&lt;std::shared_ptr&lt;utility::string_t&gt;&gt;())</param>
    /// <param name="page">Optional page index in email list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size in email list pagination. Maximum size is 100. Use page index and sort to page through larger results (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="unreadOnly">Optional filter for unread emails only. All emails are considered unread until they are viewed in the dashboard or requested directly (optional, default to false)</param>
    /// <param name="searchFilter">Optional search filter search filter for emails. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="since">Optional filter emails received after given date time. If unset will use time 24hours prior to now. (optional, default to utility::datetime())</param>
    /// <param name="before">Optional filter emails received before given date time (optional, default to utility::datetime())</param>
    /// <param name="syncConnectors">Sync connectors (optional, default to false)</param>
    /// <param name="favourited">Search only favorited emails (optional, default to false)</param>
    /// <param name="plusAddressId">Optional plus address ID filter (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<PageEmailProjection>> getOrganizationEmailsPaginated(
        boost::optional<std::vector<utility::string_t>> inboxId,
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort,
        boost::optional<bool> unreadOnly,
        boost::optional<utility::string_t> searchFilter,
        boost::optional<utility::datetime> since,
        boost::optional<utility::datetime> before,
        boost::optional<bool> syncConnectors,
        boost::optional<bool> favourited,
        boost::optional<utility::string_t> plusAddressId
    ) const;
    /// <summary>
    /// Get raw email string. Returns unparsed raw SMTP message with headers and body.
    /// </summary>
    /// <remarks>
    /// Returns a raw, unparsed, and unprocessed email. If your client has issues processing the response it is likely due to the response content-type which is text/plain. If you need a JSON response content-type use the getRawEmailJson endpoint
    /// </remarks>
    /// <param name="emailId">ID of email</param>
    pplx::task<void> getRawEmailContents(
        utility::string_t emailId
    ) const;
    /// <summary>
    /// Get raw email in JSON. Unparsed SMTP message in JSON wrapper format.
    /// </summary>
    /// <remarks>
    /// Returns a raw, unparsed, and unprocessed email wrapped in a JSON response object for easier handling when compared with the getRawEmail text/plain response
    /// </remarks>
    /// <param name="emailId">ID of email</param>
    pplx::task<std::shared_ptr<RawEmailJson>> getRawEmailJson(
        utility::string_t emailId
    ) const;
    /// <summary>
    /// Get unread email count
    /// </summary>
    /// <remarks>
    /// Get number of emails unread. Unread means has not been viewed in dashboard or returned in an email API response
    /// </remarks>
    /// <param name="inboxId">Optional inbox ID filter (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<UnreadCount>> getUnreadEmailCount(
        boost::optional<utility::string_t> inboxId
    ) const;
    /// <summary>
    /// Mark all emails as read or unread
    /// </summary>
    /// <remarks>
    /// Marks all emails as read or unread. Pass boolean read flag to set value. This is useful if you want to read an email but keep it as unread
    /// </remarks>
    /// <param name="read">What value to assign to email read property. Default true. (optional, default to false)</param>
    /// <param name="inboxId">Optional inbox ID filter (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<void> markAllAsRead(
        boost::optional<bool> read,
        boost::optional<utility::string_t> inboxId
    ) const;
    /// <summary>
    /// Mark an email as read or unread
    /// </summary>
    /// <remarks>
    /// Marks an email as read or unread. Pass boolean read flag to set value. This is useful if you want to read an email but keep it as unread
    /// </remarks>
    /// <param name="emailId"></param>
    /// <param name="read">What value to assign to email read property. Default true. (optional, default to false)</param>
    pplx::task<std::shared_ptr<EmailPreview>> markAsRead(
        utility::string_t emailId,
        boost::optional<bool> read
    ) const;
    /// <summary>
    /// Reply to an email
    /// </summary>
    /// <remarks>
    /// Send the reply to the email sender or reply-to and include same subject cc bcc etc. Reply to an email and the contents will be sent with the existing subject to the emails &#x60;to&#x60;, &#x60;cc&#x60;, and &#x60;bcc&#x60;.
    /// </remarks>
    /// <param name="emailId">ID of the email that should be replied to</param>
    /// <param name="replyToEmailOptions"></param>
    pplx::task<std::shared_ptr<SentEmailDto>> replyToEmail(
        utility::string_t emailId,
        std::shared_ptr<ReplyToEmailOptions> replyToEmailOptions
    ) const;
    /// <summary>
    /// Get all emails by search criteria. Return in paginated form.
    /// </summary>
    /// <remarks>
    /// Search emails by given criteria return matches in paginated format. Searches against email recipients, sender, subject, email address and ID. Does not search email body
    /// </remarks>
    /// <param name="searchEmailsOptions"></param>
    /// <param name="syncConnectors">Sync connectors (optional, default to false)</param>
    /// <param name="favourited">Search only favourited emails (optional, default to false)</param>
    /// <param name="plusAddressId">Optional plus address ID filter (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<PageEmailProjection>> searchEmails(
        std::shared_ptr<SearchEmailsOptions> searchEmailsOptions,
        boost::optional<bool> syncConnectors,
        boost::optional<bool> favourited,
        boost::optional<utility::string_t> plusAddressId
    ) const;
    /// <summary>
    /// Send email
    /// </summary>
    /// <remarks>
    /// Alias for &#x60;InboxController.sendEmail&#x60; method - see original method for full details. Sends an email from a given inbox that you have created. If no inbox is supplied a random inbox will be created for you and used to send the email.
    /// </remarks>
    /// <param name="sendEmailOptions"></param>
    /// <param name="inboxId">ID of the inbox you want to send the email from (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="useDomainPool">Use domain pool. Optionally create inbox to send from using the mailslurp domain pool. (optional, default to false)</param>
    /// <param name="virtualSend">Optionally create inbox to send from that is a virtual inbox and won&#39;t send to external addresses (optional, default to false)</param>
    pplx::task<void> sendEmailSourceOptional(
        std::shared_ptr<SendEmailOptions> sendEmailOptions,
        boost::optional<utility::string_t> inboxId,
        boost::optional<bool> useDomainPool,
        boost::optional<bool> virtualSend
    ) const;
    /// <summary>
    /// Set email favourited state
    /// </summary>
    /// <remarks>
    /// Set and return new favorite state for an email
    /// </remarks>
    /// <param name="emailId">ID of email to set favourite state</param>
    /// <param name="favourited"></param>
    pplx::task<void> setEmailFavourited(
        utility::string_t emailId,
        bool favourited
    ) const;
    /// <summary>
    /// Validate email HTML contents
    /// </summary>
    /// <remarks>
    /// Validate the HTML content of email if HTML is found. Considered valid if no HTML is present.
    /// </remarks>
    /// <param name="emailId">ID of email</param>
    pplx::task<std::shared_ptr<ValidationDto>> validateEmail(
        utility::string_t emailId
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_API_EmailControllerApi_H_ */

