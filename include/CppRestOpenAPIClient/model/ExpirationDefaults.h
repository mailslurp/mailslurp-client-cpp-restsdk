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
 * ExpirationDefaults.h
 *
 * Expiration defaults for your account
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_ExpirationDefaults_H_
#define COM_MAILSLURP_CLIENT_MODEL_ExpirationDefaults_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// Expiration defaults for your account
/// </summary>
class  ExpirationDefaults
    : public ModelBase
{
public:
    ExpirationDefaults();
    virtual ~ExpirationDefaults();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ExpirationDefaults members

    /// <summary>
    /// 
    /// </summary>
    int64_t getDefaultExpirationMillis() const;
    bool defaultExpirationMillisIsSet() const;
    void unsetDefaultExpirationMillis();

    void setDefaultExpirationMillis(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getMaxExpirationMillis() const;
    bool maxExpirationMillisIsSet() const;
    void unsetMaxExpirationMillis();

    void setMaxExpirationMillis(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getDefaultExpiresAt() const;
    bool defaultExpiresAtIsSet() const;
    void unsetDefaultExpiresAt();

    void setDefaultExpiresAt(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    bool isCanPermanentInbox() const;
    bool canPermanentInboxIsSet() const;
    void unsetCanPermanentInbox();

    void setCanPermanentInbox(bool value);

    /// <summary>
    /// 
    /// </summary>
    bool isNextInboxAllowsPermanent() const;
    bool nextInboxAllowsPermanentIsSet() const;
    void unsetNextInboxAllowsPermanent();

    void setNextInboxAllowsPermanent(bool value);


protected:
    int64_t m_DefaultExpirationMillis;
    bool m_DefaultExpirationMillisIsSet;
    int64_t m_MaxExpirationMillis;
    bool m_MaxExpirationMillisIsSet;
    utility::datetime m_DefaultExpiresAt;
    bool m_DefaultExpiresAtIsSet;
    bool m_CanPermanentInbox;
    bool m_CanPermanentInboxIsSet;
    bool m_NextInboxAllowsPermanent;
    bool m_NextInboxAllowsPermanentIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_ExpirationDefaults_H_ */
