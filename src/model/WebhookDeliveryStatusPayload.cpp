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



#include "CppRestOpenAPIClient/model/WebhookDeliveryStatusPayload.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



WebhookDeliveryStatusPayload::WebhookDeliveryStatusPayload()
{
    m_MessageId = utility::conversions::to_string_t("");
    m_MessageIdIsSet = false;
    m_WebhookId = utility::conversions::to_string_t("");
    m_WebhookIdIsSet = false;
    m_EventName = utility::conversions::to_string_t("");
    m_EventNameIsSet = false;
    m_WebhookName = utility::conversions::to_string_t("");
    m_WebhookNameIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_UserId = utility::conversions::to_string_t("");
    m_UserIdIsSet = false;
    m_SentId = utility::conversions::to_string_t("");
    m_SentIdIsSet = false;
    m_RemoteMtaIp = utility::conversions::to_string_t("");
    m_RemoteMtaIpIsSet = false;
    m_InboxId = utility::conversions::to_string_t("");
    m_InboxIdIsSet = false;
    m_ReportingMta = utility::conversions::to_string_t("");
    m_ReportingMtaIsSet = false;
    m_RecipientsIsSet = false;
    m_SmtpResponse = utility::conversions::to_string_t("");
    m_SmtpResponseIsSet = false;
    m_SmtpStatusCode = 0;
    m_SmtpStatusCodeIsSet = false;
    m_ProcessingTimeMillis = 0L;
    m_ProcessingTimeMillisIsSet = false;
    m_Received = utility::datetime();
    m_ReceivedIsSet = false;
    m_Subject = utility::conversions::to_string_t("");
    m_SubjectIsSet = false;
}

WebhookDeliveryStatusPayload::~WebhookDeliveryStatusPayload()
{
}

void WebhookDeliveryStatusPayload::validate()
{
    // TODO: implement validation
}

web::json::value WebhookDeliveryStatusPayload::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_MessageIdIsSet)
    {
        val[utility::conversions::to_string_t(U("messageId"))] = ModelBase::toJson(m_MessageId);
    }
    if(m_WebhookIdIsSet)
    {
        val[utility::conversions::to_string_t(U("webhookId"))] = ModelBase::toJson(m_WebhookId);
    }
    if(m_EventNameIsSet)
    {
        val[utility::conversions::to_string_t(U("eventName"))] = ModelBase::toJson(m_EventName);
    }
    if(m_WebhookNameIsSet)
    {
        val[utility::conversions::to_string_t(U("webhookName"))] = ModelBase::toJson(m_WebhookName);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_UserIdIsSet)
    {
        val[utility::conversions::to_string_t(U("userId"))] = ModelBase::toJson(m_UserId);
    }
    if(m_SentIdIsSet)
    {
        val[utility::conversions::to_string_t(U("sentId"))] = ModelBase::toJson(m_SentId);
    }
    if(m_RemoteMtaIpIsSet)
    {
        val[utility::conversions::to_string_t(U("remoteMtaIp"))] = ModelBase::toJson(m_RemoteMtaIp);
    }
    if(m_InboxIdIsSet)
    {
        val[utility::conversions::to_string_t(U("inboxId"))] = ModelBase::toJson(m_InboxId);
    }
    if(m_ReportingMtaIsSet)
    {
        val[utility::conversions::to_string_t(U("reportingMta"))] = ModelBase::toJson(m_ReportingMta);
    }
    if(m_RecipientsIsSet)
    {
        val[utility::conversions::to_string_t(U("recipients"))] = ModelBase::toJson(m_Recipients);
    }
    if(m_SmtpResponseIsSet)
    {
        val[utility::conversions::to_string_t(U("smtpResponse"))] = ModelBase::toJson(m_SmtpResponse);
    }
    if(m_SmtpStatusCodeIsSet)
    {
        val[utility::conversions::to_string_t(U("smtpStatusCode"))] = ModelBase::toJson(m_SmtpStatusCode);
    }
    if(m_ProcessingTimeMillisIsSet)
    {
        val[utility::conversions::to_string_t(U("processingTimeMillis"))] = ModelBase::toJson(m_ProcessingTimeMillis);
    }
    if(m_ReceivedIsSet)
    {
        val[utility::conversions::to_string_t(U("received"))] = ModelBase::toJson(m_Received);
    }
    if(m_SubjectIsSet)
    {
        val[utility::conversions::to_string_t(U("subject"))] = ModelBase::toJson(m_Subject);
    }

    return val;
}

