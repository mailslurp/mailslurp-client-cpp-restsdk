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



#include "ExpirationDefaults.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




ExpirationDefaults::ExpirationDefaults()
{
    m_CanPermanentInbox = false;
    m_CanPermanentInboxIsSet = false;
    m_DefaultExpirationMillis = 0L;
    m_DefaultExpirationMillisIsSet = false;
    m_DefaultExpiresAt = utility::datetime();
    m_DefaultExpiresAtIsSet = false;
    m_MaxExpirationMillis = 0L;
    m_MaxExpirationMillisIsSet = false;
}

ExpirationDefaults::~ExpirationDefaults()
{
}

void ExpirationDefaults::validate()
{
    // TODO: implement validation
}

web::json::value ExpirationDefaults::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_CanPermanentInboxIsSet)
    {
        val[utility::conversions::to_string_t("canPermanentInbox")] = ModelBase::toJson(m_CanPermanentInbox);
    }
    if(m_DefaultExpirationMillisIsSet)
    {
        val[utility::conversions::to_string_t("defaultExpirationMillis")] = ModelBase::toJson(m_DefaultExpirationMillis);
    }
    if(m_DefaultExpiresAtIsSet)
    {
        val[utility::conversions::to_string_t("defaultExpiresAt")] = ModelBase::toJson(m_DefaultExpiresAt);
    }
    if(m_MaxExpirationMillisIsSet)
    {
        val[utility::conversions::to_string_t("maxExpirationMillis")] = ModelBase::toJson(m_MaxExpirationMillis);
    }

    return val;
}

bool ExpirationDefaults::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("canPermanentInbox")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("canPermanentInbox"));
        if(!fieldValue.is_null())
        {
            bool refVal_canPermanentInbox;
            ok &= ModelBase::fromJson(fieldValue, refVal_canPermanentInbox);
            setCanPermanentInbox(refVal_canPermanentInbox);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("defaultExpirationMillis")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defaultExpirationMillis"));
        if(!fieldValue.is_null())
        {
            int64_t refVal_defaultExpirationMillis;
            ok &= ModelBase::fromJson(fieldValue, refVal_defaultExpirationMillis);
            setDefaultExpirationMillis(refVal_defaultExpirationMillis);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("defaultExpiresAt")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defaultExpiresAt"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_defaultExpiresAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_defaultExpiresAt);
            setDefaultExpiresAt(refVal_defaultExpiresAt);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maxExpirationMillis")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maxExpirationMillis"));
        if(!fieldValue.is_null())
        {
            int64_t refVal_maxExpirationMillis;
            ok &= ModelBase::fromJson(fieldValue, refVal_maxExpirationMillis);
            setMaxExpirationMillis(refVal_maxExpirationMillis);
        }
    }
    return ok;
}

void ExpirationDefaults::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_CanPermanentInboxIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("canPermanentInbox"), m_CanPermanentInbox));
    }
    if(m_DefaultExpirationMillisIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("defaultExpirationMillis"), m_DefaultExpirationMillis));
    }
    if(m_DefaultExpiresAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("defaultExpiresAt"), m_DefaultExpiresAt));
    }
    if(m_MaxExpirationMillisIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("maxExpirationMillis"), m_MaxExpirationMillis));
    }
}

bool ExpirationDefaults::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("canPermanentInbox")))
    {
        bool refVal_canPermanentInbox;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("canPermanentInbox")), refVal_canPermanentInbox );
        setCanPermanentInbox(refVal_canPermanentInbox);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("defaultExpirationMillis")))
    {
        int64_t refVal_defaultExpirationMillis;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("defaultExpirationMillis")), refVal_defaultExpirationMillis );
        setDefaultExpirationMillis(refVal_defaultExpirationMillis);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("defaultExpiresAt")))
    {
        utility::datetime refVal_defaultExpiresAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("defaultExpiresAt")), refVal_defaultExpiresAt );
        setDefaultExpiresAt(refVal_defaultExpiresAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("maxExpirationMillis")))
    {
        int64_t refVal_maxExpirationMillis;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("maxExpirationMillis")), refVal_maxExpirationMillis );
        setMaxExpirationMillis(refVal_maxExpirationMillis);
    }
    return ok;
}

bool ExpirationDefaults::isCanPermanentInbox() const
{
    return m_CanPermanentInbox;
}

void ExpirationDefaults::setCanPermanentInbox(bool value)
{
    m_CanPermanentInbox = value;
    m_CanPermanentInboxIsSet = true;
}

bool ExpirationDefaults::canPermanentInboxIsSet() const
{
    return m_CanPermanentInboxIsSet;
}

void ExpirationDefaults::unsetCanPermanentInbox()
{
    m_CanPermanentInboxIsSet = false;
}
int64_t ExpirationDefaults::getDefaultExpirationMillis() const
{
    return m_DefaultExpirationMillis;
}

void ExpirationDefaults::setDefaultExpirationMillis(int64_t value)
{
    m_DefaultExpirationMillis = value;
    m_DefaultExpirationMillisIsSet = true;
}

bool ExpirationDefaults::defaultExpirationMillisIsSet() const
{
    return m_DefaultExpirationMillisIsSet;
}

void ExpirationDefaults::unsetDefaultExpirationMillis()
{
    m_DefaultExpirationMillisIsSet = false;
}
utility::datetime ExpirationDefaults::getDefaultExpiresAt() const
{
    return m_DefaultExpiresAt;
}

void ExpirationDefaults::setDefaultExpiresAt(const utility::datetime& value)
{
    m_DefaultExpiresAt = value;
    m_DefaultExpiresAtIsSet = true;
}

bool ExpirationDefaults::defaultExpiresAtIsSet() const
{
    return m_DefaultExpiresAtIsSet;
}

void ExpirationDefaults::unsetDefaultExpiresAt()
{
    m_DefaultExpiresAtIsSet = false;
}
int64_t ExpirationDefaults::getMaxExpirationMillis() const
{
    return m_MaxExpirationMillis;
}

void ExpirationDefaults::setMaxExpirationMillis(int64_t value)
{
    m_MaxExpirationMillis = value;
    m_MaxExpirationMillisIsSet = true;
}

bool ExpirationDefaults::maxExpirationMillisIsSet() const
{
    return m_MaxExpirationMillisIsSet;
}

void ExpirationDefaults::unsetMaxExpirationMillis()
{
    m_MaxExpirationMillisIsSet = false;
}
}
}
}
}

