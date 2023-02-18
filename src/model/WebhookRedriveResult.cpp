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



#include "CppRestOpenAPIClient/model/WebhookRedriveResult.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



WebhookRedriveResult::WebhookRedriveResult()
{
    m_WebhookResultId = utility::conversions::to_string_t("");
    m_WebhookResultIdIsSet = false;
    m_Success = false;
    m_SuccessIsSet = false;
    m_Message = utility::conversions::to_string_t("");
    m_MessageIsSet = false;
}

WebhookRedriveResult::~WebhookRedriveResult()
{
}

void WebhookRedriveResult::validate()
{
    // TODO: implement validation
}

web::json::value WebhookRedriveResult::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_WebhookResultIdIsSet)
    {
        val[utility::conversions::to_string_t(U("webhookResultId"))] = ModelBase::toJson(m_WebhookResultId);
    }
    if(m_SuccessIsSet)
    {
        val[utility::conversions::to_string_t(U("success"))] = ModelBase::toJson(m_Success);
    }
    if(m_MessageIsSet)
    {
        val[utility::conversions::to_string_t(U("message"))] = ModelBase::toJson(m_Message);
    }

    return val;
}

bool WebhookRedriveResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("webhookResultId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("webhookResultId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setWebhookResultId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setWebhookResultId);
            setWebhookResultId(refVal_setWebhookResultId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("success"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("success")));
        if(!fieldValue.is_null())
        {
            bool refVal_setSuccess;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSuccess);
            setSuccess(refVal_setSuccess);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("message"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("message")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setMessage;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMessage);
            setMessage(refVal_setMessage);
        }
    }
    return ok;
}

void WebhookRedriveResult::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_WebhookResultIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("webhookResultId")), m_WebhookResultId));
    }
    if(m_SuccessIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("success")), m_Success));
    }
    if(m_MessageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("message")), m_Message));
    }
}

bool WebhookRedriveResult::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("webhookResultId"))))
    {
        utility::string_t refVal_setWebhookResultId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("webhookResultId"))), refVal_setWebhookResultId );
        setWebhookResultId(refVal_setWebhookResultId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("success"))))
    {
        bool refVal_setSuccess;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("success"))), refVal_setSuccess );
        setSuccess(refVal_setSuccess);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("message"))))
    {
        utility::string_t refVal_setMessage;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("message"))), refVal_setMessage );
        setMessage(refVal_setMessage);
    }
    return ok;
}

utility::string_t WebhookRedriveResult::getWebhookResultId() const
{
    return m_WebhookResultId;
}

void WebhookRedriveResult::setWebhookResultId(const utility::string_t& value)
{
    m_WebhookResultId = value;
    m_WebhookResultIdIsSet = true;
}

bool WebhookRedriveResult::webhookResultIdIsSet() const
{
    return m_WebhookResultIdIsSet;
}

void WebhookRedriveResult::unsetWebhookResultId()
{
    m_WebhookResultIdIsSet = false;
}
bool WebhookRedriveResult::isSuccess() const
{
    return m_Success;
}

void WebhookRedriveResult::setSuccess(bool value)
{
    m_Success = value;
    m_SuccessIsSet = true;
}

bool WebhookRedriveResult::successIsSet() const
{
    return m_SuccessIsSet;
}

void WebhookRedriveResult::unsetSuccess()
{
    m_SuccessIsSet = false;
}
utility::string_t WebhookRedriveResult::getMessage() const
{
    return m_Message;
}

void WebhookRedriveResult::setMessage(const utility::string_t& value)
{
    m_Message = value;
    m_MessageIsSet = true;
}

bool WebhookRedriveResult::messageIsSet() const
{
    return m_MessageIsSet;
}

void WebhookRedriveResult::unsetMessage()
{
    m_MessageIsSet = false;
}
}
}
}
}


