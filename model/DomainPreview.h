/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://www.mailslurp.com/docs/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * DomainPreview.h
 *
 * Preview object for domain entity
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_DomainPreview_H_
#define COM_MAILSLURP_CLIENT_MODEL_DomainPreview_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// Preview object for domain entity
/// </summary>
class  DomainPreview
    : public ModelBase
{
public:
    DomainPreview();
    virtual ~DomainPreview();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// DomainPreview members

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
    utility::string_t getDomain() const;
    bool domainIsSet() const;
    void unsetDomain();

    void setDomain(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCatchAllInboxId() const;
    bool catchAllInboxIdIsSet() const;
    void unsetCatchAllInboxId();

    void setCatchAllInboxId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetCreatedAt();

    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// Type of domain. Dictates type of inbox that can be created with domain. HTTP means inboxes are processed using SES while SMTP inboxes use a custom SMTP mail server. SMTP does not support sending so use HTTP for sending emails.
    /// </summary>
    utility::string_t getDomainType() const;
    bool domainTypeIsSet() const;
    void unsetDomainType();

    void setDomainType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    bool isIsVerified() const;
    bool isVerifiedIsSet() const;
    void unsetIsVerified();

    void setIsVerified(bool value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Domain;
    bool m_DomainIsSet;
    utility::string_t m_CatchAllInboxId;
    bool m_CatchAllInboxIdIsSet;
    utility::datetime m_CreatedAt;
    bool m_CreatedAtIsSet;
    utility::string_t m_DomainType;
    bool m_DomainTypeIsSet;
    bool m_IsVerified;
    bool m_IsVerifiedIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_DomainPreview_H_ */
