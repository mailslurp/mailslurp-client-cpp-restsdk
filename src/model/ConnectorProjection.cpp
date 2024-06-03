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



#include "CppRestOpenAPIClient/model/ConnectorProjection.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



ConnectorProjection::ConnectorProjection()
{
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
    m_Enabled = false;
    m_EnabledIsSet = false;
    m_InboxId = utility::conversions::to_string_t("");
    m_InboxIdIsSet = false;
    m_EmailAddress = utility::conversions::to_string_t("");
    m_EmailAddressIsSet = false;
    m_UserId = utility::conversions::to_string_t("");
    m_UserIdIsSet = false;
    m_SyncEnabled = false;
    m_SyncEnabledIsSet = false;
    m_SyncScheduleType = utility::conversions::to_string_t("");
    m_SyncScheduleTypeIsSet = false;
    m_SyncInterval = 0;
    m_SyncIntervalIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
}

ConnectorProjection::~ConnectorProjection()
{
}

void ConnectorProjection::validate()
{
    // TODO: implement validation
}

web::json::value ConnectorProjection::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t(U("createdAt"))] = ModelBase::toJson(m_CreatedAt);
    }
    if(m_EnabledIsSet)
    {
        val[utility::conversions::to_string_t(U("enabled"))] = ModelBase::toJson(m_Enabled);
    }
    if(m_InboxIdIsSet)
    {
        val[utility::conversions::to_string_t(U("inboxId"))] = ModelBase::toJson(m_InboxId);
    }
    if(m_EmailAddressIsSet)
    {
        val[utility::conversions::to_string_t(U("emailAddress"))] = ModelBase::toJson(m_EmailAddress);
    }
    if(m_UserIdIsSet)
    {
        val[utility::conversions::to_string_t(U("userId"))] = ModelBase::toJson(m_UserId);
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
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }

    return val;
}

bool ConnectorProjection::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("createdAt"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("createdAt")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setCreatedAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCreatedAt);
            setCreatedAt(refVal_setCreatedAt);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("enabled"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("enabled")));
        if(!fieldValue.is_null())
        {
            bool refVal_setEnabled;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEnabled);
            setEnabled(refVal_setEnabled);
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
    if(val.has_field(utility::conversions::to_string_t(U("emailAddress"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("emailAddress")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setEmailAddress;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEmailAddress);
            setEmailAddress(refVal_setEmailAddress);
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
    if(val.has_field(utility::conversions::to_string_t(U("name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setName);
            setName(refVal_setName);
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
    return ok;
}

void ConnectorProjection::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("createdAt")), m_CreatedAt));
    }
    if(m_EnabledIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("enabled")), m_Enabled));
    }
    if(m_InboxIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("inboxId")), m_InboxId));
    }
    if(m_EmailAddressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("emailAddress")), m_EmailAddress));
    }
    if(m_UserIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("userId")), m_UserId));
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
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_Id));
    }
}

bool ConnectorProjection::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("createdAt"))))
    {
        utility::datetime refVal_setCreatedAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("createdAt"))), refVal_setCreatedAt );
        setCreatedAt(refVal_setCreatedAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("enabled"))))
    {
        bool refVal_setEnabled;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("enabled"))), refVal_setEnabled );
        setEnabled(refVal_setEnabled);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("inboxId"))))
    {
        utility::string_t refVal_setInboxId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("inboxId"))), refVal_setInboxId );
        setInboxId(refVal_setInboxId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("emailAddress"))))
    {
        utility::string_t refVal_setEmailAddress;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("emailAddress"))), refVal_setEmailAddress );
        setEmailAddress(refVal_setEmailAddress);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("userId"))))
    {
        utility::string_t refVal_setUserId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("userId"))), refVal_setUserId );
        setUserId(refVal_setUserId);
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_setId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_setId );
        setId(refVal_setId);
    }
    return ok;
}

