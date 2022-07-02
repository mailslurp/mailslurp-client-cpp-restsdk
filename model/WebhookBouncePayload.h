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
 * WebhookBouncePayload.h
 *
 * BOUNCE webhook payload. Sent to your webhook url endpoint via HTTP POST when an email bounced or was rejected by a recipient. Save the recipients to a ban list on your server and avoid emailing them again. It is recommended you also listen to the BOUNCE_RECIPIENT payload.
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_WebhookBouncePayload_H_
#define COM_MAILSLURP_CLIENT_MODEL_WebhookBouncePayload_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// BOUNCE webhook payload. Sent to your webhook url endpoint via HTTP POST when an email bounced or was rejected by a recipient. Save the recipients to a ban list on your server and avoid emailing them again. It is recommended you also listen to the BOUNCE_RECIPIENT payload.
/// </summary>
class  WebhookBouncePayload
    : public ModelBase
{
public:
    WebhookBouncePayload();
    virtual ~WebhookBouncePayload();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// WebhookBouncePayload members

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
    /// ID of the bounce email record. Use the ID with the bounce controller to view more information
    /// </summary>
    utility::string_t getBounceId() const;
    bool bounceIdIsSet() const;
    void unsetBounceId();

    void setBounceId(const utility::string_t& value);

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
    /// Email addresses that resulted in a bounce or email being rejected. Please save these recipients and avoid emailing them in the future to maintain your reputation.
    /// </summary>
    std::vector<utility::string_t>& getBounceRecipients();
    bool bounceRecipientsIsSet() const;
    void unsetBounceRecipients();

    void setBounceRecipients(const std::vector<utility::string_t>& value);


protected:
    utility::string_t m_MessageId;
    bool m_MessageIdIsSet;
    utility::string_t m_WebhookId;
    bool m_WebhookIdIsSet;
    utility::string_t m_EventName;
    bool m_EventNameIsSet;
    utility::string_t m_WebhookName;
    bool m_WebhookNameIsSet;
    utility::string_t m_BounceId;
    bool m_BounceIdIsSet;
    std::vector<utility::string_t> m_SentToRecipients;
    bool m_SentToRecipientsIsSet;
    utility::string_t m_Sender;
    bool m_SenderIsSet;
    std::vector<utility::string_t> m_BounceRecipients;
    bool m_BounceRecipientsIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_WebhookBouncePayload_H_ */
