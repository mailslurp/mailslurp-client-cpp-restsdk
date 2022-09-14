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



#include "ScheduledJob.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




ScheduledJob::ScheduledJob()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_UserId = utility::conversions::to_string_t("");
    m_UserIdIsSet = false;
    m_InboxId = utility::conversions::to_string_t("");
    m_InboxIdIsSet = false;
    m_JobId = utility::conversions::to_string_t("");
    m_JobIdIsSet = false;
    m_GroupId = utility::conversions::to_string_t("");
    m_GroupIdIsSet = false;
    m_TriggerId = utility::conversions::to_string_t("");
    m_TriggerIdIsSet = false;
    m_Status = utility::conversions::to_string_t("");
    m_StatusIsSet = false;
    m_SendAtTimestamp = utility::datetime();
    m_SendAtTimestampIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
    m_UpdatedAt = utility::datetime();
    m_UpdatedAtIsSet = false;
}

ScheduledJob::~ScheduledJob()
{
}

void ScheduledJob::validate()
{
    // TODO: implement validation
}

web::json::value ScheduledJob::toJson() const
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
    if(m_InboxIdIsSet)
    {
        val[utility::conversions::to_string_t("inboxId")] = ModelBase::toJson(m_InboxId);
    }
    if(m_JobIdIsSet)
    {
        val[utility::conversions::to_string_t("jobId")] = ModelBase::toJson(m_JobId);
    }
    if(m_GroupIdIsSet)
    {
        val[utility::conversions::to_string_t("groupId")] = ModelBase::toJson(m_GroupId);
    }
    if(m_TriggerIdIsSet)
    {
        val[utility::conversions::to_string_t("triggerId")] = ModelBase::toJson(m_TriggerId);
    }
    if(m_StatusIsSet)
    {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(m_Status);
    }
    if(m_SendAtTimestampIsSet)
    {
        val[utility::conversions::to_string_t("sendAtTimestamp")] = ModelBase::toJson(m_SendAtTimestamp);
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

bool ScheduledJob::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("jobId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_jobId;
            ok &= ModelBase::fromJson(fieldValue, refVal_jobId);
            setJobId(refVal_jobId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("groupId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("groupId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_groupId;
            ok &= ModelBase::fromJson(fieldValue, refVal_groupId);
            setGroupId(refVal_groupId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("triggerId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("triggerId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_triggerId;
            ok &= ModelBase::fromJson(fieldValue, refVal_triggerId);
            setTriggerId(refVal_triggerId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_status;
            ok &= ModelBase::fromJson(fieldValue, refVal_status);
            setStatus(refVal_status);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sendAtTimestamp")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sendAtTimestamp"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_sendAtTimestamp;
            ok &= ModelBase::fromJson(fieldValue, refVal_sendAtTimestamp);
            setSendAtTimestamp(refVal_sendAtTimestamp);
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

void ScheduledJob::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_InboxIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("inboxId"), m_InboxId));
    }
    if(m_JobIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("jobId"), m_JobId));
    }
    if(m_GroupIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("groupId"), m_GroupId));
    }
    if(m_TriggerIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("triggerId"), m_TriggerId));
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("status"), m_Status));
    }
    if(m_SendAtTimestampIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sendAtTimestamp"), m_SendAtTimestamp));
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

bool ScheduledJob::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("inboxId")))
    {
        utility::string_t refVal_inboxId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("inboxId")), refVal_inboxId );
        setInboxId(refVal_inboxId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("jobId")))
    {
        utility::string_t refVal_jobId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("jobId")), refVal_jobId );
        setJobId(refVal_jobId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("groupId")))
    {
        utility::string_t refVal_groupId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("groupId")), refVal_groupId );
        setGroupId(refVal_groupId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("triggerId")))
    {
        utility::string_t refVal_triggerId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("triggerId")), refVal_triggerId );
        setTriggerId(refVal_triggerId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("status")))
    {
        utility::string_t refVal_status;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("status")), refVal_status );
        setStatus(refVal_status);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sendAtTimestamp")))
    {
        utility::datetime refVal_sendAtTimestamp;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sendAtTimestamp")), refVal_sendAtTimestamp );
        setSendAtTimestamp(refVal_sendAtTimestamp);
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

utility::string_t ScheduledJob::getId() const
{
    return m_Id;
}

void ScheduledJob::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool ScheduledJob::idIsSet() const
{
    return m_IdIsSet;
}

void ScheduledJob::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t ScheduledJob::getUserId() const
{
    return m_UserId;
}

void ScheduledJob::setUserId(const utility::string_t& value)
{
    m_UserId = value;
    m_UserIdIsSet = true;
}

bool ScheduledJob::userIdIsSet() const
{
    return m_UserIdIsSet;
}

void ScheduledJob::unsetUserId()
{
    m_UserIdIsSet = false;
}
utility::string_t ScheduledJob::getInboxId() const
{
    return m_InboxId;
}

void ScheduledJob::setInboxId(const utility::string_t& value)
{
    m_InboxId = value;
    m_InboxIdIsSet = true;
}

bool ScheduledJob::inboxIdIsSet() const
{
    return m_InboxIdIsSet;
}

void ScheduledJob::unsetInboxId()
{
    m_InboxIdIsSet = false;
}
utility::string_t ScheduledJob::getJobId() const
{
    return m_JobId;
}

void ScheduledJob::setJobId(const utility::string_t& value)
{
    m_JobId = value;
    m_JobIdIsSet = true;
}

bool ScheduledJob::jobIdIsSet() const
{
    return m_JobIdIsSet;
}

void ScheduledJob::unsetJobId()
{
    m_JobIdIsSet = false;
}
utility::string_t ScheduledJob::getGroupId() const
{
    return m_GroupId;
}

void ScheduledJob::setGroupId(const utility::string_t& value)
{
    m_GroupId = value;
    m_GroupIdIsSet = true;
}

bool ScheduledJob::groupIdIsSet() const
{
    return m_GroupIdIsSet;
}

void ScheduledJob::unsetGroupId()
{
    m_GroupIdIsSet = false;
}
utility::string_t ScheduledJob::getTriggerId() const
{
    return m_TriggerId;
}

void ScheduledJob::setTriggerId(const utility::string_t& value)
{
    m_TriggerId = value;
    m_TriggerIdIsSet = true;
}

bool ScheduledJob::triggerIdIsSet() const
{
    return m_TriggerIdIsSet;
}

void ScheduledJob::unsetTriggerId()
{
    m_TriggerIdIsSet = false;
}
utility::string_t ScheduledJob::getStatus() const
{
    return m_Status;
}

void ScheduledJob::setStatus(const utility::string_t& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool ScheduledJob::statusIsSet() const
{
    return m_StatusIsSet;
}

void ScheduledJob::unsetStatus()
{
    m_StatusIsSet = false;
}
utility::datetime ScheduledJob::getSendAtTimestamp() const
{
    return m_SendAtTimestamp;
}

void ScheduledJob::setSendAtTimestamp(const utility::datetime& value)
{
    m_SendAtTimestamp = value;
    m_SendAtTimestampIsSet = true;
}

bool ScheduledJob::sendAtTimestampIsSet() const
{
    return m_SendAtTimestampIsSet;
}

void ScheduledJob::unsetSendAtTimestamp()
{
    m_SendAtTimestampIsSet = false;
}
utility::datetime ScheduledJob::getCreatedAt() const
{
    return m_CreatedAt;
}

void ScheduledJob::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool ScheduledJob::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void ScheduledJob::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
utility::datetime ScheduledJob::getUpdatedAt() const
{
    return m_UpdatedAt;
}

void ScheduledJob::setUpdatedAt(const utility::datetime& value)
{
    m_UpdatedAt = value;
    m_UpdatedAtIsSet = true;
}

bool ScheduledJob::updatedAtIsSet() const
{
    return m_UpdatedAtIsSet;
}

void ScheduledJob::unsetUpdatedAt()
{
    m_UpdatedAtIsSet = false;
}
}
}
}
}


