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
 * MissedEmail.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_MissedEmail_H_
#define COM_MAILSLURP_CLIENT_MODEL_MissedEmail_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  MissedEmail
    : public ModelBase
{
public:
    MissedEmail();
    virtual ~MissedEmail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// MissedEmail members

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
    std::vector<utility::string_t>& getBcc();
    bool bccIsSet() const;
    void unsetBcc();

    void setBcc(const std::vector<utility::string_t>& value);

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
    std::vector<utility::string_t>& getCc();
    bool ccIsSet() const;
    void unsetCc();

    void setCc(const std::vector<utility::string_t>& value);

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
    utility::string_t getFrom() const;
    bool fromIsSet() const;
    void unsetFrom();

    void setFrom(const utility::string_t& value);

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
    std::vector<utility::string_t>& getInboxIds();
    bool inboxIdsIsSet() const;
    void unsetInboxIds();

    void setInboxIds(const std::vector<utility::string_t>& value);

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
    std::vector<utility::string_t>& getTo();
    bool toIsSet() const;
    void unsetTo();

    void setTo(const std::vector<utility::string_t>& value);

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
    int32_t m_AttachmentCount;
    bool m_AttachmentCountIsSet;
    std::vector<utility::string_t> m_Bcc;
    bool m_BccIsSet;
    utility::string_t m_BodyExcerpt;
    bool m_BodyExcerptIsSet;
    std::vector<utility::string_t> m_Cc;
    bool m_CcIsSet;
    utility::datetime m_CreatedAt;
    bool m_CreatedAtIsSet;
    utility::string_t m_From;
    bool m_FromIsSet;
    utility::string_t m_Id;
    bool m_IdIsSet;
    std::vector<utility::string_t> m_InboxIds;
    bool m_InboxIdsIsSet;
    utility::string_t m_Subject;
    bool m_SubjectIsSet;
    std::vector<utility::string_t> m_To;
    bool m_ToIsSet;
    utility::datetime m_UpdatedAt;
    bool m_UpdatedAtIsSet;
    utility::string_t m_UserId;
    bool m_UserIdIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_MissedEmail_H_ */
