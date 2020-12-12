/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.   ## Resources - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://www.mailslurp.com/docs/) - [Examples](https://github.com/mailslurp/examples) repository 
 *
 * The version of the OpenAPI document: 6.5.2
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Alias.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




Alias::Alias()
{
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_InboxId = utility::conversions::to_string_t("");
    m_InboxIdIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_PendingEmailAddress = utility::conversions::to_string_t("");
    m_PendingEmailAddressIsSet = false;
    m_UpdatedAt = utility::datetime();
    m_UpdatedAtIsSet = false;
    m_UseThreads = false;
    m_UseThreadsIsSet = false;
    m_UserId = utility::conversions::to_string_t("");
    m_UserIdIsSet = false;
    m_VerifiedEmailAddress = utility::conversions::to_string_t("");
    m_VerifiedEmailAddressIsSet = false;
}

Alias::~Alias()
{
}

void Alias::validate()
{
    // TODO: implement validation
}

web::json::value Alias::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t("createdAt")] = ModelBase::toJson(m_CreatedAt);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_InboxIdIsSet)
    {
        val[utility::conversions::to_string_t("inboxId")] = ModelBase::toJson(m_InboxId);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_PendingEmailAddressIsSet)
    {
        val[utility::conversions::to_string_t("pendingEmailAddress")] = ModelBase::toJson(m_PendingEmailAddress);
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
    if(m_VerifiedEmailAddressIsSet)
    {
        val[utility::conversions::to_string_t("verifiedEmailAddress")] = ModelBase::toJson(m_VerifiedEmailAddress);
    }

    return val;
}

bool Alias::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("pendingEmailAddress")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pendingEmailAddress"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_pendingEmailAddress;
            ok &= ModelBase::fromJson(fieldValue, refVal_pendingEmailAddress);
            setPendingEmailAddress(refVal_pendingEmailAddress);
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
    if(val.has_field(utility::conversions::to_string_t("verifiedEmailAddress")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("verifiedEmailAddress"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_verifiedEmailAddress;
            ok &= ModelBase::fromJson(fieldValue, refVal_verifiedEmailAddress);
            setVerifiedEmailAddress(refVal_verifiedEmailAddress);
        }
    }
    return ok;
}

void Alias::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_InboxIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("inboxId"), m_InboxId));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
    if(m_PendingEmailAddressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("pendingEmailAddress"), m_PendingEmailAddress));
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
    if(m_VerifiedEmailAddressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("verifiedEmailAddress"), m_VerifiedEmailAddress));
    }
}

bool Alias::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        utility::string_t refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("name")), refVal_name );
        setName(refVal_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("pendingEmailAddress")))
    {
        utility::string_t refVal_pendingEmailAddress;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("pendingEmailAddress")), refVal_pendingEmailAddress );
        setPendingEmailAddress(refVal_pendingEmailAddress);
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
    if(multipart->hasContent(utility::conversions::to_string_t("verifiedEmailAddress")))
    {
        utility::string_t refVal_verifiedEmailAddress;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("verifiedEmailAddress")), refVal_verifiedEmailAddress );
        setVerifiedEmailAddress(refVal_verifiedEmailAddress);
    }
    return ok;
}

utility::datetime Alias::getCreatedAt() const
{
    return m_CreatedAt;
}

void Alias::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool Alias::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void Alias::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
utility::string_t Alias::getId() const
{
    return m_Id;
}

void Alias::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool Alias::idIsSet() const
{
    return m_IdIsSet;
}

void Alias::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t Alias::getInboxId() const
{
    return m_InboxId;
}

void Alias::setInboxId(const utility::string_t& value)
{
    m_InboxId = value;
    m_InboxIdIsSet = true;
}

bool Alias::inboxIdIsSet() const
{
    return m_InboxIdIsSet;
}

void Alias::unsetInboxId()
{
    m_InboxIdIsSet = false;
}
utility::string_t Alias::getName() const
{
    return m_Name;
}

void Alias::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool Alias::nameIsSet() const
{
    return m_NameIsSet;
}

void Alias::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t Alias::getPendingEmailAddress() const
{
    return m_PendingEmailAddress;
}

void Alias::setPendingEmailAddress(const utility::string_t& value)
{
    m_PendingEmailAddress = value;
    m_PendingEmailAddressIsSet = true;
}

bool Alias::pendingEmailAddressIsSet() const
{
    return m_PendingEmailAddressIsSet;
}

void Alias::unsetPendingEmailAddress()
{
    m_PendingEmailAddressIsSet = false;
}
utility::datetime Alias::getUpdatedAt() const
{
    return m_UpdatedAt;
}

void Alias::setUpdatedAt(const utility::datetime& value)
{
    m_UpdatedAt = value;
    m_UpdatedAtIsSet = true;
}

bool Alias::updatedAtIsSet() const
{
    return m_UpdatedAtIsSet;
}

void Alias::unsetUpdatedAt()
{
    m_UpdatedAtIsSet = false;
}
bool Alias::isUseThreads() const
{
    return m_UseThreads;
}

void Alias::setUseThreads(bool value)
{
    m_UseThreads = value;
    m_UseThreadsIsSet = true;
}

bool Alias::useThreadsIsSet() const
{
    return m_UseThreadsIsSet;
}

void Alias::unsetUseThreads()
{
    m_UseThreadsIsSet = false;
}
utility::string_t Alias::getUserId() const
{
    return m_UserId;
}

void Alias::setUserId(const utility::string_t& value)
{
    m_UserId = value;
    m_UserIdIsSet = true;
}

bool Alias::userIdIsSet() const
{
    return m_UserIdIsSet;
}

void Alias::unsetUserId()
{
    m_UserIdIsSet = false;
}
utility::string_t Alias::getVerifiedEmailAddress() const
{
    return m_VerifiedEmailAddress;
}

void Alias::setVerifiedEmailAddress(const utility::string_t& value)
{
    m_VerifiedEmailAddress = value;
    m_VerifiedEmailAddressIsSet = true;
}

bool Alias::verifiedEmailAddressIsSet() const
{
    return m_VerifiedEmailAddressIsSet;
}

void Alias::unsetVerifiedEmailAddress()
{
    m_VerifiedEmailAddressIsSet = false;
}
}
}
}
}


