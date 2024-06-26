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



#include "CppRestOpenAPIClient/model/CreateConnectorSmtpConnectionOptions.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



CreateConnectorSmtpConnectionOptions::CreateConnectorSmtpConnectionOptions()
{
    m_Enabled = false;
    m_EnabledIsSet = false;
    m_SmtpHost = utility::conversions::to_string_t("");
    m_SmtpHostIsSet = false;
    m_SmtpPort = 0;
    m_SmtpPortIsSet = false;
    m_SmtpSsl = false;
    m_SmtpSslIsSet = false;
    m_SmtpUsername = utility::conversions::to_string_t("");
    m_SmtpUsernameIsSet = false;
    m_SmtpPassword = utility::conversions::to_string_t("");
    m_SmtpPasswordIsSet = false;
}

CreateConnectorSmtpConnectionOptions::~CreateConnectorSmtpConnectionOptions()
{
}

void CreateConnectorSmtpConnectionOptions::validate()
{
    // TODO: implement validation
}

web::json::value CreateConnectorSmtpConnectionOptions::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_EnabledIsSet)
    {
        val[utility::conversions::to_string_t(U("enabled"))] = ModelBase::toJson(m_Enabled);
    }
    if(m_SmtpHostIsSet)
    {
        val[utility::conversions::to_string_t(U("smtpHost"))] = ModelBase::toJson(m_SmtpHost);
    }
    if(m_SmtpPortIsSet)
    {
        val[utility::conversions::to_string_t(U("smtpPort"))] = ModelBase::toJson(m_SmtpPort);
    }
    if(m_SmtpSslIsSet)
    {
        val[utility::conversions::to_string_t(U("smtpSsl"))] = ModelBase::toJson(m_SmtpSsl);
    }
    if(m_SmtpUsernameIsSet)
    {
        val[utility::conversions::to_string_t(U("smtpUsername"))] = ModelBase::toJson(m_SmtpUsername);
    }
    if(m_SmtpPasswordIsSet)
    {
        val[utility::conversions::to_string_t(U("smtpPassword"))] = ModelBase::toJson(m_SmtpPassword);
    }

    return val;
}

bool CreateConnectorSmtpConnectionOptions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t(U("smtpHost"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("smtpHost")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSmtpHost;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSmtpHost);
            setSmtpHost(refVal_setSmtpHost);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("smtpPort"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("smtpPort")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setSmtpPort;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSmtpPort);
            setSmtpPort(refVal_setSmtpPort);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("smtpSsl"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("smtpSsl")));
        if(!fieldValue.is_null())
        {
            bool refVal_setSmtpSsl;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSmtpSsl);
            setSmtpSsl(refVal_setSmtpSsl);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("smtpUsername"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("smtpUsername")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSmtpUsername;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSmtpUsername);
            setSmtpUsername(refVal_setSmtpUsername);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("smtpPassword"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("smtpPassword")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSmtpPassword;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSmtpPassword);
            setSmtpPassword(refVal_setSmtpPassword);
        }
    }
    return ok;
}

void CreateConnectorSmtpConnectionOptions::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_EnabledIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("enabled")), m_Enabled));
    }
    if(m_SmtpHostIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("smtpHost")), m_SmtpHost));
    }
    if(m_SmtpPortIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("smtpPort")), m_SmtpPort));
    }
    if(m_SmtpSslIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("smtpSsl")), m_SmtpSsl));
    }
    if(m_SmtpUsernameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("smtpUsername")), m_SmtpUsername));
    }
    if(m_SmtpPasswordIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("smtpPassword")), m_SmtpPassword));
    }
}

