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



#include "SetInboxFavouritedOptions.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




SetInboxFavouritedOptions::SetInboxFavouritedOptions()
{
    m_State = false;
    m_StateIsSet = false;
}

SetInboxFavouritedOptions::~SetInboxFavouritedOptions()
{
}

void SetInboxFavouritedOptions::validate()
{
    // TODO: implement validation
}

web::json::value SetInboxFavouritedOptions::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_StateIsSet)
    {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(m_State);
    }

    return val;
}

bool SetInboxFavouritedOptions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("state")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            bool refVal_state;
            ok &= ModelBase::fromJson(fieldValue, refVal_state);
            setState(refVal_state);
        }
    }
    return ok;
}

void SetInboxFavouritedOptions::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_StateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("state"), m_State));
    }
}

bool SetInboxFavouritedOptions::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("state")))
    {
        bool refVal_state;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("state")), refVal_state );
        setState(refVal_state);
    }
    return ok;
}

bool SetInboxFavouritedOptions::isState() const
{
    return m_State;
}

void SetInboxFavouritedOptions::setState(bool value)
{
    m_State = value;
    m_StateIsSet = true;
}

bool SetInboxFavouritedOptions::stateIsSet() const
{
    return m_StateIsSet;
}

void SetInboxFavouritedOptions::unsetState()
{
    m_StateIsSet = false;
}
}
}
}
}


