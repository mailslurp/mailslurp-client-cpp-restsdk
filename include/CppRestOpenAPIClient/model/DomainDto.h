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
 * DomainDto.h
 *
 * Domain plus verification records and status
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_DomainDto_H_
#define COM_MAILSLURP_CLIENT_MODEL_DomainDto_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/DomainNameRecord.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace com {
namespace mailslurp {
namespace client {
namespace model {

class DomainNameRecord;

/// <summary>
/// Domain plus verification records and status
/// </summary>
class  DomainDto
    : public ModelBase
{
public:
    DomainDto();
    virtual ~DomainDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// DomainDto members

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
    /// Custom domain name
    /// </summary>
    utility::string_t getDomain() const;
    bool domainIsSet() const;
    void unsetDomain();

    void setDomain(const utility::string_t& value);

    /// <summary>
    /// Verification tokens
    /// </summary>
    utility::string_t getVerificationToken() const;
    bool verificationTokenIsSet() const;
    void unsetVerificationToken();

    void setVerificationToken(const utility::string_t& value);

    /// <summary>
    /// Unique token DKIM tokens
    /// </summary>
    std::vector<utility::string_t>& getDkimTokens();
    bool dkimTokensIsSet() const;
    void unsetDkimTokens();

    void setDkimTokens(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Whether domain has been verified or not. If the domain is not verified after 72 hours there is most likely an issue with the domains DNS records.
    /// </summary>
    bool isIsVerified() const;
    bool isVerifiedIsSet() const;
    void unsetIsVerified();

    void setIsVerified(bool value);

    /// <summary>
    /// List of DNS domain name records (C, MX, TXT) etc that you must add to the DNS server associated with your domain provider.
    /// </summary>
    std::vector<std::shared_ptr<DomainNameRecord>>& getDomainNameRecords();
    bool domainNameRecordsIsSet() const;
    void unsetDomainNameRecords();

    void setDomainNameRecords(const std::vector<std::shared_ptr<DomainNameRecord>>& value);

    /// <summary>
    /// The optional catch all inbox that will receive emails sent to the domain that cannot be matched.
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
    /// 
    /// </summary>
    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetUpdatedAt();

    void setUpdatedAt(const utility::datetime& value);

    /// <summary>
    /// Type of domain. Dictates type of inbox that can be created with domain. HTTP means inboxes are processed using SES while SMTP inboxes use a custom SMTP mail server. SMTP does not support sending so use HTTP for sending emails.
    /// </summary>
    utility::string_t getDomainType() const;
    bool domainTypeIsSet() const;
    void unsetDomainType();

    void setDomainType(const utility::string_t& value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_UserId;
    bool m_UserIdIsSet;
    utility::string_t m_Domain;
    bool m_DomainIsSet;
    utility::string_t m_VerificationToken;
    bool m_VerificationTokenIsSet;
    std::vector<utility::string_t> m_DkimTokens;
    bool m_DkimTokensIsSet;
    bool m_IsVerified;
    bool m_IsVerifiedIsSet;
    std::vector<std::shared_ptr<DomainNameRecord>> m_DomainNameRecords;
    bool m_DomainNameRecordsIsSet;
    utility::string_t m_CatchAllInboxId;
    bool m_CatchAllInboxIdIsSet;
    utility::datetime m_CreatedAt;
    bool m_CreatedAtIsSet;
    utility::datetime m_UpdatedAt;
    bool m_UpdatedAtIsSet;
    utility::string_t m_DomainType;
    bool m_DomainTypeIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_DomainDto_H_ */
