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
 * SentEmailsControllerApi.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_API_SentEmailsControllerApi_H_
#define COM_MAILSLURP_CLIENT_API_SentEmailsControllerApi_H_



#include "CppRestOpenAPIClient/ApiClient.h"

#include "CppRestOpenAPIClient/model/DeliveryStatusDto.h"
#include "CppRestOpenAPIClient/model/EmailPreviewUrls.h"
#include "CppRestOpenAPIClient/model/PageDeliveryStatus.h"
#include "CppRestOpenAPIClient/model/PageSentEmailProjection.h"
#include "CppRestOpenAPIClient/model/PageSentEmailWithQueueProjection.h"
#include "CppRestOpenAPIClient/model/PageTrackingPixelProjection.h"
#include "CppRestOpenAPIClient/model/RawEmailJson.h"
#include "CppRestOpenAPIClient/model/SentEmailDto.h"
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
    /// Delete all sent email receipts
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> deleteAllSentEmails(
    ) const;
    /// <summary>
    /// Delete sent email receipt
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id"></param>
    pplx::task<void> deleteSentEmail(
        utility::string_t id
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get all sent email tracking pixels in paginated form
    /// </remarks>
    /// <param name="page">Optional page index in sent email tracking pixel list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size in sent email tracking pixel list pagination (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="searchFilter">Optional search filter (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="since">Filter by created at after the given timestamp (optional, default to utility::datetime())</param>
    /// <param name="before">Filter by created at before the given timestamp (optional, default to utility::datetime())</param>
    pplx::task<std::shared_ptr<PageTrackingPixelProjection>> getAllSentTrackingPixels(
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort,
        boost::optional<utility::string_t> searchFilter,
        boost::optional<utility::datetime> since,
        boost::optional<utility::datetime> before
    ) const;
    /// <summary>
    /// Get raw sent email string. Returns unparsed raw SMTP message with headers and body.
    /// </summary>
    /// <remarks>
    /// Returns a raw, unparsed, and unprocessed sent email. If your client has issues processing the response it is likely due to the response content-type which is text/plain. If you need a JSON response content-type use the getRawSentEmailJson endpoint
    /// </remarks>
    /// <param name="emailId">ID of email</param>
    pplx::task<utility::string_t> getRawSentEmailContents(
        utility::string_t emailId
    ) const;
    /// <summary>
    /// Get raw sent email in JSON. Unparsed SMTP message in JSON wrapper format.
    /// </summary>
    /// <remarks>
    /// Returns a raw, unparsed, and unprocessed sent email wrapped in a JSON response object for easier handling when compared with the getRawSentEmail text/plain response
    /// </remarks>
    /// <param name="emailId">ID of email</param>
    pplx::task<std::shared_ptr<RawEmailJson>> getRawSentEmailJson(
        utility::string_t emailId
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get a sent email delivery status
    /// </remarks>
    /// <param name="deliveryId"></param>
    pplx::task<std::shared_ptr<DeliveryStatusDto>> getSentDeliveryStatus(
        utility::string_t deliveryId
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get all sent email delivery statuses
    /// </remarks>
    /// <param name="page">Optional page index in delivery status list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size in delivery status list pagination (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="since">Filter by created at after the given timestamp (optional, default to utility::datetime())</param>
    /// <param name="before">Filter by created at before the given timestamp (optional, default to utility::datetime())</param>
    pplx::task<std::shared_ptr<PageDeliveryStatus>> getSentDeliveryStatuses(
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort,
        boost::optional<utility::datetime> since,
        boost::optional<utility::datetime> before
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get all sent email delivery statuses
    /// </remarks>
    /// <param name="sentId">ID of the sent email that you want to get the delivery status of. Sent email object is returned when sending an email</param>
    /// <param name="page">Optional page index in delivery status list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size in delivery status list pagination (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="since">Filter by created at after the given timestamp (optional, default to utility::datetime())</param>
    /// <param name="before">Filter by created at before the given timestamp (optional, default to utility::datetime())</param>
    pplx::task<std::shared_ptr<PageDeliveryStatus>> getSentDeliveryStatusesBySentId(
        utility::string_t sentId,
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort,
        boost::optional<utility::datetime> since,
        boost::optional<utility::datetime> before
    ) const;
    /// <summary>
    /// Get sent email receipt
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id"></param>
    pplx::task<std::shared_ptr<SentEmailDto>> getSentEmail(
        utility::string_t id
    ) const;
    /// <summary>
    /// Get sent email HTML content
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id"></param>
    pplx::task<utility::string_t> getSentEmailHTMLContent(
        utility::string_t id
    ) const;
    /// <summary>
    /// Get sent email URL for viewing in browser or downloading
    /// </summary>
    /// <remarks>
    /// Get a list of URLs for sent email content as text/html or raw SMTP message for viewing the message in a browser.
    /// </remarks>
    /// <param name="id"></param>
    pplx::task<std::shared_ptr<EmailPreviewUrls>> getSentEmailPreviewURLs(
        utility::string_t id
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get all tracking pixels for a sent email in paginated form
    /// </remarks>
    /// <param name="id"></param>
    /// <param name="page">Optional page index in sent email tracking pixel list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size in sent email tracking pixel list pagination (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="searchFilter">Optional search filter (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="since">Filter by created at after the given timestamp (optional, default to utility::datetime())</param>
    /// <param name="before">Filter by created at before the given timestamp (optional, default to utility::datetime())</param>
    pplx::task<std::shared_ptr<PageTrackingPixelProjection>> getSentEmailTrackingPixels(
        utility::string_t id,
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort,
        boost::optional<utility::string_t> searchFilter,
        boost::optional<utility::datetime> since,
        boost::optional<utility::datetime> before
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
    /// <param name="searchFilter">Optional search filter (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="since">Filter by created at after the given timestamp (optional, default to utility::datetime())</param>
    /// <param name="before">Filter by created at before the given timestamp (optional, default to utility::datetime())</param>
    pplx::task<std::shared_ptr<PageSentEmailProjection>> getSentEmails(
        boost::optional<utility::string_t> inboxId,
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort,
        boost::optional<utility::string_t> searchFilter,
        boost::optional<utility::datetime> since,
        boost::optional<utility::datetime> before
    ) const;
    /// <summary>
    /// Get results of email sent with queues in paginated form
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="page">Optional page index in inbox sent email list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size in inbox sent email list pagination (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="since">Filter by created at after the given timestamp (optional, default to utility::datetime())</param>
    /// <param name="before">Filter by created at before the given timestamp (optional, default to utility::datetime())</param>
    pplx::task<std::shared_ptr<PageSentEmailWithQueueProjection>> getSentEmailsWithQueueResults(
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort,
        boost::optional<utility::datetime> since,
        boost::optional<utility::datetime> before
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get all sent organization emails in paginated form
    /// </remarks>
    /// <param name="inboxId">Optional inboxId to filter sender of sent emails by (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="page">Optional page index in sent email list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size in sent email list pagination (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="searchFilter">Optional search filter (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="since">Filter by created at after the given timestamp (optional, default to utility::datetime())</param>
    /// <param name="before">Filter by created at before the given timestamp (optional, default to utility::datetime())</param>
    pplx::task<std::shared_ptr<PageSentEmailProjection>> getSentOrganizationEmails(
        boost::optional<utility::string_t> inboxId,
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort,
        boost::optional<utility::string_t> searchFilter,
        boost::optional<utility::datetime> since,
        boost::optional<utility::datetime> before
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Wait for delivery statuses
    /// </remarks>
    /// <param name="sentId">Optional sent email ID filter (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="inboxId">Optional inbox ID filter (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="timeout">Optional timeout milliseconds (optional, default to 0L)</param>
    /// <param name="index">Zero based index of the delivery status to wait for. If 1 delivery status already and you want to wait for the 2nd pass index&#x3D;1 (optional, default to 0)</param>
    /// <param name="since">Filter by created at after the given timestamp (optional, default to utility::datetime())</param>
    /// <param name="before">Filter by created at before the given timestamp (optional, default to utility::datetime())</param>
    pplx::task<std::shared_ptr<DeliveryStatusDto>> waitForDeliveryStatuses(
        boost::optional<utility::string_t> sentId,
        boost::optional<utility::string_t> inboxId,
        boost::optional<int64_t> timeout,
        boost::optional<int32_t> index,
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

#endif /* COM_MAILSLURP_CLIENT_API_SentEmailsControllerApi_H_ */

