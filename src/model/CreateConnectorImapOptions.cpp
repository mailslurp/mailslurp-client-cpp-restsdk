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



#include "CppRestOpenAPIClient/model/CreateConnectorImapOptions.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



CreateConnectorImapOptions::CreateConnectorImapOptions()
{
    m_Host = utility::conversions::to_string_t("");
    m_HostIsSet = false;
    m_Port = 0;
    m_PortIsSet = false;
    m_Username = utility::conversions::to_string_t("");
    m_UsernameIsSet = false;
    m_Password = utility::conversions::to_string_t("");
    m_PasswordIsSet = false;
    m_UseSSL = false;
    m_UseSSLIsSet = false;
}

CreateConnectorImapOptions::~CreateConnectorImapOptions()
{
}

void CreateConnectorImapOptions::validate()
{
    // TODO: implement validation
}

web::json::value CreateConnectorImapOptions::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_HostIsSet)
    {
        val[utility::conversions::to_string_t(U("host"))] = ModelBase::toJson(m_Host);
    }
    if(m_PortIsSet)
    {
        val[utility::conversions::to_string_t(U("port"))] = ModelBase::toJson(m_Port);
    }
    if(m_UsernameIsSet)
    {
        val[utility::conversions::to_string_t(U("username"))] = ModelBase::toJson(m_Username);
    }
    if(m_PasswordIsSet)
    {
        val[utility::conversions::to_string_t(U("password"))] = ModelBase::toJson(m_Password);
    }
    if(m_UseSSLIsSet)
    {
        val[utility::conversions::to_string_t(U("useSSL"))] = ModelBase::toJson(m_UseSSL);
    }

    return val;
}

bool CreateConnectorImapOptions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("host"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("host")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setHost;
            ok &= ModelBase::fromJson(fieldValue, refVal_setHost);
            setHost(refVal_setHost);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("port"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("port")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setPort;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPort);
            setPort(refVal_setPort);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("username"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("username")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setUsername;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUsername);
            setUsername(refVal_setUsername);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("password"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("password")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setPassword;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPassword);
            setPassword(refVal_setPassword);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("useSSL"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("useSSL")));
        if(!fieldValue.is_null())
        {
            bool refVal_setUseSSL;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUseSSL);
            setUseSSL(refVal_setUseSSL);
        }
    }
    return ok;
}

void CreateConnectorImapOptions::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_HostIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("host")), m_Host));
    }
    if(m_PortIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("port")), m_Port));
    }
    if(m_UsernameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("username")), m_Username));
    }
    if(m_PasswordIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("password")), m_Password));
    }
    if(m_UseSSLIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("useSSL")), m_UseSSL));
    }
}

bool CreateConnectorImapOptions::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("host"))))
    {
        utility::string_t refVal_setHost;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("host"))), refVal_setHost );
        setHost(refVal_setHost);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("port"))))
    {
        int32_t refVal_setPort;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("port"))), refVal_setPort );
        setPort(refVal_setPort);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("username"))))
    {
        utility::string_t refVal_setUsername;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("username"))), refVal_setUsername );
        setUsername(refVal_setUsername);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("password"))))
    {
        utility::string_t refVal_setPassword;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("password"))), refVal_setPassword );
        setPassword(refVal_setPassword);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("useSSL"))))
    {
        bool refVal_setUseSSL;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("useSSL"))), refVal_setUseSSL );
        setUseSSL(refVal_setUseSSL);
    }
    return ok;
}

utility::string_t CreateConnectorImapOptions::getHost() const
{
    return m_Host;
}

void CreateConnectorImapOptions::setHost(const utility::string_t& value)
{
    m_Host = value;
    m_HostIsSet = true;
}

bool CreateConnectorImapOptions::hostIsSet() const
{
    return m_HostIsSet;
}

void CreateConnectorImapOptions::unsetHost()
{
    m_HostIsSet = false;
}
int32_t CreateConnectorImapOptions::getPort() const
{
    return m_Port;
}

void CreateConnectorImapOptions::setPort(int32_t value)
{
    m_Port = value;
    m_PortIsSet = true;
}

bool CreateConnectorImapOptions::portIsSet() const
{
    return m_PortIsSet;
}

void CreateConnectorImapOptions::unsetPort()
{
    m_PortIsSet = false;
}
utility::string_t CreateConnectorImapOptions::getUsername() const
{
    return m_Username;
}

void CreateConnectorImapOptions::setUsername(const utility::string_t& value)
{
    m_Username = value;
    m_UsernameIsSet = true;
}

bool CreateConnectorImapOptions::usernameIsSet() const
{
    return m_UsernameIsSet;
}

void CreateConnectorImapOptions::unsetUsername()
{
    m_UsernameIsSet = false;
}
utility::string_t CreateConnectorImapOptions::getPassword() const
{
    return m_Password;
}

void CreateConnectorImapOptions::setPassword(const utility::string_t& value)
{
    m_Password = value;
    m_PasswordIsSet = true;
}

bool CreateConnectorImapOptions::passwordIsSet() const
{
    return m_PasswordIsSet;
}

void CreateConnectorImapOptions::unsetPassword()
{
    m_PasswordIsSet = false;
}
bool CreateConnectorImapOptions::isUseSSL() const
{
    return m_UseSSL;
}

void CreateConnectorImapOptions::setUseSSL(bool value)
{
    m_UseSSL = value;
    m_UseSSLIsSet = true;
}

bool CreateConnectorImapOptions::useSSLIsSet() const
{
    return m_UseSSLIsSet;
}

void CreateConnectorImapOptions::unsetUseSSL()
{
    m_UseSSLIsSet = false;
}
}
}
}
}


