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



#include "CppRestOpenAPIClient/model/AliasDto.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



AliasDto::AliasDto()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_EmailAddress = utility::conversions::to_string_t("");
    m_EmailAddressIsSet = false;
    m_MaskedEmailAddress = utility::conversions::to_string_t("");
    m_MaskedEmailAddressIsSet = false;
    m_UserId = utility::conversions::to_string_t("");
    m_UserIdIsSet = false;
    m_InboxId = utility::conversions::to_string_t("");
    m_InboxIdIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_UseThreads = false;
    m_UseThreadsIsSet = false;
    m_IsVerified = false;
    m_IsVerifiedIsSet = false;
    m_DomainId = utility::conversions::to_string_t("");
    m_DomainIdIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
    m_UpdatedAt = utility::datetime();
    m_UpdatedAtIsSet = false;
}

AliasDto::~AliasDto()
{
}

void AliasDto::validate()
{
    // TODO: implement validation
}

web::json::value AliasDto::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_EmailAddressIsSet)
    {
        val[utility::conversions::to_string_t(U("emailAddress"))] = ModelBase::toJson(m_EmailAddress);
    }
    if(m_MaskedEmailAddressIsSet)
    {
        val[utility::conversions::to_string_t(U("maskedEmailAddress"))] = ModelBase::toJson(m_MaskedEmailAddress);
    }
    if(m_UserIdIsSet)
    {
        val[utility::conversions::to_string_t(U("userId"))] = ModelBase::toJson(m_UserId);
    }
    if(m_InboxIdIsSet)
    {
        val[utility::conversions::to_string_t(U("inboxId"))] = ModelBase::toJson(m_InboxId);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_UseThreadsIsSet)
    {
        val[utility::conversions::to_string_t(U("useThreads"))] = ModelBase::toJson(m_UseThreads);
    }
    if(m_IsVerifiedIsSet)
    {
        val[utility::conversions::to_string_t(U("isVerified"))] = ModelBase::toJson(m_IsVerified);
    }
    if(m_DomainIdIsSet)
    {
        val[utility::conversions::to_string_t(U("domainId"))] = ModelBase::toJson(m_DomainId);
    }
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t(U("createdAt"))] = ModelBase::toJson(m_CreatedAt);
    }
    if(m_UpdatedAtIsSet)
    {
        val[utility::conversions::to_string_t(U("updatedAt"))] = ModelBase::toJson(m_UpdatedAt);
    }

    return val;
}

bool AliasDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("emailAddress"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("emailAddress")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setEmailAddress;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEmailAddress);
            setEmailAddress(refVal_setEmailAddress);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("maskedEmailAddress"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("maskedEmailAddress")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setMaskedEmailAddress;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMaskedEmailAddress);
            setMaskedEmailAddress(refVal_setMaskedEmailAddress);
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
    if(val.has_field(utility::conversions::to_string_t(U("inboxId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("inboxId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setInboxId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setInboxId);
            setInboxId(refVal_setInboxId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setName);
            setName(refVal_setName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("useThreads"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("useThreads")));
        if(!fieldValue.is_null())
        {
            bool refVal_setUseThreads;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUseThreads);
            setUseThreads(refVal_setUseThreads);
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
    if(val.has_field(utility::conversions::to_string_t(U("domainId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("domainId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDomainId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDomainId);
            setDomainId(refVal_setDomainId);
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
    return ok;
}

void AliasDto::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_EmailAddressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("emailAddress")), m_EmailAddress));
    }
    if(m_MaskedEmailAddressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("maskedEmailAddress")), m_MaskedEmailAddress));
    }
    if(m_UserIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("userId")), m_UserId));
    }
    if(m_InboxIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("inboxId")), m_InboxId));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_UseThreadsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("useThreads")), m_UseThreads));
    }
    if(m_IsVerifiedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("isVerified")), m_IsVerified));
    }
    if(m_DomainIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("domainId")), m_DomainId));
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("createdAt")), m_CreatedAt));
    }
    if(m_UpdatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("updatedAt")), m_UpdatedAt));
    }
}

bool AliasDto::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("emailAddress"))))
    {
        utility::string_t refVal_setEmailAddress;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("emailAddress"))), refVal_setEmailAddress );
        setEmailAddress(refVal_setEmailAddress);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("maskedEmailAddress"))))
    {
        utility::string_t refVal_setMaskedEmailAddress;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("maskedEmailAddress"))), refVal_setMaskedEmailAddress );
        setMaskedEmailAddress(refVal_setMaskedEmailAddress);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("userId"))))
    {
        utility::string_t refVal_setUserId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("userId"))), refVal_setUserId );
        setUserId(refVal_setUserId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("inboxId"))))
    {
        utility::string_t refVal_setInboxId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("inboxId"))), refVal_setInboxId );
        setInboxId(refVal_setInboxId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("useThreads"))))
    {
        bool refVal_setUseThreads;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("useThreads"))), refVal_setUseThreads );
        setUseThreads(refVal_setUseThreads);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("isVerified"))))
    {
        bool refVal_setIsVerified;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("isVerified"))), refVal_setIsVerified );
        setIsVerified(refVal_setIsVerified);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("domainId"))))
    {
        utility::string_t refVal_setDomainId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("domainId"))), refVal_setDomainId );
        setDomainId(refVal_setDomainId);
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
    return ok;
}

