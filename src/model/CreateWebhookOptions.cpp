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



#include "CppRestOpenAPIClient/model/CreateWebhookOptions.h"

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
    m_IncludeHeadersIsSet = false;
    m_RequestBodyTemplate = utility::conversions::to_string_t("");
    m_RequestBodyTemplateIsSet = false;
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
        val[utility::conversions::to_string_t(U("url"))] = ModelBase::toJson(m_Url);
    }
    if(m_BasicAuthIsSet)
    {
        val[utility::conversions::to_string_t(U("basicAuth"))] = ModelBase::toJson(m_BasicAuth);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_EventNameIsSet)
    {
        val[utility::conversions::to_string_t(U("eventName"))] = ModelBase::toJson(m_EventName);
    }
    if(m_IncludeHeadersIsSet)
    {
        val[utility::conversions::to_string_t(U("includeHeaders"))] = ModelBase::toJson(m_IncludeHeaders);
    }
    if(m_RequestBodyTemplateIsSet)
    {
        val[utility::conversions::to_string_t(U("requestBodyTemplate"))] = ModelBase::toJson(m_RequestBodyTemplate);
    }

    return val;
}

bool CreateWebhookOptions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("url"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("url")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setUrl;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUrl);
            setUrl(refVal_setUrl);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("basicAuth"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("basicAuth")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BasicAuthOptions> refVal_setBasicAuth;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBasicAuth);
            setBasicAuth(refVal_setBasicAuth);
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
    if(val.has_field(utility::conversions::to_string_t(U("eventName"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("eventName")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setEventName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEventName);
            setEventName(refVal_setEventName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("includeHeaders"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("includeHeaders")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<WebhookHeaders> refVal_setIncludeHeaders;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIncludeHeaders);
            setIncludeHeaders(refVal_setIncludeHeaders);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("requestBodyTemplate"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("requestBodyTemplate")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setRequestBodyTemplate;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRequestBodyTemplate);
            setRequestBodyTemplate(refVal_setRequestBodyTemplate);
        }
    }
    return ok;
}

void CreateWebhookOptions::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_UrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("url")), m_Url));
    }
    if(m_BasicAuthIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("basicAuth")), m_BasicAuth));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_EventNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("eventName")), m_EventName));
    }
    if(m_IncludeHeadersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("includeHeaders")), m_IncludeHeaders));
    }
    if(m_RequestBodyTemplateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("requestBodyTemplate")), m_RequestBodyTemplate));
    }
}

bool CreateWebhookOptions::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("url"))))
    {
        utility::string_t refVal_setUrl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("url"))), refVal_setUrl );
        setUrl(refVal_setUrl);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("basicAuth"))))
    {
        std::shared_ptr<BasicAuthOptions> refVal_setBasicAuth;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("basicAuth"))), refVal_setBasicAuth );
        setBasicAuth(refVal_setBasicAuth);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("eventName"))))
    {
        utility::string_t refVal_setEventName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("eventName"))), refVal_setEventName );
        setEventName(refVal_setEventName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("includeHeaders"))))
    {
        std::shared_ptr<WebhookHeaders> refVal_setIncludeHeaders;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("includeHeaders"))), refVal_setIncludeHeaders );
        setIncludeHeaders(refVal_setIncludeHeaders);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("requestBodyTemplate"))))
    {
        utility::string_t refVal_setRequestBodyTemplate;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("requestBodyTemplate"))), refVal_setRequestBodyTemplate );
        setRequestBodyTemplate(refVal_setRequestBodyTemplate);
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
std::shared_ptr<WebhookHeaders> CreateWebhookOptions::getIncludeHeaders() const
{
    return m_IncludeHeaders;
}

void CreateWebhookOptions::setIncludeHeaders(const std::shared_ptr<WebhookHeaders>& value)
{
    m_IncludeHeaders = value;
    m_IncludeHeadersIsSet = true;
}

bool CreateWebhookOptions::includeHeadersIsSet() const
{
    return m_IncludeHeadersIsSet;
}

void CreateWebhookOptions::unsetIncludeHeaders()
{
    m_IncludeHeadersIsSet = false;
}
utility::string_t CreateWebhookOptions::getRequestBodyTemplate() const
{
    return m_RequestBodyTemplate;
}

void CreateWebhookOptions::setRequestBodyTemplate(const utility::string_t& value)
{
    m_RequestBodyTemplate = value;
    m_RequestBodyTemplateIsSet = true;
}

bool CreateWebhookOptions::requestBodyTemplateIsSet() const
{
    return m_RequestBodyTemplateIsSet;
}

void CreateWebhookOptions::unsetRequestBodyTemplate()
{
    m_RequestBodyTemplateIsSet = false;
}
}
}
}
}

