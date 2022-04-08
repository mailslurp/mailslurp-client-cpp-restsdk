/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://www.mailslurp.com/docs/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "ImapSmtpAccessDetails.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




ImapSmtpAccessDetails::ImapSmtpAccessDetails()
{
    m_SmtpServerHost = utility::conversions::to_string_t("");
    m_SmtpServerHostIsSet = false;
    m_SmtpServerPort = 0;
    m_SmtpServerPortIsSet = false;
    m_SmtpUsername = utility::conversions::to_string_t("");
    m_SmtpUsernameIsSet = false;
    m_SmtpPassword = utility::conversions::to_string_t("");
    m_SmtpPasswordIsSet = false;
    m_ImapServerHost = utility::conversions::to_string_t("");
    m_ImapServerHostIsSet = false;
    m_ImapServerPort = 0;
    m_ImapServerPortIsSet = false;
    m_ImapUsername = utility::conversions::to_string_t("");
    m_ImapUsernameIsSet = false;
    m_ImapPassword = utility::conversions::to_string_t("");
    m_ImapPasswordIsSet = false;
}

ImapSmtpAccessDetails::~ImapSmtpAccessDetails()
{
}

void ImapSmtpAccessDetails::validate()
{
    // TODO: implement validation
}

web::json::value ImapSmtpAccessDetails::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_SmtpServerHostIsSet)
    {
        val[utility::conversions::to_string_t("smtpServerHost")] = ModelBase::toJson(m_SmtpServerHost);
    }
    if(m_SmtpServerPortIsSet)
    {
        val[utility::conversions::to_string_t("smtpServerPort")] = ModelBase::toJson(m_SmtpServerPort);
    }
    if(m_SmtpUsernameIsSet)
    {
        val[utility::conversions::to_string_t("smtpUsername")] = ModelBase::toJson(m_SmtpUsername);
    }
    if(m_SmtpPasswordIsSet)
    {
        val[utility::conversions::to_string_t("smtpPassword")] = ModelBase::toJson(m_SmtpPassword);
    }
    if(m_ImapServerHostIsSet)
    {
        val[utility::conversions::to_string_t("imapServerHost")] = ModelBase::toJson(m_ImapServerHost);
    }
    if(m_ImapServerPortIsSet)
    {
        val[utility::conversions::to_string_t("imapServerPort")] = ModelBase::toJson(m_ImapServerPort);
    }
    if(m_ImapUsernameIsSet)
    {
        val[utility::conversions::to_string_t("imapUsername")] = ModelBase::toJson(m_ImapUsername);
    }
    if(m_ImapPasswordIsSet)
    {
        val[utility::conversions::to_string_t("imapPassword")] = ModelBase::toJson(m_ImapPassword);
    }

    return val;
}

bool ImapSmtpAccessDetails::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("smtpServerHost")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("smtpServerHost"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_smtpServerHost;
            ok &= ModelBase::fromJson(fieldValue, refVal_smtpServerHost);
            setSmtpServerHost(refVal_smtpServerHost);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("smtpServerPort")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("smtpServerPort"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_smtpServerPort;
            ok &= ModelBase::fromJson(fieldValue, refVal_smtpServerPort);
            setSmtpServerPort(refVal_smtpServerPort);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("smtpUsername")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("smtpUsername"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_smtpUsername;
            ok &= ModelBase::fromJson(fieldValue, refVal_smtpUsername);
            setSmtpUsername(refVal_smtpUsername);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("smtpPassword")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("smtpPassword"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_smtpPassword;
            ok &= ModelBase::fromJson(fieldValue, refVal_smtpPassword);
            setSmtpPassword(refVal_smtpPassword);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("imapServerHost")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("imapServerHost"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_imapServerHost;
            ok &= ModelBase::fromJson(fieldValue, refVal_imapServerHost);
            setImapServerHost(refVal_imapServerHost);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("imapServerPort")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("imapServerPort"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_imapServerPort;
            ok &= ModelBase::fromJson(fieldValue, refVal_imapServerPort);
            setImapServerPort(refVal_imapServerPort);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("imapUsername")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("imapUsername"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_imapUsername;
            ok &= ModelBase::fromJson(fieldValue, refVal_imapUsername);
            setImapUsername(refVal_imapUsername);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("imapPassword")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("imapPassword"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_imapPassword;
            ok &= ModelBase::fromJson(fieldValue, refVal_imapPassword);
            setImapPassword(refVal_imapPassword);
        }
    }
    return ok;
}

void ImapSmtpAccessDetails::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_SmtpServerHostIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("smtpServerHost"), m_SmtpServerHost));
    }
    if(m_SmtpServerPortIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("smtpServerPort"), m_SmtpServerPort));
    }
    if(m_SmtpUsernameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("smtpUsername"), m_SmtpUsername));
    }
    if(m_SmtpPasswordIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("smtpPassword"), m_SmtpPassword));
    }
    if(m_ImapServerHostIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("imapServerHost"), m_ImapServerHost));
    }
    if(m_ImapServerPortIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("imapServerPort"), m_ImapServerPort));
    }
    if(m_ImapUsernameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("imapUsername"), m_ImapUsername));
    }
    if(m_ImapPasswordIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("imapPassword"), m_ImapPassword));
    }
}

