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



#include "CreateOwnedAliasOptions.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




CreateOwnedAliasOptions::CreateOwnedAliasOptions()
{
    m_EmailAddress = utility::conversions::to_string_t("");
    m_EmailAddressIsSet = false;
    m_InboxId = utility::conversions::to_string_t("");
    m_InboxIdIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Proxied = false;
    m_ProxiedIsSet = false;
}

CreateOwnedAliasOptions::~CreateOwnedAliasOptions()
{
}

void CreateOwnedAliasOptions::validate()
{
    // TODO: implement validation
}

web::json::value CreateOwnedAliasOptions::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_EmailAddressIsSet)
    {
        val[utility::conversions::to_string_t("emailAddress")] = ModelBase::toJson(m_EmailAddress);
    }
    if(m_InboxIdIsSet)
    {
        val[utility::conversions::to_string_t("inboxId")] = ModelBase::toJson(m_InboxId);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_ProxiedIsSet)
    {
        val[utility::conversions::to_string_t("proxied")] = ModelBase::toJson(m_Proxied);
    }

    return val;
}

bool CreateOwnedAliasOptions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("proxied")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxied"));
        if(!fieldValue.is_null())
        {
            bool refVal_proxied;
            ok &= ModelBase::fromJson(fieldValue, refVal_proxied);
            setProxied(refVal_proxied);
        }
    }
    return ok;
}

void CreateOwnedAliasOptions::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_EmailAddressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("emailAddress"), m_EmailAddress));
    }
    if(m_InboxIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("inboxId"), m_InboxId));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
    if(m_ProxiedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("proxied"), m_Proxied));
    }
}

bool CreateOwnedAliasOptions::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("emailAddress")))
    {
        utility::string_t refVal_emailAddress;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("emailAddress")), refVal_emailAddress );
        setEmailAddress(refVal_emailAddress);
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
    if(multipart->hasContent(utility::conversions::to_string_t("proxied")))
    {
        bool refVal_proxied;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("proxied")), refVal_proxied );
        setProxied(refVal_proxied);
    }
    return ok;
}

utility::string_t CreateOwnedAliasOptions::getEmailAddress() const
{
    return m_EmailAddress;
}

void CreateOwnedAliasOptions::setEmailAddress(const utility::string_t& value)
{
    m_EmailAddress = value;
    m_EmailAddressIsSet = true;
}

bool CreateOwnedAliasOptions::emailAddressIsSet() const
{
    return m_EmailAddressIsSet;
}

void CreateOwnedAliasOptions::unsetEmailAddress()
{
    m_EmailAddressIsSet = false;
}
utility::string_t CreateOwnedAliasOptions::getInboxId() const
{
    return m_InboxId;
}

void CreateOwnedAliasOptions::setInboxId(const utility::string_t& value)
{
    m_InboxId = value;
    m_InboxIdIsSet = true;
}

bool CreateOwnedAliasOptions::inboxIdIsSet() const
{
    return m_InboxIdIsSet;
}

void CreateOwnedAliasOptions::unsetInboxId()
{
    m_InboxIdIsSet = false;
}
utility::string_t CreateOwnedAliasOptions::getName() const
{
    return m_Name;
}

void CreateOwnedAliasOptions::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool CreateOwnedAliasOptions::nameIsSet() const
{
    return m_NameIsSet;
}

void CreateOwnedAliasOptions::unsetName()
{
    m_NameIsSet = false;
}
bool CreateOwnedAliasOptions::isProxied() const
{
    return m_Proxied;
}

void CreateOwnedAliasOptions::setProxied(bool value)
{
    m_Proxied = value;
    m_ProxiedIsSet = true;
}

bool CreateOwnedAliasOptions::proxiedIsSet() const
{
    return m_ProxiedIsSet;
}

void CreateOwnedAliasOptions::unsetProxied()
{
    m_ProxiedIsSet = false;
}
}
}
}
}