bool WebhookDeliveryStatusPayload::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("messageId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("messageId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setMessageId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMessageId);
            setMessageId(refVal_setMessageId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("webhookId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("webhookId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setWebhookId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setWebhookId);
            setWebhookId(refVal_setWebhookId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("eventName"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("eventName")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setEventName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEventName);
            setEventName(refVal_setEventName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("webhookName"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("webhookName")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setWebhookName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setWebhookName);
            setWebhookName(refVal_setWebhookName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setId);
            setId(refVal_setId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("userId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("userId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setUserId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUserId);
            setUserId(refVal_setUserId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("sentId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("sentId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSentId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSentId);
            setSentId(refVal_setSentId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("remoteMtaIp"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("remoteMtaIp")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setRemoteMtaIp;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRemoteMtaIp);
            setRemoteMtaIp(refVal_setRemoteMtaIp);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("inboxId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("inboxId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setInboxId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setInboxId);
            setInboxId(refVal_setInboxId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("reportingMta"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("reportingMta")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setReportingMta;
            ok &= ModelBase::fromJson(fieldValue, refVal_setReportingMta);
            setReportingMta(refVal_setReportingMta);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("recipients"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("recipients")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setRecipients;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRecipients);
            setRecipients(refVal_setRecipients);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("smtpResponse"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("smtpResponse")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSmtpResponse;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSmtpResponse);
            setSmtpResponse(refVal_setSmtpResponse);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("smtpStatusCode"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("smtpStatusCode")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setSmtpStatusCode;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSmtpStatusCode);
            setSmtpStatusCode(refVal_setSmtpStatusCode);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("processingTimeMillis"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("processingTimeMillis")));
        if(!fieldValue.is_null())
        {
            int64_t refVal_setProcessingTimeMillis;
            ok &= ModelBase::fromJson(fieldValue, refVal_setProcessingTimeMillis);
            setProcessingTimeMillis(refVal_setProcessingTimeMillis);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("received"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("received")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setReceived;
            ok &= ModelBase::fromJson(fieldValue, refVal_setReceived);
            setReceived(refVal_setReceived);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("subject"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("subject")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSubject;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSubject);
            setSubject(refVal_setSubject);
        }
    }
    return ok;
}

void WebhookDeliveryStatusPayload::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_MessageIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("messageId")), m_MessageId));
    }
    if(m_WebhookIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("webhookId")), m_WebhookId));
    }
    if(m_EventNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("eventName")), m_EventName));
    }
    if(m_WebhookNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("webhookName")), m_WebhookName));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_Id));
    }
    if(m_UserIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("userId")), m_UserId));
    }
    if(m_SentIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("sentId")), m_SentId));
    }
    if(m_RemoteMtaIpIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("remoteMtaIp")), m_RemoteMtaIp));
    }
    if(m_InboxIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("inboxId")), m_InboxId));
    }
    if(m_ReportingMtaIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("reportingMta")), m_ReportingMta));
    }
    if(m_RecipientsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("recipients")), m_Recipients));
    }
    if(m_SmtpResponseIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("smtpResponse")), m_SmtpResponse));
    }
    if(m_SmtpStatusCodeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("smtpStatusCode")), m_SmtpStatusCode));
    }
    if(m_ProcessingTimeMillisIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("processingTimeMillis")), m_ProcessingTimeMillis));
    }
    if(m_ReceivedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("received")), m_Received));
    }
    if(m_SubjectIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("subject")), m_Subject));
    }
}

bool WebhookDeliveryStatusPayload::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("messageId"))))
    {
        utility::string_t refVal_setMessageId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("messageId"))), refVal_setMessageId );
        setMessageId(refVal_setMessageId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("webhookId"))))
    {
        utility::string_t refVal_setWebhookId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("webhookId"))), refVal_setWebhookId );
        setWebhookId(refVal_setWebhookId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("eventName"))))
    {
        utility::string_t refVal_setEventName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("eventName"))), refVal_setEventName );
        setEventName(refVal_setEventName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("webhookName"))))
    {
        utility::string_t refVal_setWebhookName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("webhookName"))), refVal_setWebhookName );
        setWebhookName(refVal_setWebhookName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_setId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_setId );
        setId(refVal_setId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("userId"))))
    {
        utility::string_t refVal_setUserId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("userId"))), refVal_setUserId );
        setUserId(refVal_setUserId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("sentId"))))
    {
        utility::string_t refVal_setSentId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("sentId"))), refVal_setSentId );
        setSentId(refVal_setSentId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("remoteMtaIp"))))
    {
        utility::string_t refVal_setRemoteMtaIp;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("remoteMtaIp"))), refVal_setRemoteMtaIp );
        setRemoteMtaIp(refVal_setRemoteMtaIp);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("inboxId"))))
    {
        utility::string_t refVal_setInboxId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("inboxId"))), refVal_setInboxId );
        setInboxId(refVal_setInboxId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("reportingMta"))))
    {
        utility::string_t refVal_setReportingMta;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("reportingMta"))), refVal_setReportingMta );
        setReportingMta(refVal_setReportingMta);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("recipients"))))
    {
        std::vector<utility::string_t> refVal_setRecipients;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("recipients"))), refVal_setRecipients );
        setRecipients(refVal_setRecipients);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("smtpResponse"))))
    {
        utility::string_t refVal_setSmtpResponse;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("smtpResponse"))), refVal_setSmtpResponse );
        setSmtpResponse(refVal_setSmtpResponse);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("smtpStatusCode"))))
    {
        int32_t refVal_setSmtpStatusCode;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("smtpStatusCode"))), refVal_setSmtpStatusCode );
        setSmtpStatusCode(refVal_setSmtpStatusCode);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("processingTimeMillis"))))
    {
        int64_t refVal_setProcessingTimeMillis;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("processingTimeMillis"))), refVal_setProcessingTimeMillis );
        setProcessingTimeMillis(refVal_setProcessingTimeMillis);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("received"))))
    {
        utility::datetime refVal_setReceived;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("received"))), refVal_setReceived );
        setReceived(refVal_setReceived);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("subject"))))
    {
        utility::string_t refVal_setSubject;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("subject"))), refVal_setSubject );
        setSubject(refVal_setSubject);
    }
    return ok;
}