bool CreateConnectorSmtpConnectionOptions::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("enabled"))))
    {
        bool refVal_setEnabled;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("enabled"))), refVal_setEnabled );
        setEnabled(refVal_setEnabled);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("smtpHost"))))
    {
        utility::string_t refVal_setSmtpHost;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("smtpHost"))), refVal_setSmtpHost );
        setSmtpHost(refVal_setSmtpHost);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("smtpPort"))))
    {
        int32_t refVal_setSmtpPort;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("smtpPort"))), refVal_setSmtpPort );
        setSmtpPort(refVal_setSmtpPort);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("smtpSsl"))))
    {
        bool refVal_setSmtpSsl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("smtpSsl"))), refVal_setSmtpSsl );
        setSmtpSsl(refVal_setSmtpSsl);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("smtpUsername"))))
    {
        utility::string_t refVal_setSmtpUsername;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("smtpUsername"))), refVal_setSmtpUsername );
        setSmtpUsername(refVal_setSmtpUsername);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("smtpPassword"))))
    {
        utility::string_t refVal_setSmtpPassword;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("smtpPassword"))), refVal_setSmtpPassword );
        setSmtpPassword(refVal_setSmtpPassword);
    }
    return ok;
}

bool CreateConnectorSmtpConnectionOptions::isEnabled() const
{
    return m_Enabled;
}

void CreateConnectorSmtpConnectionOptions::setEnabled(bool value)
{
    m_Enabled = value;
    m_EnabledIsSet = true;
}

bool CreateConnectorSmtpConnectionOptions::enabledIsSet() const
{
    return m_EnabledIsSet;
}

void CreateConnectorSmtpConnectionOptions::unsetEnabled()
{
    m_EnabledIsSet = false;
}
utility::string_t CreateConnectorSmtpConnectionOptions::getSmtpHost() const
{
    return m_SmtpHost;
}

void CreateConnectorSmtpConnectionOptions::setSmtpHost(const utility::string_t& value)
{
    m_SmtpHost = value;
    m_SmtpHostIsSet = true;
}

bool CreateConnectorSmtpConnectionOptions::smtpHostIsSet() const
{
    return m_SmtpHostIsSet;
}

void CreateConnectorSmtpConnectionOptions::unsetSmtpHost()
{
    m_SmtpHostIsSet = false;
}
int32_t CreateConnectorSmtpConnectionOptions::getSmtpPort() const
{
    return m_SmtpPort;
}

void CreateConnectorSmtpConnectionOptions::setSmtpPort(int32_t value)
{
    m_SmtpPort = value;
    m_SmtpPortIsSet = true;
}

bool CreateConnectorSmtpConnectionOptions::smtpPortIsSet() const
{
    return m_SmtpPortIsSet;
}

void CreateConnectorSmtpConnectionOptions::unsetSmtpPort()
{
    m_SmtpPortIsSet = false;
}
bool CreateConnectorSmtpConnectionOptions::isSmtpSsl() const
{
    return m_SmtpSsl;
}

void CreateConnectorSmtpConnectionOptions::setSmtpSsl(bool value)
{
    m_SmtpSsl = value;
    m_SmtpSslIsSet = true;
}

bool CreateConnectorSmtpConnectionOptions::smtpSslIsSet() const
{
    return m_SmtpSslIsSet;
}

void CreateConnectorSmtpConnectionOptions::unsetSmtpSsl()
{
    m_SmtpSslIsSet = false;
}
utility::string_t CreateConnectorSmtpConnectionOptions::getSmtpUsername() const
{
    return m_SmtpUsername;
}

void CreateConnectorSmtpConnectionOptions::setSmtpUsername(const utility::string_t& value)
{
    m_SmtpUsername = value;
    m_SmtpUsernameIsSet = true;
}

bool CreateConnectorSmtpConnectionOptions::smtpUsernameIsSet() const
{
    return m_SmtpUsernameIsSet;
}

void CreateConnectorSmtpConnectionOptions::unsetSmtpUsername()
{
    m_SmtpUsernameIsSet = false;
}
utility::string_t CreateConnectorSmtpConnectionOptions::getSmtpPassword() const
{
    return m_SmtpPassword;
}

void CreateConnectorSmtpConnectionOptions::setSmtpPassword(const utility::string_t& value)
{
    m_SmtpPassword = value;
    m_SmtpPasswordIsSet = true;
}

bool CreateConnectorSmtpConnectionOptions::smtpPasswordIsSet() const
{
    return m_SmtpPasswordIsSet;
}

void CreateConnectorSmtpConnectionOptions::unsetSmtpPassword()
{
    m_SmtpPasswordIsSet = false;
}
}
}
}
}


