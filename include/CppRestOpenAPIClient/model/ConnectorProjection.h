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
 * ConnectorProjection.h
 *
 * Connector
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_ConnectorProjection_H_
#define COM_MAILSLURP_CLIENT_MODEL_ConnectorProjection_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// Connector
/// </summary>
class  ConnectorProjection
    : public ModelBase
{
public:
    ConnectorProjection();
    virtual ~ConnectorProjection();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ConnectorProjection members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getUserId() const;
    bool userIdIsSet() const;
    void unsetUserId();

    void setUserId(const utility::string_t& value);

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
    utility::string_t getConnectorType() const;
    bool connectorTypeIsSet() const;
    void unsetConnectorType();

    void setConnectorType(const utility::string_t& value);

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
    utility::string_t m_UserId;
    bool m_UserIdIsSet;
    utility::string_t m_InboxId;
    bool m_InboxIdIsSet;
    bool m_SyncEnabled;
    bool m_SyncEnabledIsSet;
    utility::string_t m_ConnectorType;
    bool m_ConnectorTypeIsSet;
    utility::string_t m_SyncScheduleType;
    bool m_SyncScheduleTypeIsSet;
    int32_t m_SyncInterval;
    bool m_SyncIntervalIsSet;
    utility::datetime m_CreatedAt;
    bool m_CreatedAtIsSet;
    utility::string_t m_Id;
    bool m_IdIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_ConnectorProjection_H_ */
