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
 * OptInSendingConsentDto.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_OptInSendingConsentDto_H_
#define COM_MAILSLURP_CLIENT_MODEL_OptInSendingConsentDto_H_


#include "CppRestOpenAPIClient/ModelBase.h"


namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  OptInSendingConsentDto
    : public ModelBase
{
public:
    OptInSendingConsentDto();
    virtual ~OptInSendingConsentDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// OptInSendingConsentDto members

    /// <summary>
    /// 
    /// </summary>
    bool isVerificationCodeSent() const;
    bool verificationCodeSentIsSet() const;
    void unsetVerificationCodeSent();

    void setVerificationCodeSent(bool value);

    /// <summary>
    /// 
    /// </summary>
    bool isUserHasConsented() const;
    bool userHasConsentedIsSet() const;
    void unsetUserHasConsented();

    void setUserHasConsented(bool value);

    /// <summary>
    /// 
    /// </summary>
    bool isCanSend() const;
    bool canSendIsSet() const;
    void unsetCanSend();

    void setCanSend(bool value);


protected:
    bool m_VerificationCodeSent;
    bool m_VerificationCodeSentIsSet;
    bool m_UserHasConsented;
    bool m_UserHasConsentedIsSet;
    bool m_CanSend;
    bool m_CanSendIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_OptInSendingConsentDto_H_ */
