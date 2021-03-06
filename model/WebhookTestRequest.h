/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://www.mailslurp.com/docs/) - [Examples](https://github.com/mailslurp/examples) repository 
 *
 * The version of the OpenAPI document: 6.5.2
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * WebhookTestRequest.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_WebhookTestRequest_H_
#define COM_MAILSLURP_CLIENT_MODEL_WebhookTestRequest_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <map>
#include <vector>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  WebhookTestRequest
    : public ModelBase
{
public:
    WebhookTestRequest();
    virtual ~WebhookTestRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// WebhookTestRequest members

    /// <summary>
    /// 
    /// </summary>
    std::map<utility::string_t, utility::string_t>& getHeaders();
    bool headersIsSet() const;
    void unsetHeaders();

    void setHeaders(const std::map<utility::string_t, utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getMethod() const;
    bool methodIsSet() const;
    void unsetMethod();

    void setMethod(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPayload() const;
    bool payloadIsSet() const;
    void unsetPayload();

    void setPayload(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getUrl() const;
    bool urlIsSet() const;
    void unsetUrl();

    void setUrl(const utility::string_t& value);


protected:
    std::map<utility::string_t, utility::string_t> m_Headers;
    bool m_HeadersIsSet;
    utility::string_t m_Method;
    bool m_MethodIsSet;
    utility::string_t m_Payload;
    bool m_PayloadIsSet;
    utility::string_t m_Url;
    bool m_UrlIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_WebhookTestRequest_H_ */
