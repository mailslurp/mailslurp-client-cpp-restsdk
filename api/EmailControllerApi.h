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
 * EmailControllerApi.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_API_EmailControllerApi_H_
#define COM_MAILSLURP_CLIENT_API_EmailControllerApi_H_


#include "../ApiClient.h"

#include "AttachmentMetaData.h"
#include "ContentMatchOptions.h"
#include "DownloadAttachmentDto.h"
#include "Email.h"
#include "EmailContentMatchResult.h"
#include "ForwardEmailOptions.h"
#include "PageEmailProjection.h"
#include "RawEmailJson.h"
#include "ReplyToEmailOptions.h"
#include "SentEmailDto.h"
#include "UnreadCount.h"
#include "ValidationDto.h"
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
    /// Delete all emails
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
        std::shared_ptr<utility::string_t> emailId
    ) const;
    /// <summary>
    /// Get email attachment bytes. If you have trouble with byte responses try the &#x60;downloadAttachmentBase64&#x60; response endpoints.
    /// </summary>
    /// <remarks>
    /// Returns the specified attachment for a given email as a stream / array of bytes. You can find attachment ids in email responses endpoint responses. The response type is application/octet-stream.
    /// </remarks>
    /// <param name="attachmentId">ID of attachment</param>
    /// <param name="emailId">ID of email</param>
    /// <param name="apiKey">Can pass apiKey in url for this request if you wish to download the file in a browser. Content type will be set to original content type of the attachment file. This is so that browsers can download the file correctly. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<utility::string_t> downloadAttachment(
        utility::string_t attachmentId,
        std::shared_ptr<utility::string_t> emailId,
        boost::optional<utility::string_t> apiKey
    ) const;
    /// <summary>
    /// Get email attachment as base64 encoded string (alternative to binary responses)
    /// </summary>
    /// <remarks>
    /// Returns the specified attachment for a given email as a base 64 encoded string. The response type is application/json. This method is similar to the &#x60;downloadAttachment&#x60; method but allows some clients to get around issues with binary responses.
    /// </remarks>
    /// <param name="attachmentId">ID of attachment</param>
    /// <param name="emailId">ID of email</param>
    pplx::task<std::shared_ptr<DownloadAttachmentDto>> downloadAttachmentBase64(
        utility::string_t attachmentId,
        std::shared_ptr<utility::string_t> emailId
    ) const;
    /// <summary>
    /// Forward email
    /// </summary>
    /// <remarks>
    /// Forward an existing email to new recipients.
    /// </remarks>
    /// <param name="emailId">ID of email</param>
    /// <param name="forwardEmailOptions">forwardEmailOptions</param>
    pplx::task<void> forwardEmail(
        std::shared_ptr<utility::string_t> emailId,
        std::shared_ptr<ForwardEmailOptions> forwardEmailOptions
    ) const;
    /// <summary>
    /// Get email attachment metadata
    /// </summary>
    /// <remarks>
    /// Returns the metadata such as name and content-type for a given attachment and email.
    /// </remarks>
    /// <param name="attachmentId">ID of attachment</param>
    /// <param name="emailId">ID of email</param>
    pplx::task<std::shared_ptr<AttachmentMetaData>> getAttachmentMetaData(
        utility::string_t attachmentId,
        std::shared_ptr<utility::string_t> emailId
    ) const;
    /// <summary>
    /// Get all email attachment metadata
    /// </summary>
    /// <remarks>
    /// Returns an array of attachment metadata such as name and content-type for a given email if present.
    /// </remarks>
    /// <param name="emailId">ID of email</param>
    pplx::task<std::vector<std::shared_ptr<AttachmentMetaData>>> getAttachments(
        std::shared_ptr<utility::string_t> emailId
    ) const;
    /// <summary>
    /// Get email content
    /// </summary>
    /// <remarks>
    /// Returns a email summary object with headers and content. To retrieve the raw unparsed email use the getRawEmail endpoints
    /// </remarks>
    /// <param name="emailId">emailId</param>
    /// <param name="decode">Decode email body quoted-printable encoding to plain text. SMTP servers often encode text using quoted-printable format (for instance &#x60;&#x3D;D7&#x60;). This can be a pain for testing (optional, default to false)</param>
    pplx::task<std::shared_ptr<Email>> getEmail(
        std::shared_ptr<utility::string_t> emailId,
        boost::optional<bool> decode
    ) const;
    /// <summary>
    /// Get email content regex pattern match results. Runs regex against email body and returns match groups.
    /// </summary>
    /// <remarks>
    /// Return the matches for a given Java style regex pattern. Do not include the typical &#x60;/&#x60; at start or end of regex in some languages. Given an example &#x60;your code is: 12345&#x60; the pattern to extract match looks like &#x60;code is: (\\d{6})&#x60;. This will return an array of matches with the first matching the entire pattern and the subsequent matching the groups: &#x60;[&#39;code is: 123456&#39;, &#39;123456&#39;]&#x60; See https://docs.oracle.com/javase/8/docs/api/java/util/regex/Pattern.html for more information of available patterns. 
    /// </remarks>
    /// <param name="emailId">ID of email to match against</param>
    /// <param name="contentMatchOptions">contentMatchOptions</param>
    pplx::task<std::shared_ptr<EmailContentMatchResult>> getEmailContentMatch(
        std::shared_ptr<utility::string_t> emailId,
        std::shared_ptr<ContentMatchOptions> contentMatchOptions
    ) const;
    /// <summary>
    /// Get email content as HTML
    /// </summary>
    /// <remarks>
    /// Retrieve email content as HTML response for viewing in browsers. Decodes quoted-printable entities and converts charset to UTF-8. Pass your API KEY as a request parameter when viewing in a browser: &#x60;?apiKey&#x3D;xxx&#x60;
    /// </remarks>
    /// <param name="emailId">emailId</param>
    /// <param name="decode">decode (optional, default to false)</param>
    pplx::task<utility::string_t> getEmailHTML(
        std::shared_ptr<utility::string_t> emailId,
        boost::optional<bool> decode
    ) const;
    /// <summary>
    /// Get all emails
    /// </summary>
    /// <remarks>
    /// By default returns all emails across all inboxes sorted by ascending created at date. Responses are paginated. You can restrict results to a list of inbox IDs. You can also filter out read messages
    /// </remarks>
    /// <param name="inboxId">Optional inbox ids to filter by. Can be repeated. By default will use all inboxes belonging to your account. (optional, default to std::vector&lt;std::shared_ptr&lt;utility::string_t&gt;&gt;())</param>
    /// <param name="page">Optional page index in email list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size in email list pagination. Maximum size is 100. Use page index and sort to page through larger results (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="unreadOnly">Optional filter for unread emails only. All emails are considered unread until they are viewed in the dashboard or requested directly (optional, default to false)</param>
    pplx::task<std::shared_ptr<PageEmailProjection>> getEmailsPaginated(
        boost::optional<std::vector<utility::string_t>> inboxId,
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort,
        boost::optional<bool> unreadOnly
    ) const;
    /// <summary>
    /// Get raw email string
    /// </summary>
    /// <remarks>
    /// Returns a raw, unparsed, and unprocessed email. If your client has issues processing the response it is likely due to the response content-type which is text/plain. If you need a JSON response content-type use the getRawEmailJson endpoint
    /// </remarks>
    /// <param name="emailId">ID of email</param>
    pplx::task<utility::string_t> getRawEmailContents(
        std::shared_ptr<utility::string_t> emailId
    ) const;
    /// <summary>
    /// Get raw email in JSON
    /// </summary>
    /// <remarks>
    /// Returns a raw, unparsed, and unprocessed email wrapped in a JSON response object for easier handling when compared with the getRawEmail text/plain response
    /// </remarks>
    /// <param name="emailId">ID of email</param>
    pplx::task<std::shared_ptr<RawEmailJson>> getRawEmailJson(
        std::shared_ptr<utility::string_t> emailId
    ) const;
    /// <summary>
    /// Get unread email count
    /// </summary>
    /// <remarks>
    /// Get number of emails unread
    /// </remarks>
    pplx::task<std::shared_ptr<UnreadCount>> getUnreadEmailCount(
    ) const;
    /// <summary>
    /// Reply to an email
    /// </summary>
    /// <remarks>
    /// Send the reply to the email sender or reply-to and include same subject cc bcc etc. Reply to an email and the contents will be sent with the existing subject to the emails &#x60;to&#x60;, &#x60;cc&#x60;, and &#x60;bcc&#x60;.
    /// </remarks>
    /// <param name="emailId">ID of the email that should be replied to</param>
    /// <param name="replyToEmailOptions">replyToEmailOptions</param>
    pplx::task<std::shared_ptr<SentEmailDto>> replyToEmail1(
        std::shared_ptr<utility::string_t> emailId,
        std::shared_ptr<ReplyToEmailOptions> replyToEmailOptions
    ) const;
    /// <summary>
    /// Validate email
    /// </summary>
    /// <remarks>
    /// Validate the HTML content of email if HTML is found. Considered valid if no HTML.
    /// </remarks>
    /// <param name="emailId">ID of email</param>
    pplx::task<std::shared_ptr<ValidationDto>> validateEmail(
        std::shared_ptr<utility::string_t> emailId
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_API_EmailControllerApi_H_ */

