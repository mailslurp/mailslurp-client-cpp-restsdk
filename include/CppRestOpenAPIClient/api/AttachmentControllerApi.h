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
 * AttachmentControllerApi.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_API_AttachmentControllerApi_H_
#define COM_MAILSLURP_CLIENT_API_AttachmentControllerApi_H_



#include "CppRestOpenAPIClient/ApiClient.h"

#include "CppRestOpenAPIClient/model/AttachmentEntityDto.h"
#include "CppRestOpenAPIClient/model/AttachmentMetaData.h"
#include "CppRestOpenAPIClient/model/DownloadAttachmentDto.h"
#include "CppRestOpenAPIClient/model/PageAttachmentEntity.h"
#include "CppRestOpenAPIClient/model/UploadAttachmentOptions.h"
#include "CppRestOpenAPIClient/model/UploadMultipartForm_request.h"
#include <cpprest/details/basic_types.h>
#include <boost/optional.hpp>

namespace com {
namespace mailslurp {
namespace client {
namespace api {

using namespace com::mailslurp::client::model;



class  AttachmentControllerApi 
{
public:

    explicit AttachmentControllerApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~AttachmentControllerApi();

    /// <summary>
    /// Delete all attachments
    /// </summary>
    /// <remarks>
    /// Delete all attachments
    /// </remarks>
    pplx::task<void> deleteAllAttachments(
    ) const;
    /// <summary>
    /// Delete an attachment
    /// </summary>
    /// <remarks>
    /// Delete an attachment
    /// </remarks>
    /// <param name="attachmentId">ID of attachment</param>
    pplx::task<void> deleteAttachment(
        utility::string_t attachmentId
    ) const;
    /// <summary>
    /// Get email attachment as base64 encoded string as alternative to binary responses. To read the content decode the Base64 encoded contents.
    /// </summary>
    /// <remarks>
    /// Returns the specified attachment for a given email as a base 64 encoded string. The response type is application/json. This method is similar to the &#x60;downloadAttachment&#x60; method but allows some clients to get around issues with binary responses.
    /// </remarks>
    /// <param name="attachmentId">ID of attachment</param>
    pplx::task<std::shared_ptr<DownloadAttachmentDto>> downloadAttachmentAsBase64Encoded(
        utility::string_t attachmentId
    ) const;
    /// <summary>
    /// Download attachments. Get email attachment bytes. If you have trouble with byte responses try the &#x60;downloadAttachmentBase64&#x60; response endpoints.
    /// </summary>
    /// <remarks>
    /// Returns the specified attachment for a given email as a stream / array of bytes. You can find attachment ids in email responses endpoint responses. The response type is application/octet-stream.
    /// </remarks>
    /// <param name="attachmentId">ID of attachment</param>
    pplx::task<utility::string_t> downloadAttachmentAsBytes(
        utility::string_t attachmentId
    ) const;
    /// <summary>
    /// Get an attachment entity
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="attachmentId">ID of attachment</param>
    pplx::task<std::shared_ptr<AttachmentEntityDto>> getAttachment(
        utility::string_t attachmentId
    ) const;
    /// <summary>
    /// Get email attachment metadata information
    /// </summary>
    /// <remarks>
    /// Returns the metadata for an attachment. It is saved separately to the content of the attachment. Contains properties &#x60;name&#x60; and &#x60;content-type&#x60; and &#x60;content-length&#x60; in bytes for a given attachment.
    /// </remarks>
    /// <param name="attachmentId">ID of attachment</param>
    pplx::task<std::shared_ptr<AttachmentMetaData>> getAttachmentInfo(
        utility::string_t attachmentId
    ) const;
    /// <summary>
    /// Get email attachments
    /// </summary>
    /// <remarks>
    /// Get all attachments in paginated response. Each entity contains meta data for the attachment such as &#x60;name&#x60; and &#x60;content-type&#x60;. Use the &#x60;attachmentId&#x60; and the download endpoints to get the file contents.
    /// </remarks>
    /// <param name="page">Optional page index for list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size for list pagination (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="fileNameFilter">Optional file name and content type search filter (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="since">Filter by created at after the given timestamp (optional, default to utility::datetime())</param>
    /// <param name="before">Filter by created at before the given timestamp (optional, default to utility::datetime())</param>
    /// <param name="inboxId">Optional inboxId to filter attachments by (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="emailId">Optional emailId to filter attachments by (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="sentEmailId">Optional sentEmailId to filter attachments by (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<PageAttachmentEntity>> getAttachments(
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort,
        boost::optional<utility::string_t> fileNameFilter,
        boost::optional<utility::datetime> since,
        boost::optional<utility::datetime> before,
        boost::optional<utility::string_t> inboxId,
        boost::optional<utility::string_t> emailId,
        boost::optional<utility::string_t> sentEmailId
    ) const;
    /// <summary>
    /// Upload an attachment for sending using base64 file encoding. Returns an array whose first element is the ID of the uploaded attachment.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="uploadAttachmentOptions"></param>
    pplx::task<std::vector<utility::string_t>> uploadAttachment(
        std::shared_ptr<UploadAttachmentOptions> uploadAttachmentOptions
    ) const;
    /// <summary>
    /// Upload an attachment for sending using file byte stream input octet stream. Returns an array whose first element is the ID of the uploaded attachment.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="contentType"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="contentType2">Optional contentType for file. For instance &#x60;application/pdf&#x60; (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="contentId">Optional content ID (CID) to save upload with (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="filename">Optional filename to save upload with (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="fileSize">Optional byte length to save upload with (optional, default to 0L)</param>
    /// <param name="filename2"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::vector<utility::string_t>> uploadAttachmentBytes(
        boost::optional<utility::string_t> contentType,
        boost::optional<utility::string_t> contentType2,
        boost::optional<utility::string_t> contentId,
        boost::optional<utility::string_t> filename,
        boost::optional<int64_t> fileSize,
        boost::optional<utility::string_t> filename2
    ) const;
    /// <summary>
    /// Upload an attachment for sending using a Multipart Form request. Returns an array whose first element is the ID of the uploaded attachment.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="contentId">Optional content ID of attachment (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="contentType">Optional content type of attachment (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="filename">Optional name of file (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="contentTypeHeader">Optional content type header of attachment (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="xFilename">Optional filename header of attachment (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="xFilenameRaw">Optional raw filename header of attachment that will be converted to punycode (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="xFilesize">Optional content size of attachment (optional, default to 0L)</param>
    /// <param name="uploadMultipartFormRequest"> (optional)</param>
    pplx::task<std::vector<utility::string_t>> uploadMultipartForm(
        boost::optional<utility::string_t> contentId,
        boost::optional<utility::string_t> contentType,
        boost::optional<utility::string_t> filename,
        boost::optional<utility::string_t> contentTypeHeader,
        boost::optional<utility::string_t> xFilename,
        boost::optional<utility::string_t> xFilenameRaw,
        boost::optional<int64_t> xFilesize,
        boost::optional<std::shared_ptr<UploadMultipartForm_request>> uploadMultipartFormRequest
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_API_AttachmentControllerApi_H_ */

