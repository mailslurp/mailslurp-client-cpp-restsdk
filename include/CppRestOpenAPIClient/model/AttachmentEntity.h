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
 * AttachmentEntity.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_AttachmentEntity_H_
#define COM_MAILSLURP_CLIENT_MODEL_AttachmentEntity_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  AttachmentEntity
    : public ModelBase
{
public:
    AttachmentEntity();
    virtual ~AttachmentEntity();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// AttachmentEntity members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getAttachmentId() const;
    bool attachmentIdIsSet() const;
    void unsetAttachmentId();

    void setAttachmentId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getBucket() const;
    bool bucketIsSet() const;
    void unsetBucket();

    void setBucket(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getUserId() const;
    bool userIdIsSet() const;
    void unsetUserId();

    void setUserId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getContentType() const;
    bool contentTypeIsSet() const;
    void unsetContentType();

    void setContentType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getContentLength() const;
    bool contentLengthIsSet() const;
    void unsetContentLength();

    void setContentLength(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getContentId() const;
    bool contentIdIsSet() const;
    void unsetContentId();

    void setContentId(const utility::string_t& value);

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
    utility::string_t getInboxId() const;
    bool inboxIdIsSet() const;
    void unsetInboxId();

    void setInboxId(const utility::string_t& value);

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
    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetUpdatedAt();

    void setUpdatedAt(const utility::datetime& value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_AttachmentId;
    bool m_AttachmentIdIsSet;
    utility::string_t m_Bucket;
    bool m_BucketIsSet;
    utility::string_t m_UserId;
    bool m_UserIdIsSet;
    utility::string_t m_ContentType;
    bool m_ContentTypeIsSet;
    int64_t m_ContentLength;
    bool m_ContentLengthIsSet;
    utility::string_t m_ContentId;
    bool m_ContentIdIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_InboxId;
    bool m_InboxIdIsSet;
    utility::datetime m_CreatedAt;
    bool m_CreatedAtIsSet;
    utility::datetime m_UpdatedAt;
    bool m_UpdatedAtIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_AttachmentEntity_H_ */
