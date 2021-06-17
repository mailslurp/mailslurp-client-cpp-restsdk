/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://www.mailslurp.com/docs/) - [Examples](https://github.com/mailslurp/examples) repository 
 *
 * The version of the OpenAPI document: 6.5.2
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
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


#include "../ApiClient.h"

#include "AttachmentMetaData.h"
#include "DownloadAttachmentDto.h"
#include "HttpContent.h"
#include "PageAttachmentEntity.h"
#include "UploadAttachmentOptions.h"
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
    /// Delete an attachment
    /// </summary>
    /// <remarks>
    /// Email attachments are essentially files with meta data. Files are byte arrays and the meta data is a content type and a filename. These properties allow email clients to display the filename and icon etc. When sending emails with attachments first upload each attachment with an upload endpoint. Record the returned attachment ID and use it with subsequent email sending. For legacy reasons the ID is returned as the first element in an array. Only a single ID is ever returned. To send the attachments pass a list of attachment IDs with &#x60;SendEmailOptions&#x60; when sending an email. Using the upload endpoints prior to sending mean attachments can easily be reused.
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
    /// <param name="fileNameFilter">Optional file name and content type search filter (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="page">Optional page index event list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size event list pagination (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<PageAttachmentEntity>> getAttachments(
        boost::optional<utility::string_t> fileNameFilter,
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort
    ) const;
    /// <summary>
    /// Upload an attachment for sending using base64 file encoding. Returns an array whose first element is the ID of the uploaded attachment.
    /// </summary>
    /// <remarks>
    /// Email attachments are essentially files with meta data. Files are byte arrays and the meta data is a content type and a filename. These properties allow email clients to display the filename and icon etc. When sending emails with attachments first upload each attachment with an upload endpoint. Record the returned attachment ID and use it with subsequent email sending. For legacy reasons the ID is returned as the first element in an array. Only a single ID is ever returned. To send the attachments pass a list of attachment IDs with &#x60;SendEmailOptions&#x60; when sending an email. Using the upload endpoints prior to sending mean attachments can easily be reused.
    /// </remarks>
    /// <param name="uploadOptions">uploadOptions</param>
    pplx::task<std::vector<utility::string_t>> uploadAttachment(
        std::shared_ptr<UploadAttachmentOptions> uploadOptions
    ) const;
    /// <summary>
    /// Upload an attachment for sending using file byte stream input octet stream. Returns an array whose first element is the ID of the uploaded attachment.
    /// </summary>
    /// <remarks>
    /// Email attachments are essentially files with meta data. Files are byte arrays and the meta data is a content type and a filename. These properties allow email clients to display the filename and icon etc. When sending emails with attachments first upload each attachment with an upload endpoint. Record the returned attachment ID and use it with subsequent email sending. For legacy reasons the ID is returned as the first element in an array. Only a single ID is ever returned. To send the attachments pass a list of attachment IDs with &#x60;SendEmailOptions&#x60; when sending an email. Using the upload endpoints prior to sending mean attachments can easily be reused.
    /// </remarks>
    /// <param name="string">Optional contentType for file. For instance &#x60;application/pdf&#x60; (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="filename">Optional filename to save upload with (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="byteArray">Byte array request body (optional)</param>
    pplx::task<std::vector<utility::string_t>> uploadAttachmentBytes(
        boost::optional<utility::string_t> string,
        boost::optional<utility::string_t> filename,
        boost::optional<utility::string_t> byteArray
    ) const;
    /// <summary>
    /// Upload an attachment for sending using a Multipart Form request. Returns an array whose first element is the ID of the uploaded attachment.
    /// </summary>
    /// <remarks>
    /// Email attachments are essentially files with meta data. Files are byte arrays and the meta data is a content type and a filename. These properties allow email clients to display the filename and icon etc. When sending emails with attachments first upload each attachment with an upload endpoint. Record the returned attachment ID and use it with subsequent email sending. For legacy reasons the ID is returned as the first element in an array. Only a single ID is ever returned. To send the attachments pass a list of attachment IDs with &#x60;SendEmailOptions&#x60; when sending an email. Using the upload endpoints prior to sending mean attachments can easily be reused.
    /// </remarks>
    /// <param name="file">file</param>
    /// <param name="contentType">Optional content type of attachment (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="filename">Optional name of file (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="xFilename">Optional content type header of attachment (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::vector<utility::string_t>> uploadMultipartForm(
        std::shared_ptr<HttpContent> file,
        boost::optional<utility::string_t> contentType,
        boost::optional<utility::string_t> filename,
        boost::optional<utility::string_t> xFilename
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_API_AttachmentControllerApi_H_ */