bool ImapSmtpAccessDetails::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("smtpServerHost")))
    {
        utility::string_t refVal_smtpServerHost;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("smtpServerHost")), refVal_smtpServerHost );
        setSmtpServerHost(refVal_smtpServerHost);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("smtpServerPort")))
    {
        int32_t refVal_smtpServerPort;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("smtpServerPort")), refVal_smtpServerPort );
        setSmtpServerPort(refVal_smtpServerPort);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("smtpUsername")))
    {
        utility::string_t refVal_smtpUsername;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("smtpUsername")), refVal_smtpUsername );
        setSmtpUsername(refVal_smtpUsername);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("smtpPassword")))
    {
        utility::string_t refVal_smtpPassword;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("smtpPassword")), refVal_smtpPassword );
        setSmtpPassword(refVal_smtpPassword);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("imapServerHost")))
    {
        utility::string_t refVal_imapServerHost;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("imapServerHost")), refVal_imapServerHost );
        setImapServerHost(refVal_imapServerHost);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("imapServerPort")))
    {
        int32_t refVal_imapServerPort;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("imapServerPort")), refVal_imapServerPort );
        setImapServerPort(refVal_imapServerPort);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("imapUsername")))
    {
        utility::string_t refVal_imapUsername;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("imapUsername")), refVal_imapUsername );
        setImapUsername(refVal_imapUsername);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("imapPassword")))
    {
        utility::string_t refVal_imapPassword;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("imapPassword")), refVal_imapPassword );
        setImapPassword(refVal_imapPassword);
    }
    return ok;
}

utility::string_t ImapSmtpAccessDetails::getSmtpServerHost() const
{
    return m_SmtpServerHost;
}

void ImapSmtpAccessDetails::setSmtpServerHost(const utility::string_t& value)
{
    m_SmtpServerHost = value;
    m_SmtpServerHostIsSet = true;
}

bool ImapSmtpAccessDetails::smtpServerHostIsSet() const
{
    return m_SmtpServerHostIsSet;
}

void ImapSmtpAccessDetails::unsetSmtpServerHost()
{
    m_SmtpServerHostIsSet = false;
}
int32_t ImapSmtpAccessDetails::getSmtpServerPort() const
{
    return m_SmtpServerPort;
}

void ImapSmtpAccessDetails::setSmtpServerPort(int32_t value)
{
    m_SmtpServerPort = value;
    m_SmtpServerPortIsSet = true;
}

bool ImapSmtpAccessDetails::smtpServerPortIsSet() const
{
    return m_SmtpServerPortIsSet;
}

void ImapSmtpAccessDetails::unsetSmtpServerPort()
{
    m_SmtpServerPortIsSet = false;
}
utility::string_t ImapSmtpAccessDetails::getSmtpUsername() const
{
    return m_SmtpUsername;
}

void ImapSmtpAccessDetails::setSmtpUsername(const utility::string_t& value)
{
    m_SmtpUsername = value;
    m_SmtpUsernameIsSet = true;
}

bool ImapSmtpAccessDetails::smtpUsernameIsSet() const
{
    return m_SmtpUsernameIsSet;
}

void ImapSmtpAccessDetails::unsetSmtpUsername()
{
    m_SmtpUsernameIsSet = false;
}
utility::string_t ImapSmtpAccessDetails::getSmtpPassword() const
{
    return m_SmtpPassword;
}

void ImapSmtpAccessDetails::setSmtpPassword(const utility::string_t& value)
{
    m_SmtpPassword = value;
    m_SmtpPasswordIsSet = true;
}

bool ImapSmtpAccessDetails::smtpPasswordIsSet() const
{
    return m_SmtpPasswordIsSet;
}

void ImapSmtpAccessDetails::unsetSmtpPassword()
{
    m_SmtpPasswordIsSet = false;
}
utility::string_t ImapSmtpAccessDetails::getImapServerHost() const
{
    return m_ImapServerHost;
}

void ImapSmtpAccessDetails::setImapServerHost(const utility::string_t& value)
{
    m_ImapServerHost = value;
    m_ImapServerHostIsSet = true;
}

bool ImapSmtpAccessDetails::imapServerHostIsSet() const
{
    return m_ImapServerHostIsSet;
}

void ImapSmtpAccessDetails::unsetImapServerHost()
{
    m_ImapServerHostIsSet = false;
}
int32_t ImapSmtpAccessDetails::getImapServerPort() const
{
    return m_ImapServerPort;
}

void ImapSmtpAccessDetails::setImapServerPort(int32_t value)
{
    m_ImapServerPort = value;
    m_ImapServerPortIsSet = true;
}

bool ImapSmtpAccessDetails::imapServerPortIsSet() const
{
    return m_ImapServerPortIsSet;
}

void ImapSmtpAccessDetails::unsetImapServerPort()
{
    m_ImapServerPortIsSet = false;
}
utility::string_t ImapSmtpAccessDetails::getImapUsername() const
{
    return m_ImapUsername;
}

void ImapSmtpAccessDetails::setImapUsername(const utility::string_t& value)
{
    m_ImapUsername = value;
    m_ImapUsernameIsSet = true;
}

bool ImapSmtpAccessDetails::imapUsernameIsSet() const
{
    return m_ImapUsernameIsSet;
}

void ImapSmtpAccessDetails::unsetImapUsername()
{
    m_ImapUsernameIsSet = false;
}
utility::string_t ImapSmtpAccessDetails::getImapPassword() const
{
    return m_ImapPassword;
}

void ImapSmtpAccessDetails::setImapPassword(const utility::string_t& value)
{
    m_ImapPassword = value;
    m_ImapPasswordIsSet = true;
}

bool ImapSmtpAccessDetails::imapPasswordIsSet() const
{
    return m_ImapPasswordIsSet;
}

void ImapSmtpAccessDetails::unsetImapPassword()
{
    m_ImapPasswordIsSet = false;
}
}
}
}
}


