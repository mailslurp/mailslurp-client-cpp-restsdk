/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://www.mailslurp.com/docs/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * AliasDto.h
 *
 * Email alias representation
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_AliasDto_H_
#define COM_MAILSLURP_CLIENT_MODEL_AliasDto_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// Email alias representation
/// </summary>
class  AliasDto
    : public ModelBase
{
public:
    AliasDto();
    virtual ~AliasDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// AliasDto members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// The alias&#39;s email address for receiving email
    /// </summary>
    utility::string_t getEmailAddress() const;
    bool emailAddressIsSet() const;
    void unsetEmailAddress();

    void setEmailAddress(const utility::string_t& value);

    /// <summary>
    /// The underlying email address that is hidden and will received forwarded email
    /// </summary>
    utility::string_t getMaskedEmailAddress() const;
    bool maskedEmailAddressIsSet() const;
    void unsetMaskedEmailAddress();

    void setMaskedEmailAddress(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getUserId() const;
    bool userIdIsSet() const;
    void unsetUserId();

    void setUserId(const utility::string_t& value);

    /// <summary>
    /// Inbox that is associated with the alias
    /// </summary>
    utility::string_t getInboxId() const;
    bool inboxIdIsSet() const;
    void unsetInboxId();

    void setInboxId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// If alias will generate response threads or not when email are received by it
    /// </summary>
    bool isUseThreads() const;
    bool useThreadsIsSet() const;
    void unsetUseThreads();

    void setUseThreads(bool value);

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
    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetUpdatedAt();

    void setUpdatedAt(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    bool isVerified() const;
    bool verifiedIsSet() const;
    void unsetVerified();

    void setVerified(bool value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_EmailAddress;
    bool m_EmailAddressIsSet;
    utility::string_t m_MaskedEmailAddress;
    bool m_MaskedEmailAddressIsSet;
    utility::string_t m_UserId;
    bool m_UserIdIsSet;
    utility::string_t m_InboxId;
    bool m_InboxIdIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    bool m_UseThreads;
    bool m_UseThreadsIsSet;
    utility::datetime m_CreatedAt;
    bool m_CreatedAtIsSet;
    utility::datetime m_UpdatedAt;
    bool m_UpdatedAtIsSet;
    bool m_Verified;
    bool m_VerifiedIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_AliasDto_H_ */
