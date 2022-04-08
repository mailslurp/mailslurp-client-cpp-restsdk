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



#include "ImapFlagOperationOptions.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




ImapFlagOperationOptions::ImapFlagOperationOptions()
{
    m_FlagOperation = utility::conversions::to_string_t("");
    m_FlagOperationIsSet = false;
    m_FlagsIsSet = false;
}

ImapFlagOperationOptions::~ImapFlagOperationOptions()
{
}

void ImapFlagOperationOptions::validate()
{
    // TODO: implement validation
}

web::json::value ImapFlagOperationOptions::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_FlagOperationIsSet)
    {
        val[utility::conversions::to_string_t("flagOperation")] = ModelBase::toJson(m_FlagOperation);
    }
    if(m_FlagsIsSet)
    {
        val[utility::conversions::to_string_t("flags")] = ModelBase::toJson(m_Flags);
    }

    return val;
}

bool ImapFlagOperationOptions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flagOperation")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flagOperation"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_flagOperation;
            ok &= ModelBase::fromJson(fieldValue, refVal_flagOperation);
            setFlagOperation(refVal_flagOperation);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flags")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flags"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_flags;
            ok &= ModelBase::fromJson(fieldValue, refVal_flags);
            setFlags(refVal_flags);
        }
    }
    return ok;
}

void ImapFlagOperationOptions::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_FlagOperationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("flagOperation"), m_FlagOperation));
    }
    if(m_FlagsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("flags"), m_Flags));
    }
}

bool ImapFlagOperationOptions::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("flagOperation")))
    {
        utility::string_t refVal_flagOperation;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("flagOperation")), refVal_flagOperation );
        setFlagOperation(refVal_flagOperation);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("flags")))
    {
        std::vector<utility::string_t> refVal_flags;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("flags")), refVal_flags );
        setFlags(refVal_flags);
    }
    return ok;
}

utility::string_t ImapFlagOperationOptions::getFlagOperation() const
{
    return m_FlagOperation;
}

void ImapFlagOperationOptions::setFlagOperation(const utility::string_t& value)
{
    m_FlagOperation = value;
    m_FlagOperationIsSet = true;
}

bool ImapFlagOperationOptions::flagOperationIsSet() const
{
    return m_FlagOperationIsSet;
}

void ImapFlagOperationOptions::unsetFlagOperation()
{
    m_FlagOperationIsSet = false;
}
std::vector<utility::string_t>& ImapFlagOperationOptions::getFlags()
{
    return m_Flags;
}

void ImapFlagOperationOptions::setFlags(const std::vector<utility::string_t>& value)
{
    m_Flags = value;
    m_FlagsIsSet = true;
}

bool ImapFlagOperationOptions::flagsIsSet() const
{
    return m_FlagsIsSet;
}

void ImapFlagOperationOptions::unsetFlags()
{
    m_FlagsIsSet = false;
}
}
}
}
}


