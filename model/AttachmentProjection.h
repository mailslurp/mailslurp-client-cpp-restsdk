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
 * AttachmentProjection.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_AttachmentProjection_H_
#define COM_MAILSLURP_CLIENT_MODEL_AttachmentProjection_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  AttachmentProjection
    : public ModelBase
{
public:
    AttachmentProjection();
    virtual ~AttachmentProjection();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// AttachmentProjection members

    /// <summary>
    /// Attachment ID
    /// </summary>
    utility::string_t getAttachmentId() const;
    bool attachmentIdIsSet() const;
    void unsetAttachmentId();

    void setAttachmentId(const utility::string_t& value);

    /// <summary>
    /// Content length of attachment in bytes
    /// </summary>
    int64_t getContentLength() const;
    bool contentLengthIsSet() const;
    void unsetContentLength();

    void setContentLength(int64_t value);

    /// <summary>
    /// Content type of attachment.
    /// </summary>
    utility::string_t getContentType() const;
    bool contentTypeIsSet() const;
    void unsetContentType();

    void setContentType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetCreatedAt();

    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetUpdatedAt();

    void setUpdatedAt(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getUserId() const;
    bool userIdIsSet() const;
    void unsetUserId();

    void setUserId(const utility::string_t& value);


protected:
    utility::string_t m_AttachmentId;
    bool m_AttachmentIdIsSet;
    int64_t m_ContentLength;
    bool m_ContentLengthIsSet;
    utility::string_t m_ContentType;
    bool m_ContentTypeIsSet;
    utility::datetime m_CreatedAt;
    bool m_CreatedAtIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::datetime m_UpdatedAt;
    bool m_UpdatedAtIsSet;
    utility::string_t m_UserId;
    bool m_UserIdIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_AttachmentProjection_H_ */
