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
 * ConnectorSmtpConnectionDto.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_ConnectorSmtpConnectionDto_H_
#define COM_MAILSLURP_CLIENT_MODEL_ConnectorSmtpConnectionDto_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  ConnectorSmtpConnectionDto
    : public ModelBase
{
public:
    ConnectorSmtpConnectionDto();
    virtual ~ConnectorSmtpConnectionDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ConnectorSmtpConnectionDto members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getConnectorId() const;
    bool connectorIdIsSet() const;
    void unsetConnectorId();

    void setConnectorId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSmtpHost() const;
    bool smtpHostIsSet() const;
    void unsetSmtpHost();

    void setSmtpHost(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getSmtpPort() const;
    bool smtpPortIsSet() const;
    void unsetSmtpPort();

    void setSmtpPort(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSmtpUsername() const;
    bool smtpUsernameIsSet() const;
    void unsetSmtpUsername();

    void setSmtpUsername(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSmtpPassword() const;
    bool smtpPasswordIsSet() const;
    void unsetSmtpPassword();

    void setSmtpPassword(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    bool isSmtpSsl() const;
    bool smtpSslIsSet() const;
    void unsetSmtpSsl();

    void setSmtpSsl(bool value);

    /// <summary>
    /// 
    /// </summary>
    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetEnabled();

    void setEnabled(bool value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetCreatedAt();

    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);


protected:
    utility::string_t m_ConnectorId;
    bool m_ConnectorIdIsSet;
    utility::string_t m_SmtpHost;
    bool m_SmtpHostIsSet;
    int32_t m_SmtpPort;
    bool m_SmtpPortIsSet;
    utility::string_t m_SmtpUsername;
    bool m_SmtpUsernameIsSet;
    utility::string_t m_SmtpPassword;
    bool m_SmtpPasswordIsSet;
    bool m_SmtpSsl;
    bool m_SmtpSslIsSet;
    bool m_Enabled;
    bool m_EnabledIsSet;
    utility::datetime m_CreatedAt;
    bool m_CreatedAtIsSet;
    utility::string_t m_Id;
    bool m_IdIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_ConnectorSmtpConnectionDto_H_ */