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



#include "CppRestOpenAPIClient/model/ConnectorDto.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



ConnectorDto::ConnectorDto()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_UserId = utility::conversions::to_string_t("");
    m_UserIdIsSet = false;
    m_ConnectorType = utility::conversions::to_string_t("");
    m_ConnectorTypeIsSet = false;
    m_ConnectorAuthType = utility::conversions::to_string_t("");
    m_ConnectorAuthTypeIsSet = false;
    m_SyncEnabled = false;
    m_SyncEnabledIsSet = false;
    m_SyncScheduleType = utility::conversions::to_string_t("");
    m_SyncScheduleTypeIsSet = false;
    m_SyncInterval = 0;
    m_SyncIntervalIsSet = false;
    m_ImapHost = utility::conversions::to_string_t("");
    m_ImapHostIsSet = false;
    m_ImapPort = 0;
    m_ImapPortIsSet = false;
    m_ImapUsername = utility::conversions::to_string_t("");
    m_ImapUsernameIsSet = false;
    m_ImapPassword = utility::conversions::to_string_t("");
    m_ImapPasswordIsSet = false;
    m_ImapSsl = false;
    m_ImapSslIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
}

ConnectorDto::~ConnectorDto()
{
}

void ConnectorDto::validate()
{
    // TODO: implement validation
}

web::json::value ConnectorDto::toJson() const
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
    if(m_ConnectorTypeIsSet)
    {
        val[utility::conversions::to_string_t(U("connectorType"))] = ModelBase::toJson(m_ConnectorType);
    }
    if(m_ConnectorAuthTypeIsSet)
    {
        val[utility::conversions::to_string_t(U("connectorAuthType"))] = ModelBase::toJson(m_ConnectorAuthType);
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
    if(m_ImapHostIsSet)
    {
        val[utility::conversions::to_string_t(U("imapHost"))] = ModelBase::toJson(m_ImapHost);
    }
    if(m_ImapPortIsSet)
    {
        val[utility::conversions::to_string_t(U("imapPort"))] = ModelBase::toJson(m_ImapPort);
    }
    if(m_ImapUsernameIsSet)
    {
        val[utility::conversions::to_string_t(U("imapUsername"))] = ModelBase::toJson(m_ImapUsername);
    }
    if(m_ImapPasswordIsSet)
    {
        val[utility::conversions::to_string_t(U("imapPassword"))] = ModelBase::toJson(m_ImapPassword);
    }
    if(m_ImapSslIsSet)
    {
        val[utility::conversions::to_string_t(U("imapSsl"))] = ModelBase::toJson(m_ImapSsl);
    }
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t(U("createdAt"))] = ModelBase::toJson(m_CreatedAt);
    }

    return val;
}

bool ConnectorDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("connectorType"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("connectorType")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setConnectorType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setConnectorType);
            setConnectorType(refVal_setConnectorType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("connectorAuthType"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("connectorAuthType")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setConnectorAuthType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setConnectorAuthType);
            setConnectorAuthType(refVal_setConnectorAuthType);
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
    if(val.has_field(utility::conversions::to_string_t(U("imapHost"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("imapHost")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setImapHost;
            ok &= ModelBase::fromJson(fieldValue, refVal_setImapHost);
            setImapHost(refVal_setImapHost);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("imapPort"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("imapPort")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setImapPort;
            ok &= ModelBase::fromJson(fieldValue, refVal_setImapPort);
            setImapPort(refVal_setImapPort);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("imapUsername"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("imapUsername")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setImapUsername;
            ok &= ModelBase::fromJson(fieldValue, refVal_setImapUsername);
            setImapUsername(refVal_setImapUsername);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("imapPassword"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("imapPassword")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setImapPassword;
            ok &= ModelBase::fromJson(fieldValue, refVal_setImapPassword);
            setImapPassword(refVal_setImapPassword);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("imapSsl"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("imapSsl")));
        if(!fieldValue.is_null())
        {
            bool refVal_setImapSsl;
            ok &= ModelBase::fromJson(fieldValue, refVal_setImapSsl);
            setImapSsl(refVal_setImapSsl);
        }
    }
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
    return ok;
}

void ConnectorDto::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_ConnectorTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("connectorType")), m_ConnectorType));
    }
    if(m_ConnectorAuthTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("connectorAuthType")), m_ConnectorAuthType));
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
    if(m_ImapHostIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("imapHost")), m_ImapHost));
    }
    if(m_ImapPortIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("imapPort")), m_ImapPort));
    }
    if(m_ImapUsernameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("imapUsername")), m_ImapUsername));
    }
    if(m_ImapPasswordIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("imapPassword")), m_ImapPassword));
    }
    if(m_ImapSslIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("imapSsl")), m_ImapSsl));
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("createdAt")), m_CreatedAt));
    }
}

