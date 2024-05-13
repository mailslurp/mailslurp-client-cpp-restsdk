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
 * UpdateSmtpAccessOptions.h
 *
 * Edit access details for inbox using SMTP
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_UpdateSmtpAccessOptions_H_
#define COM_MAILSLURP_CLIENT_MODEL_UpdateSmtpAccessOptions_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// Edit access details for inbox using SMTP
/// </summary>
class  UpdateSmtpAccessOptions
    : public ModelBase
{
public:
    UpdateSmtpAccessOptions();
    virtual ~UpdateSmtpAccessOptions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// UpdateSmtpAccessOptions members

    /// <summary>
    /// SMTP username for login
    /// </summary>
    utility::string_t getSmtpUsername() const;
    bool smtpUsernameIsSet() const;
    void unsetSmtpUsername();

    void setSmtpUsername(const utility::string_t& value);

    /// <summary>
    /// SMTP password for login
    /// </summary>
    utility::string_t getSmtpPassword() const;
    bool smtpPasswordIsSet() const;
    void unsetSmtpPassword();

    void setSmtpPassword(const utility::string_t& value);


protected:
    utility::string_t m_SmtpUsername;
    bool m_SmtpUsernameIsSet;
    utility::string_t m_SmtpPassword;
    bool m_SmtpPasswordIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_UpdateSmtpAccessOptions_H_ */
