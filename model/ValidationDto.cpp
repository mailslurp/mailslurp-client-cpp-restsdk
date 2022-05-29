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



#include "ValidationDto.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




ValidationDto::ValidationDto()
{
    m_EmailId = utility::conversions::to_string_t("");
    m_EmailIdIsSet = false;
    m_HtmlIsSet = false;
}

ValidationDto::~ValidationDto()
{
}

void ValidationDto::validate()
{
    // TODO: implement validation
}

web::json::value ValidationDto::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_EmailIdIsSet)
    {
        val[utility::conversions::to_string_t("emailId")] = ModelBase::toJson(m_EmailId);
    }
    if(m_HtmlIsSet)
    {
        val[utility::conversions::to_string_t("html")] = ModelBase::toJson(m_Html);
    }

    return val;
}

bool ValidationDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("emailId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("emailId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_emailId;
            ok &= ModelBase::fromJson(fieldValue, refVal_emailId);
            setEmailId(refVal_emailId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("html")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("html"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<HTMLValidationResult> refVal_html;
            ok &= ModelBase::fromJson(fieldValue, refVal_html);
            setHtml(refVal_html);
        }
    }
    return ok;
}

void ValidationDto::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_EmailIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("emailId"), m_EmailId));
    }
    if(m_HtmlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("html"), m_Html));
    }
}

bool ValidationDto::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("emailId")))
    {
        utility::string_t refVal_emailId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("emailId")), refVal_emailId );
        setEmailId(refVal_emailId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("html")))
    {
        std::shared_ptr<HTMLValidationResult> refVal_html;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("html")), refVal_html );
        setHtml(refVal_html);
    }
    return ok;
}

utility::string_t ValidationDto::getEmailId() const
{
    return m_EmailId;
}

void ValidationDto::setEmailId(const utility::string_t& value)
{
    m_EmailId = value;
    m_EmailIdIsSet = true;
}

bool ValidationDto::emailIdIsSet() const
{
    return m_EmailIdIsSet;
}

void ValidationDto::unsetEmailId()
{
    m_EmailIdIsSet = false;
}
std::shared_ptr<HTMLValidationResult> ValidationDto::getHtml() const
{
    return m_Html;
}

void ValidationDto::setHtml(const std::shared_ptr<HTMLValidationResult>& value)
{
    m_Html = value;
    m_HtmlIsSet = true;
}

bool ValidationDto::htmlIsSet() const
{
    return m_HtmlIsSet;
}

void ValidationDto::unsetHtml()
{
    m_HtmlIsSet = false;
}
}
}
}
}