bool ConnectorDto::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("connectorType"))))
    {
        utility::string_t refVal_setConnectorType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("connectorType"))), refVal_setConnectorType );
        setConnectorType(refVal_setConnectorType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("connectorAuthType"))))
    {
        utility::string_t refVal_setConnectorAuthType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("connectorAuthType"))), refVal_setConnectorAuthType );
        setConnectorAuthType(refVal_setConnectorAuthType);
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("imapHost"))))
    {
        utility::string_t refVal_setImapHost;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("imapHost"))), refVal_setImapHost );
        setImapHost(refVal_setImapHost);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("imapPort"))))
    {
        int32_t refVal_setImapPort;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("imapPort"))), refVal_setImapPort );
        setImapPort(refVal_setImapPort);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("imapUsername"))))
    {
        utility::string_t refVal_setImapUsername;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("imapUsername"))), refVal_setImapUsername );
        setImapUsername(refVal_setImapUsername);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("imapPassword"))))
    {
        utility::string_t refVal_setImapPassword;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("imapPassword"))), refVal_setImapPassword );
        setImapPassword(refVal_setImapPassword);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("imapSsl"))))
    {
        bool refVal_setImapSsl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("imapSsl"))), refVal_setImapSsl );
        setImapSsl(refVal_setImapSsl);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("createdAt"))))
    {
        utility::datetime refVal_setCreatedAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("createdAt"))), refVal_setCreatedAt );
        setCreatedAt(refVal_setCreatedAt);
    }
    return ok;
}

utility::string_t ConnectorDto::getId() const
{
    return m_Id;
}

void ConnectorDto::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool ConnectorDto::idIsSet() const
{
    return m_IdIsSet;
}

void ConnectorDto::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t ConnectorDto::getUserId() const
{
    return m_UserId;
}

void ConnectorDto::setUserId(const utility::string_t& value)
{
    m_UserId = value;
    m_UserIdIsSet = true;
}

bool ConnectorDto::userIdIsSet() const
{
    return m_UserIdIsSet;
}

void ConnectorDto::unsetUserId()
{
    m_UserIdIsSet = false;
}
utility::string_t ConnectorDto::getConnectorType() const
{
    return m_ConnectorType;
}

void ConnectorDto::setConnectorType(const utility::string_t& value)
{
    m_ConnectorType = value;
    m_ConnectorTypeIsSet = true;
}

bool ConnectorDto::connectorTypeIsSet() const
{
    return m_ConnectorTypeIsSet;
}

void ConnectorDto::unsetConnectorType()
{
    m_ConnectorTypeIsSet = false;
}
utility::string_t ConnectorDto::getConnectorAuthType() const
{
    return m_ConnectorAuthType;
}

void ConnectorDto::setConnectorAuthType(const utility::string_t& value)
{
    m_ConnectorAuthType = value;
    m_ConnectorAuthTypeIsSet = true;
}

bool ConnectorDto::connectorAuthTypeIsSet() const
{
    return m_ConnectorAuthTypeIsSet;
}

