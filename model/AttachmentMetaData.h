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
 * AttachmentMetaData.h
 *
 * Meta data associated with an attachment. Attachments are stored as byte blobs so the meta data is stored separately.
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_AttachmentMetaData_H_
#define COM_MAILSLURP_CLIENT_MODEL_AttachmentMetaData_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// Meta data associated with an attachment. Attachments are stored as byte blobs so the meta data is stored separately.
/// </summary>
class  AttachmentMetaData
    : public ModelBase
{
public:
    AttachmentMetaData();
    virtual ~AttachmentMetaData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// AttachmentMetaData members

    /// <summary>
    /// Name of attachment if given
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// Content type of attachment such as &#x60;image/png&#x60;
    /// </summary>
    utility::string_t getContentType() const;
    bool contentTypeIsSet() const;
    void unsetContentType();

    void setContentType(const utility::string_t& value);

    /// <summary>
    /// Size of attachment in bytes
    /// </summary>
    int64_t getContentLength() const;
    bool contentLengthIsSet() const;
    void unsetContentLength();

    void setContentLength(int64_t value);

    /// <summary>
    /// ID of attachment
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);


protected:
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_ContentType;
    bool m_ContentTypeIsSet;
    int64_t m_ContentLength;
    bool m_ContentLengthIsSet;
    utility::string_t m_Id;
    bool m_IdIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_AttachmentMetaData_H_ */