utility::string_t AliasDto::getId() const
{
    return m_Id;
}

void AliasDto::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool AliasDto::idIsSet() const
{
    return m_IdIsSet;
}

void AliasDto::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t AliasDto::getEmailAddress() const
{
    return m_EmailAddress;
}

void AliasDto::setEmailAddress(const utility::string_t& value)
{
    m_EmailAddress = value;
    m_EmailAddressIsSet = true;
}

bool AliasDto::emailAddressIsSet() const
{
    return m_EmailAddressIsSet;
}

void AliasDto::unsetEmailAddress()
{
    m_EmailAddressIsSet = false;
}
utility::string_t AliasDto::getMaskedEmailAddress() const
{
    return m_MaskedEmailAddress;
}

void AliasDto::setMaskedEmailAddress(const utility::string_t& value)
{
    m_MaskedEmailAddress = value;
    m_MaskedEmailAddressIsSet = true;
}

bool AliasDto::maskedEmailAddressIsSet() const
{
    return m_MaskedEmailAddressIsSet;
}

void AliasDto::unsetMaskedEmailAddress()
{
    m_MaskedEmailAddressIsSet = false;
}
utility::string_t AliasDto::getUserId() const
{
    return m_UserId;
}

void AliasDto::setUserId(const utility::string_t& value)
{
    m_UserId = value;
    m_UserIdIsSet = true;
}

bool AliasDto::userIdIsSet() const
{
    return m_UserIdIsSet;
}

void AliasDto::unsetUserId()
{
    m_UserIdIsSet = false;
}
utility::string_t AliasDto::getInboxId() const
{
    return m_InboxId;
}

void AliasDto::setInboxId(const utility::string_t& value)
{
    m_InboxId = value;
    m_InboxIdIsSet = true;
}

bool AliasDto::inboxIdIsSet() const
{
    return m_InboxIdIsSet;
}

void AliasDto::unsetInboxId()
{
    m_InboxIdIsSet = false;
}
utility::string_t AliasDto::getName() const
{
    return m_Name;
}

void AliasDto::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool AliasDto::nameIsSet() const
{
    return m_NameIsSet;
}

void AliasDto::unsetName()
{
    m_NameIsSet = false;
}
bool AliasDto::isUseThreads() const
{
    return m_UseThreads;
}

void AliasDto::setUseThreads(bool value)
{
    m_UseThreads = value;
    m_UseThreadsIsSet = true;
}

bool AliasDto::useThreadsIsSet() const
{
    return m_UseThreadsIsSet;
}

void AliasDto::unsetUseThreads()
{
    m_UseThreadsIsSet = false;
}
bool AliasDto::isIsVerified() const
{
    return m_IsVerified;
}

void AliasDto::setIsVerified(bool value)
{
    m_IsVerified = value;
    m_IsVerifiedIsSet = true;
}

bool AliasDto::isVerifiedIsSet() const
{
    return m_IsVerifiedIsSet;
}

void AliasDto::unsetIsVerified()
{
    m_IsVerifiedIsSet = false;
}
utility::string_t AliasDto::getDomainId() const
{
    return m_DomainId;
}

void AliasDto::setDomainId(const utility::string_t& value)
{
    m_DomainId = value;
    m_DomainIdIsSet = true;
}

bool AliasDto::domainIdIsSet() const
{
    return m_DomainIdIsSet;
}

void AliasDto::unsetDomainId()
{
    m_DomainIdIsSet = false;
}
utility::datetime AliasDto::getCreatedAt() const
{
    return m_CreatedAt;
}

void AliasDto::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool AliasDto::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void AliasDto::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
utility::datetime AliasDto::getUpdatedAt() const
{
    return m_UpdatedAt;
}

void AliasDto::setUpdatedAt(const utility::datetime& value)
{
    m_UpdatedAt = value;
    m_UpdatedAtIsSet = true;
}

bool AliasDto::updatedAtIsSet() const
{
    return m_UpdatedAtIsSet;
}

void AliasDto::unsetUpdatedAt()
{
    m_UpdatedAtIsSet = false;
}
}
}
}
}


