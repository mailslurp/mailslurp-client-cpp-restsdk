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



#include "CppRestOpenAPIClient/model/ImapSmtpAccessServers.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



ImapSmtpAccessServers::ImapSmtpAccessServers()
{
    m_ImapServerIsSet = false;
    m_SecureImapServerIsSet = false;
    m_SmtpServerIsSet = false;
    m_SecureSmtpServerIsSet = false;
}

ImapSmtpAccessServers::~ImapSmtpAccessServers()
{
}

void ImapSmtpAccessServers::validate()
{
    // TODO: implement validation
}

web::json::value ImapSmtpAccessServers::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ImapServerIsSet)
    {
        val[utility::conversions::to_string_t(U("imapServer"))] = ModelBase::toJson(m_ImapServer);
    }
    if(m_SecureImapServerIsSet)
    {
        val[utility::conversions::to_string_t(U("secureImapServer"))] = ModelBase::toJson(m_SecureImapServer);
    }
    if(m_SmtpServerIsSet)
    {
        val[utility::conversions::to_string_t(U("smtpServer"))] = ModelBase::toJson(m_SmtpServer);
    }
    if(m_SecureSmtpServerIsSet)
    {
        val[utility::conversions::to_string_t(U("secureSmtpServer"))] = ModelBase::toJson(m_SecureSmtpServer);
    }

    return val;
}

bool ImapSmtpAccessServers::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("imapServer"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("imapServer")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ServerEndpoints> refVal_setImapServer;
            ok &= ModelBase::fromJson(fieldValue, refVal_setImapServer);
            setImapServer(refVal_setImapServer);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("secureImapServer"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("secureImapServer")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ServerEndpoints> refVal_setSecureImapServer;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSecureImapServer);
            setSecureImapServer(refVal_setSecureImapServer);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("smtpServer"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("smtpServer")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ServerEndpoints> refVal_setSmtpServer;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSmtpServer);
            setSmtpServer(refVal_setSmtpServer);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("secureSmtpServer"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("secureSmtpServer")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ServerEndpoints> refVal_setSecureSmtpServer;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSecureSmtpServer);
            setSecureSmtpServer(refVal_setSecureSmtpServer);
        }
    }
    return ok;
}

void ImapSmtpAccessServers::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ImapServerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("imapServer")), m_ImapServer));
    }
    if(m_SecureImapServerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("secureImapServer")), m_SecureImapServer));
    }
    if(m_SmtpServerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("smtpServer")), m_SmtpServer));
    }
    if(m_SecureSmtpServerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("secureSmtpServer")), m_SecureSmtpServer));
    }
}

bool ImapSmtpAccessServers::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("imapServer"))))
    {
        std::shared_ptr<ServerEndpoints> refVal_setImapServer;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("imapServer"))), refVal_setImapServer );
        setImapServer(refVal_setImapServer);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("secureImapServer"))))
    {
        std::shared_ptr<ServerEndpoints> refVal_setSecureImapServer;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("secureImapServer"))), refVal_setSecureImapServer );
        setSecureImapServer(refVal_setSecureImapServer);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("smtpServer"))))
    {
        std::shared_ptr<ServerEndpoints> refVal_setSmtpServer;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("smtpServer"))), refVal_setSmtpServer );
        setSmtpServer(refVal_setSmtpServer);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("secureSmtpServer"))))
    {
        std::shared_ptr<ServerEndpoints> refVal_setSecureSmtpServer;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("secureSmtpServer"))), refVal_setSecureSmtpServer );
        setSecureSmtpServer(refVal_setSecureSmtpServer);
    }
    return ok;
}

std::shared_ptr<ServerEndpoints> ImapSmtpAccessServers::getImapServer() const
{
    return m_ImapServer;
}

void ImapSmtpAccessServers::setImapServer(const std::shared_ptr<ServerEndpoints>& value)
{
    m_ImapServer = value;
    m_ImapServerIsSet = true;
}

bool ImapSmtpAccessServers::imapServerIsSet() const
{
    return m_ImapServerIsSet;
}

void ImapSmtpAccessServers::unsetImapServer()
{
    m_ImapServerIsSet = false;
}
std::shared_ptr<ServerEndpoints> ImapSmtpAccessServers::getSecureImapServer() const
{
    return m_SecureImapServer;
}

void ImapSmtpAccessServers::setSecureImapServer(const std::shared_ptr<ServerEndpoints>& value)
{
    m_SecureImapServer = value;
    m_SecureImapServerIsSet = true;
}

bool ImapSmtpAccessServers::secureImapServerIsSet() const
{
    return m_SecureImapServerIsSet;
}

void ImapSmtpAccessServers::unsetSecureImapServer()
{
    m_SecureImapServerIsSet = false;
}
std::shared_ptr<ServerEndpoints> ImapSmtpAccessServers::getSmtpServer() const
{
    return m_SmtpServer;
}

void ImapSmtpAccessServers::setSmtpServer(const std::shared_ptr<ServerEndpoints>& value)
{
    m_SmtpServer = value;
    m_SmtpServerIsSet = true;
}

bool ImapSmtpAccessServers::smtpServerIsSet() const
{
    return m_SmtpServerIsSet;
}

void ImapSmtpAccessServers::unsetSmtpServer()
{
    m_SmtpServerIsSet = false;
}
std::shared_ptr<ServerEndpoints> ImapSmtpAccessServers::getSecureSmtpServer() const
{
    return m_SecureSmtpServer;
}

void ImapSmtpAccessServers::setSecureSmtpServer(const std::shared_ptr<ServerEndpoints>& value)
{
    m_SecureSmtpServer = value;
    m_SecureSmtpServerIsSet = true;
}

bool ImapSmtpAccessServers::secureSmtpServerIsSet() const
{
    return m_SecureSmtpServerIsSet;
}

void ImapSmtpAccessServers::unsetSecureSmtpServer()
{
    m_SecureSmtpServerIsSet = false;
}
}
}
}
}