void ConnectorDto::unsetConnectorAuthType()
{
    m_ConnectorAuthTypeIsSet = false;
}
bool ConnectorDto::isSyncEnabled() const
{
    return m_SyncEnabled;
}

void ConnectorDto::setSyncEnabled(bool value)
{
    m_SyncEnabled = value;
    m_SyncEnabledIsSet = true;
}

bool ConnectorDto::syncEnabledIsSet() const
{
    return m_SyncEnabledIsSet;
}

void ConnectorDto::unsetSyncEnabled()
{
    m_SyncEnabledIsSet = false;
}
utility::string_t ConnectorDto::getSyncScheduleType() const
{
    return m_SyncScheduleType;
}

void ConnectorDto::setSyncScheduleType(const utility::string_t& value)
{
    m_SyncScheduleType = value;
    m_SyncScheduleTypeIsSet = true;
}

bool ConnectorDto::syncScheduleTypeIsSet() const
{
    return m_SyncScheduleTypeIsSet;
}

void ConnectorDto::unsetSyncScheduleType()
{
    m_SyncScheduleTypeIsSet = false;
}
int32_t ConnectorDto::getSyncInterval() const
{
    return m_SyncInterval;
}

void ConnectorDto::setSyncInterval(int32_t value)
{
    m_SyncInterval = value;
    m_SyncIntervalIsSet = true;
}

bool ConnectorDto::syncIntervalIsSet() const
{
    return m_SyncIntervalIsSet;
}

void ConnectorDto::unsetSyncInterval()
{
    m_SyncIntervalIsSet = false;
}
utility::string_t ConnectorDto::getImapHost() const
{
    return m_ImapHost;
}

void ConnectorDto::setImapHost(const utility::string_t& value)
{
    m_ImapHost = value;
    m_ImapHostIsSet = true;
}

bool ConnectorDto::imapHostIsSet() const
{
    return m_ImapHostIsSet;
}

void ConnectorDto::unsetImapHost()
{
    m_ImapHostIsSet = false;
}
int32_t ConnectorDto::getImapPort() const
{
    return m_ImapPort;
}

void ConnectorDto::setImapPort(int32_t value)
{
    m_ImapPort = value;
    m_ImapPortIsSet = true;
}

bool ConnectorDto::imapPortIsSet() const
{
    return m_ImapPortIsSet;
}

void ConnectorDto::unsetImapPort()
{
    m_ImapPortIsSet = false;
}
utility::string_t ConnectorDto::getImapUsername() const
{
    return m_ImapUsername;
}

void ConnectorDto::setImapUsername(const utility::string_t& value)
{
    m_ImapUsername = value;
    m_ImapUsernameIsSet = true;
}

bool ConnectorDto::imapUsernameIsSet() const
{
    return m_ImapUsernameIsSet;
}

void ConnectorDto::unsetImapUsername()
{
    m_ImapUsernameIsSet = false;
}
utility::string_t ConnectorDto::getImapPassword() const
{
    return m_ImapPassword;
}

void ConnectorDto::setImapPassword(const utility::string_t& value)
{
    m_ImapPassword = value;
    m_ImapPasswordIsSet = true;
}

bool ConnectorDto::imapPasswordIsSet() const
{
    return m_ImapPasswordIsSet;
}

void ConnectorDto::unsetImapPassword()
{
    m_ImapPasswordIsSet = false;
}
bool ConnectorDto::isImapSsl() const
{
    return m_ImapSsl;
}

void ConnectorDto::setImapSsl(bool value)
{
    m_ImapSsl = value;
    m_ImapSslIsSet = true;
}

bool ConnectorDto::imapSslIsSet() const
{
    return m_ImapSslIsSet;
}

void ConnectorDto::unsetImapSsl()
{
    m_ImapSslIsSet = false;
}
utility::datetime ConnectorDto::getCreatedAt() const
{
    return m_CreatedAt;
}

void ConnectorDto::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool ConnectorDto::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void ConnectorDto::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
}
}
}
}

