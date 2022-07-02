/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://docs.mailslurp.com/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "UserInfoDto.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




UserInfoDto::UserInfoDto()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_EmailAddress = utility::conversions::to_string_t("");
    m_EmailAddressIsSet = false;
    m_AccountState = utility::conversions::to_string_t("");
    m_AccountStateIsSet = false;
    m_SubscriptionType = utility::conversions::to_string_t("");
    m_SubscriptionTypeIsSet = false;
    m_AccountType = utility::conversions::to_string_t("");
    m_AccountTypeIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
}

UserInfoDto::~UserInfoDto()
{
}

void UserInfoDto::validate()
{
    // TODO: implement validation
}

web::json::value UserInfoDto::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_EmailAddressIsSet)
    {
        val[utility::conversions::to_string_t("emailAddress")] = ModelBase::toJson(m_EmailAddress);
    }
    if(m_AccountStateIsSet)
    {
        val[utility::conversions::to_string_t("accountState")] = ModelBase::toJson(m_AccountState);
    }
    if(m_SubscriptionTypeIsSet)
    {
        val[utility::conversions::to_string_t("subscriptionType")] = ModelBase::toJson(m_SubscriptionType);
    }
    if(m_AccountTypeIsSet)
    {
        val[utility::conversions::to_string_t("accountType")] = ModelBase::toJson(m_AccountType);
    }
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t("createdAt")] = ModelBase::toJson(m_CreatedAt);
    }

    return val;
}

bool UserInfoDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("accountState")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accountState"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_accountState;
            ok &= ModelBase::fromJson(fieldValue, refVal_accountState);
            setAccountState(refVal_accountState);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subscriptionType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscriptionType"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_subscriptionType;
            ok &= ModelBase::fromJson(fieldValue, refVal_subscriptionType);
            setSubscriptionType(refVal_subscriptionType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("accountType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accountType"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_accountType;
            ok &= ModelBase::fromJson(fieldValue, refVal_accountType);
            setAccountType(refVal_accountType);
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
    return ok;
}

void UserInfoDto::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_EmailAddressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("emailAddress"), m_EmailAddress));
    }
    if(m_AccountStateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("accountState"), m_AccountState));
    }
    if(m_SubscriptionTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("subscriptionType"), m_SubscriptionType));
    }
    if(m_AccountTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("accountType"), m_AccountType));
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("createdAt"), m_CreatedAt));
    }
}

bool UserInfoDto::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        utility::string_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("id")), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("emailAddress")))
    {
        utility::string_t refVal_emailAddress;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("emailAddress")), refVal_emailAddress );
        setEmailAddress(refVal_emailAddress);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("accountState")))
    {
        utility::string_t refVal_accountState;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("accountState")), refVal_accountState );
        setAccountState(refVal_accountState);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("subscriptionType")))
    {
        utility::string_t refVal_subscriptionType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("subscriptionType")), refVal_subscriptionType );
        setSubscriptionType(refVal_subscriptionType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("accountType")))
    {
        utility::string_t refVal_accountType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("accountType")), refVal_accountType );
        setAccountType(refVal_accountType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("createdAt")))
    {
        utility::datetime refVal_createdAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("createdAt")), refVal_createdAt );
        setCreatedAt(refVal_createdAt);
    }
    return ok;
}

utility::string_t UserInfoDto::getId() const
{
    return m_Id;
}

void UserInfoDto::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool UserInfoDto::idIsSet() const
{
    return m_IdIsSet;
}

void UserInfoDto::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t UserInfoDto::getEmailAddress() const
{
    return m_EmailAddress;
}

void UserInfoDto::setEmailAddress(const utility::string_t& value)
{
    m_EmailAddress = value;
    m_EmailAddressIsSet = true;
}

bool UserInfoDto::emailAddressIsSet() const
{
    return m_EmailAddressIsSet;
}

void UserInfoDto::unsetEmailAddress()
{
    m_EmailAddressIsSet = false;
}
utility::string_t UserInfoDto::getAccountState() const
{
    return m_AccountState;
}

void UserInfoDto::setAccountState(const utility::string_t& value)
{
    m_AccountState = value;
    m_AccountStateIsSet = true;
}

bool UserInfoDto::accountStateIsSet() const
{
    return m_AccountStateIsSet;
}

void UserInfoDto::unsetAccountState()
{
    m_AccountStateIsSet = false;
}
utility::string_t UserInfoDto::getSubscriptionType() const
{
    return m_SubscriptionType;
}

void UserInfoDto::setSubscriptionType(const utility::string_t& value)
{
    m_SubscriptionType = value;
    m_SubscriptionTypeIsSet = true;
}

bool UserInfoDto::subscriptionTypeIsSet() const
{
    return m_SubscriptionTypeIsSet;
}

void UserInfoDto::unsetSubscriptionType()
{
    m_SubscriptionTypeIsSet = false;
}
utility::string_t UserInfoDto::getAccountType() const
{
    return m_AccountType;
}

void UserInfoDto::setAccountType(const utility::string_t& value)
{
    m_AccountType = value;
    m_AccountTypeIsSet = true;
}

bool UserInfoDto::accountTypeIsSet() const
{
    return m_AccountTypeIsSet;
}

void UserInfoDto::unsetAccountType()
{
    m_AccountTypeIsSet = false;
}
utility::datetime UserInfoDto::getCreatedAt() const
{
    return m_CreatedAt;
}

void UserInfoDto::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool UserInfoDto::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void UserInfoDto::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
}
}
}
}

