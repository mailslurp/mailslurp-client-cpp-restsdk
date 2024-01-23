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
 * TrackingPixelProjection.h
 *
 * Tracking pixel data
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_TrackingPixelProjection_H_
#define COM_MAILSLURP_CLIENT_MODEL_TrackingPixelProjection_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// Tracking pixel data
/// </summary>
class  TrackingPixelProjection
    : public ModelBase
{
public:
    TrackingPixelProjection();
    virtual ~TrackingPixelProjection();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// TrackingPixelProjection members

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
    utility::string_t getUserId() const;
    bool userIdIsSet() const;
    void unsetUserId();

    void setUserId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSentEmailId() const;
    bool sentEmailIdIsSet() const;
    void unsetSentEmailId();

    void setSentEmailId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getRecipient() const;
    bool recipientIsSet() const;
    void unsetRecipient();

    void setRecipient(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    bool isSeen() const;
    bool seenIsSet() const;
    void unsetSeen();

    void setSeen(bool value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getSeenAt() const;
    bool seenAtIsSet() const;
    void unsetSeenAt();

    void setSeenAt(const utility::datetime& value);

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
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);


protected:
    utility::string_t m_InboxId;
    bool m_InboxIdIsSet;
    utility::string_t m_UserId;
    bool m_UserIdIsSet;
    utility::string_t m_SentEmailId;
    bool m_SentEmailIdIsSet;
    utility::string_t m_Recipient;
    bool m_RecipientIsSet;
    bool m_Seen;
    bool m_SeenIsSet;
    utility::datetime m_SeenAt;
    bool m_SeenAtIsSet;
    utility::datetime m_CreatedAt;
    bool m_CreatedAtIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_Id;
    bool m_IdIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_TrackingPixelProjection_H_ */
