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



#include "CppRestOpenAPIClient/model/SetPhoneFavouritedOptions.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



SetPhoneFavouritedOptions::SetPhoneFavouritedOptions()
{
    m_State = false;
    m_StateIsSet = false;
}

SetPhoneFavouritedOptions::~SetPhoneFavouritedOptions()
{
}

void SetPhoneFavouritedOptions::validate()
{
    // TODO: implement validation
}

web::json::value SetPhoneFavouritedOptions::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_StateIsSet)
    {
        val[utility::conversions::to_string_t(U("state"))] = ModelBase::toJson(m_State);
    }

    return val;
}

bool SetPhoneFavouritedOptions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("state"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("state")));
        if(!fieldValue.is_null())
        {
            bool refVal_setState;
            ok &= ModelBase::fromJson(fieldValue, refVal_setState);
            setState(refVal_setState);
        }
    }
    return ok;
}

void SetPhoneFavouritedOptions::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_StateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("state")), m_State));
    }
}

bool SetPhoneFavouritedOptions::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("state"))))
    {
        bool refVal_setState;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("state"))), refVal_setState );
        setState(refVal_setState);
    }
    return ok;
}

bool SetPhoneFavouritedOptions::isState() const
{
    return m_State;
}

void SetPhoneFavouritedOptions::setState(bool value)
{
    m_State = value;
    m_StateIsSet = true;
}

bool SetPhoneFavouritedOptions::stateIsSet() const
{
    return m_StateIsSet;
}

void SetPhoneFavouritedOptions::unsetState()
{
    m_StateIsSet = false;
}
}
}
}
}


