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



#include "DeliveryStatus.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




DeliveryStatus::DeliveryStatus()
{
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
    m_ProcessingTimeMillis = 0L;
    m_ProcessingTimeMillisIsSet = false;
    m_Received = utility::datetime();
    m_ReceivedIsSet = false;
    m_Subject = utility::conversions::to_string_t("");
    m_SubjectIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
    m_UpdatedAt = utility::datetime();
    m_UpdatedAtIsSet = false;
}

DeliveryStatus::~DeliveryStatus()
{
}

void DeliveryStatus::validate()
{
    // TODO: implement validation
}

web::json::value DeliveryStatus::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_UserIdIsSet)
    {
        val[utility::conversions::to_string_t("userId")] = ModelBase::toJson(m_UserId);
    }
    if(m_SentIdIsSet)
    {
        val[utility::conversions::to_string_t("sentId")] = ModelBase::toJson(m_SentId);
    }
    if(m_RemoteMtaIpIsSet)
    {
        val[utility::conversions::to_string_t("remoteMtaIp")] = ModelBase::toJson(m_RemoteMtaIp);
    }
    if(m_InboxIdIsSet)
    {
        val[utility::conversions::to_string_t("inboxId")] = ModelBase::toJson(m_InboxId);
    }
    if(m_ReportingMtaIsSet)
    {
        val[utility::conversions::to_string_t("reportingMta")] = ModelBase::toJson(m_ReportingMta);
    }
    if(m_RecipientsIsSet)
    {
        val[utility::conversions::to_string_t("recipients")] = ModelBase::toJson(m_Recipients);
    }
    if(m_SmtpResponseIsSet)
    {
        val[utility::conversions::to_string_t("smtpResponse")] = ModelBase::toJson(m_SmtpResponse);
    }
    if(m_ProcessingTimeMillisIsSet)
    {
        val[utility::conversions::to_string_t("processingTimeMillis")] = ModelBase::toJson(m_ProcessingTimeMillis);
    }
    if(m_ReceivedIsSet)
    {
        val[utility::conversions::to_string_t("received")] = ModelBase::toJson(m_Received);
    }
    if(m_SubjectIsSet)
    {
        val[utility::conversions::to_string_t("subject")] = ModelBase::toJson(m_Subject);
    }
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t("createdAt")] = ModelBase::toJson(m_CreatedAt);
    }
    if(m_UpdatedAtIsSet)
    {
        val[utility::conversions::to_string_t("updatedAt")] = ModelBase::toJson(m_UpdatedAt);
    }

    return val;
}

bool DeliveryStatus::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_id);
            setId(refVal_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("userId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_userId;
            ok &= ModelBase::fromJson(fieldValue, refVal_userId);
            setUserId(refVal_userId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sentId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sentId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sentId;
            ok &= ModelBase::fromJson(fieldValue, refVal_sentId);
            setSentId(refVal_sentId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remoteMtaIp")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remoteMtaIp"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_remoteMtaIp;
            ok &= ModelBase::fromJson(fieldValue, refVal_remoteMtaIp);
            setRemoteMtaIp(refVal_remoteMtaIp);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inboxId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inboxId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_inboxId;
            ok &= ModelBase::fromJson(fieldValue, refVal_inboxId);
            setInboxId(refVal_inboxId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reportingMta")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reportingMta"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_reportingMta;
            ok &= ModelBase::fromJson(fieldValue, refVal_reportingMta);
            setReportingMta(refVal_reportingMta);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("recipients")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recipients"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_recipients;
            ok &= ModelBase::fromJson(fieldValue, refVal_recipients);
            setRecipients(refVal_recipients);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("smtpResponse")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("smtpResponse"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_smtpResponse;
            ok &= ModelBase::fromJson(fieldValue, refVal_smtpResponse);
            setSmtpResponse(refVal_smtpResponse);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("processingTimeMillis")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("processingTimeMillis"));
        if(!fieldValue.is_null())
        {
            int64_t refVal_processingTimeMillis;
            ok &= ModelBase::fromJson(fieldValue, refVal_processingTimeMillis);
            setProcessingTimeMillis(refVal_processingTimeMillis);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("received")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("received"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_received;
            ok &= ModelBase::fromJson(fieldValue, refVal_received);
            setReceived(refVal_received);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subject")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subject"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_subject;
            ok &= ModelBase::fromJson(fieldValue, refVal_subject);
            setSubject(refVal_subject);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("createdAt")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("createdAt"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_createdAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_createdAt);
            setCreatedAt(refVal_createdAt);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updatedAt")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updatedAt"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_updatedAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_updatedAt);
            setUpdatedAt(refVal_updatedAt);
        }
    }
    return ok;
}

void DeliveryStatus::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_UserIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("userId"), m_UserId));
    }
    if(m_SentIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sentId"), m_SentId));
    }
    if(m_RemoteMtaIpIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("remoteMtaIp"), m_RemoteMtaIp));
    }
    if(m_InboxIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("inboxId"), m_InboxId));
    }
    if(m_ReportingMtaIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("reportingMta"), m_ReportingMta));
    }
    if(m_RecipientsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("recipients"), m_Recipients));
    }
    if(m_SmtpResponseIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("smtpResponse"), m_SmtpResponse));
    }
    if(m_ProcessingTimeMillisIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("processingTimeMillis"), m_ProcessingTimeMillis));
    }
    if(m_ReceivedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("received"), m_Received));
    }
    if(m_SubjectIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("subject"), m_Subject));
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("createdAt"), m_CreatedAt));
    }
    if(m_UpdatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("updatedAt"), m_UpdatedAt));
    }
}

