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
 * UploadAttachmentOptions.h
 *
 * Options for uploading files for attachments. When sending emails with the API that require attachments first upload each attachment. Then use the returned attachment ID in your &#x60;SendEmailOptions&#x60; when sending an email. This way you can use attachments multiple times once they have been uploaded.
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_UploadAttachmentOptions_H_
#define COM_MAILSLURP_CLIENT_MODEL_UploadAttachmentOptions_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// Options for uploading files for attachments. When sending emails with the API that require attachments first upload each attachment. Then use the returned attachment ID in your &#x60;SendEmailOptions&#x60; when sending an email. This way you can use attachments multiple times once they have been uploaded.
/// </summary>
class  UploadAttachmentOptions
    : public ModelBase
{
public:
    UploadAttachmentOptions();
    virtual ~UploadAttachmentOptions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// UploadAttachmentOptions members

    /// <summary>
    /// Base64 encoded string of file contents. Typically this means reading the bytes or string content of a file and then converting that to a base64 encoded string.
    /// </summary>
    utility::string_t getBase64Contents() const;
    bool base64ContentsIsSet() const;
    void unsetBase64Contents();

    void setBase64Contents(const utility::string_t& value);

    /// <summary>
    /// Optional contentType for file. For instance &#x60;application/pdf&#x60;
    /// </summary>
    utility::string_t getContentType() const;
    bool contentTypeIsSet() const;
    void unsetContentType();

    void setContentType(const utility::string_t& value);

    /// <summary>
    /// Optional filename to save upload with
    /// </summary>
    utility::string_t getFilename() const;
    bool filenameIsSet() const;
    void unsetFilename();

    void setFilename(const utility::string_t& value);


protected:
    utility::string_t m_Base64Contents;
    bool m_Base64ContentsIsSet;
    utility::string_t m_ContentType;
    bool m_ContentTypeIsSet;
    utility::string_t m_Filename;
    bool m_FilenameIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_UploadAttachmentOptions_H_ */
