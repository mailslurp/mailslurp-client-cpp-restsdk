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
 * ReplyForSms.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_ReplyForSms_H_
#define COM_MAILSLURP_CLIENT_MODEL_ReplyForSms_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/SentSmsDto.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {

class SentSmsDto;

/// <summary>
/// 
/// </summary>
class  ReplyForSms
    : public ModelBase
{
public:
    ReplyForSms();
    virtual ~ReplyForSms();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ReplyForSms members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<SentSmsDto> getReply() const;
    bool replyIsSet() const;
    void unsetReply();

    void setReply(const std::shared_ptr<SentSmsDto>& value);


protected:
    std::shared_ptr<SentSmsDto> m_Reply;
    bool m_ReplyIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_ReplyForSms_H_ */
