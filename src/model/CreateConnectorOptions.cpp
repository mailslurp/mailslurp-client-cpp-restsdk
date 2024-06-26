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



#include "CppRestOpenAPIClient/model/CreateConnectorOptions.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



CreateConnectorOptions::CreateConnectorOptions()
{
    m_SyncEnabled = false;
    m_SyncEnabledIsSet = false;
    m_SyncScheduleType = utility::conversions::to_string_t("");
    m_SyncScheduleTypeIsSet = false;
    m_SyncInterval = 0;
    m_SyncIntervalIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_EmailAddress = utility::conversions::to_string_t("");
    m_EmailAddressIsSet = false;
    m_Enabled = false;
    m_EnabledIsSet = false;
}

CreateConnectorOptions::~CreateConnectorOptions()
{
}

void CreateConnectorOptions::validate()
{
    // TODO: implement validation
}

web::json::value CreateConnectorOptions::toJson() const
{

    web::json::value val = web::json::value::object();
    
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
    if(m_EmailAddressIsSet)
    {
        val[utility::conversions::to_string_t(U("emailAddress"))] = ModelBase::toJson(m_EmailAddress);
    }
    if(m_EnabledIsSet)
    {
        val[utility::conversions::to_string_t(U("enabled"))] = ModelBase::toJson(m_Enabled);
    }

    return val;
}

bool CreateConnectorOptions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    return ok;
}

void CreateConnectorOptions::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
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
    if(m_EmailAddressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("emailAddress")), m_EmailAddress));
    }
    if(m_EnabledIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("enabled")), m_Enabled));
    }
}

bool CreateConnectorOptions::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("emailAddress"))))
    {
        utility::string_t refVal_setEmailAddress;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("emailAddress"))), refVal_setEmailAddress );
        setEmailAddress(refVal_setEmailAddress);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("enabled"))))
    {
        bool refVal_setEnabled;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("enabled"))), refVal_setEnabled );
        setEnabled(refVal_setEnabled);
    }
    return ok;
}

bool CreateConnectorOptions::isSyncEnabled() const
{
    return m_SyncEnabled;
}

void CreateConnectorOptions::setSyncEnabled(bool value)
{
    m_SyncEnabled = value;
    m_SyncEnabledIsSet = true;
}

bool CreateConnectorOptions::syncEnabledIsSet() const
{
    return m_SyncEnabledIsSet;
}

void CreateConnectorOptions::unsetSyncEnabled()
{
    m_SyncEnabledIsSet = false;
}
utility::string_t CreateConnectorOptions::getSyncScheduleType() const
{
    return m_SyncScheduleType;
}

void CreateConnectorOptions::setSyncScheduleType(const utility::string_t& value)
{
    m_SyncScheduleType = value;
    m_SyncScheduleTypeIsSet = true;
}

bool CreateConnectorOptions::syncScheduleTypeIsSet() const
{
    return m_SyncScheduleTypeIsSet;
}

void CreateConnectorOptions::unsetSyncScheduleType()
{
    m_SyncScheduleTypeIsSet = false;
}
int32_t CreateConnectorOptions::getSyncInterval() const
{
    return m_SyncInterval;
}

void CreateConnectorOptions::setSyncInterval(int32_t value)
{
    m_SyncInterval = value;
    m_SyncIntervalIsSet = true;
}

bool CreateConnectorOptions::syncIntervalIsSet() const
{
    return m_SyncIntervalIsSet;
}

void CreateConnectorOptions::unsetSyncInterval()
{
    m_SyncIntervalIsSet = false;
}
utility::string_t CreateConnectorOptions::getName() const
{
    return m_Name;
}

void CreateConnectorOptions::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool CreateConnectorOptions::nameIsSet() const
{
    return m_NameIsSet;
}

void CreateConnectorOptions::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t CreateConnectorOptions::getEmailAddress() const
{
    return m_EmailAddress;
}

void CreateConnectorOptions::setEmailAddress(const utility::string_t& value)
{
    m_EmailAddress = value;
    m_EmailAddressIsSet = true;
}

bool CreateConnectorOptions::emailAddressIsSet() const
{
    return m_EmailAddressIsSet;
}

void CreateConnectorOptions::unsetEmailAddress()
{
    m_EmailAddressIsSet = false;
}
bool CreateConnectorOptions::isEnabled() const
{
    return m_Enabled;
}

void CreateConnectorOptions::setEnabled(bool value)
{
    m_Enabled = value;
    m_EnabledIsSet = true;
}

bool CreateConnectorOptions::enabledIsSet() const
{
    return m_EnabledIsSet;
}

void CreateConnectorOptions::unsetEnabled()
{
    m_EnabledIsSet = false;
}
}
}
}
}


