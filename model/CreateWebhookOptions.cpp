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



#include "CreateWebhookOptions.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




CreateWebhookOptions::CreateWebhookOptions()
{
    m_Url = utility::conversions::to_string_t("");
    m_UrlIsSet = false;
    m_BasicAuthIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_EventName = utility::conversions::to_string_t("");
    m_EventNameIsSet = false;
}

CreateWebhookOptions::~CreateWebhookOptions()
{
}

void CreateWebhookOptions::validate()
{
    // TODO: implement validation
}

web::json::value CreateWebhookOptions::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_UrlIsSet)
    {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(m_Url);
    }
    if(m_BasicAuthIsSet)
    {
        val[utility::conversions::to_string_t("basicAuth")] = ModelBase::toJson(m_BasicAuth);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_EventNameIsSet)
    {
        val[utility::conversions::to_string_t("eventName")] = ModelBase::toJson(m_EventName);
    }

    return val;
}

bool CreateWebhookOptions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("url")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_url;
            ok &= ModelBase::fromJson(fieldValue, refVal_url);
            setUrl(refVal_url);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("basicAuth")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("basicAuth"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BasicAuthOptions> refVal_basicAuth;
            ok &= ModelBase::fromJson(fieldValue, refVal_basicAuth);
            setBasicAuth(refVal_basicAuth);
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
    if(val.has_field(utility::conversions::to_string_t("eventName")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eventName"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_eventName;
            ok &= ModelBase::fromJson(fieldValue, refVal_eventName);
            setEventName(refVal_eventName);
        }
    }
    return ok;
}

void CreateWebhookOptions::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_UrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("url"), m_Url));
    }
    if(m_BasicAuthIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("basicAuth"), m_BasicAuth));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
    if(m_EventNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("eventName"), m_EventName));
    }
}

bool CreateWebhookOptions::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("url")))
    {
        utility::string_t refVal_url;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("url")), refVal_url );
        setUrl(refVal_url);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("basicAuth")))
    {
        std::shared_ptr<BasicAuthOptions> refVal_basicAuth;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("basicAuth")), refVal_basicAuth );
        setBasicAuth(refVal_basicAuth);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        utility::string_t refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("name")), refVal_name );
        setName(refVal_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("eventName")))
    {
        utility::string_t refVal_eventName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("eventName")), refVal_eventName );
        setEventName(refVal_eventName);
    }
    return ok;
}

utility::string_t CreateWebhookOptions::getUrl() const
{
    return m_Url;
}

void CreateWebhookOptions::setUrl(const utility::string_t& value)
{
    m_Url = value;
    m_UrlIsSet = true;
}

bool CreateWebhookOptions::urlIsSet() const
{
    return m_UrlIsSet;
}

void CreateWebhookOptions::unsetUrl()
{
    m_UrlIsSet = false;
}
std::shared_ptr<BasicAuthOptions> CreateWebhookOptions::getBasicAuth() const
{
    return m_BasicAuth;
}

void CreateWebhookOptions::setBasicAuth(const std::shared_ptr<BasicAuthOptions>& value)
{
    m_BasicAuth = value;
    m_BasicAuthIsSet = true;
}

bool CreateWebhookOptions::basicAuthIsSet() const
{
    return m_BasicAuthIsSet;
}

void CreateWebhookOptions::unsetBasicAuth()
{
    m_BasicAuthIsSet = false;
}
utility::string_t CreateWebhookOptions::getName() const
{
    return m_Name;
}

void CreateWebhookOptions::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool CreateWebhookOptions::nameIsSet() const
{
    return m_NameIsSet;
}

void CreateWebhookOptions::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t CreateWebhookOptions::getEventName() const
{
    return m_EventName;
}

void CreateWebhookOptions::setEventName(const utility::string_t& value)
{
    m_EventName = value;
    m_EventNameIsSet = true;
}

bool CreateWebhookOptions::eventNameIsSet() const
{
    return m_EventNameIsSet;
}

void CreateWebhookOptions::unsetEventName()
{
    m_EventNameIsSet = false;
}
}
}
}
}


