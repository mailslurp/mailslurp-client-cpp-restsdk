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



#include "DomainDto.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




DomainDto::DomainDto()
{
    m_CatchAllInboxId = utility::conversions::to_string_t("");
    m_CatchAllInboxIdIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
    m_DkimTokensIsSet = false;
    m_Domain = utility::conversions::to_string_t("");
    m_DomainIsSet = false;
    m_DomainNameRecordsIsSet = false;
    m_DomainType = utility::conversions::to_string_t("");
    m_DomainTypeIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_IsVerified = false;
    m_IsVerifiedIsSet = false;
    m_UpdatedAt = utility::datetime();
    m_UpdatedAtIsSet = false;
    m_UserId = utility::conversions::to_string_t("");
    m_UserIdIsSet = false;
    m_VerificationToken = utility::conversions::to_string_t("");
    m_VerificationTokenIsSet = false;
}

DomainDto::~DomainDto()
{
}

void DomainDto::validate()
{
    // TODO: implement validation
}

web::json::value DomainDto::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_CatchAllInboxIdIsSet)
    {
        val[utility::conversions::to_string_t("catchAllInboxId")] = ModelBase::toJson(m_CatchAllInboxId);
    }
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t("createdAt")] = ModelBase::toJson(m_CreatedAt);
    }
    if(m_DkimTokensIsSet)
    {
        val[utility::conversions::to_string_t("dkimTokens")] = ModelBase::toJson(m_DkimTokens);
    }
    if(m_DomainIsSet)
    {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(m_Domain);
    }
    if(m_DomainNameRecordsIsSet)
    {
        val[utility::conversions::to_string_t("domainNameRecords")] = ModelBase::toJson(m_DomainNameRecords);
    }
    if(m_DomainTypeIsSet)
    {
        val[utility::conversions::to_string_t("domainType")] = ModelBase::toJson(m_DomainType);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_IsVerifiedIsSet)
    {
        val[utility::conversions::to_string_t("isVerified")] = ModelBase::toJson(m_IsVerified);
    }
    if(m_UpdatedAtIsSet)
    {
        val[utility::conversions::to_string_t("updatedAt")] = ModelBase::toJson(m_UpdatedAt);
    }
    if(m_UserIdIsSet)
    {
        val[utility::conversions::to_string_t("userId")] = ModelBase::toJson(m_UserId);
    }
    if(m_VerificationTokenIsSet)
    {
        val[utility::conversions::to_string_t("verificationToken")] = ModelBase::toJson(m_VerificationToken);
    }

    return val;
}

bool DomainDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("catchAllInboxId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("catchAllInboxId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_catchAllInboxId;
            ok &= ModelBase::fromJson(fieldValue, refVal_catchAllInboxId);
            setCatchAllInboxId(refVal_catchAllInboxId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("createdAt")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("createdAt"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_createdAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_createdAt);
            setCreatedAt(refVal_createdAt);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dkimTokens")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dkimTokens"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_dkimTokens;
            ok &= ModelBase::fromJson(fieldValue, refVal_dkimTokens);
            setDkimTokens(refVal_dkimTokens);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_domain;
            ok &= ModelBase::fromJson(fieldValue, refVal_domain);
            setDomain(refVal_domain);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domainNameRecords")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domainNameRecords"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<DomainNameRecord>> refVal_domainNameRecords;
            ok &= ModelBase::fromJson(fieldValue, refVal_domainNameRecords);
            setDomainNameRecords(refVal_domainNameRecords);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domainType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domainType"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_domainType;
            ok &= ModelBase::fromJson(fieldValue, refVal_domainType);
            setDomainType(refVal_domainType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_id);
            setId(refVal_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isVerified")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isVerified"));
        if(!fieldValue.is_null())
        {
            bool refVal_isVerified;
            ok &= ModelBase::fromJson(fieldValue, refVal_isVerified);
            setIsVerified(refVal_isVerified);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updatedAt")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updatedAt"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_updatedAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_updatedAt);
            setUpdatedAt(refVal_updatedAt);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("userId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_userId;
            ok &= ModelBase::fromJson(fieldValue, refVal_userId);
            setUserId(refVal_userId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("verificationToken")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("verificationToken"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_verificationToken;
            ok &= ModelBase::fromJson(fieldValue, refVal_verificationToken);
            setVerificationToken(refVal_verificationToken);
        }
    }
    return ok;
}

void DomainDto::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_CatchAllInboxIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("catchAllInboxId"), m_CatchAllInboxId));
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("createdAt"), m_CreatedAt));
    }
    if(m_DkimTokensIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("dkimTokens"), m_DkimTokens));
    }
    if(m_DomainIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("domain"), m_Domain));
    }
    if(m_DomainNameRecordsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("domainNameRecords"), m_DomainNameRecords));
    }
    if(m_DomainTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("domainType"), m_DomainType));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_IsVerifiedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("isVerified"), m_IsVerified));
    }
    if(m_UpdatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("updatedAt"), m_UpdatedAt));
    }
    if(m_UserIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("userId"), m_UserId));
    }
    if(m_VerificationTokenIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("verificationToken"), m_VerificationToken));
    }
}

