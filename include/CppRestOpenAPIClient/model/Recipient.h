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
 * Recipient.h
 *
 * Email recipient
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_Recipient_H_
#define COM_MAILSLURP_CLIENT_MODEL_Recipient_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// Email recipient
/// </summary>
class  Recipient
    : public ModelBase
{
public:
    Recipient();
    virtual ~Recipient();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Recipient members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getRawValue() const;
    bool rawValueIsSet() const;
    void unsetRawValue();

    void setRawValue(const utility::string_t& value);

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
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);


protected:
    utility::string_t m_RawValue;
    bool m_RawValueIsSet;
    utility::string_t m_EmailAddress;
    bool m_EmailAddressIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_Recipient_H_ */
