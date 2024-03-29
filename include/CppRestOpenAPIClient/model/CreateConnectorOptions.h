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
 * CreateConnectorOptions.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_CreateConnectorOptions_H_
#define COM_MAILSLURP_CLIENT_MODEL_CreateConnectorOptions_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/CreateConnectorImapOptions.h"
#include "CppRestOpenAPIClient/model/CreateConnectorImapFetchOptions.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace mailslurp {
namespace client {
namespace model {

class CreateConnectorImapOptions;
class CreateConnectorImapFetchOptions;

/// <summary>
/// 
/// </summary>
class  CreateConnectorOptions
    : public ModelBase
{
public:
    CreateConnectorOptions();
    virtual ~CreateConnectorOptions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CreateConnectorOptions members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getConnectorType() const;
    bool connectorTypeIsSet() const;
    void unsetConnectorType();

    void setConnectorType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getConnectorAuthType() const;
    bool connectorAuthTypeIsSet() const;
    void unsetConnectorAuthType();

    void setConnectorAuthType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CreateConnectorImapOptions> getImapSettings() const;
    bool imapSettingsIsSet() const;
    void unsetImapSettings();

    void setImapSettings(const std::shared_ptr<CreateConnectorImapOptions>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getInboxId() const;
    bool inboxIdIsSet() const;
    void unsetInboxId();

    void setInboxId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    bool isSyncEnabled() const;
    bool syncEnabledIsSet() const;
    void unsetSyncEnabled();

    void setSyncEnabled(bool value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSyncScheduleType() const;
    bool syncScheduleTypeIsSet() const;
    void unsetSyncScheduleType();

    void setSyncScheduleType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getSyncInterval() const;
    bool syncIntervalIsSet() const;
    void unsetSyncInterval();

    void setSyncInterval(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CreateConnectorImapFetchOptions> getFetchSettings() const;
    bool fetchSettingsIsSet() const;
    void unsetFetchSettings();

    void setFetchSettings(const std::shared_ptr<CreateConnectorImapFetchOptions>& value);


protected:
    utility::string_t m_ConnectorType;
    bool m_ConnectorTypeIsSet;
    utility::string_t m_ConnectorAuthType;
    bool m_ConnectorAuthTypeIsSet;
    std::shared_ptr<CreateConnectorImapOptions> m_ImapSettings;
    bool m_ImapSettingsIsSet;
    utility::string_t m_InboxId;
    bool m_InboxIdIsSet;
    bool m_SyncEnabled;
    bool m_SyncEnabledIsSet;
    utility::string_t m_SyncScheduleType;
    bool m_SyncScheduleTypeIsSet;
    int32_t m_SyncInterval;
    bool m_SyncIntervalIsSet;
    std::shared_ptr<CreateConnectorImapFetchOptions> m_FetchSettings;
    bool m_FetchSettingsIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_CreateConnectorOptions_H_ */