bool DomainDto::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("catchAllInboxId")))
    {
        utility::string_t refVal_catchAllInboxId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("catchAllInboxId")), refVal_catchAllInboxId );
        setCatchAllInboxId(refVal_catchAllInboxId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("createdAt")))
    {
        utility::datetime refVal_createdAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("createdAt")), refVal_createdAt );
        setCreatedAt(refVal_createdAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("dkimTokens")))
    {
        std::vector<utility::string_t> refVal_dkimTokens;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("dkimTokens")), refVal_dkimTokens );
        setDkimTokens(refVal_dkimTokens);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("domain")))
    {
        utility::string_t refVal_domain;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("domain")), refVal_domain );
        setDomain(refVal_domain);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("domainNameRecords")))
    {
        std::vector<std::shared_ptr<DomainNameRecord>> refVal_domainNameRecords;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("domainNameRecords")), refVal_domainNameRecords );
        setDomainNameRecords(refVal_domainNameRecords);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("domainType")))
    {
        utility::string_t refVal_domainType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("domainType")), refVal_domainType );
        setDomainType(refVal_domainType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        utility::string_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("id")), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("isVerified")))
    {
        bool refVal_isVerified;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("isVerified")), refVal_isVerified );
        setIsVerified(refVal_isVerified);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("updatedAt")))
    {
        utility::datetime refVal_updatedAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("updatedAt")), refVal_updatedAt );
        setUpdatedAt(refVal_updatedAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("userId")))
    {
        utility::string_t refVal_userId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("userId")), refVal_userId );
        setUserId(refVal_userId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("verificationToken")))
    {
        utility::string_t refVal_verificationToken;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("verificationToken")), refVal_verificationToken );
        setVerificationToken(refVal_verificationToken);
    }
    return ok;
}

utility::string_t DomainDto::getCatchAllInboxId() const
{
    return m_CatchAllInboxId;
}

void DomainDto::setCatchAllInboxId(const utility::string_t& value)
{
    m_CatchAllInboxId = value;
    m_CatchAllInboxIdIsSet = true;
}

bool DomainDto::catchAllInboxIdIsSet() const
{
    return m_CatchAllInboxIdIsSet;
}

void DomainDto::unsetCatchAllInboxId()
{
    m_CatchAllInboxIdIsSet = false;
}
utility::datetime DomainDto::getCreatedAt() const
{
    return m_CreatedAt;
}

void DomainDto::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool DomainDto::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void DomainDto::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
std::vector<utility::string_t>& DomainDto::getDkimTokens()
{
    return m_DkimTokens;
}

void DomainDto::setDkimTokens(const std::vector<utility::string_t>& value)
{
    m_DkimTokens = value;
    m_DkimTokensIsSet = true;
}

bool DomainDto::dkimTokensIsSet() const
{
    return m_DkimTokensIsSet;
}

void DomainDto::unsetDkimTokens()
{
    m_DkimTokensIsSet = false;
}
utility::string_t DomainDto::getDomain() const
{
    return m_Domain;
}

void DomainDto::setDomain(const utility::string_t& value)
{
    m_Domain = value;
    m_DomainIsSet = true;
}

bool DomainDto::domainIsSet() const
{
    return m_DomainIsSet;
}

void DomainDto::unsetDomain()
{
    m_DomainIsSet = false;
}
std::vector<std::shared_ptr<DomainNameRecord>>& DomainDto::getDomainNameRecords()
{
    return m_DomainNameRecords;
}

void DomainDto::setDomainNameRecords(const std::vector<std::shared_ptr<DomainNameRecord>>& value)
{
    m_DomainNameRecords = value;
    m_DomainNameRecordsIsSet = true;
}

bool DomainDto::domainNameRecordsIsSet() const
{
    return m_DomainNameRecordsIsSet;
}

void DomainDto::unsetDomainNameRecords()
{
    m_DomainNameRecordsIsSet = false;
}
utility::string_t DomainDto::getDomainType() const
{
    return m_DomainType;
}

void DomainDto::setDomainType(const utility::string_t& value)
{
    m_DomainType = value;
    m_DomainTypeIsSet = true;
}

bool DomainDto::domainTypeIsSet() const
{
    return m_DomainTypeIsSet;
}

void DomainDto::unsetDomainType()
{
    m_DomainTypeIsSet = false;
}
utility::string_t DomainDto::getId() const
{
    return m_Id;
}

void DomainDto::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool DomainDto::idIsSet() const
{
    return m_IdIsSet;
}

void DomainDto::unsetId()
{
    m_IdIsSet = false;
}
bool DomainDto::isIsVerified() const
{
    return m_IsVerified;
}

void DomainDto::setIsVerified(bool value)
{
    m_IsVerified = value;
    m_IsVerifiedIsSet = true;
}

bool DomainDto::isVerifiedIsSet() const
{
    return m_IsVerifiedIsSet;
}

void DomainDto::unsetIsVerified()
{
    m_IsVerifiedIsSet = false;
}
utility::datetime DomainDto::getUpdatedAt() const
{
    return m_UpdatedAt;
}

void DomainDto::setUpdatedAt(const utility::datetime& value)
{
    m_UpdatedAt = value;
    m_UpdatedAtIsSet = true;
}

bool DomainDto::updatedAtIsSet() const
{
    return m_UpdatedAtIsSet;
}

void DomainDto::unsetUpdatedAt()
{
    m_UpdatedAtIsSet = false;
}
utility::string_t DomainDto::getUserId() const
{
    return m_UserId;
}

void DomainDto::setUserId(const utility::string_t& value)
{
    m_UserId = value;
    m_UserIdIsSet = true;
}

bool DomainDto::userIdIsSet() const
{
    return m_UserIdIsSet;
}

void DomainDto::unsetUserId()
{
    m_UserIdIsSet = false;
}
utility::string_t DomainDto::getVerificationToken() const
{
    return m_VerificationToken;
}

void DomainDto::setVerificationToken(const utility::string_t& value)
{
    m_VerificationToken = value;
    m_VerificationTokenIsSet = true;
}

bool DomainDto::verificationTokenIsSet() const
{
    return m_VerificationTokenIsSet;
}

void DomainDto::unsetVerificationToken()
{
    m_VerificationTokenIsSet = false;
}
}
}
}
}


