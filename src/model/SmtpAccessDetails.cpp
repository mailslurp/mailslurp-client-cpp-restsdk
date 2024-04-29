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



#include "CppRestOpenAPIClient/model/SmtpAccessDetails.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



SmtpAccessDetails::SmtpAccessDetails()
{
    m_SecureSmtpServerHost = utility::conversions::to_string_t("");
    m_SecureSmtpServerHostIsSet = false;
    m_SecureSmtpServerPort = 0;
    m_SecureSmtpServerPortIsSet = false;
    m_SecureSmtpUsername = utility::conversions::to_string_t("");
    m_SecureSmtpUsernameIsSet = false;
    m_SecureSmtpPassword = utility::conversions::to_string_t("");
    m_SecureSmtpPasswordIsSet = false;
    m_SmtpServerHost = utility::conversions::to_string_t("");
    m_SmtpServerHostIsSet = false;
    m_SmtpServerPort = 0;
    m_SmtpServerPortIsSet = false;
    m_SmtpUsername = utility::conversions::to_string_t("");
    m_SmtpUsernameIsSet = false;
    m_SmtpPassword = utility::conversions::to_string_t("");
    m_SmtpPasswordIsSet = false;
    m_MailFromDomain = utility::conversions::to_string_t("");
    m_MailFromDomainIsSet = false;
}

SmtpAccessDetails::~SmtpAccessDetails()
{
}

void SmtpAccessDetails::validate()
{
    // TODO: implement validation
}

web::json::value SmtpAccessDetails::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_SecureSmtpServerHostIsSet)
    {
        val[utility::conversions::to_string_t(U("secureSmtpServerHost"))] = ModelBase::toJson(m_SecureSmtpServerHost);
    }
    if(m_SecureSmtpServerPortIsSet)
    {
        val[utility::conversions::to_string_t(U("secureSmtpServerPort"))] = ModelBase::toJson(m_SecureSmtpServerPort);
    }
    if(m_SecureSmtpUsernameIsSet)
    {
        val[utility::conversions::to_string_t(U("secureSmtpUsername"))] = ModelBase::toJson(m_SecureSmtpUsername);
    }
    if(m_SecureSmtpPasswordIsSet)
    {
        val[utility::conversions::to_string_t(U("secureSmtpPassword"))] = ModelBase::toJson(m_SecureSmtpPassword);
    }
    if(m_SmtpServerHostIsSet)
    {
        val[utility::conversions::to_string_t(U("smtpServerHost"))] = ModelBase::toJson(m_SmtpServerHost);
    }
    if(m_SmtpServerPortIsSet)
    {
        val[utility::conversions::to_string_t(U("smtpServerPort"))] = ModelBase::toJson(m_SmtpServerPort);
    }
    if(m_SmtpUsernameIsSet)
    {
        val[utility::conversions::to_string_t(U("smtpUsername"))] = ModelBase::toJson(m_SmtpUsername);
    }
    if(m_SmtpPasswordIsSet)
    {
        val[utility::conversions::to_string_t(U("smtpPassword"))] = ModelBase::toJson(m_SmtpPassword);
    }
    if(m_MailFromDomainIsSet)
    {
        val[utility::conversions::to_string_t(U("mailFromDomain"))] = ModelBase::toJson(m_MailFromDomain);
    }

    return val;
}

bool SmtpAccessDetails::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("secureSmtpServerHost"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("secureSmtpServerHost")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSecureSmtpServerHost;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSecureSmtpServerHost);
            setSecureSmtpServerHost(refVal_setSecureSmtpServerHost);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("secureSmtpServerPort"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("secureSmtpServerPort")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setSecureSmtpServerPort;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSecureSmtpServerPort);
            setSecureSmtpServerPort(refVal_setSecureSmtpServerPort);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("secureSmtpUsername"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("secureSmtpUsername")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSecureSmtpUsername;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSecureSmtpUsername);
            setSecureSmtpUsername(refVal_setSecureSmtpUsername);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("secureSmtpPassword"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("secureSmtpPassword")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSecureSmtpPassword;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSecureSmtpPassword);
            setSecureSmtpPassword(refVal_setSecureSmtpPassword);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("smtpServerHost"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("smtpServerHost")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSmtpServerHost;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSmtpServerHost);
            setSmtpServerHost(refVal_setSmtpServerHost);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("smtpServerPort"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("smtpServerPort")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setSmtpServerPort;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSmtpServerPort);
            setSmtpServerPort(refVal_setSmtpServerPort);
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
    if(val.has_field(utility::conversions::to_string_t(U("mailFromDomain"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("mailFromDomain")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setMailFromDomain;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMailFromDomain);
            setMailFromDomain(refVal_setMailFromDomain);
        }
    }
    return ok;
}

