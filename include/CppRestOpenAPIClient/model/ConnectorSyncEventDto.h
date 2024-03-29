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
 * ConnectorSyncEventDto.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_ConnectorSyncEventDto_H_
#define COM_MAILSLURP_CLIENT_MODEL_ConnectorSyncEventDto_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  ConnectorSyncEventDto
    : public ModelBase
{
public:
    ConnectorSyncEventDto();
    virtual ~ConnectorSyncEventDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ConnectorSyncEventDto members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

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
    utility::string_t getSyncStatus() const;
    bool syncStatusIsSet() const;
    void unsetSyncStatus();

    void setSyncStatus(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getSyncCount() const;
    bool syncCountIsSet() const;
    void unsetSyncCount();

    void setSyncCount(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getMessage() const;
    bool messageIsSet() const;
    void unsetMessage();

    void setMessage(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetCreatedAt();

    void setCreatedAt(const utility::datetime& value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_ConnectorId;
    bool m_ConnectorIdIsSet;
    utility::string_t m_SyncStatus;
    bool m_SyncStatusIsSet;
    int64_t m_SyncCount;
    bool m_SyncCountIsSet;
    utility::string_t m_Message;
    bool m_MessageIsSet;
    utility::datetime m_CreatedAt;
    bool m_CreatedAtIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_ConnectorSyncEventDto_H_ */