utility::string_t WebhookDeliveryStatusPayload::getMessageId() const
{
    return m_MessageId;
}

void WebhookDeliveryStatusPayload::setMessageId(const utility::string_t& value)
{
    m_MessageId = value;
    m_MessageIdIsSet = true;
}

bool WebhookDeliveryStatusPayload::messageIdIsSet() const
{
    return m_MessageIdIsSet;
}

void WebhookDeliveryStatusPayload::unsetMessageId()
{
    m_MessageIdIsSet = false;
}
utility::string_t WebhookDeliveryStatusPayload::getWebhookId() const
{
    return m_WebhookId;
}

void WebhookDeliveryStatusPayload::setWebhookId(const utility::string_t& value)
{
    m_WebhookId = value;
    m_WebhookIdIsSet = true;
}

bool WebhookDeliveryStatusPayload::webhookIdIsSet() const
{
    return m_WebhookIdIsSet;
}

void WebhookDeliveryStatusPayload::unsetWebhookId()
{
    m_WebhookIdIsSet = false;
}
utility::string_t WebhookDeliveryStatusPayload::getEventName() const
{
    return m_EventName;
}

void WebhookDeliveryStatusPayload::setEventName(const utility::string_t& value)
{
    m_EventName = value;
    m_EventNameIsSet = true;
}

bool WebhookDeliveryStatusPayload::eventNameIsSet() const
{
    return m_EventNameIsSet;
}

void WebhookDeliveryStatusPayload::unsetEventName()
{
    m_EventNameIsSet = false;
}
utility::string_t WebhookDeliveryStatusPayload::getWebhookName() const
{
    return m_WebhookName;
}

void WebhookDeliveryStatusPayload::setWebhookName(const utility::string_t& value)
{
    m_WebhookName = value;
    m_WebhookNameIsSet = true;
}

bool WebhookDeliveryStatusPayload::webhookNameIsSet() const
{
    return m_WebhookNameIsSet;
}

void WebhookDeliveryStatusPayload::unsetWebhookName()
{
    m_WebhookNameIsSet = false;
}
utility::string_t WebhookDeliveryStatusPayload::getId() const
{
    return m_Id;
}

void WebhookDeliveryStatusPayload::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool WebhookDeliveryStatusPayload::idIsSet() const
{
    return m_IdIsSet;
}

void WebhookDeliveryStatusPayload::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t WebhookDeliveryStatusPayload::getUserId() const
{
    return m_UserId;
}

void WebhookDeliveryStatusPayload::setUserId(const utility::string_t& value)
{
    m_UserId = value;
    m_UserIdIsSet = true;
}

bool WebhookDeliveryStatusPayload::userIdIsSet() const
{
    return m_UserIdIsSet;
}

void WebhookDeliveryStatusPayload::unsetUserId()
{
    m_UserIdIsSet = false;
}
utility::string_t WebhookDeliveryStatusPayload::getSentId() const
{
    return m_SentId;
}

void WebhookDeliveryStatusPayload::setSentId(const utility::string_t& value)
{
    m_SentId = value;
    m_SentIdIsSet = true;
}

bool WebhookDeliveryStatusPayload::sentIdIsSet() const
{
    return m_SentIdIsSet;
}

void WebhookDeliveryStatusPayload::unsetSentId()
{
    m_SentIdIsSet = false;
}
utility::string_t WebhookDeliveryStatusPayload::getRemoteMtaIp() const
{
    return m_RemoteMtaIp;
}

void WebhookDeliveryStatusPayload::setRemoteMtaIp(const utility::string_t& value)
{
    m_RemoteMtaIp = value;
    m_RemoteMtaIpIsSet = true;
}

