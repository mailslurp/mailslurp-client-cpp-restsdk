/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://docs.mailslurp.com/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * BounceRecipientProjection.h
 *
 * Bounced recipient
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_BounceRecipientProjection_H_
#define COM_MAILSLURP_CLIENT_MODEL_BounceRecipientProjection_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// Bounced recipient
/// </summary>
class  BounceRecipientProjection
    : public ModelBase
{
public:
    BounceRecipientProjection();
    virtual ~BounceRecipientProjection();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BounceRecipientProjection members

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
    utility::string_t getAction() const;
    bool actionIsSet() const;
    void unsetAction();

    void setAction(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();

    void setStatus(const utility::string_t& value);

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
    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetCreatedAt();

    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getRecipient() const;
    bool recipientIsSet() const;
    void unsetRecipient();

    void setRecipient(const utility::string_t& value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Action;
    bool m_ActionIsSet;
    utility::string_t m_Status;
    bool m_StatusIsSet;
    utility::string_t m_SentEmailId;
    bool m_SentEmailIdIsSet;
    utility::datetime m_CreatedAt;
    bool m_CreatedAtIsSet;
    utility::string_t m_Recipient;
    bool m_RecipientIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_BounceRecipientProjection_H_ */