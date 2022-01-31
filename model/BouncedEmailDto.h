/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://www.mailslurp.com/docs/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * BouncedEmailDto.h
 *
 * Bounced email
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_BouncedEmailDto_H_
#define COM_MAILSLURP_CLIENT_MODEL_BouncedEmailDto_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// Bounced email
/// </summary>
class  BouncedEmailDto
    : public ModelBase
{
public:
    BouncedEmailDto();
    virtual ~BouncedEmailDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BouncedEmailDto members

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
    utility::string_t getNotificationType() const;
    bool notificationTypeIsSet() const;
    void unsetNotificationType();

    void setNotificationType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getSentToRecipients();
    bool sentToRecipientsIsSet() const;
    void unsetSentToRecipients();

    void setSentToRecipients(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSender() const;
    bool senderIsSet() const;
    void unsetSender();

    void setSender(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getBounceMta() const;
    bool bounceMtaIsSet() const;
    void unsetBounceMta();

    void setBounceMta(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getBounceType() const;
    bool bounceTypeIsSet() const;
    void unsetBounceType();

    void setBounceType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getBounceRecipients();
    bool bounceRecipientsIsSet() const;
    void unsetBounceRecipients();

    void setBounceRecipients(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getBounceSubType() const;
    bool bounceSubTypeIsSet() const;
    void unsetBounceSubType();

    void setBounceSubType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetCreatedAt();

    void setCreatedAt(const utility::datetime& value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_UserId;
    bool m_UserIdIsSet;
    utility::string_t m_NotificationType;
    bool m_NotificationTypeIsSet;
    std::vector<utility::string_t> m_SentToRecipients;
    bool m_SentToRecipientsIsSet;
    utility::string_t m_Sender;
    bool m_SenderIsSet;
    utility::string_t m_BounceMta;
    bool m_BounceMtaIsSet;
    utility::string_t m_BounceType;
    bool m_BounceTypeIsSet;
    std::vector<utility::string_t> m_BounceRecipients;
    bool m_BounceRecipientsIsSet;
    utility::string_t m_BounceSubType;
    bool m_BounceSubTypeIsSet;
    utility::datetime m_CreatedAt;
    bool m_CreatedAtIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_BouncedEmailDto_H_ */
