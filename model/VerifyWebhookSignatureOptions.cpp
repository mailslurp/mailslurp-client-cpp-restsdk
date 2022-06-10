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



#include "VerifyWebhookSignatureOptions.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




VerifyWebhookSignatureOptions::VerifyWebhookSignatureOptions()
{
    m_MessageId = utility::conversions::to_string_t("");
    m_MessageIdIsSet = false;
    m_Signature = utility::conversions::to_string_t("");
    m_SignatureIsSet = false;
}

VerifyWebhookSignatureOptions::~VerifyWebhookSignatureOptions()
{
}

void VerifyWebhookSignatureOptions::validate()
{
    // TODO: implement validation
}

web::json::value VerifyWebhookSignatureOptions::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_MessageIdIsSet)
    {
        val[utility::conversions::to_string_t("messageId")] = ModelBase::toJson(m_MessageId);
    }
    if(m_SignatureIsSet)
    {
        val[utility::conversions::to_string_t("signature")] = ModelBase::toJson(m_Signature);
    }

    return val;
}

bool VerifyWebhookSignatureOptions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("messageId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("messageId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_messageId;
            ok &= ModelBase::fromJson(fieldValue, refVal_messageId);
            setMessageId(refVal_messageId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("signature")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("signature"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_signature;
            ok &= ModelBase::fromJson(fieldValue, refVal_signature);
            setSignature(refVal_signature);
        }
    }
    return ok;
}

void VerifyWebhookSignatureOptions::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_MessageIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("messageId"), m_MessageId));
    }
    if(m_SignatureIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("signature"), m_Signature));
    }
}

bool VerifyWebhookSignatureOptions::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("messageId")))
    {
        utility::string_t refVal_messageId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("messageId")), refVal_messageId );
        setMessageId(refVal_messageId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("signature")))
    {
        utility::string_t refVal_signature;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("signature")), refVal_signature );
        setSignature(refVal_signature);
    }
    return ok;
}

utility::string_t VerifyWebhookSignatureOptions::getMessageId() const
{
    return m_MessageId;
}

void VerifyWebhookSignatureOptions::setMessageId(const utility::string_t& value)
{
    m_MessageId = value;
    m_MessageIdIsSet = true;
}

bool VerifyWebhookSignatureOptions::messageIdIsSet() const
{
    return m_MessageIdIsSet;
}

void VerifyWebhookSignatureOptions::unsetMessageId()
{
    m_MessageIdIsSet = false;
}
utility::string_t VerifyWebhookSignatureOptions::getSignature() const
{
    return m_Signature;
}

void VerifyWebhookSignatureOptions::setSignature(const utility::string_t& value)
{
    m_Signature = value;
    m_SignatureIsSet = true;
}

bool VerifyWebhookSignatureOptions::signatureIsSet() const
{
    return m_SignatureIsSet;
}

void VerifyWebhookSignatureOptions::unsetSignature()
{
    m_SignatureIsSet = false;
}
}
}
}
}


