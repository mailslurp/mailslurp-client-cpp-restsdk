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

/*
 * ImapSmtpAccessDetails.h
 *
 * Access details for inbox using SMTP or IMAP
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_ImapSmtpAccessDetails_H_
#define COM_MAILSLURP_CLIENT_MODEL_ImapSmtpAccessDetails_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// Access details for inbox using SMTP or IMAP
/// </summary>
class  ImapSmtpAccessDetails
    : public ModelBase
{
public:
    ImapSmtpAccessDetails();
    virtual ~ImapSmtpAccessDetails();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ImapSmtpAccessDetails members

    /// <summary>
    /// Secure TLS SMTP server host domain
    /// </summary>
    utility::string_t getSecureSmtpServerHost() const;
    bool secureSmtpServerHostIsSet() const;
    void unsetSecureSmtpServerHost();

    void setSecureSmtpServerHost(const utility::string_t& value);

    /// <summary>
    /// Secure TLS SMTP server host port
    /// </summary>
    int32_t getSecureSmtpServerPort() const;
    bool secureSmtpServerPortIsSet() const;
    void unsetSecureSmtpServerPort();

    void setSecureSmtpServerPort(int32_t value);

    /// <summary>
    /// Secure TLS SMTP username for login
    /// </summary>
    utility::string_t getSecureSmtpUsername() const;
    bool secureSmtpUsernameIsSet() const;
    void unsetSecureSmtpUsername();

    void setSecureSmtpUsername(const utility::string_t& value);

    /// <summary>
    /// Secure TLS SMTP password for login
    /// </summary>
    utility::string_t getSecureSmtpPassword() const;
    bool secureSmtpPasswordIsSet() const;
    void unsetSecureSmtpPassword();

    void setSecureSmtpPassword(const utility::string_t& value);

    /// <summary>
    /// SMTP server host domain
    /// </summary>
    utility::string_t getSmtpServerHost() const;
    bool smtpServerHostIsSet() const;
    void unsetSmtpServerHost();

    void setSmtpServerHost(const utility::string_t& value);

    /// <summary>
    /// SMTP server host port
    /// </summary>
    int32_t getSmtpServerPort() const;
    bool smtpServerPortIsSet() const;
    void unsetSmtpServerPort();

    void setSmtpServerPort(int32_t value);

    /// <summary>
    /// SMTP username for login
    /// </summary>
    utility::string_t getSmtpUsername() const;
    bool smtpUsernameIsSet() const;
    void unsetSmtpUsername();

    void setSmtpUsername(const utility::string_t& value);

    /// <summary>
    /// SMTP password for login
    /// </summary>
    utility::string_t getSmtpPassword() const;
    bool smtpPasswordIsSet() const;
    void unsetSmtpPassword();

    void setSmtpPassword(const utility::string_t& value);

    /// <summary>
    /// Secure TLS IMAP server host domain
    /// </summary>
    utility::string_t getSecureImapServerHost() const;
    bool secureImapServerHostIsSet() const;
    void unsetSecureImapServerHost();

    void setSecureImapServerHost(const utility::string_t& value);

    /// <summary>
    /// Secure TLS IMAP server host port
    /// </summary>
    int32_t getSecureImapServerPort() const;
    bool secureImapServerPortIsSet() const;
    void unsetSecureImapServerPort();

    void setSecureImapServerPort(int32_t value);

    /// <summary>
    /// Secure TLS IMAP username for login
    /// </summary>
    utility::string_t getSecureImapUsername() const;
    bool secureImapUsernameIsSet() const;
    void unsetSecureImapUsername();

    void setSecureImapUsername(const utility::string_t& value);

    /// <summary>
    /// Secure TLS IMAP password for login
    /// </summary>
    utility::string_t getSecureImapPassword() const;
    bool secureImapPasswordIsSet() const;
    void unsetSecureImapPassword();

    void setSecureImapPassword(const utility::string_t& value);

    /// <summary>
    /// IMAP server host domain
    /// </summary>
    utility::string_t getImapServerHost() const;
    bool imapServerHostIsSet() const;
    void unsetImapServerHost();

    void setImapServerHost(const utility::string_t& value);

    /// <summary>
    /// IMAP server host port
    /// </summary>
    int32_t getImapServerPort() const;
    bool imapServerPortIsSet() const;
    void unsetImapServerPort();

    void setImapServerPort(int32_t value);

    /// <summary>
    /// IMAP username for login
    /// </summary>
    utility::string_t getImapUsername() const;
    bool imapUsernameIsSet() const;
    void unsetImapUsername();

    void setImapUsername(const utility::string_t& value);

    /// <summary>
    /// IMAP password for login
    /// </summary>
    utility::string_t getImapPassword() const;
    bool imapPasswordIsSet() const;
    void unsetImapPassword();

    void setImapPassword(const utility::string_t& value);

    /// <summary>
    /// IMAP mailbox to SELECT
    /// </summary>
    utility::string_t getImapMailbox() const;
    bool imapMailboxIsSet() const;
    void unsetImapMailbox();

    void setImapMailbox(const utility::string_t& value);

    /// <summary>
    /// Mail from domain or SMTP HELO value
    /// </summary>
    utility::string_t getMailFromDomain() const;
    bool mailFromDomainIsSet() const;
    void unsetMailFromDomain();

    void setMailFromDomain(const utility::string_t& value);


protected:
    utility::string_t m_SecureSmtpServerHost;
    bool m_SecureSmtpServerHostIsSet;
    int32_t m_SecureSmtpServerPort;
    bool m_SecureSmtpServerPortIsSet;
    utility::string_t m_SecureSmtpUsername;
    bool m_SecureSmtpUsernameIsSet;
    utility::string_t m_SecureSmtpPassword;
    bool m_SecureSmtpPasswordIsSet;
    utility::string_t m_SmtpServerHost;
    bool m_SmtpServerHostIsSet;
    int32_t m_SmtpServerPort;
    bool m_SmtpServerPortIsSet;
    utility::string_t m_SmtpUsername;
    bool m_SmtpUsernameIsSet;
    utility::string_t m_SmtpPassword;
    bool m_SmtpPasswordIsSet;
    utility::string_t m_SecureImapServerHost;
    bool m_SecureImapServerHostIsSet;
    int32_t m_SecureImapServerPort;
    bool m_SecureImapServerPortIsSet;
    utility::string_t m_SecureImapUsername;
    bool m_SecureImapUsernameIsSet;
    utility::string_t m_SecureImapPassword;
    bool m_SecureImapPasswordIsSet;
    utility::string_t m_ImapServerHost;
    bool m_ImapServerHostIsSet;
    int32_t m_ImapServerPort;
    bool m_ImapServerPortIsSet;
    utility::string_t m_ImapUsername;
    bool m_ImapUsernameIsSet;
    utility::string_t m_ImapPassword;
    bool m_ImapPasswordIsSet;
    utility::string_t m_ImapMailbox;
    bool m_ImapMailboxIsSet;
    utility::string_t m_MailFromDomain;
    bool m_MailFromDomainIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_ImapSmtpAccessDetails_H_ */