void SmtpAccessDetails::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_SecureSmtpServerHostIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("secureSmtpServerHost")), m_SecureSmtpServerHost));
    }
    if(m_SecureSmtpServerPortIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("secureSmtpServerPort")), m_SecureSmtpServerPort));
    }
    if(m_SecureSmtpUsernameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("secureSmtpUsername")), m_SecureSmtpUsername));
    }
    if(m_SecureSmtpPasswordIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("secureSmtpPassword")), m_SecureSmtpPassword));
    }
    if(m_SmtpServerHostIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("smtpServerHost")), m_SmtpServerHost));
    }
    if(m_SmtpServerPortIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("smtpServerPort")), m_SmtpServerPort));
    }
    if(m_SmtpUsernameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("smtpUsername")), m_SmtpUsername));
    }
    if(m_SmtpPasswordIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("smtpPassword")), m_SmtpPassword));
    }
    if(m_MailFromDomainIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("mailFromDomain")), m_MailFromDomain));
    }
}

bool SmtpAccessDetails::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("secureSmtpServerHost"))))
    {
        utility::string_t refVal_setSecureSmtpServerHost;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("secureSmtpServerHost"))), refVal_setSecureSmtpServerHost );
        setSecureSmtpServerHost(refVal_setSecureSmtpServerHost);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("secureSmtpServerPort"))))
    {
        int32_t refVal_setSecureSmtpServerPort;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("secureSmtpServerPort"))), refVal_setSecureSmtpServerPort );
        setSecureSmtpServerPort(refVal_setSecureSmtpServerPort);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("secureSmtpUsername"))))
    {
        utility::string_t refVal_setSecureSmtpUsername;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("secureSmtpUsername"))), refVal_setSecureSmtpUsername );
        setSecureSmtpUsername(refVal_setSecureSmtpUsername);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("secureSmtpPassword"))))
    {
        utility::string_t refVal_setSecureSmtpPassword;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("secureSmtpPassword"))), refVal_setSecureSmtpPassword );
        setSecureSmtpPassword(refVal_setSecureSmtpPassword);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("smtpServerHost"))))
    {
        utility::string_t refVal_setSmtpServerHost;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("smtpServerHost"))), refVal_setSmtpServerHost );
        setSmtpServerHost(refVal_setSmtpServerHost);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("smtpServerPort"))))
    {
        int32_t refVal_setSmtpServerPort;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("smtpServerPort"))), refVal_setSmtpServerPort );
        setSmtpServerPort(refVal_setSmtpServerPort);
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("mailFromDomain"))))
    {
        utility::string_t refVal_setMailFromDomain;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("mailFromDomain"))), refVal_setMailFromDomain );
        setMailFromDomain(refVal_setMailFromDomain);
    }
    return ok;
}

utility::string_t SmtpAccessDetails::getSecureSmtpServerHost() const
{
    return m_SecureSmtpServerHost;
}

void SmtpAccessDetails::setSecureSmtpServerHost(const utility::string_t& value)
{
    m_SecureSmtpServerHost = value;
    m_SecureSmtpServerHostIsSet = true;
}

bool SmtpAccessDetails::secureSmtpServerHostIsSet() const
{
    return m_SecureSmtpServerHostIsSet;
}

void SmtpAccessDetails::unsetSecureSmtpServerHost()
{
    m_SecureSmtpServerHostIsSet = false;
}
int32_t SmtpAccessDetails::getSecureSmtpServerPort() const
{
    return m_SecureSmtpServerPort;
}

void SmtpAccessDetails::setSecureSmtpServerPort(int32_t value)
{
    m_SecureSmtpServerPort = value;
    m_SecureSmtpServerPortIsSet = true;
}

