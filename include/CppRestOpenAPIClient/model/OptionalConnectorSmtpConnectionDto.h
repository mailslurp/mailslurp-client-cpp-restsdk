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
 * OptionalConnectorSmtpConnectionDto.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_OptionalConnectorSmtpConnectionDto_H_
#define COM_MAILSLURP_CLIENT_MODEL_OptionalConnectorSmtpConnectionDto_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/ConnectorSmtpConnectionDto.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {

class ConnectorSmtpConnectionDto;

/// <summary>
/// 
/// </summary>
class  OptionalConnectorSmtpConnectionDto
    : public ModelBase
{
public:
    OptionalConnectorSmtpConnectionDto();
    virtual ~OptionalConnectorSmtpConnectionDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// OptionalConnectorSmtpConnectionDto members

    /// <summary>
    /// 
    /// </summary>
    bool isPresent() const;
    bool presentIsSet() const;
    void unsetPresent();

    void setPresent(bool value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConnectorSmtpConnectionDto> getResult() const;
    bool resultIsSet() const;
    void unsetResult();

    void setResult(const std::shared_ptr<ConnectorSmtpConnectionDto>& value);


protected:
    bool m_Present;
    bool m_PresentIsSet;
    std::shared_ptr<ConnectorSmtpConnectionDto> m_Result;
    bool m_ResultIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_OptionalConnectorSmtpConnectionDto_H_ */
