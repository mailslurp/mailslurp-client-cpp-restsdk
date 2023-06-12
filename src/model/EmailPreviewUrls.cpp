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



#include "CppRestOpenAPIClient/model/EmailPreviewUrls.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



EmailPreviewUrls::EmailPreviewUrls()
{
    m_RawSmtpMessageUrl = utility::conversions::to_string_t("");
    m_RawSmtpMessageUrlIsSet = false;
    m_PlainHtmlBodyUrl = utility::conversions::to_string_t("");
    m_PlainHtmlBodyUrlIsSet = false;
}

EmailPreviewUrls::~EmailPreviewUrls()
{
}

void EmailPreviewUrls::validate()
{
    // TODO: implement validation
}

web::json::value EmailPreviewUrls::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_RawSmtpMessageUrlIsSet)
    {
        val[utility::conversions::to_string_t(U("rawSmtpMessageUrl"))] = ModelBase::toJson(m_RawSmtpMessageUrl);
    }
    if(m_PlainHtmlBodyUrlIsSet)
    {
        val[utility::conversions::to_string_t(U("plainHtmlBodyUrl"))] = ModelBase::toJson(m_PlainHtmlBodyUrl);
    }

    return val;
}

bool EmailPreviewUrls::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("rawSmtpMessageUrl"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("rawSmtpMessageUrl")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setRawSmtpMessageUrl;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRawSmtpMessageUrl);
            setRawSmtpMessageUrl(refVal_setRawSmtpMessageUrl);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("plainHtmlBodyUrl"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("plainHtmlBodyUrl")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setPlainHtmlBodyUrl;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPlainHtmlBodyUrl);
            setPlainHtmlBodyUrl(refVal_setPlainHtmlBodyUrl);
        }
    }
    return ok;
}

void EmailPreviewUrls::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_RawSmtpMessageUrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("rawSmtpMessageUrl")), m_RawSmtpMessageUrl));
    }
    if(m_PlainHtmlBodyUrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("plainHtmlBodyUrl")), m_PlainHtmlBodyUrl));
    }
}

bool EmailPreviewUrls::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("rawSmtpMessageUrl"))))
    {
        utility::string_t refVal_setRawSmtpMessageUrl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("rawSmtpMessageUrl"))), refVal_setRawSmtpMessageUrl );
        setRawSmtpMessageUrl(refVal_setRawSmtpMessageUrl);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("plainHtmlBodyUrl"))))
    {
        utility::string_t refVal_setPlainHtmlBodyUrl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("plainHtmlBodyUrl"))), refVal_setPlainHtmlBodyUrl );
        setPlainHtmlBodyUrl(refVal_setPlainHtmlBodyUrl);
    }
    return ok;
}

utility::string_t EmailPreviewUrls::getRawSmtpMessageUrl() const
{
    return m_RawSmtpMessageUrl;
}

void EmailPreviewUrls::setRawSmtpMessageUrl(const utility::string_t& value)
{
    m_RawSmtpMessageUrl = value;
    m_RawSmtpMessageUrlIsSet = true;
}

bool EmailPreviewUrls::rawSmtpMessageUrlIsSet() const
{
    return m_RawSmtpMessageUrlIsSet;
}

void EmailPreviewUrls::unsetRawSmtpMessageUrl()
{
    m_RawSmtpMessageUrlIsSet = false;
}
utility::string_t EmailPreviewUrls::getPlainHtmlBodyUrl() const
{
    return m_PlainHtmlBodyUrl;
}

void EmailPreviewUrls::setPlainHtmlBodyUrl(const utility::string_t& value)
{
    m_PlainHtmlBodyUrl = value;
    m_PlainHtmlBodyUrlIsSet = true;
}

bool EmailPreviewUrls::plainHtmlBodyUrlIsSet() const
{
    return m_PlainHtmlBodyUrlIsSet;
}

void EmailPreviewUrls::unsetPlainHtmlBodyUrl()
{
    m_PlainHtmlBodyUrlIsSet = false;
}
}
}
}
}


