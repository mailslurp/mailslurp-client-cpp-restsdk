/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://www.mailslurp.com/docs/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "EmailRecipients.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




EmailRecipients::EmailRecipients()
{
    m_ToIsSet = false;
    m_CcIsSet = false;
    m_BccIsSet = false;
}

EmailRecipients::~EmailRecipients()
{
}

void EmailRecipients::validate()
{
    // TODO: implement validation
}

web::json::value EmailRecipients::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ToIsSet)
    {
        val[utility::conversions::to_string_t("to")] = ModelBase::toJson(m_To);
    }
    if(m_CcIsSet)
    {
        val[utility::conversions::to_string_t("cc")] = ModelBase::toJson(m_Cc);
    }
    if(m_BccIsSet)
    {
        val[utility::conversions::to_string_t("bcc")] = ModelBase::toJson(m_Bcc);
    }

    return val;
}

bool EmailRecipients::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("to")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("to"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Recipient>> refVal_to;
            ok &= ModelBase::fromJson(fieldValue, refVal_to);
            setTo(refVal_to);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cc")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cc"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Recipient>> refVal_cc;
            ok &= ModelBase::fromJson(fieldValue, refVal_cc);
            setCc(refVal_cc);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bcc")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bcc"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Recipient>> refVal_bcc;
            ok &= ModelBase::fromJson(fieldValue, refVal_bcc);
            setBcc(refVal_bcc);
        }
    }
    return ok;
}

void EmailRecipients::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ToIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("to"), m_To));
    }
    if(m_CcIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("cc"), m_Cc));
    }
    if(m_BccIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("bcc"), m_Bcc));
    }
}

bool EmailRecipients::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("to")))
    {
        std::vector<std::shared_ptr<Recipient>> refVal_to;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("to")), refVal_to );
        setTo(refVal_to);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("cc")))
    {
        std::vector<std::shared_ptr<Recipient>> refVal_cc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("cc")), refVal_cc );
        setCc(refVal_cc);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("bcc")))
    {
        std::vector<std::shared_ptr<Recipient>> refVal_bcc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("bcc")), refVal_bcc );
        setBcc(refVal_bcc);
    }
    return ok;
}

std::vector<std::shared_ptr<Recipient>>& EmailRecipients::getTo()
{
    return m_To;
}

void EmailRecipients::setTo(const std::vector<std::shared_ptr<Recipient>>& value)
{
    m_To = value;
    m_ToIsSet = true;
}

bool EmailRecipients::toIsSet() const
{
    return m_ToIsSet;
}

void EmailRecipients::unsetTo()
{
    m_ToIsSet = false;
}
std::vector<std::shared_ptr<Recipient>>& EmailRecipients::getCc()
{
    return m_Cc;
}

void EmailRecipients::setCc(const std::vector<std::shared_ptr<Recipient>>& value)
{
    m_Cc = value;
    m_CcIsSet = true;
}

bool EmailRecipients::ccIsSet() const
{
    return m_CcIsSet;
}

void EmailRecipients::unsetCc()
{
    m_CcIsSet = false;
}
std::vector<std::shared_ptr<Recipient>>& EmailRecipients::getBcc()
{
    return m_Bcc;
}

void EmailRecipients::setBcc(const std::vector<std::shared_ptr<Recipient>>& value)
{
    m_Bcc = value;
    m_BccIsSet = true;
}

bool EmailRecipients::bccIsSet() const
{
    return m_BccIsSet;
}

void EmailRecipients::unsetBcc()
{
    m_BccIsSet = false;
}
}
}
}
}

