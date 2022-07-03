/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://docs.mailslurp.com/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * SmsProjection.h
 *
 * SMS projection
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_SmsProjection_H_
#define COM_MAILSLURP_CLIENT_MODEL_SmsProjection_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// SMS projection
/// </summary>
class  SmsProjection
    : public ModelBase
{
public:
    SmsProjection();
    virtual ~SmsProjection();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SmsProjection members

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
    utility::string_t getUserId() const;
    bool userIdIsSet() const;
    void unsetUserId();

    void setUserId(const utility::string_t& value);

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
    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetCreatedAt();

    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    bool isRead() const;
    bool readIsSet() const;
    void unsetRead();

    void setRead(bool value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getFromNumber() const;
    bool fromNumberIsSet() const;
    void unsetFromNumber();

    void setFromNumber(const utility::string_t& value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_UserId;
    bool m_UserIdIsSet;
    utility::string_t m_PhoneNumber;
    bool m_PhoneNumberIsSet;
    utility::datetime m_CreatedAt;
    bool m_CreatedAtIsSet;
    bool m_Read;
    bool m_ReadIsSet;
    utility::string_t m_FromNumber;
    bool m_FromNumberIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_SmsProjection_H_ */
