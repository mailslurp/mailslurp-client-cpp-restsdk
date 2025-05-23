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



#include "CppRestOpenAPIClient/model/DomainDto.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



DomainDto::DomainDto()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_UserId = utility::conversions::to_string_t("");
    m_UserIdIsSet = false;
    m_Domain = utility::conversions::to_string_t("");
    m_DomainIsSet = false;
    m_VerificationToken = utility::conversions::to_string_t("");
    m_VerificationTokenIsSet = false;
    m_DkimTokensIsSet = false;
    m_DuplicateRecordsMessage = utility::conversions::to_string_t("");
    m_DuplicateRecordsMessageIsSet = false;
    m_HasDuplicateRecords = false;
    m_HasDuplicateRecordsIsSet = false;
    m_MissingRecordsMessage = utility::conversions::to_string_t("");
    m_MissingRecordsMessageIsSet = false;
    m_HasMissingRecords = false;
    m_HasMissingRecordsIsSet = false;
    m_IsVerified = false;
    m_IsVerifiedIsSet = false;
    m_DomainNameRecordsIsSet = false;
    m_CatchAllInboxId = utility::conversions::to_string_t("");
    m_CatchAllInboxIdIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
    m_UpdatedAt = utility::datetime();
    m_UpdatedAtIsSet = false;
    m_DomainType = utility::conversions::to_string_t("");
    m_DomainTypeIsSet = false;
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
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_UserIdIsSet)
    {
        val[utility::conversions::to_string_t(U("userId"))] = ModelBase::toJson(m_UserId);
    }
    if(m_DomainIsSet)
    {
        val[utility::conversions::to_string_t(U("domain"))] = ModelBase::toJson(m_Domain);
    }
    if(m_VerificationTokenIsSet)
    {
        val[utility::conversions::to_string_t(U("verificationToken"))] = ModelBase::toJson(m_VerificationToken);
    }
    if(m_DkimTokensIsSet)
    {
        val[utility::conversions::to_string_t(U("dkimTokens"))] = ModelBase::toJson(m_DkimTokens);
    }
    if(m_DuplicateRecordsMessageIsSet)
    {
        val[utility::conversions::to_string_t(U("duplicateRecordsMessage"))] = ModelBase::toJson(m_DuplicateRecordsMessage);
    }
    if(m_HasDuplicateRecordsIsSet)
    {
        val[utility::conversions::to_string_t(U("hasDuplicateRecords"))] = ModelBase::toJson(m_HasDuplicateRecords);
    }
    if(m_MissingRecordsMessageIsSet)
    {
        val[utility::conversions::to_string_t(U("missingRecordsMessage"))] = ModelBase::toJson(m_MissingRecordsMessage);
    }
    if(m_HasMissingRecordsIsSet)
    {
        val[utility::conversions::to_string_t(U("hasMissingRecords"))] = ModelBase::toJson(m_HasMissingRecords);
    }
    if(m_IsVerifiedIsSet)
    {
        val[utility::conversions::to_string_t(U("isVerified"))] = ModelBase::toJson(m_IsVerified);
    }
    if(m_DomainNameRecordsIsSet)
    {
        val[utility::conversions::to_string_t(U("domainNameRecords"))] = ModelBase::toJson(m_DomainNameRecords);
    }
    if(m_CatchAllInboxIdIsSet)
    {
        val[utility::conversions::to_string_t(U("catchAllInboxId"))] = ModelBase::toJson(m_CatchAllInboxId);
    }
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t(U("createdAt"))] = ModelBase::toJson(m_CreatedAt);
    }
    if(m_UpdatedAtIsSet)
    {
        val[utility::conversions::to_string_t(U("updatedAt"))] = ModelBase::toJson(m_UpdatedAt);
    }
    if(m_DomainTypeIsSet)
    {
        val[utility::conversions::to_string_t(U("domainType"))] = ModelBase::toJson(m_DomainType);
    }

    return val;
}

