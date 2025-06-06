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
 * OptInConsentOptions.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_OptInConsentOptions_H_
#define COM_MAILSLURP_CLIENT_MODEL_OptInConsentOptions_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/model/SendOptInConsentEmailOptions.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {

class SendOptInConsentEmailOptions;

/// <summary>
/// 
/// </summary>
class  OptInConsentOptions
    : public ModelBase
{
public:
    OptInConsentOptions();
    virtual ~OptInConsentOptions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// OptInConsentOptions members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getEmailAddress() const;
    bool emailAddressIsSet() const;
    void unsetEmailAddress();

    void setEmailAddress(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCompanyName() const;
    bool companyNameIsSet() const;
    void unsetCompanyName();

    void setCompanyName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<SendOptInConsentEmailOptions> getSendOptInOptions() const;
    bool sendOptInOptionsIsSet() const;
    void unsetSendOptInOptions();

    void setSendOptInOptions(const std::shared_ptr<SendOptInConsentEmailOptions>& value);


protected:
    utility::string_t m_EmailAddress;
    bool m_EmailAddressIsSet;
    utility::string_t m_CompanyName;
    bool m_CompanyNameIsSet;
    std::shared_ptr<SendOptInConsentEmailOptions> m_SendOptInOptions;
    bool m_SendOptInOptionsIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_OptInConsentOptions_H_ */
