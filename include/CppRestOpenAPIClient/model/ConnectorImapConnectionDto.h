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
 * ConnectorImapConnectionDto.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_ConnectorImapConnectionDto_H_
#define COM_MAILSLURP_CLIENT_MODEL_ConnectorImapConnectionDto_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  ConnectorImapConnectionDto
    : public ModelBase
{
public:
    ConnectorImapConnectionDto();
    virtual ~ConnectorImapConnectionDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ConnectorImapConnectionDto members

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
    utility::string_t getImapHost() const;
    bool imapHostIsSet() const;
    void unsetImapHost();

    void setImapHost(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getImapPort() const;
    bool imapPortIsSet() const;
    void unsetImapPort();

    void setImapPort(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getImapUsername() const;
    bool imapUsernameIsSet() const;
    void unsetImapUsername();

    void setImapUsername(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getImapPassword() const;
    bool imapPasswordIsSet() const;
    void unsetImapPassword();

    void setImapPassword(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    bool isImapSsl() const;
    bool imapSslIsSet() const;
    void unsetImapSsl();

    void setImapSsl(bool value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSelectFolder() const;
    bool selectFolderIsSet() const;
    void unsetSelectFolder();

    void setSelectFolder(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSearchTerms() const;
    bool searchTermsIsSet() const;
    void unsetSearchTerms();

    void setSearchTerms(const utility::string_t& value);

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
    utility::string_t m_ImapHost;
    bool m_ImapHostIsSet;
    int32_t m_ImapPort;
    bool m_ImapPortIsSet;
    utility::string_t m_ImapUsername;
    bool m_ImapUsernameIsSet;
    utility::string_t m_ImapPassword;
    bool m_ImapPasswordIsSet;
    bool m_ImapSsl;
    bool m_ImapSslIsSet;
    utility::string_t m_SelectFolder;
    bool m_SelectFolderIsSet;
    utility::string_t m_SearchTerms;
    bool m_SearchTermsIsSet;
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

#endif /* COM_MAILSLURP_CLIENT_MODEL_ConnectorImapConnectionDto_H_ */