bool SmtpAccessDetails::secureSmtpServerPortIsSet() const
{
    return m_SecureSmtpServerPortIsSet;
}

void SmtpAccessDetails::unsetSecureSmtpServerPort()
{
    m_SecureSmtpServerPortIsSet = false;
}
utility::string_t SmtpAccessDetails::getSecureSmtpUsername() const
{
    return m_SecureSmtpUsername;
}

void SmtpAccessDetails::setSecureSmtpUsername(const utility::string_t& value)
{
    m_SecureSmtpUsername = value;
    m_SecureSmtpUsernameIsSet = true;
}

bool SmtpAccessDetails::secureSmtpUsernameIsSet() const
{
    return m_SecureSmtpUsernameIsSet;
}

void SmtpAccessDetails::unsetSecureSmtpUsername()
{
    m_SecureSmtpUsernameIsSet = false;
}
utility::string_t SmtpAccessDetails::getSecureSmtpPassword() const
{
    return m_SecureSmtpPassword;
}

void SmtpAccessDetails::setSecureSmtpPassword(const utility::string_t& value)
{
    m_SecureSmtpPassword = value;
    m_SecureSmtpPasswordIsSet = true;
}

bool SmtpAccessDetails::secureSmtpPasswordIsSet() const
{
    return m_SecureSmtpPasswordIsSet;
}

void SmtpAccessDetails::unsetSecureSmtpPassword()
{
    m_SecureSmtpPasswordIsSet = false;
}
utility::string_t SmtpAccessDetails::getSmtpServerHost() const
{
    return m_SmtpServerHost;
}

void SmtpAccessDetails::setSmtpServerHost(const utility::string_t& value)
{
    m_SmtpServerHost = value;
    m_SmtpServerHostIsSet = true;
}

bool SmtpAccessDetails::smtpServerHostIsSet() const
{
    return m_SmtpServerHostIsSet;
}

void SmtpAccessDetails::unsetSmtpServerHost()
{
    m_SmtpServerHostIsSet = false;
}
int32_t SmtpAccessDetails::getSmtpServerPort() const
{
    return m_SmtpServerPort;
}

void SmtpAccessDetails::setSmtpServerPort(int32_t value)
{
    m_SmtpServerPort = value;
    m_SmtpServerPortIsSet = true;
}

bool SmtpAccessDetails::smtpServerPortIsSet() const
{
    return m_SmtpServerPortIsSet;
}

void SmtpAccessDetails::unsetSmtpServerPort()
{
    m_SmtpServerPortIsSet = false;
}
utility::string_t SmtpAccessDetails::getSmtpUsername() const
{
    return m_SmtpUsername;
}

void SmtpAccessDetails::setSmtpUsername(const utility::string_t& value)
{
    m_SmtpUsername = value;
    m_SmtpUsernameIsSet = true;
}

bool SmtpAccessDetails::smtpUsernameIsSet() const
{
    return m_SmtpUsernameIsSet;
}

void SmtpAccessDetails::unsetSmtpUsername()
{
    m_SmtpUsernameIsSet = false;
}
utility::string_t SmtpAccessDetails::getSmtpPassword() const
{
    return m_SmtpPassword;
}

void SmtpAccessDetails::setSmtpPassword(const utility::string_t& value)
{
    m_SmtpPassword = value;
    m_SmtpPasswordIsSet = true;
}

bool SmtpAccessDetails::smtpPasswordIsSet() const
{
    return m_SmtpPasswordIsSet;
}

void SmtpAccessDetails::unsetSmtpPassword()
{
    m_SmtpPasswordIsSet = false;
}
utility::string_t SmtpAccessDetails::getMailFromDomain() const
{
    return m_MailFromDomain;
}

void SmtpAccessDetails::setMailFromDomain(const utility::string_t& value)
{
    m_MailFromDomain = value;
    m_MailFromDomainIsSet = true;
}

bool SmtpAccessDetails::mailFromDomainIsSet() const
{
    return m_MailFromDomainIsSet;
}

void SmtpAccessDetails::unsetMailFromDomain()
{
    m_MailFromDomainIsSet = false;
}
}
}
}
}

