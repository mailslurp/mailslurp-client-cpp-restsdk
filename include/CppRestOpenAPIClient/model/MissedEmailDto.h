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
 * MissedEmailDto.h
 *
 * Missed email
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_MissedEmailDto_H_
#define COM_MAILSLURP_CLIENT_MODEL_MissedEmailDto_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// Missed email
/// </summary>
class  MissedEmailDto
    : public ModelBase
{
public:
    MissedEmailDto();
    virtual ~MissedEmailDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// MissedEmailDto members

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
    utility::string_t getUserId() const;
    bool userIdIsSet() const;
    void unsetUserId();

    void setUserId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSubject() const;
    bool subjectIsSet() const;
    void unsetSubject();

    void setSubject(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getBodyExcerpt() const;
    bool bodyExcerptIsSet() const;
    void unsetBodyExcerpt();

    void setBodyExcerpt(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getAttachmentCount() const;
    bool attachmentCountIsSet() const;
    void unsetAttachmentCount();

    void setAttachmentCount(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getFrom() const;
    bool fromIsSet() const;
    void unsetFrom();

    void setFrom(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getRawUrl() const;
    bool rawUrlIsSet() const;
    void unsetRawUrl();

    void setRawUrl(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getRawKey() const;
    bool rawKeyIsSet() const;
    void unsetRawKey();

    void setRawKey(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getRawBucket() const;
    bool rawBucketIsSet() const;
    void unsetRawBucket();

    void setRawBucket(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    bool isCanRestore() const;
    bool canRestoreIsSet() const;
    void unsetCanRestore();

    void setCanRestore(bool value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getTo();
    bool toIsSet() const;
    void unsetTo();

    void setTo(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getCc();
    bool ccIsSet() const;
    void unsetCc();

    void setCc(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getBcc();
    bool bccIsSet() const;
    void unsetBcc();

    void setBcc(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getInboxIds();
    bool inboxIdsIsSet() const;
    void unsetInboxIds();

    void setInboxIds(const std::vector<utility::string_t>& value);

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
    utility::string_t m_UserId;
    bool m_UserIdIsSet;
    utility::string_t m_Subject;
    bool m_SubjectIsSet;
    utility::string_t m_BodyExcerpt;
    bool m_BodyExcerptIsSet;
    int32_t m_AttachmentCount;
    bool m_AttachmentCountIsSet;
    utility::string_t m_From;
    bool m_FromIsSet;
    utility::string_t m_RawUrl;
    bool m_RawUrlIsSet;
    utility::string_t m_RawKey;
    bool m_RawKeyIsSet;
    utility::string_t m_RawBucket;
    bool m_RawBucketIsSet;
    bool m_CanRestore;
    bool m_CanRestoreIsSet;
    std::vector<utility::string_t> m_To;
    bool m_ToIsSet;
    std::vector<utility::string_t> m_Cc;
    bool m_CcIsSet;
    std::vector<utility::string_t> m_Bcc;
    bool m_BccIsSet;
    std::vector<utility::string_t> m_InboxIds;
    bool m_InboxIdsIsSet;
    utility::datetime m_CreatedAt;
    bool m_CreatedAtIsSet;
    utility::datetime m_UpdatedAt;
    bool m_UpdatedAtIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_MissedEmailDto_H_ */
