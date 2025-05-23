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



#include "CppRestOpenAPIClient/model/CreateTrackingPixelOptions.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



CreateTrackingPixelOptions::CreateTrackingPixelOptions()
{
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Recipient = utility::conversions::to_string_t("");
    m_RecipientIsSet = false;
}

CreateTrackingPixelOptions::~CreateTrackingPixelOptions()
{
}

void CreateTrackingPixelOptions::validate()
{
    // TODO: implement validation
}

web::json::value CreateTrackingPixelOptions::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_RecipientIsSet)
    {
        val[utility::conversions::to_string_t(U("recipient"))] = ModelBase::toJson(m_Recipient);
    }

    return val;
}

bool CreateTrackingPixelOptions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setName);
            setName(refVal_setName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("recipient"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("recipient")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setRecipient;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRecipient);
            setRecipient(refVal_setRecipient);
        }
    }
    return ok;
}

void CreateTrackingPixelOptions::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_RecipientIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("recipient")), m_Recipient));
    }
}

bool CreateTrackingPixelOptions::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("recipient"))))
    {
        utility::string_t refVal_setRecipient;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("recipient"))), refVal_setRecipient );
        setRecipient(refVal_setRecipient);
    }
    return ok;
}

utility::string_t CreateTrackingPixelOptions::getName() const
{
    return m_Name;
}

void CreateTrackingPixelOptions::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool CreateTrackingPixelOptions::nameIsSet() const
{
    return m_NameIsSet;
}

void CreateTrackingPixelOptions::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t CreateTrackingPixelOptions::getRecipient() const
{
    return m_Recipient;
}

void CreateTrackingPixelOptions::setRecipient(const utility::string_t& value)
{
    m_Recipient = value;
    m_RecipientIsSet = true;
}

bool CreateTrackingPixelOptions::recipientIsSet() const
{
    return m_RecipientIsSet;
}

void CreateTrackingPixelOptions::unsetRecipient()
{
    m_RecipientIsSet = false;
}
}
}
}
}


