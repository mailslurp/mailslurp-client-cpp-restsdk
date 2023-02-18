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



#include "CppRestOpenAPIClient/model/UserInfoDto.h"

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
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_EmailAddressIsSet)
    {
        val[utility::conversions::to_string_t(U("emailAddress"))] = ModelBase::toJson(m_EmailAddress);
    }
    if(m_AccountStateIsSet)
    {
        val[utility::conversions::to_string_t(U("accountState"))] = ModelBase::toJson(m_AccountState);
    }
    if(m_SubscriptionTypeIsSet)
    {
        val[utility::conversions::to_string_t(U("subscriptionType"))] = ModelBase::toJson(m_SubscriptionType);
    }
    if(m_AccountTypeIsSet)
    {
        val[utility::conversions::to_string_t(U("accountType"))] = ModelBase::toJson(m_AccountType);
    }
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t(U("createdAt"))] = ModelBase::toJson(m_CreatedAt);
    }

    return val;
}

bool UserInfoDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("accountState"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("accountState")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setAccountState;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAccountState);
            setAccountState(refVal_setAccountState);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("subscriptionType"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("subscriptionType")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSubscriptionType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSubscriptionType);
            setSubscriptionType(refVal_setSubscriptionType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("accountType"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("accountType")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setAccountType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAccountType);
            setAccountType(refVal_setAccountType);
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
    return ok;
}

void UserInfoDto::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_AccountStateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("accountState")), m_AccountState));
    }
    if(m_SubscriptionTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("subscriptionType")), m_SubscriptionType));
    }
    if(m_AccountTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("accountType")), m_AccountType));
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("createdAt")), m_CreatedAt));
    }
}

bool UserInfoDto::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("accountState"))))
    {
        utility::string_t refVal_setAccountState;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("accountState"))), refVal_setAccountState );
        setAccountState(refVal_setAccountState);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("subscriptionType"))))
    {
        utility::string_t refVal_setSubscriptionType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("subscriptionType"))), refVal_setSubscriptionType );
        setSubscriptionType(refVal_setSubscriptionType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("accountType"))))
    {
        utility::string_t refVal_setAccountType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("accountType"))), refVal_setAccountType );
        setAccountType(refVal_setAccountType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("createdAt"))))
    {
        utility::datetime refVal_setCreatedAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("createdAt"))), refVal_setCreatedAt );
        setCreatedAt(refVal_setCreatedAt);
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

