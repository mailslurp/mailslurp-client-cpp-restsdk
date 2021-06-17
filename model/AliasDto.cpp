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



#include "AliasDto.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




AliasDto::AliasDto()
{
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
    m_EmailAddress = utility::conversions::to_string_t("");
    m_EmailAddressIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_InboxId = utility::conversions::to_string_t("");
    m_InboxIdIsSet = false;
    m_IsVerified = false;
    m_IsVerifiedIsSet = false;
    m_MaskedEmailAddress = utility::conversions::to_string_t("");
    m_MaskedEmailAddressIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_UpdatedAt = utility::datetime();
    m_UpdatedAtIsSet = false;
    m_UseThreads = false;
    m_UseThreadsIsSet = false;
    m_UserId = utility::conversions::to_string_t("");
    m_UserIdIsSet = false;
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
    
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t("createdAt")] = ModelBase::toJson(m_CreatedAt);
    }
    if(m_EmailAddressIsSet)
    {
        val[utility::conversions::to_string_t("emailAddress")] = ModelBase::toJson(m_EmailAddress);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_InboxIdIsSet)
    {
        val[utility::conversions::to_string_t("inboxId")] = ModelBase::toJson(m_InboxId);
    }
    if(m_IsVerifiedIsSet)
    {
        val[utility::conversions::to_string_t("isVerified")] = ModelBase::toJson(m_IsVerified);
    }
    if(m_MaskedEmailAddressIsSet)
    {
        val[utility::conversions::to_string_t("maskedEmailAddress")] = ModelBase::toJson(m_MaskedEmailAddress);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_UpdatedAtIsSet)
    {
        val[utility::conversions::to_string_t("updatedAt")] = ModelBase::toJson(m_UpdatedAt);
    }
    if(m_UseThreadsIsSet)
    {
        val[utility::conversions::to_string_t("useThreads")] = ModelBase::toJson(m_UseThreads);
    }
    if(m_UserIdIsSet)
    {
        val[utility::conversions::to_string_t("userId")] = ModelBase::toJson(m_UserId);
    }

    return val;
}

bool AliasDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("emailAddress")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("emailAddress"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_emailAddress;
            ok &= ModelBase::fromJson(fieldValue, refVal_emailAddress);
            setEmailAddress(refVal_emailAddress);
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
    if(val.has_field(utility::conversions::to_string_t("inboxId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inboxId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_inboxId;
            ok &= ModelBase::fromJson(fieldValue, refVal_inboxId);
            setInboxId(refVal_inboxId);
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
    if(val.has_field(utility::conversions::to_string_t("maskedEmailAddress")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maskedEmailAddress"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_maskedEmailAddress;
            ok &= ModelBase::fromJson(fieldValue, refVal_maskedEmailAddress);
            setMaskedEmailAddress(refVal_maskedEmailAddress);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_name;
            ok &= ModelBase::fromJson(fieldValue, refVal_name);
            setName(refVal_name);
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
    if(val.has_field(utility::conversions::to_string_t("useThreads")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("useThreads"));
        if(!fieldValue.is_null())
        {
            bool refVal_useThreads;
            ok &= ModelBase::fromJson(fieldValue, refVal_useThreads);
            setUseThreads(refVal_useThreads);
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
    return ok;
}

void AliasDto::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("createdAt"), m_CreatedAt));
    }
    if(m_EmailAddressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("emailAddress"), m_EmailAddress));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_InboxIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("inboxId"), m_InboxId));
    }
    if(m_IsVerifiedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("isVerified"), m_IsVerified));
    }
    if(m_MaskedEmailAddressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("maskedEmailAddress"), m_MaskedEmailAddress));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
    if(m_UpdatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("updatedAt"), m_UpdatedAt));
    }
    if(m_UseThreadsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("useThreads"), m_UseThreads));
    }
    if(m_UserIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("userId"), m_UserId));
    }
}

bool AliasDto::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("createdAt")))
    {
        utility::datetime refVal_createdAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("createdAt")), refVal_createdAt );
        setCreatedAt(refVal_createdAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("emailAddress")))
    {
        utility::string_t refVal_emailAddress;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("emailAddress")), refVal_emailAddress );
        setEmailAddress(refVal_emailAddress);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        utility::string_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("id")), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("inboxId")))
    {
        utility::string_t refVal_inboxId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("inboxId")), refVal_inboxId );
        setInboxId(refVal_inboxId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("isVerified")))
    {
        bool refVal_isVerified;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("isVerified")), refVal_isVerified );
        setIsVerified(refVal_isVerified);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("maskedEmailAddress")))
    {
        utility::string_t refVal_maskedEmailAddress;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("maskedEmailAddress")), refVal_maskedEmailAddress );
        setMaskedEmailAddress(refVal_maskedEmailAddress);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        utility::string_t refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("name")), refVal_name );
        setName(refVal_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("updatedAt")))
    {
        utility::datetime refVal_updatedAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("updatedAt")), refVal_updatedAt );
        setUpdatedAt(refVal_updatedAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("useThreads")))
    {
        bool refVal_useThreads;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("useThreads")), refVal_useThreads );
        setUseThreads(refVal_useThreads);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("userId")))
    {
        utility::string_t refVal_userId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("userId")), refVal_userId );
        setUserId(refVal_userId);
    }
    return ok;
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
}
}
}
}


