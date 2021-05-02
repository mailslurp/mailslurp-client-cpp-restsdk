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
 * WebhookPayload.h
 *
 * MailSlurp webhook payload schema. This schema describes the JSON object that is sent via HTTP POST to webhook urls when an email is received by an inbox that a webhook is attached to. Payloads may be delivered multiple times so use the ID as a key for event uniqueness. The payload contains IDs for the email and inbox affected. Use these to fetch more data related to the event using appropriate inbox and email endpoints. See https://www.mailslurp.com/guides/email-webhooks/ for more information. Your webhook endpoint should accept POST HTTP request and return a 200 in under 30 seconds. Process the webhook asynchronously if you need to.
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_WebhookPayload_H_
#define COM_MAILSLURP_CLIENT_MODEL_WebhookPayload_H_


#include "../ModelBase.h"

#include "AttachmentMetaData.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// MailSlurp webhook payload schema. This schema describes the JSON object that is sent via HTTP POST to webhook urls when an email is received by an inbox that a webhook is attached to. Payloads may be delivered multiple times so use the ID as a key for event uniqueness. The payload contains IDs for the email and inbox affected. Use these to fetch more data related to the event using appropriate inbox and email endpoints. See https://www.mailslurp.com/guides/email-webhooks/ for more information. Your webhook endpoint should accept POST HTTP request and return a 200 in under 30 seconds. Process the webhook asynchronously if you need to.
/// </summary>
class  WebhookPayload
    : public ModelBase
{
public:
    WebhookPayload();
    virtual ~WebhookPayload();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// WebhookPayload members

    /// <summary>
    /// List of attachment meta data objects if attachments present
    /// </summary>
    std::vector<std::shared_ptr<AttachmentMetaData>>& getAttachmentMetaDatas();
    bool attachmentMetaDatasIsSet() const;
    void unsetAttachmentMetaDatas();

    void setAttachmentMetaDatas(const std::vector<std::shared_ptr<AttachmentMetaData>>& value);

    /// <summary>
    /// List of &#x60;BCC&#x60; recipients email was addressed to
    /// </summary>
    std::vector<utility::string_t>& getBcc();
    bool bccIsSet() const;
    void unsetBcc();

    void setBcc(const std::vector<utility::string_t>& value);

    /// <summary>
    /// List of &#x60;CC&#x60; recipients email was addressed to
    /// </summary>
    std::vector<utility::string_t>& getCc();
    bool ccIsSet() const;
    void unsetCc();

    void setCc(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Date time of event creation
    /// </summary>
    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetCreatedAt();

    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// ID of the email that was received. Use this ID for fetching the email
    /// </summary>
    utility::string_t getEmailId() const;
    bool emailIdIsSet() const;
    void unsetEmailId();

    void setEmailId(const utility::string_t& value);

    /// <summary>
    /// Name of the event type webhook is being triggered for
    /// </summary>
    utility::string_t getEventName() const;
    bool eventNameIsSet() const;
    void unsetEventName();

    void setEventName(const utility::string_t& value);

    /// <summary>
    /// Who the email was sent from
    /// </summary>
    utility::string_t getFrom() const;
    bool fromIsSet() const;
    void unsetFrom();

    void setFrom(const utility::string_t& value);

    /// <summary>
    /// Id of the inbox that receive an email
    /// </summary>
    utility::string_t getInboxId() const;
    bool inboxIdIsSet() const;
    void unsetInboxId();

    void setInboxId(const utility::string_t& value);

    /// <summary>
    /// Idempotent message ID. Store this ID locally or in a database to prevent message duplication.
    /// </summary>
    utility::string_t getMessageId() const;
    bool messageIdIsSet() const;
    void unsetMessageId();

    void setMessageId(const utility::string_t& value);

    /// <summary>
    /// The subject line of the email message
    /// </summary>
    utility::string_t getSubject() const;
    bool subjectIsSet() const;
    void unsetSubject();

    void setSubject(const utility::string_t& value);

    /// <summary>
    /// List of &#x60;To&#x60; recipients email was addressed to
    /// </summary>
    std::vector<utility::string_t>& getTo();
    bool toIsSet() const;
    void unsetTo();

    void setTo(const std::vector<utility::string_t>& value);

    /// <summary>
    /// ID of webhook entity being triggered
    /// </summary>
    utility::string_t getWebhookId() const;
    bool webhookIdIsSet() const;
    void unsetWebhookId();

    void setWebhookId(const utility::string_t& value);

    /// <summary>
    /// Name of the webhook being triggered
    /// </summary>
    utility::string_t getWebhookName() const;
    bool webhookNameIsSet() const;
    void unsetWebhookName();

    void setWebhookName(const utility::string_t& value);


protected:
    std::vector<std::shared_ptr<AttachmentMetaData>> m_AttachmentMetaDatas;
    bool m_AttachmentMetaDatasIsSet;
    std::vector<utility::string_t> m_Bcc;
    bool m_BccIsSet;
    std::vector<utility::string_t> m_Cc;
    bool m_CcIsSet;
    utility::datetime m_CreatedAt;
    bool m_CreatedAtIsSet;
    utility::string_t m_EmailId;
    bool m_EmailIdIsSet;
    utility::string_t m_EventName;
    bool m_EventNameIsSet;
    utility::string_t m_From;
    bool m_FromIsSet;
    utility::string_t m_InboxId;
    bool m_InboxIdIsSet;
    utility::string_t m_MessageId;
    bool m_MessageIdIsSet;
    utility::string_t m_Subject;
    bool m_SubjectIsSet;
    std::vector<utility::string_t> m_To;
    bool m_ToIsSet;
    utility::string_t m_WebhookId;
    bool m_WebhookIdIsSet;
    utility::string_t m_WebhookName;
    bool m_WebhookNameIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_WebhookPayload_H_ */