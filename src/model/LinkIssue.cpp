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



#include "CppRestOpenAPIClient/model/LinkIssue.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



LinkIssue::LinkIssue()
{
    m_Url = utility::conversions::to_string_t("");
    m_UrlIsSet = false;
    m_ResponseStatus = 0;
    m_ResponseStatusIsSet = false;
    m_Severity = utility::conversions::to_string_t("");
    m_SeverityIsSet = false;
    m_Message = utility::conversions::to_string_t("");
    m_MessageIsSet = false;
}

LinkIssue::~LinkIssue()
{
}

void LinkIssue::validate()
{
    // TODO: implement validation
}

web::json::value LinkIssue::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_UrlIsSet)
    {
        val[utility::conversions::to_string_t(U("url"))] = ModelBase::toJson(m_Url);
    }
    if(m_ResponseStatusIsSet)
    {
        val[utility::conversions::to_string_t(U("responseStatus"))] = ModelBase::toJson(m_ResponseStatus);
    }
    if(m_SeverityIsSet)
    {
        val[utility::conversions::to_string_t(U("severity"))] = ModelBase::toJson(m_Severity);
    }
    if(m_MessageIsSet)
    {
        val[utility::conversions::to_string_t(U("message"))] = ModelBase::toJson(m_Message);
    }

    return val;
}

bool LinkIssue::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("responseStatus"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("responseStatus")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setResponseStatus;
            ok &= ModelBase::fromJson(fieldValue, refVal_setResponseStatus);
            setResponseStatus(refVal_setResponseStatus);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("severity"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("severity")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSeverity;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSeverity);
            setSeverity(refVal_setSeverity);
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

void LinkIssue::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_ResponseStatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("responseStatus")), m_ResponseStatus));
    }
    if(m_SeverityIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("severity")), m_Severity));
    }
    if(m_MessageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("message")), m_Message));
    }
}

bool LinkIssue::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("responseStatus"))))
    {
        int32_t refVal_setResponseStatus;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("responseStatus"))), refVal_setResponseStatus );
        setResponseStatus(refVal_setResponseStatus);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("severity"))))
    {
        utility::string_t refVal_setSeverity;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("severity"))), refVal_setSeverity );
        setSeverity(refVal_setSeverity);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("message"))))
    {
        utility::string_t refVal_setMessage;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("message"))), refVal_setMessage );
        setMessage(refVal_setMessage);
    }
    return ok;
}

utility::string_t LinkIssue::getUrl() const
{
    return m_Url;
}

void LinkIssue::setUrl(const utility::string_t& value)
{
    m_Url = value;
    m_UrlIsSet = true;
}

bool LinkIssue::urlIsSet() const
{
    return m_UrlIsSet;
}

void LinkIssue::unsetUrl()
{
    m_UrlIsSet = false;
}
int32_t LinkIssue::getResponseStatus() const
{
    return m_ResponseStatus;
}

void LinkIssue::setResponseStatus(int32_t value)
{
    m_ResponseStatus = value;
    m_ResponseStatusIsSet = true;
}

bool LinkIssue::responseStatusIsSet() const
{
    return m_ResponseStatusIsSet;
}

void LinkIssue::unsetResponseStatus()
{
    m_ResponseStatusIsSet = false;
}
utility::string_t LinkIssue::getSeverity() const
{
    return m_Severity;
}

void LinkIssue::setSeverity(const utility::string_t& value)
{
    m_Severity = value;
    m_SeverityIsSet = true;
}

bool LinkIssue::severityIsSet() const
{
    return m_SeverityIsSet;
}

void LinkIssue::unsetSeverity()
{
    m_SeverityIsSet = false;
}
utility::string_t LinkIssue::getMessage() const
{
    return m_Message;
}

void LinkIssue::setMessage(const utility::string_t& value)
{
    m_Message = value;
    m_MessageIsSet = true;
}

bool LinkIssue::messageIsSet() const
{
    return m_MessageIsSet;
}

void LinkIssue::unsetMessage()
{
    m_MessageIsSet = false;
}
}
}
}
}


