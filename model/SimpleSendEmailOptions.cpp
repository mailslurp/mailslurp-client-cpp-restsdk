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



#include "SimpleSendEmailOptions.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




SimpleSendEmailOptions::SimpleSendEmailOptions()
{
    m_Body = utility::conversions::to_string_t("");
    m_BodyIsSet = false;
    m_SenderId = utility::conversions::to_string_t("");
    m_SenderIdIsSet = false;
    m_Subject = utility::conversions::to_string_t("");
    m_SubjectIsSet = false;
    m_To = utility::conversions::to_string_t("");
    m_ToIsSet = false;
}

SimpleSendEmailOptions::~SimpleSendEmailOptions()
{
}

void SimpleSendEmailOptions::validate()
{
    // TODO: implement validation
}

web::json::value SimpleSendEmailOptions::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_BodyIsSet)
    {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(m_Body);
    }
    if(m_SenderIdIsSet)
    {
        val[utility::conversions::to_string_t("senderId")] = ModelBase::toJson(m_SenderId);
    }
    if(m_SubjectIsSet)
    {
        val[utility::conversions::to_string_t("subject")] = ModelBase::toJson(m_Subject);
    }
    if(m_ToIsSet)
    {
        val[utility::conversions::to_string_t("to")] = ModelBase::toJson(m_To);
    }

    return val;
}

bool SimpleSendEmailOptions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("senderId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("senderId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_senderId;
            ok &= ModelBase::fromJson(fieldValue, refVal_senderId);
            setSenderId(refVal_senderId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subject")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subject"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_subject;
            ok &= ModelBase::fromJson(fieldValue, refVal_subject);
            setSubject(refVal_subject);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("to")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("to"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_to;
            ok &= ModelBase::fromJson(fieldValue, refVal_to);
            setTo(refVal_to);
        }
    }
    return ok;
}

void SimpleSendEmailOptions::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_BodyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("body"), m_Body));
    }
    if(m_SenderIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("senderId"), m_SenderId));
    }
    if(m_SubjectIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("subject"), m_Subject));
    }
    if(m_ToIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("to"), m_To));
    }
}

bool SimpleSendEmailOptions::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("body")))
    {
        utility::string_t refVal_body;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("body")), refVal_body );
        setBody(refVal_body);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("senderId")))
    {
        utility::string_t refVal_senderId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("senderId")), refVal_senderId );
        setSenderId(refVal_senderId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("subject")))
    {
        utility::string_t refVal_subject;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("subject")), refVal_subject );
        setSubject(refVal_subject);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("to")))
    {
        utility::string_t refVal_to;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("to")), refVal_to );
        setTo(refVal_to);
    }
    return ok;
}

utility::string_t SimpleSendEmailOptions::getBody() const
{
    return m_Body;
}

void SimpleSendEmailOptions::setBody(const utility::string_t& value)
{
    m_Body = value;
    m_BodyIsSet = true;
}

bool SimpleSendEmailOptions::bodyIsSet() const
{
    return m_BodyIsSet;
}

void SimpleSendEmailOptions::unsetBody()
{
    m_BodyIsSet = false;
}
utility::string_t SimpleSendEmailOptions::getSenderId() const
{
    return m_SenderId;
}

void SimpleSendEmailOptions::setSenderId(const utility::string_t& value)
{
    m_SenderId = value;
    m_SenderIdIsSet = true;
}

bool SimpleSendEmailOptions::senderIdIsSet() const
{
    return m_SenderIdIsSet;
}

void SimpleSendEmailOptions::unsetSenderId()
{
    m_SenderIdIsSet = false;
}
utility::string_t SimpleSendEmailOptions::getSubject() const
{
    return m_Subject;
}

void SimpleSendEmailOptions::setSubject(const utility::string_t& value)
{
    m_Subject = value;
    m_SubjectIsSet = true;
}

bool SimpleSendEmailOptions::subjectIsSet() const
{
    return m_SubjectIsSet;
}

void SimpleSendEmailOptions::unsetSubject()
{
    m_SubjectIsSet = false;
}
utility::string_t SimpleSendEmailOptions::getTo() const
{
    return m_To;
}

void SimpleSendEmailOptions::setTo(const utility::string_t& value)
{
    m_To = value;
    m_ToIsSet = true;
}

bool SimpleSendEmailOptions::toIsSet() const
{
    return m_ToIsSet;
}

void SimpleSendEmailOptions::unsetTo()
{
    m_ToIsSet = false;
}
}
}
}
}


