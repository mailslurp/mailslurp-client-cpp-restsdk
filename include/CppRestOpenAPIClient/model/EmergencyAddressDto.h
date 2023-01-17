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
 * EmergencyAddressDto.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_EmergencyAddressDto_H_
#define COM_MAILSLURP_CLIENT_MODEL_EmergencyAddressDto_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  EmergencyAddressDto
    : public ModelBase
{
public:
    EmergencyAddressDto();
    virtual ~EmergencyAddressDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// EmergencyAddressDto members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getAddress1() const;
    bool address1IsSet() const;
    void unsetAddress1();

    void setAddress1(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPhoneCountry() const;
    bool phoneCountryIsSet() const;
    void unsetPhoneCountry();

    void setPhoneCountry(const utility::string_t& value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Address1;
    bool m_Address1IsSet;
    utility::string_t m_PhoneCountry;
    bool m_PhoneCountryIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_EmergencyAddressDto_H_ */
