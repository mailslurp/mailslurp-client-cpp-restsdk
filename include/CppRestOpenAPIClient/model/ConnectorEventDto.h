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

/*
 * ConnectorEventDto.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_ConnectorEventDto_H_
#define COM_MAILSLURP_CLIENT_MODEL_ConnectorEventDto_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  ConnectorEventDto
    : public ModelBase
{
public:
    ConnectorEventDto();
    virtual ~ConnectorEventDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ConnectorEventDto members

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
    utility::string_t getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();

    void setStatus(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getEventType() const;
    bool eventTypeIsSet() const;
    void unsetEventType();

    void setEventType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getSize() const;
    bool sizeIsSet() const;
    void unsetSize();

    void setSize(int64_t value);

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
    utility::string_t getLogs() const;
    bool logsIsSet() const;
    void unsetLogs();

    void setLogs(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    bool isSeen() const;
    bool seenIsSet() const;
    void unsetSeen();

    void setSeen(bool value);

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
    utility::string_t m_Status;
    bool m_StatusIsSet;
    utility::string_t m_EventType;
    bool m_EventTypeIsSet;
    int64_t m_Size;
    bool m_SizeIsSet;
    utility::string_t m_Message;
    bool m_MessageIsSet;
    utility::string_t m_Logs;
    bool m_LogsIsSet;
    bool m_Seen;
    bool m_SeenIsSet;
    utility::datetime m_CreatedAt;
    bool m_CreatedAtIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_ConnectorEventDto_H_ */
