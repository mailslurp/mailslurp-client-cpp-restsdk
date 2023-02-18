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
 * WebhookDeliveryStatusPayload.h
 *
 * DELIVERY_STATUS webhook payload. Sent to your webhook url endpoint via HTTP POST when an email delivery status is created. This could be a successful delivery or a delivery failure.
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_WebhookDeliveryStatusPayload_H_
#define COM_MAILSLURP_CLIENT_MODEL_WebhookDeliveryStatusPayload_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// DELIVERY_STATUS webhook payload. Sent to your webhook url endpoint via HTTP POST when an email delivery status is created. This could be a successful delivery or a delivery failure.
/// </summary>
class  WebhookDeliveryStatusPayload
    : public ModelBase
{
public:
    WebhookDeliveryStatusPayload();
    virtual ~WebhookDeliveryStatusPayload();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// WebhookDeliveryStatusPayload members

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
    /// ID of delivery status
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// User ID of event
    /// </summary>
    utility::string_t getUserId() const;
    bool userIdIsSet() const;
    void unsetUserId();

    void setUserId(const utility::string_t& value);

    /// <summary>
    /// ID of sent email
    /// </summary>
    utility::string_t getSentId() const;
    bool sentIdIsSet() const;
    void unsetSentId();

    void setSentId(const utility::string_t& value);

    /// <summary>
    /// IP address of the remote Mail Transfer Agent
    /// </summary>
    utility::string_t getRemoteMtaIp() const;
    bool remoteMtaIpIsSet() const;
    void unsetRemoteMtaIp();

    void setRemoteMtaIp(const utility::string_t& value);

    /// <summary>
    /// Id of the inbox
    /// </summary>
    utility::string_t getInboxId() const;
    bool inboxIdIsSet() const;
    void unsetInboxId();

    void setInboxId(const utility::string_t& value);

    /// <summary>
    /// Mail Transfer Agent reporting delivery status
    /// </summary>
    utility::string_t getReportingMta() const;
    bool reportingMtaIsSet() const;
    void unsetReportingMta();

    void setReportingMta(const utility::string_t& value);

    /// <summary>
    /// Recipients for delivery
    /// </summary>
    std::vector<utility::string_t>& getRecipients();
    bool recipientsIsSet() const;
    void unsetRecipients();

    void setRecipients(const std::vector<utility::string_t>& value);

    /// <summary>
    /// SMTP server response message
    /// </summary>
    utility::string_t getSmtpResponse() const;
    bool smtpResponseIsSet() const;
    void unsetSmtpResponse();

    void setSmtpResponse(const utility::string_t& value);

    /// <summary>
    /// SMTP server status
    /// </summary>
    int32_t getSmtpStatusCode() const;
    bool smtpStatusCodeIsSet() const;
    void unsetSmtpStatusCode();

    void setSmtpStatusCode(int32_t value);

    /// <summary>
    /// Time in milliseconds for delivery processing
    /// </summary>
    int64_t getProcessingTimeMillis() const;
    bool processingTimeMillisIsSet() const;
    void unsetProcessingTimeMillis();

    void setProcessingTimeMillis(int64_t value);

    /// <summary>
    /// Time event was received
    /// </summary>
    utility::datetime getReceived() const;
    bool receivedIsSet() const;
    void unsetReceived();

    void setReceived(const utility::datetime& value);

    /// <summary>
    /// Email subject
    /// </summary>
    utility::string_t getSubject() const;
    bool subjectIsSet() const;
    void unsetSubject();

    void setSubject(const utility::string_t& value);


protected:
    utility::string_t m_MessageId;
    bool m_MessageIdIsSet;
    utility::string_t m_WebhookId;
    bool m_WebhookIdIsSet;
    utility::string_t m_EventName;
    bool m_EventNameIsSet;
    utility::string_t m_WebhookName;
    bool m_WebhookNameIsSet;
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_UserId;
    bool m_UserIdIsSet;
    utility::string_t m_SentId;
    bool m_SentIdIsSet;
    utility::string_t m_RemoteMtaIp;
    bool m_RemoteMtaIpIsSet;
    utility::string_t m_InboxId;
    bool m_InboxIdIsSet;
    utility::string_t m_ReportingMta;
    bool m_ReportingMtaIsSet;
    std::vector<utility::string_t> m_Recipients;
    bool m_RecipientsIsSet;
    utility::string_t m_SmtpResponse;
    bool m_SmtpResponseIsSet;
    int32_t m_SmtpStatusCode;
    bool m_SmtpStatusCodeIsSet;
    int64_t m_ProcessingTimeMillis;
    bool m_ProcessingTimeMillisIsSet;
    utility::datetime m_Received;
    bool m_ReceivedIsSet;
    utility::string_t m_Subject;
    bool m_SubjectIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_WebhookDeliveryStatusPayload_H_ */