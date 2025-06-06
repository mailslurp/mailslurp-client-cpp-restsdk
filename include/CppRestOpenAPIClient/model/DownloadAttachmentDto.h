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
 * DownloadAttachmentDto.h
 *
 * Content of attachment
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_DownloadAttachmentDto_H_
#define COM_MAILSLURP_CLIENT_MODEL_DownloadAttachmentDto_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// Content of attachment
/// </summary>
class  DownloadAttachmentDto
    : public ModelBase
{
public:
    DownloadAttachmentDto();
    virtual ~DownloadAttachmentDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// DownloadAttachmentDto members

    /// <summary>
    /// Base64 encoded string of attachment bytes. Decode the base64 encoded string to get the raw contents. If the file has a content type such as &#x60;text/html&#x60; you can read the contents directly by converting it to string using &#x60;utf-8&#x60; encoding.
    /// </summary>
    utility::string_t getBase64FileContents() const;
    bool base64FileContentsIsSet() const;
    void unsetBase64FileContents();

    void setBase64FileContents(const utility::string_t& value);

    /// <summary>
    /// Content type of attachment. Examples are &#x60;image/png&#x60;, &#x60;application/msword&#x60;, &#x60;text/csv&#x60; etc.
    /// </summary>
    utility::string_t getContentType() const;
    bool contentTypeIsSet() const;
    void unsetContentType();

    void setContentType(const utility::string_t& value);

    /// <summary>
    /// Size in bytes of attachment content
    /// </summary>
    int64_t getSizeBytes() const;
    bool sizeBytesIsSet() const;
    void unsetSizeBytes();

    void setSizeBytes(int64_t value);


protected:
    utility::string_t m_Base64FileContents;
    bool m_Base64FileContentsIsSet;
    utility::string_t m_ContentType;
    bool m_ContentTypeIsSet;
    int64_t m_SizeBytes;
    bool m_SizeBytesIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_DownloadAttachmentDto_H_ */
