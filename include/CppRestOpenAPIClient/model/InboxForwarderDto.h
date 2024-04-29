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
 * InboxForwarderDto.h
 *
 * Inbox forwarder. Describes how an inbox will forward matching emails to designated recipients.
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_InboxForwarderDto_H_
#define COM_MAILSLURP_CLIENT_MODEL_InboxForwarderDto_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// Inbox forwarder. Describes how an inbox will forward matching emails to designated recipients.
/// </summary>
class  InboxForwarderDto
    : public ModelBase
{
public:
    InboxForwarderDto();
    virtual ~InboxForwarderDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// InboxForwarderDto members

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
    utility::string_t getInboxId() const;
    bool inboxIdIsSet() const;
    void unsetInboxId();

    void setInboxId(const utility::string_t& value);

    /// <summary>
    /// Name of inbox forwarder
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// Which field to match against
    /// </summary>
    utility::string_t getField() const;
    bool fieldIsSet() const;
    void unsetField();

    void setField(const utility::string_t& value);

    /// <summary>
    /// Wild-card type pattern to apply to field
    /// </summary>
    utility::string_t getMatch() const;
    bool matchIsSet() const;
    void unsetMatch();

    void setMatch(const utility::string_t& value);

    /// <summary>
    /// Who to send forwarded email to
    /// </summary>
    std::vector<utility::string_t>& getForwardToRecipients();
    bool forwardToRecipientsIsSet() const;
    void unsetForwardToRecipients();

    void setForwardToRecipients(const std::vector<utility::string_t>& value);

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
    utility::string_t m_InboxId;
    bool m_InboxIdIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_Field;
    bool m_FieldIsSet;
    utility::string_t m_Match;
    bool m_MatchIsSet;
    std::vector<utility::string_t> m_ForwardToRecipients;
    bool m_ForwardToRecipientsIsSet;
    utility::datetime m_CreatedAt;
    bool m_CreatedAtIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_InboxForwarderDto_H_ */
