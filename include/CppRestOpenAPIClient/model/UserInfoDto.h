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
 * UserInfoDto.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_UserInfoDto_H_
#define COM_MAILSLURP_CLIENT_MODEL_UserInfoDto_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  UserInfoDto
    : public ModelBase
{
public:
    UserInfoDto();
    virtual ~UserInfoDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// UserInfoDto members

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
    utility::string_t getEmailAddress() const;
    bool emailAddressIsSet() const;
    void unsetEmailAddress();

    void setEmailAddress(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getAccountState() const;
    bool accountStateIsSet() const;
    void unsetAccountState();

    void setAccountState(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSubscriptionType() const;
    bool subscriptionTypeIsSet() const;
    void unsetSubscriptionType();

    void setSubscriptionType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getAccountType() const;
    bool accountTypeIsSet() const;
    void unsetAccountType();

    void setAccountType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetCreatedAt();

    void setCreatedAt(const utility::datetime& value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_EmailAddress;
    bool m_EmailAddressIsSet;
    utility::string_t m_AccountState;
    bool m_AccountStateIsSet;
    utility::string_t m_SubscriptionType;
    bool m_SubscriptionTypeIsSet;
    utility::string_t m_AccountType;
    bool m_AccountTypeIsSet;
    utility::datetime m_CreatedAt;
    bool m_CreatedAtIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_UserInfoDto_H_ */