utility::datetime ConnectorProjection::getCreatedAt() const
{
    return m_CreatedAt;
}

void ConnectorProjection::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool ConnectorProjection::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void ConnectorProjection::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
bool ConnectorProjection::isEnabled() const
{
    return m_Enabled;
}

void ConnectorProjection::setEnabled(bool value)
{
    m_Enabled = value;
    m_EnabledIsSet = true;
}

bool ConnectorProjection::enabledIsSet() const
{
    return m_EnabledIsSet;
}

void ConnectorProjection::unsetEnabled()
{
    m_EnabledIsSet = false;
}
utility::string_t ConnectorProjection::getInboxId() const
{
    return m_InboxId;
}

void ConnectorProjection::setInboxId(const utility::string_t& value)
{
    m_InboxId = value;
    m_InboxIdIsSet = true;
}

bool ConnectorProjection::inboxIdIsSet() const
{
    return m_InboxIdIsSet;
}

void ConnectorProjection::unsetInboxId()
{
    m_InboxIdIsSet = false;
}
utility::string_t ConnectorProjection::getEmailAddress() const
{
    return m_EmailAddress;
}

void ConnectorProjection::setEmailAddress(const utility::string_t& value)
{
    m_EmailAddress = value;
    m_EmailAddressIsSet = true;
}

bool ConnectorProjection::emailAddressIsSet() const
{
    return m_EmailAddressIsSet;
}

void ConnectorProjection::unsetEmailAddress()
{
    m_EmailAddressIsSet = false;
}
utility::string_t ConnectorProjection::getUserId() const
{
    return m_UserId;
}

void ConnectorProjection::setUserId(const utility::string_t& value)
{
    m_UserId = value;
    m_UserIdIsSet = true;
}

bool ConnectorProjection::userIdIsSet() const
{
    return m_UserIdIsSet;
}

void ConnectorProjection::unsetUserId()
{
    m_UserIdIsSet = false;
}
bool ConnectorProjection::isSyncEnabled() const
{
    return m_SyncEnabled;
}

void ConnectorProjection::setSyncEnabled(bool value)
{
    m_SyncEnabled = value;
    m_SyncEnabledIsSet = true;
}

bool ConnectorProjection::syncEnabledIsSet() const
{
    return m_SyncEnabledIsSet;
}

void ConnectorProjection::unsetSyncEnabled()
{
    m_SyncEnabledIsSet = false;
}
utility::string_t ConnectorProjection::getSyncScheduleType() const
{
    return m_SyncScheduleType;
}

void ConnectorProjection::setSyncScheduleType(const utility::string_t& value)
{
    m_SyncScheduleType = value;
    m_SyncScheduleTypeIsSet = true;
}

bool ConnectorProjection::syncScheduleTypeIsSet() const
{
    return m_SyncScheduleTypeIsSet;
}

void ConnectorProjection::unsetSyncScheduleType()
{
    m_SyncScheduleTypeIsSet = false;
}
int32_t ConnectorProjection::getSyncInterval() const
{
    return m_SyncInterval;
}

void ConnectorProjection::setSyncInterval(int32_t value)
{
    m_SyncInterval = value;
    m_SyncIntervalIsSet = true;
}

bool ConnectorProjection::syncIntervalIsSet() const
{
    return m_SyncIntervalIsSet;
}

void ConnectorProjection::unsetSyncInterval()
{
    m_SyncIntervalIsSet = false;
}
utility::string_t ConnectorProjection::getName() const
{
    return m_Name;
}

void ConnectorProjection::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool ConnectorProjection::nameIsSet() const
{
    return m_NameIsSet;
}

void ConnectorProjection::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t ConnectorProjection::getId() const
{
    return m_Id;
}

void ConnectorProjection::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool ConnectorProjection::idIsSet() const
{
    return m_IdIsSet;
}

void ConnectorProjection::unsetId()
{
    m_IdIsSet = false;
}
}
}
}
}