bool DeliveryStatus::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        utility::string_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("id")), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("userId")))
    {
        utility::string_t refVal_userId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("userId")), refVal_userId );
        setUserId(refVal_userId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sentId")))
    {
        utility::string_t refVal_sentId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sentId")), refVal_sentId );
        setSentId(refVal_sentId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("remoteMtaIp")))
    {
        utility::string_t refVal_remoteMtaIp;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("remoteMtaIp")), refVal_remoteMtaIp );
        setRemoteMtaIp(refVal_remoteMtaIp);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("inboxId")))
    {
        utility::string_t refVal_inboxId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("inboxId")), refVal_inboxId );
        setInboxId(refVal_inboxId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("reportingMta")))
    {
        utility::string_t refVal_reportingMta;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("reportingMta")), refVal_reportingMta );
        setReportingMta(refVal_reportingMta);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("recipients")))
    {
        std::vector<utility::string_t> refVal_recipients;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("recipients")), refVal_recipients );
        setRecipients(refVal_recipients);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("smtpResponse")))
    {
        utility::string_t refVal_smtpResponse;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("smtpResponse")), refVal_smtpResponse );
        setSmtpResponse(refVal_smtpResponse);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("processingTimeMillis")))
    {
        int64_t refVal_processingTimeMillis;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("processingTimeMillis")), refVal_processingTimeMillis );
        setProcessingTimeMillis(refVal_processingTimeMillis);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("received")))
    {
        utility::datetime refVal_received;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("received")), refVal_received );
        setReceived(refVal_received);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("subject")))
    {
        utility::string_t refVal_subject;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("subject")), refVal_subject );
        setSubject(refVal_subject);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("createdAt")))
    {
        utility::datetime refVal_createdAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("createdAt")), refVal_createdAt );
        setCreatedAt(refVal_createdAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("updatedAt")))
    {
        utility::datetime refVal_updatedAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("updatedAt")), refVal_updatedAt );
        setUpdatedAt(refVal_updatedAt);
    }
    return ok;
}

utility::string_t DeliveryStatus::getId() const
{
    return m_Id;
}

void DeliveryStatus::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool DeliveryStatus::idIsSet() const
{
    return m_IdIsSet;
}

void DeliveryStatus::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t DeliveryStatus::getUserId() const
{
    return m_UserId;
}

void DeliveryStatus::setUserId(const utility::string_t& value)
{
    m_UserId = value;
    m_UserIdIsSet = true;
}

bool DeliveryStatus::userIdIsSet() const
{
    return m_UserIdIsSet;
}

void DeliveryStatus::unsetUserId()
{
    m_UserIdIsSet = false;
}
utility::string_t DeliveryStatus::getSentId() const
{
    return m_SentId;
}

void DeliveryStatus::setSentId(const utility::string_t& value)
{
    m_SentId = value;
    m_SentIdIsSet = true;
}

bool DeliveryStatus::sentIdIsSet() const
{
    return m_SentIdIsSet;
}

void DeliveryStatus::unsetSentId()
{
    m_SentIdIsSet = false;
}
utility::string_t DeliveryStatus::getRemoteMtaIp() const
{
    return m_RemoteMtaIp;
}

