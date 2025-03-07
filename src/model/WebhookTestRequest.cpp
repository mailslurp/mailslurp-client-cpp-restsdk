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



#include "CppRestOpenAPIClient/model/WebhookTestRequest.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



WebhookTestRequest::WebhookTestRequest()
{
    m_Url = utility::conversions::to_string_t("");
    m_UrlIsSet = false;
    m_Method = utility::conversions::to_string_t("");
    m_MethodIsSet = false;
    m_HeadersIsSet = false;
    m_Payload = utility::conversions::to_string_t("");
    m_PayloadIsSet = false;
}

WebhookTestRequest::~WebhookTestRequest()
{
}

void WebhookTestRequest::validate()
{
    // TODO: implement validation
}

web::json::value WebhookTestRequest::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_UrlIsSet)
    {
        val[utility::conversions::to_string_t(U("url"))] = ModelBase::toJson(m_Url);
    }
    if(m_MethodIsSet)
    {
        val[utility::conversions::to_string_t(U("method"))] = ModelBase::toJson(m_Method);
    }
    if(m_HeadersIsSet)
    {
        val[utility::conversions::to_string_t(U("headers"))] = ModelBase::toJson(m_Headers);
    }
    if(m_PayloadIsSet)
    {
        val[utility::conversions::to_string_t(U("payload"))] = ModelBase::toJson(m_Payload);
    }

    return val;
}

bool WebhookTestRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("method"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("method")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setMethod;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMethod);
            setMethod(refVal_setMethod);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("headers"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("headers")));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, utility::string_t> refVal_setHeaders;
            ok &= ModelBase::fromJson(fieldValue, refVal_setHeaders);
            setHeaders(refVal_setHeaders);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("payload"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("payload")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setPayload;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPayload);
            setPayload(refVal_setPayload);
        }
    }
    return ok;
}

void WebhookTestRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_MethodIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("method")), m_Method));
    }
    if(m_HeadersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("headers")), m_Headers));
    }
    if(m_PayloadIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("payload")), m_Payload));
    }
}

bool WebhookTestRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("method"))))
    {
        utility::string_t refVal_setMethod;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("method"))), refVal_setMethod );
        setMethod(refVal_setMethod);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("headers"))))
    {
        std::map<utility::string_t, utility::string_t> refVal_setHeaders;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("headers"))), refVal_setHeaders );
        setHeaders(refVal_setHeaders);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("payload"))))
    {
        utility::string_t refVal_setPayload;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("payload"))), refVal_setPayload );
        setPayload(refVal_setPayload);
    }
    return ok;
}

utility::string_t WebhookTestRequest::getUrl() const
{
    return m_Url;
}

void WebhookTestRequest::setUrl(const utility::string_t& value)
{
    m_Url = value;
    m_UrlIsSet = true;
}

bool WebhookTestRequest::urlIsSet() const
{
    return m_UrlIsSet;
}

void WebhookTestRequest::unsetUrl()
{
    m_UrlIsSet = false;
}
utility::string_t WebhookTestRequest::getMethod() const
{
    return m_Method;
}

void WebhookTestRequest::setMethod(const utility::string_t& value)
{
    m_Method = value;
    m_MethodIsSet = true;
}

bool WebhookTestRequest::methodIsSet() const
{
    return m_MethodIsSet;
}

void WebhookTestRequest::unsetMethod()
{
    m_MethodIsSet = false;
}
std::map<utility::string_t, utility::string_t>& WebhookTestRequest::getHeaders()
{
    return m_Headers;
}

void WebhookTestRequest::setHeaders(const std::map<utility::string_t, utility::string_t>& value)
{
    m_Headers = value;
    m_HeadersIsSet = true;
}

bool WebhookTestRequest::headersIsSet() const
{
    return m_HeadersIsSet;
}

void WebhookTestRequest::unsetHeaders()
{
    m_HeadersIsSet = false;
}
utility::string_t WebhookTestRequest::getPayload() const
{
    return m_Payload;
}

void WebhookTestRequest::setPayload(const utility::string_t& value)
{
    m_Payload = value;
    m_PayloadIsSet = true;
}

bool WebhookTestRequest::payloadIsSet() const
{
    return m_PayloadIsSet;
}

void WebhookTestRequest::unsetPayload()
{
    m_PayloadIsSet = false;
}
}
}
}
}


