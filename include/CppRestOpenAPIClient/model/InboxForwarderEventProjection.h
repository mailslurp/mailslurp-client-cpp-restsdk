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
 * InboxForwarderEventProjection.h
 *
 * Inbox forwarder event
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_InboxForwarderEventProjection_H_
#define COM_MAILSLURP_CLIENT_MODEL_InboxForwarderEventProjection_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// Inbox forwarder event
/// </summary>
class  InboxForwarderEventProjection
    : public ModelBase
{
public:
    InboxForwarderEventProjection();
    virtual ~InboxForwarderEventProjection();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// InboxForwarderEventProjection members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getEmailId() const;
    bool emailIdIsSet() const;
    void unsetEmailId();

    void setEmailId(const utility::string_t& value);

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
    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetCreatedAt();

    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSentId() const;
    bool sentIdIsSet() const;
    void unsetSentId();

    void setSentId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getForwarderId() const;
    bool forwarderIdIsSet() const;
    void unsetForwarderId();

    void setForwarderId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getMessage() const;
    bool messageIsSet() const;
    void unsetMessage();

    void setMessage(const utility::string_t& value);

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
    utility::string_t getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();

    void setStatus(const utility::string_t& value);


protected:
    utility::string_t m_EmailId;
    bool m_EmailIdIsSet;
    utility::string_t m_InboxId;
    bool m_InboxIdIsSet;
    utility::string_t m_UserId;
    bool m_UserIdIsSet;
    utility::datetime m_CreatedAt;
    bool m_CreatedAtIsSet;
    utility::string_t m_SentId;
    bool m_SentIdIsSet;
    utility::string_t m_ForwarderId;
    bool m_ForwarderIdIsSet;
    utility::string_t m_Message;
    bool m_MessageIsSet;
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Status;
    bool m_StatusIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_InboxForwarderEventProjection_H_ */