bool WebhookDeliveryStatusPayload::remoteMtaIpIsSet() const
{
    return m_RemoteMtaIpIsSet;
}

void WebhookDeliveryStatusPayload::unsetRemoteMtaIp()
{
    m_RemoteMtaIpIsSet = false;
}
utility::string_t WebhookDeliveryStatusPayload::getInboxId() const
{
    return m_InboxId;
}

void WebhookDeliveryStatusPayload::setInboxId(const utility::string_t& value)
{
    m_InboxId = value;
    m_InboxIdIsSet = true;
}

bool WebhookDeliveryStatusPayload::inboxIdIsSet() const
{
    return m_InboxIdIsSet;
}

void WebhookDeliveryStatusPayload::unsetInboxId()
{
    m_InboxIdIsSet = false;
}
utility::string_t WebhookDeliveryStatusPayload::getReportingMta() const
{
    return m_ReportingMta;
}

void WebhookDeliveryStatusPayload::setReportingMta(const utility::string_t& value)
{
    m_ReportingMta = value;
    m_ReportingMtaIsSet = true;
}

bool WebhookDeliveryStatusPayload::reportingMtaIsSet() const
{
    return m_ReportingMtaIsSet;
}

void WebhookDeliveryStatusPayload::unsetReportingMta()
{
    m_ReportingMtaIsSet = false;
}
std::vector<utility::string_t>& WebhookDeliveryStatusPayload::getRecipients()
{
    return m_Recipients;
}

void WebhookDeliveryStatusPayload::setRecipients(const std::vector<utility::string_t>& value)
{
    m_Recipients = value;
    m_RecipientsIsSet = true;
}

bool WebhookDeliveryStatusPayload::recipientsIsSet() const
{
    return m_RecipientsIsSet;
}

void WebhookDeliveryStatusPayload::unsetRecipients()
{
    m_RecipientsIsSet = false;
}
utility::string_t WebhookDeliveryStatusPayload::getSmtpResponse() const
{
    return m_SmtpResponse;
}

void WebhookDeliveryStatusPayload::setSmtpResponse(const utility::string_t& value)
{
    m_SmtpResponse = value;
    m_SmtpResponseIsSet = true;
}

bool WebhookDeliveryStatusPayload::smtpResponseIsSet() const
{
    return m_SmtpResponseIsSet;
}

void WebhookDeliveryStatusPayload::unsetSmtpResponse()
{
    m_SmtpResponseIsSet = false;
}
int32_t WebhookDeliveryStatusPayload::getSmtpStatusCode() const
{
    return m_SmtpStatusCode;
}

void WebhookDeliveryStatusPayload::setSmtpStatusCode(int32_t value)
{
    m_SmtpStatusCode = value;
    m_SmtpStatusCodeIsSet = true;
}

bool WebhookDeliveryStatusPayload::smtpStatusCodeIsSet() const
{
    return m_SmtpStatusCodeIsSet;
}

void WebhookDeliveryStatusPayload::unsetSmtpStatusCode()
{
    m_SmtpStatusCodeIsSet = false;
}
int64_t WebhookDeliveryStatusPayload::getProcessingTimeMillis() const
{
    return m_ProcessingTimeMillis;
}

void WebhookDeliveryStatusPayload::setProcessingTimeMillis(int64_t value)
{
    m_ProcessingTimeMillis = value;
    m_ProcessingTimeMillisIsSet = true;
}

bool WebhookDeliveryStatusPayload::processingTimeMillisIsSet() const
{
    return m_ProcessingTimeMillisIsSet;
}

void WebhookDeliveryStatusPayload::unsetProcessingTimeMillis()
{
    m_ProcessingTimeMillisIsSet = false;
}
utility::datetime WebhookDeliveryStatusPayload::getReceived() const
{
    return m_Received;
}

void WebhookDeliveryStatusPayload::setReceived(const utility::datetime& value)
{
    m_Received = value;
    m_ReceivedIsSet = true;
}

bool WebhookDeliveryStatusPayload::receivedIsSet() const
{
    return m_ReceivedIsSet;
}

void WebhookDeliveryStatusPayload::unsetReceived()
{
    m_ReceivedIsSet = false;
}
utility::string_t WebhookDeliveryStatusPayload::getSubject() const
{
    return m_Subject;
}

void WebhookDeliveryStatusPayload::setSubject(const utility::string_t& value)
{
    m_Subject = value;
    m_SubjectIsSet = true;
}

bool WebhookDeliveryStatusPayload::subjectIsSet() const
{
    return m_SubjectIsSet;
}

void WebhookDeliveryStatusPayload::unsetSubject()
{
    m_SubjectIsSet = false;
}
}
}
}
}


