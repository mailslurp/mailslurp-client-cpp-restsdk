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



#include "CppRestOpenAPIClient/model/EmailRecipientsProjection.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



EmailRecipientsProjection::EmailRecipientsProjection()
{
    m_ToIsSet = false;
    m_CcIsSet = false;
    m_BccIsSet = false;
}

EmailRecipientsProjection::~EmailRecipientsProjection()
{
}

void EmailRecipientsProjection::validate()
{
    // TODO: implement validation
}

web::json::value EmailRecipientsProjection::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ToIsSet)
    {
        val[utility::conversions::to_string_t(U("to"))] = ModelBase::toJson(m_To);
    }
    if(m_CcIsSet)
    {
        val[utility::conversions::to_string_t(U("cc"))] = ModelBase::toJson(m_Cc);
    }
    if(m_BccIsSet)
    {
        val[utility::conversions::to_string_t(U("bcc"))] = ModelBase::toJson(m_Bcc);
    }

    return val;
}

bool EmailRecipientsProjection::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("to"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("to")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<RecipientProjection>> refVal_setTo;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTo);
            setTo(refVal_setTo);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("cc"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("cc")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<RecipientProjection>> refVal_setCc;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCc);
            setCc(refVal_setCc);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("bcc"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("bcc")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<RecipientProjection>> refVal_setBcc;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBcc);
            setBcc(refVal_setBcc);
        }
    }
    return ok;
}

void EmailRecipientsProjection::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ToIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("to")), m_To));
    }
    if(m_CcIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("cc")), m_Cc));
    }
    if(m_BccIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("bcc")), m_Bcc));
    }
}

bool EmailRecipientsProjection::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("to"))))
    {
        std::vector<std::shared_ptr<RecipientProjection>> refVal_setTo;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("to"))), refVal_setTo );
        setTo(refVal_setTo);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("cc"))))
    {
        std::vector<std::shared_ptr<RecipientProjection>> refVal_setCc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("cc"))), refVal_setCc );
        setCc(refVal_setCc);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("bcc"))))
    {
        std::vector<std::shared_ptr<RecipientProjection>> refVal_setBcc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("bcc"))), refVal_setBcc );
        setBcc(refVal_setBcc);
    }
    return ok;
}

std::vector<std::shared_ptr<RecipientProjection>>& EmailRecipientsProjection::getTo()
{
    return m_To;
}

void EmailRecipientsProjection::setTo(const std::vector<std::shared_ptr<RecipientProjection>>& value)
{
    m_To = value;
    m_ToIsSet = true;
}

bool EmailRecipientsProjection::toIsSet() const
{
    return m_ToIsSet;
}

void EmailRecipientsProjection::unsetTo()
{
    m_ToIsSet = false;
}
std::vector<std::shared_ptr<RecipientProjection>>& EmailRecipientsProjection::getCc()
{
    return m_Cc;
}

void EmailRecipientsProjection::setCc(const std::vector<std::shared_ptr<RecipientProjection>>& value)
{
    m_Cc = value;
    m_CcIsSet = true;
}

bool EmailRecipientsProjection::ccIsSet() const
{
    return m_CcIsSet;
}

void EmailRecipientsProjection::unsetCc()
{
    m_CcIsSet = false;
}
std::vector<std::shared_ptr<RecipientProjection>>& EmailRecipientsProjection::getBcc()
{
    return m_Bcc;
}

void EmailRecipientsProjection::setBcc(const std::vector<std::shared_ptr<RecipientProjection>>& value)
{
    m_Bcc = value;
    m_BccIsSet = true;
}

bool EmailRecipientsProjection::bccIsSet() const
{
    return m_BccIsSet;
}

void EmailRecipientsProjection::unsetBcc()
{
    m_BccIsSet = false;
}
}
}
}
}


