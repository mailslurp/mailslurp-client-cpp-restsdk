/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://docs.mailslurp.com/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * VerifyWebhookSignatureResults.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_VerifyWebhookSignatureResults_H_
#define COM_MAILSLURP_CLIENT_MODEL_VerifyWebhookSignatureResults_H_


#include "../ModelBase.h"


namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  VerifyWebhookSignatureResults
    : public ModelBase
{
public:
    VerifyWebhookSignatureResults();
    virtual ~VerifyWebhookSignatureResults();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// VerifyWebhookSignatureResults members

    /// <summary>
    /// 
    /// </summary>
    bool isIsValid() const;
    bool isValidIsSet() const;
    void unsetIsValid();

    void setIsValid(bool value);


protected:
    bool m_IsValid;
    bool m_IsValidIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_VerifyWebhookSignatureResults_H_ */
