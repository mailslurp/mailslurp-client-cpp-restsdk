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



#include "UnknownMissedEmailProjection.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




UnknownMissedEmailProjection::UnknownMissedEmailProjection()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_From = utility::conversions::to_string_t("");
    m_FromIsSet = false;
    m_Subject = utility::conversions::to_string_t("");
    m_SubjectIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
    m_ToIsSet = false;
}

UnknownMissedEmailProjection::~UnknownMissedEmailProjection()
{
}

void UnknownMissedEmailProjection::validate()
{
    // TODO: implement validation
}

web::json::value UnknownMissedEmailProjection::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_FromIsSet)
    {
        val[utility::conversions::to_string_t("from")] = ModelBase::toJson(m_From);
    }
    if(m_SubjectIsSet)
    {
        val[utility::conversions::to_string_t("subject")] = ModelBase::toJson(m_Subject);
    }
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t("createdAt")] = ModelBase::toJson(m_CreatedAt);
    }
    if(m_ToIsSet)
    {
        val[utility::conversions::to_string_t("to")] = ModelBase::toJson(m_To);
    }

    return val;
}

bool UnknownMissedEmailProjection::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_id);
            setId(refVal_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("from")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("from"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_from;
            ok &= ModelBase::fromJson(fieldValue, refVal_from);
            setFrom(refVal_from);
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
    if(val.has_field(utility::conversions::to_string_t("createdAt")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("createdAt"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_createdAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_createdAt);
            setCreatedAt(refVal_createdAt);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("to")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("to"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_to;
            ok &= ModelBase::fromJson(fieldValue, refVal_to);
            setTo(refVal_to);
        }
    }
    return ok;
}

void UnknownMissedEmailProjection::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_FromIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("from"), m_From));
    }
    if(m_SubjectIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("subject"), m_Subject));
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("createdAt"), m_CreatedAt));
    }
    if(m_ToIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("to"), m_To));
    }
}

bool UnknownMissedEmailProjection::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        utility::string_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("id")), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("from")))
    {
        utility::string_t refVal_from;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("from")), refVal_from );
        setFrom(refVal_from);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("subject")))
    {
        utility::string_t refVal_subject;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("subject")), refVal_subject );
        setSubject(refVal_subject);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("createdAt")))
    {
        utility::datetime refVal_createdAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("createdAt")), refVal_createdAt );
        setCreatedAt(refVal_createdAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("to")))
    {
        std::vector<utility::string_t> refVal_to;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("to")), refVal_to );
        setTo(refVal_to);
    }
    return ok;
}

utility::string_t UnknownMissedEmailProjection::getId() const
{
    return m_Id;
}

void UnknownMissedEmailProjection::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool UnknownMissedEmailProjection::idIsSet() const
{
    return m_IdIsSet;
}

void UnknownMissedEmailProjection::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t UnknownMissedEmailProjection::getFrom() const
{
    return m_From;
}

void UnknownMissedEmailProjection::setFrom(const utility::string_t& value)
{
    m_From = value;
    m_FromIsSet = true;
}

bool UnknownMissedEmailProjection::fromIsSet() const
{
    return m_FromIsSet;
}

void UnknownMissedEmailProjection::unsetFrom()
{
    m_FromIsSet = false;
}
utility::string_t UnknownMissedEmailProjection::getSubject() const
{
    return m_Subject;
}

void UnknownMissedEmailProjection::setSubject(const utility::string_t& value)
{
    m_Subject = value;
    m_SubjectIsSet = true;
}

bool UnknownMissedEmailProjection::subjectIsSet() const
{
    return m_SubjectIsSet;
}

void UnknownMissedEmailProjection::unsetSubject()
{
    m_SubjectIsSet = false;
}
utility::datetime UnknownMissedEmailProjection::getCreatedAt() const
{
    return m_CreatedAt;
}

void UnknownMissedEmailProjection::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool UnknownMissedEmailProjection::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void UnknownMissedEmailProjection::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
std::vector<utility::string_t>& UnknownMissedEmailProjection::getTo()
{
    return m_To;
}

void UnknownMissedEmailProjection::setTo(const std::vector<utility::string_t>& value)
{
    m_To = value;
    m_ToIsSet = true;
}

bool UnknownMissedEmailProjection::toIsSet() const
{
    return m_ToIsSet;
}

void UnknownMissedEmailProjection::unsetTo()
{
    m_ToIsSet = false;
}
}
}
}
}


