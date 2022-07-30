/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://docs.mailslurp.com/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * WebhookEmailReadPayload.h
 *
 * EMAIL_READ webhook payload. Sent to your webhook url endpoint via HTTP POST when an email is read. This happens when an email is requested in full from the API or a user views the email in the dashboard.
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_WebhookEmailReadPayload_H_
#define COM_MAILSLURP_CLIENT_MODEL_WebhookEmailReadPayload_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// EMAIL_READ webhook payload. Sent to your webhook url endpoint via HTTP POST when an email is read. This happens when an email is requested in full from the API or a user views the email in the dashboard.
/// </summary>
class  WebhookEmailReadPayload
    : public ModelBase
{
public:
    WebhookEmailReadPayload();
    virtual ~WebhookEmailReadPayload();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// WebhookEmailReadPayload members

    /// <summary>
    /// Idempotent message ID. Store this ID locally or in a database to prevent message duplication.
    /// </summary>
    utility::string_t getMessageId() const;
    bool messageIdIsSet() const;
    void unsetMessageId();

    void setMessageId(const utility::string_t& value);

    /// <summary>
    /// ID of webhook entity being triggered
    /// </summary>
    utility::string_t getWebhookId() const;
    bool webhookIdIsSet() const;
    void unsetWebhookId();

    void setWebhookId(const utility::string_t& value);

    /// <summary>
    /// Name of the event type webhook is being triggered for.
    /// </summary>
    utility::string_t getEventName() const;
    bool eventNameIsSet() const;
    void unsetEventName();

    void setEventName(const utility::string_t& value);

    /// <summary>
    /// Name of the webhook being triggered
    /// </summary>
    utility::string_t getWebhookName() const;
    bool webhookNameIsSet() const;
    void unsetWebhookName();

    void setWebhookName(const utility::string_t& value);

    /// <summary>
    /// ID of the email that was received. Use this ID for fetching the email with the &#x60;EmailController&#x60;.
    /// </summary>
    utility::string_t getEmailId() const;
    bool emailIdIsSet() const;
    void unsetEmailId();

    void setEmailId(const utility::string_t& value);

    /// <summary>
    /// Id of the inbox that received an email
    /// </summary>
    utility::string_t getInboxId() const;
    bool inboxIdIsSet() const;
    void unsetInboxId();

    void setInboxId(const utility::string_t& value);

    /// <summary>
    /// Is the email read
    /// </summary>
    bool isEmailIsRead() const;
    bool emailIsReadIsSet() const;
    void unsetEmailIsRead();

    void setEmailIsRead(bool value);

    /// <summary>
    /// Date time of event creation
    /// </summary>
    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetCreatedAt();

    void setCreatedAt(const utility::datetime& value);


protected:
    utility::string_t m_MessageId;
    bool m_MessageIdIsSet;
    utility::string_t m_WebhookId;
    bool m_WebhookIdIsSet;
    utility::string_t m_EventName;
    bool m_EventNameIsSet;
    utility::string_t m_WebhookName;
    bool m_WebhookNameIsSet;
    utility::string_t m_EmailId;
    bool m_EmailIdIsSet;
    utility::string_t m_InboxId;
    bool m_InboxIdIsSet;
    bool m_EmailIsRead;
    bool m_EmailIsReadIsSet;
    utility::datetime m_CreatedAt;
    bool m_CreatedAtIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_WebhookEmailReadPayload_H_ */
