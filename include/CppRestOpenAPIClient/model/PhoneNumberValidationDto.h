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
 * PhoneNumberValidationDto.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_PhoneNumberValidationDto_H_
#define COM_MAILSLURP_CLIENT_MODEL_PhoneNumberValidationDto_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  PhoneNumberValidationDto
    : public ModelBase
{
public:
    PhoneNumberValidationDto();
    virtual ~PhoneNumberValidationDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PhoneNumberValidationDto members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCountryCode() const;
    bool countryCodeIsSet() const;
    void unsetCountryCode();

    void setCountryCode(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCountryPrefix() const;
    bool countryPrefixIsSet() const;
    void unsetCountryPrefix();

    void setCountryPrefix(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPhoneNumber() const;
    bool phoneNumberIsSet() const;
    void unsetPhoneNumber();

    void setPhoneNumber(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    bool isIsValid() const;
    bool isValidIsSet() const;
    void unsetIsValid();

    void setIsValid(bool value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getValidationErrors();
    bool validationErrorsIsSet() const;
    void unsetValidationErrors();

    void setValidationErrors(const std::vector<utility::string_t>& value);


protected:
    utility::string_t m_CountryCode;
    bool m_CountryCodeIsSet;
    utility::string_t m_CountryPrefix;
    bool m_CountryPrefixIsSet;
    utility::string_t m_PhoneNumber;
    bool m_PhoneNumberIsSet;
    bool m_IsValid;
    bool m_IsValidIsSet;
    std::vector<utility::string_t> m_ValidationErrors;
    bool m_ValidationErrorsIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_PhoneNumberValidationDto_H_ */