void DeliveryStatus::setRemoteMtaIp(const utility::string_t& value)
{
    m_RemoteMtaIp = value;
    m_RemoteMtaIpIsSet = true;
}

bool DeliveryStatus::remoteMtaIpIsSet() const
{
    return m_RemoteMtaIpIsSet;
}

void DeliveryStatus::unsetRemoteMtaIp()
{
    m_RemoteMtaIpIsSet = false;
}
utility::string_t DeliveryStatus::getInboxId() const
{
    return m_InboxId;
}

void DeliveryStatus::setInboxId(const utility::string_t& value)
{
    m_InboxId = value;
    m_InboxIdIsSet = true;
}

bool DeliveryStatus::inboxIdIsSet() const
{
    return m_InboxIdIsSet;
}

void DeliveryStatus::unsetInboxId()
{
    m_InboxIdIsSet = false;
}
utility::string_t DeliveryStatus::getReportingMta() const
{
    return m_ReportingMta;
}

void DeliveryStatus::setReportingMta(const utility::string_t& value)
{
    m_ReportingMta = value;
    m_ReportingMtaIsSet = true;
}

bool DeliveryStatus::reportingMtaIsSet() const
{
    return m_ReportingMtaIsSet;
}

void DeliveryStatus::unsetReportingMta()
{
    m_ReportingMtaIsSet = false;
}
std::vector<utility::string_t>& DeliveryStatus::getRecipients()
{
    return m_Recipients;
}

void DeliveryStatus::setRecipients(const std::vector<utility::string_t>& value)
{
    m_Recipients = value;
    m_RecipientsIsSet = true;
}

bool DeliveryStatus::recipientsIsSet() const
{
    return m_RecipientsIsSet;
}

void DeliveryStatus::unsetRecipients()
{
    m_RecipientsIsSet = false;
}
utility::string_t DeliveryStatus::getSmtpResponse() const
{
    return m_SmtpResponse;
}

void DeliveryStatus::setSmtpResponse(const utility::string_t& value)
{
    m_SmtpResponse = value;
    m_SmtpResponseIsSet = true;
}

bool DeliveryStatus::smtpResponseIsSet() const
{
    return m_SmtpResponseIsSet;
}

void DeliveryStatus::unsetSmtpResponse()
{
    m_SmtpResponseIsSet = false;
}
int64_t DeliveryStatus::getProcessingTimeMillis() const
{
    return m_ProcessingTimeMillis;
}

void DeliveryStatus::setProcessingTimeMillis(int64_t value)
{
    m_ProcessingTimeMillis = value;
    m_ProcessingTimeMillisIsSet = true;
}

bool DeliveryStatus::processingTimeMillisIsSet() const
{
    return m_ProcessingTimeMillisIsSet;
}

void DeliveryStatus::unsetProcessingTimeMillis()
{
    m_ProcessingTimeMillisIsSet = false;
}
utility::datetime DeliveryStatus::getReceived() const
{
    return m_Received;
}

void DeliveryStatus::setReceived(const utility::datetime& value)
{
    m_Received = value;
    m_ReceivedIsSet = true;
}

bool DeliveryStatus::receivedIsSet() const
{
    return m_ReceivedIsSet;
}

void DeliveryStatus::unsetReceived()
{
    m_ReceivedIsSet = false;
}
utility::string_t DeliveryStatus::getSubject() const
{
    return m_Subject;
}

void DeliveryStatus::setSubject(const utility::string_t& value)
{
    m_Subject = value;
    m_SubjectIsSet = true;
}

bool DeliveryStatus::subjectIsSet() const
{
    return m_SubjectIsSet;
}

void DeliveryStatus::unsetSubject()
{
    m_SubjectIsSet = false;
}
utility::datetime DeliveryStatus::getCreatedAt() const
{
    return m_CreatedAt;
}

void DeliveryStatus::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool DeliveryStatus::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void DeliveryStatus::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
utility::datetime DeliveryStatus::getUpdatedAt() const
{
    return m_UpdatedAt;
}

void DeliveryStatus::setUpdatedAt(const utility::datetime& value)
{
    m_UpdatedAt = value;
    m_UpdatedAtIsSet = true;
}

bool DeliveryStatus::updatedAtIsSet() const
{
    return m_UpdatedAtIsSet;
}

void DeliveryStatus::unsetUpdatedAt()
{
    m_UpdatedAtIsSet = false;
}
}
}
}
}