bool DomainDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setId);
            setId(refVal_setId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("userId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("userId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setUserId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUserId);
            setUserId(refVal_setUserId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("domain"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("domain")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDomain;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDomain);
            setDomain(refVal_setDomain);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("verificationToken"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("verificationToken")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setVerificationToken;
            ok &= ModelBase::fromJson(fieldValue, refVal_setVerificationToken);
            setVerificationToken(refVal_setVerificationToken);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("dkimTokens"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("dkimTokens")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setDkimTokens;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDkimTokens);
            setDkimTokens(refVal_setDkimTokens);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("duplicateRecordsMessage"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("duplicateRecordsMessage")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDuplicateRecordsMessage;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDuplicateRecordsMessage);
            setDuplicateRecordsMessage(refVal_setDuplicateRecordsMessage);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("hasDuplicateRecords"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("hasDuplicateRecords")));
        if(!fieldValue.is_null())
        {
            bool refVal_setHasDuplicateRecords;
            ok &= ModelBase::fromJson(fieldValue, refVal_setHasDuplicateRecords);
            setHasDuplicateRecords(refVal_setHasDuplicateRecords);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("missingRecordsMessage"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("missingRecordsMessage")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setMissingRecordsMessage;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMissingRecordsMessage);
            setMissingRecordsMessage(refVal_setMissingRecordsMessage);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("hasMissingRecords"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("hasMissingRecords")));
        if(!fieldValue.is_null())
        {
            bool refVal_setHasMissingRecords;
            ok &= ModelBase::fromJson(fieldValue, refVal_setHasMissingRecords);
            setHasMissingRecords(refVal_setHasMissingRecords);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("isVerified"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("isVerified")));
        if(!fieldValue.is_null())
        {
            bool refVal_setIsVerified;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIsVerified);
            setIsVerified(refVal_setIsVerified);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("domainNameRecords"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("domainNameRecords")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<DomainNameRecord>> refVal_setDomainNameRecords;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDomainNameRecords);
            setDomainNameRecords(refVal_setDomainNameRecords);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("catchAllInboxId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("catchAllInboxId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCatchAllInboxId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCatchAllInboxId);
            setCatchAllInboxId(refVal_setCatchAllInboxId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("createdAt"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("createdAt")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setCreatedAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCreatedAt);
            setCreatedAt(refVal_setCreatedAt);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("updatedAt"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("updatedAt")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setUpdatedAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUpdatedAt);
            setUpdatedAt(refVal_setUpdatedAt);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("domainType"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("domainType")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDomainType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDomainType);
            setDomainType(refVal_setDomainType);
        }
    }
    return ok;
}

void DomainDto::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_Id));
    }
    if(m_UserIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("userId")), m_UserId));
    }
    if(m_DomainIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("domain")), m_Domain));
    }
    if(m_VerificationTokenIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("verificationToken")), m_VerificationToken));
    }
    if(m_DkimTokensIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("dkimTokens")), m_DkimTokens));
    }
    if(m_DuplicateRecordsMessageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("duplicateRecordsMessage")), m_DuplicateRecordsMessage));
    }
    if(m_HasDuplicateRecordsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("hasDuplicateRecords")), m_HasDuplicateRecords));
    }
    if(m_MissingRecordsMessageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("missingRecordsMessage")), m_MissingRecordsMessage));
    }
    if(m_HasMissingRecordsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("hasMissingRecords")), m_HasMissingRecords));
    }
    if(m_IsVerifiedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("isVerified")), m_IsVerified));
    }
    if(m_DomainNameRecordsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("domainNameRecords")), m_DomainNameRecords));
    }
    if(m_CatchAllInboxIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("catchAllInboxId")), m_CatchAllInboxId));
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("createdAt")), m_CreatedAt));
    }
    if(m_UpdatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("updatedAt")), m_UpdatedAt));
    }
    if(m_DomainTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("domainType")), m_DomainType));
    }
}

