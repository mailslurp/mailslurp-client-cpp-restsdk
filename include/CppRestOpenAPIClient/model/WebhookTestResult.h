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
 * WebhookTestResult.h
 *
 * Results of testing a webhook
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_WebhookTestResult_H_
#define COM_MAILSLURP_CLIENT_MODEL_WebhookTestResult_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/WebhookTestRequest.h"
#include "CppRestOpenAPIClient/model/WebhookTestResponse.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace mailslurp {
namespace client {
namespace model {

class WebhookTestResponse;
class WebhookTestRequest;

/// <summary>
/// Results of testing a webhook
/// </summary>
class  WebhookTestResult
    : public ModelBase
{
public:
    WebhookTestResult();
    virtual ~WebhookTestResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// WebhookTestResult members

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
    std::shared_ptr<WebhookTestResponse> getResponse() const;
    bool responseIsSet() const;
    void unsetResponse();

    void setResponse(const std::shared_ptr<WebhookTestResponse>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<WebhookTestRequest> getRequest() const;
    bool requestIsSet() const;
    void unsetRequest();

    void setRequest(const std::shared_ptr<WebhookTestRequest>& value);


protected:
    utility::string_t m_Message;
    bool m_MessageIsSet;
    std::shared_ptr<WebhookTestResponse> m_Response;
    bool m_ResponseIsSet;
    std::shared_ptr<WebhookTestRequest> m_Request;
    bool m_RequestIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_WebhookTestResult_H_ */
