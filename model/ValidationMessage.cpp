/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://www.mailslurp.com/docs/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "ValidationMessage.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




ValidationMessage::ValidationMessage()
{
    m_LineNumber = 0;
    m_LineNumberIsSet = false;
    m_Message = utility::conversions::to_string_t("");
    m_MessageIsSet = false;
}

ValidationMessage::~ValidationMessage()
{
}

void ValidationMessage::validate()
{
    // TODO: implement validation
}

web::json::value ValidationMessage::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_LineNumberIsSet)
    {
        val[utility::conversions::to_string_t("lineNumber")] = ModelBase::toJson(m_LineNumber);
    }
    if(m_MessageIsSet)
    {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(m_Message);
    }

    return val;
}

bool ValidationMessage::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("lineNumber")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lineNumber"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_lineNumber;
            ok &= ModelBase::fromJson(fieldValue, refVal_lineNumber);
            setLineNumber(refVal_lineNumber);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_message;
            ok &= ModelBase::fromJson(fieldValue, refVal_message);
            setMessage(refVal_message);
        }
    }
    return ok;
}

void ValidationMessage::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_LineNumberIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("lineNumber"), m_LineNumber));
    }
    if(m_MessageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("message"), m_Message));
    }
}

bool ValidationMessage::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("lineNumber")))
    {
        int32_t refVal_lineNumber;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("lineNumber")), refVal_lineNumber );
        setLineNumber(refVal_lineNumber);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("message")))
    {
        utility::string_t refVal_message;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("message")), refVal_message );
        setMessage(refVal_message);
    }
    return ok;
}

int32_t ValidationMessage::getLineNumber() const
{
    return m_LineNumber;
}

void ValidationMessage::setLineNumber(int32_t value)
{
    m_LineNumber = value;
    m_LineNumberIsSet = true;
}

bool ValidationMessage::lineNumberIsSet() const
{
    return m_LineNumberIsSet;
}

void ValidationMessage::unsetLineNumber()
{
    m_LineNumberIsSet = false;
}
utility::string_t ValidationMessage::getMessage() const
{
    return m_Message;
}

void ValidationMessage::setMessage(const utility::string_t& value)
{
    m_Message = value;
    m_MessageIsSet = true;
}

bool ValidationMessage::messageIsSet() const
{
    return m_MessageIsSet;
}

void ValidationMessage::unsetMessage()
{
    m_MessageIsSet = false;
}
}
}
}
}