bool DomainDto::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_setId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_setId );
        setId(refVal_setId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("userId"))))
    {
        utility::string_t refVal_setUserId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("userId"))), refVal_setUserId );
        setUserId(refVal_setUserId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("domain"))))
    {
        utility::string_t refVal_setDomain;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("domain"))), refVal_setDomain );
        setDomain(refVal_setDomain);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("verificationToken"))))
    {
        utility::string_t refVal_setVerificationToken;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("verificationToken"))), refVal_setVerificationToken );
        setVerificationToken(refVal_setVerificationToken);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("dkimTokens"))))
    {
        std::vector<utility::string_t> refVal_setDkimTokens;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("dkimTokens"))), refVal_setDkimTokens );
        setDkimTokens(refVal_setDkimTokens);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("duplicateRecordsMessage"))))
    {
        utility::string_t refVal_setDuplicateRecordsMessage;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("duplicateRecordsMessage"))), refVal_setDuplicateRecordsMessage );
        setDuplicateRecordsMessage(refVal_setDuplicateRecordsMessage);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("hasDuplicateRecords"))))
    {
        bool refVal_setHasDuplicateRecords;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("hasDuplicateRecords"))), refVal_setHasDuplicateRecords );
        setHasDuplicateRecords(refVal_setHasDuplicateRecords);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("missingRecordsMessage"))))
    {
        utility::string_t refVal_setMissingRecordsMessage;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("missingRecordsMessage"))), refVal_setMissingRecordsMessage );
        setMissingRecordsMessage(refVal_setMissingRecordsMessage);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("hasMissingRecords"))))
    {
        bool refVal_setHasMissingRecords;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("hasMissingRecords"))), refVal_setHasMissingRecords );
        setHasMissingRecords(refVal_setHasMissingRecords);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("isVerified"))))
    {
        bool refVal_setIsVerified;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("isVerified"))), refVal_setIsVerified );
        setIsVerified(refVal_setIsVerified);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("domainNameRecords"))))
    {
        std::vector<std::shared_ptr<DomainNameRecord>> refVal_setDomainNameRecords;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("domainNameRecords"))), refVal_setDomainNameRecords );
        setDomainNameRecords(refVal_setDomainNameRecords);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("catchAllInboxId"))))
    {
        utility::string_t refVal_setCatchAllInboxId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("catchAllInboxId"))), refVal_setCatchAllInboxId );
        setCatchAllInboxId(refVal_setCatchAllInboxId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("createdAt"))))
    {
        utility::datetime refVal_setCreatedAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("createdAt"))), refVal_setCreatedAt );
        setCreatedAt(refVal_setCreatedAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("updatedAt"))))
    {
        utility::datetime refVal_setUpdatedAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("updatedAt"))), refVal_setUpdatedAt );
        setUpdatedAt(refVal_setUpdatedAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("domainType"))))
    {
        utility::string_t refVal_setDomainType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("domainType"))), refVal_setDomainType );
        setDomainType(refVal_setDomainType);
    }
    return ok;
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
utility::string_t DomainDto::getDuplicateRecordsMessage() const
{
    return m_DuplicateRecordsMessage;
}

void DomainDto::setDuplicateRecordsMessage(const utility::string_t& value)
{
    m_DuplicateRecordsMessage = value;
    m_DuplicateRecordsMessageIsSet = true;
}

bool DomainDto::duplicateRecordsMessageIsSet() const
{
    return m_DuplicateRecordsMessageIsSet;
}

void DomainDto::unsetDuplicateRecordsMessage()
{
    m_DuplicateRecordsMessageIsSet = false;
}
bool DomainDto::isHasDuplicateRecords() const
{
    return m_HasDuplicateRecords;
}

void DomainDto::setHasDuplicateRecords(bool value)
{
    m_HasDuplicateRecords = value;
    m_HasDuplicateRecordsIsSet = true;
}

bool DomainDto::hasDuplicateRecordsIsSet() const
{
    return m_HasDuplicateRecordsIsSet;
}

void DomainDto::unsetHasDuplicateRecords()
{
    m_HasDuplicateRecordsIsSet = false;
}
utility::string_t DomainDto::getMissingRecordsMessage() const
{
    return m_MissingRecordsMessage;
}

void DomainDto::setMissingRecordsMessage(const utility::string_t& value)
{
    m_MissingRecordsMessage = value;
    m_MissingRecordsMessageIsSet = true;
}

bool DomainDto::missingRecordsMessageIsSet() const
{
    return m_MissingRecordsMessageIsSet;
}

void DomainDto::unsetMissingRecordsMessage()
{
    m_MissingRecordsMessageIsSet = false;
}
bool DomainDto::isHasMissingRecords() const
{
    return m_HasMissingRecords;
}

void DomainDto::setHasMissingRecords(bool value)
{
    m_HasMissingRecords = value;
    m_HasMissingRecordsIsSet = true;
}

bool DomainDto::hasMissingRecordsIsSet() const
{
    return m_HasMissingRecordsIsSet;
}

void DomainDto::unsetHasMissingRecords()
{
    m_HasMissingRecordsIsSet = false;
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
}
}
}
}


