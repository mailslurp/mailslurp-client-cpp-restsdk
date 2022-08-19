/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://docs.mailslurp.com/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "ContentMatchOptions.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




ContentMatchOptions::ContentMatchOptions()
{
    m_Pattern = utility::conversions::to_string_t("");
    m_PatternIsSet = false;
}

ContentMatchOptions::~ContentMatchOptions()
{
}

void ContentMatchOptions::validate()
{
    // TODO: implement validation
}

web::json::value ContentMatchOptions::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_PatternIsSet)
    {
        val[utility::conversions::to_string_t("pattern")] = ModelBase::toJson(m_Pattern);
    }

    return val;
}

bool ContentMatchOptions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pattern")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pattern"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_pattern;
            ok &= ModelBase::fromJson(fieldValue, refVal_pattern);
            setPattern(refVal_pattern);
        }
    }
    return ok;
}

void ContentMatchOptions::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_PatternIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("pattern"), m_Pattern));
    }
}

bool ContentMatchOptions::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("pattern")))
    {
        utility::string_t refVal_pattern;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("pattern")), refVal_pattern );
        setPattern(refVal_pattern);
    }
    return ok;
}

utility::string_t ContentMatchOptions::getPattern() const
{
    return m_Pattern;
}

void ContentMatchOptions::setPattern(const utility::string_t& value)
{
    m_Pattern = value;
    m_PatternIsSet = true;
}

bool ContentMatchOptions::patternIsSet() const
{
    return m_PatternIsSet;
}

void ContentMatchOptions::unsetPattern()
{
    m_PatternIsSet = false;
}
}
}
}
}


