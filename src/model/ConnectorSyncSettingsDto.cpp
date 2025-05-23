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



#include "CppRestOpenAPIClient/model/ConnectorSyncSettingsDto.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



ConnectorSyncSettingsDto::ConnectorSyncSettingsDto()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_UserId = utility::conversions::to_string_t("");
    m_UserIdIsSet = false;
    m_ConnectorId = utility::conversions::to_string_t("");
    m_ConnectorIdIsSet = false;
    m_SyncEnabled = false;
    m_SyncEnabledIsSet = false;
    m_SyncScheduleType = utility::conversions::to_string_t("");
    m_SyncScheduleTypeIsSet = false;
    m_SyncInterval = 0;
    m_SyncIntervalIsSet = false;
}

ConnectorSyncSettingsDto::~ConnectorSyncSettingsDto()
{
}

void ConnectorSyncSettingsDto::validate()
{
    // TODO: implement validation
}

web::json::value ConnectorSyncSettingsDto::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_UserIdIsSet)
    {
        val[utility::conversions::to_string_t(U("userId"))] = ModelBase::toJson(m_UserId);
    }
    if(m_ConnectorIdIsSet)
    {
        val[utility::conversions::to_string_t(U("connectorId"))] = ModelBase::toJson(m_ConnectorId);
    }
    if(m_SyncEnabledIsSet)
    {
        val[utility::conversions::to_string_t(U("syncEnabled"))] = ModelBase::toJson(m_SyncEnabled);
    }
    if(m_SyncScheduleTypeIsSet)
    {
        val[utility::conversions::to_string_t(U("syncScheduleType"))] = ModelBase::toJson(m_SyncScheduleType);
    }
    if(m_SyncIntervalIsSet)
    {
        val[utility::conversions::to_string_t(U("syncInterval"))] = ModelBase::toJson(m_SyncInterval);
    }

    return val;
}

bool ConnectorSyncSettingsDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t(U("connectorId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("connectorId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setConnectorId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setConnectorId);
            setConnectorId(refVal_setConnectorId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("syncEnabled"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("syncEnabled")));
        if(!fieldValue.is_null())
        {
            bool refVal_setSyncEnabled;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSyncEnabled);
            setSyncEnabled(refVal_setSyncEnabled);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("syncScheduleType"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("syncScheduleType")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSyncScheduleType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSyncScheduleType);
            setSyncScheduleType(refVal_setSyncScheduleType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("syncInterval"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("syncInterval")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setSyncInterval;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSyncInterval);
            setSyncInterval(refVal_setSyncInterval);
        }
    }
    return ok;
}

void ConnectorSyncSettingsDto::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_Id));
    }
    if(m_UserIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("userId")), m_UserId));
    }
    if(m_ConnectorIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("connectorId")), m_ConnectorId));
    }
    if(m_SyncEnabledIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("syncEnabled")), m_SyncEnabled));
    }
    if(m_SyncScheduleTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("syncScheduleType")), m_SyncScheduleType));
    }
    if(m_SyncIntervalIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("syncInterval")), m_SyncInterval));
    }
}

bool ConnectorSyncSettingsDto::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("connectorId"))))
    {
        utility::string_t refVal_setConnectorId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("connectorId"))), refVal_setConnectorId );
        setConnectorId(refVal_setConnectorId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("syncEnabled"))))
    {
        bool refVal_setSyncEnabled;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("syncEnabled"))), refVal_setSyncEnabled );
        setSyncEnabled(refVal_setSyncEnabled);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("syncScheduleType"))))
    {
        utility::string_t refVal_setSyncScheduleType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("syncScheduleType"))), refVal_setSyncScheduleType );
        setSyncScheduleType(refVal_setSyncScheduleType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("syncInterval"))))
    {
        int32_t refVal_setSyncInterval;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("syncInterval"))), refVal_setSyncInterval );
        setSyncInterval(refVal_setSyncInterval);
    }
    return ok;
}

utility::string_t ConnectorSyncSettingsDto::getId() const
{
    return m_Id;
}

void ConnectorSyncSettingsDto::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool ConnectorSyncSettingsDto::idIsSet() const
{
    return m_IdIsSet;
}

void ConnectorSyncSettingsDto::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t ConnectorSyncSettingsDto::getUserId() const
{
    return m_UserId;
}

void ConnectorSyncSettingsDto::setUserId(const utility::string_t& value)
{
    m_UserId = value;
    m_UserIdIsSet = true;
}

bool ConnectorSyncSettingsDto::userIdIsSet() const
{
    return m_UserIdIsSet;
}

void ConnectorSyncSettingsDto::unsetUserId()
{
    m_UserIdIsSet = false;
}
utility::string_t ConnectorSyncSettingsDto::getConnectorId() const
{
    return m_ConnectorId;
}

void ConnectorSyncSettingsDto::setConnectorId(const utility::string_t& value)
{
    m_ConnectorId = value;
    m_ConnectorIdIsSet = true;
}

bool ConnectorSyncSettingsDto::connectorIdIsSet() const
{
    return m_ConnectorIdIsSet;
}

void ConnectorSyncSettingsDto::unsetConnectorId()
{
    m_ConnectorIdIsSet = false;
}
bool ConnectorSyncSettingsDto::isSyncEnabled() const
{
    return m_SyncEnabled;
}

void ConnectorSyncSettingsDto::setSyncEnabled(bool value)
{
    m_SyncEnabled = value;
    m_SyncEnabledIsSet = true;
}

bool ConnectorSyncSettingsDto::syncEnabledIsSet() const
{
    return m_SyncEnabledIsSet;
}

void ConnectorSyncSettingsDto::unsetSyncEnabled()
{
    m_SyncEnabledIsSet = false;
}
utility::string_t ConnectorSyncSettingsDto::getSyncScheduleType() const
{
    return m_SyncScheduleType;
}

void ConnectorSyncSettingsDto::setSyncScheduleType(const utility::string_t& value)
{
    m_SyncScheduleType = value;
    m_SyncScheduleTypeIsSet = true;
}

bool ConnectorSyncSettingsDto::syncScheduleTypeIsSet() const
{
    return m_SyncScheduleTypeIsSet;
}

void ConnectorSyncSettingsDto::unsetSyncScheduleType()
{
    m_SyncScheduleTypeIsSet = false;
}
int32_t ConnectorSyncSettingsDto::getSyncInterval() const
{
    return m_SyncInterval;
}

void ConnectorSyncSettingsDto::setSyncInterval(int32_t value)
{
    m_SyncInterval = value;
    m_SyncIntervalIsSet = true;
}

bool ConnectorSyncSettingsDto::syncIntervalIsSet() const
{
    return m_SyncIntervalIsSet;
}

void ConnectorSyncSettingsDto::unsetSyncInterval()
{
    m_SyncIntervalIsSet = false;
}
}
}
}
}


