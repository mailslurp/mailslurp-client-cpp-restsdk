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
 * ConnectorSyncRequestResult_exception_cause.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_ConnectorSyncRequestResult_exception_cause_H_
#define COM_MAILSLURP_CLIENT_MODEL_ConnectorSyncRequestResult_exception_cause_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/ConnectorSyncRequestResult_exception_cause_stackTrace_inner.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace com {
namespace mailslurp {
namespace client {
namespace model {

class ConnectorSyncRequestResult_exception_cause_stackTrace_inner;

/// <summary>
/// 
/// </summary>
class  ConnectorSyncRequestResult_exception_cause
    : public ModelBase
{
public:
    ConnectorSyncRequestResult_exception_cause();
    virtual ~ConnectorSyncRequestResult_exception_cause();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ConnectorSyncRequestResult_exception_cause members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<ConnectorSyncRequestResult_exception_cause_stackTrace_inner>>& getStackTrace();
    bool stackTraceIsSet() const;
    void unsetStackTrace();

    void setStackTrace(const std::vector<std::shared_ptr<ConnectorSyncRequestResult_exception_cause_stackTrace_inner>>& value);

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
    utility::string_t getLocalizedMessage() const;
    bool localizedMessageIsSet() const;
    void unsetLocalizedMessage();

    void setLocalizedMessage(const utility::string_t& value);


protected:
    std::vector<std::shared_ptr<ConnectorSyncRequestResult_exception_cause_stackTrace_inner>> m_StackTrace;
    bool m_StackTraceIsSet;
    utility::string_t m_Message;
    bool m_MessageIsSet;
    utility::string_t m_LocalizedMessage;
    bool m_LocalizedMessageIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_ConnectorSyncRequestResult_exception_cause_H_ */
