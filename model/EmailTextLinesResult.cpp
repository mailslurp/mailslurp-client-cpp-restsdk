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



#include "EmailTextLinesResult.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




EmailTextLinesResult::EmailTextLinesResult()
{
    m_LinesIsSet = false;
    m_Body = utility::conversions::to_string_t("");
    m_BodyIsSet = false;
}

EmailTextLinesResult::~EmailTextLinesResult()
{
}

void EmailTextLinesResult::validate()
{
    // TODO: implement validation
}

web::json::value EmailTextLinesResult::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_LinesIsSet)
    {
        val[utility::conversions::to_string_t("lines")] = ModelBase::toJson(m_Lines);
    }
    if(m_BodyIsSet)
    {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(m_Body);
    }

    return val;
}

bool EmailTextLinesResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("lines")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lines"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_lines;
            ok &= ModelBase::fromJson(fieldValue, refVal_lines);
            setLines(refVal_lines);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_body;
            ok &= ModelBase::fromJson(fieldValue, refVal_body);
            setBody(refVal_body);
        }
    }
    return ok;
}

void EmailTextLinesResult::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_LinesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("lines"), m_Lines));
    }
    if(m_BodyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("body"), m_Body));
    }
}

bool EmailTextLinesResult::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("lines")))
    {
        std::vector<utility::string_t> refVal_lines;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("lines")), refVal_lines );
        setLines(refVal_lines);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("body")))
    {
        utility::string_t refVal_body;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("body")), refVal_body );
        setBody(refVal_body);
    }
    return ok;
}

std::vector<utility::string_t>& EmailTextLinesResult::getLines()
{
    return m_Lines;
}

void EmailTextLinesResult::setLines(const std::vector<utility::string_t>& value)
{
    m_Lines = value;
    m_LinesIsSet = true;
}

bool EmailTextLinesResult::linesIsSet() const
{
    return m_LinesIsSet;
}

void EmailTextLinesResult::unsetLines()
{
    m_LinesIsSet = false;
}
utility::string_t EmailTextLinesResult::getBody() const
{
    return m_Body;
}

void EmailTextLinesResult::setBody(const utility::string_t& value)
{
    m_Body = value;
    m_BodyIsSet = true;
}

bool EmailTextLinesResult::bodyIsSet() const
{
    return m_BodyIsSet;
}

void EmailTextLinesResult::unsetBody()
{
    m_BodyIsSet = false;
}
}
}
}
}


