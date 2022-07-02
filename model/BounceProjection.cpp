/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://docs.mailslurp.com/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "BounceProjection.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




BounceProjection::BounceProjection()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Sender = utility::conversions::to_string_t("");
    m_SenderIsSet = false;
    m_Subject = utility::conversions::to_string_t("");
    m_SubjectIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
    m_BounceType = utility::conversions::to_string_t("");
    m_BounceTypeIsSet = false;
    m_BounceMta = utility::conversions::to_string_t("");
    m_BounceMtaIsSet = false;
}

BounceProjection::~BounceProjection()
{
}

void BounceProjection::validate()
{
    // TODO: implement validation
}

web::json::value BounceProjection::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_SenderIsSet)
    {
        val[utility::conversions::to_string_t("sender")] = ModelBase::toJson(m_Sender);
    }
    if(m_SubjectIsSet)
    {
        val[utility::conversions::to_string_t("subject")] = ModelBase::toJson(m_Subject);
    }
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t("createdAt")] = ModelBase::toJson(m_CreatedAt);
    }
    if(m_BounceTypeIsSet)
    {
        val[utility::conversions::to_string_t("bounceType")] = ModelBase::toJson(m_BounceType);
    }
    if(m_BounceMtaIsSet)
    {
        val[utility::conversions::to_string_t("bounceMta")] = ModelBase::toJson(m_BounceMta);
    }

    return val;
}

bool BounceProjection::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sender")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sender"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sender;
            ok &= ModelBase::fromJson(fieldValue, refVal_sender);
            setSender(refVal_sender);
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
    if(val.has_field(utility::conversions::to_string_t("bounceType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bounceType"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_bounceType;
            ok &= ModelBase::fromJson(fieldValue, refVal_bounceType);
            setBounceType(refVal_bounceType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bounceMta")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bounceMta"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_bounceMta;
            ok &= ModelBase::fromJson(fieldValue, refVal_bounceMta);
            setBounceMta(refVal_bounceMta);
        }
    }
    return ok;
}

void BounceProjection::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_SenderIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sender"), m_Sender));
    }
    if(m_SubjectIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("subject"), m_Subject));
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("createdAt"), m_CreatedAt));
    }
    if(m_BounceTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("bounceType"), m_BounceType));
    }
    if(m_BounceMtaIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("bounceMta"), m_BounceMta));
    }
}

bool BounceProjection::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("sender")))
    {
        utility::string_t refVal_sender;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sender")), refVal_sender );
        setSender(refVal_sender);
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
    if(multipart->hasContent(utility::conversions::to_string_t("bounceType")))
    {
        utility::string_t refVal_bounceType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("bounceType")), refVal_bounceType );
        setBounceType(refVal_bounceType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("bounceMta")))
    {
        utility::string_t refVal_bounceMta;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("bounceMta")), refVal_bounceMta );
        setBounceMta(refVal_bounceMta);
    }
    return ok;
}

utility::string_t BounceProjection::getId() const
{
    return m_Id;
}

void BounceProjection::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool BounceProjection::idIsSet() const
{
    return m_IdIsSet;
}

void BounceProjection::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t BounceProjection::getSender() const
{
    return m_Sender;
}

void BounceProjection::setSender(const utility::string_t& value)
{
    m_Sender = value;
    m_SenderIsSet = true;
}

bool BounceProjection::senderIsSet() const
{
    return m_SenderIsSet;
}

void BounceProjection::unsetSender()
{
    m_SenderIsSet = false;
}
utility::string_t BounceProjection::getSubject() const
{
    return m_Subject;
}

void BounceProjection::setSubject(const utility::string_t& value)
{
    m_Subject = value;
    m_SubjectIsSet = true;
}

bool BounceProjection::subjectIsSet() const
{
    return m_SubjectIsSet;
}

void BounceProjection::unsetSubject()
{
    m_SubjectIsSet = false;
}
utility::datetime BounceProjection::getCreatedAt() const
{
    return m_CreatedAt;
}

void BounceProjection::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool BounceProjection::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void BounceProjection::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
utility::string_t BounceProjection::getBounceType() const
{
    return m_BounceType;
}

void BounceProjection::setBounceType(const utility::string_t& value)
{
    m_BounceType = value;
    m_BounceTypeIsSet = true;
}

bool BounceProjection::bounceTypeIsSet() const
{
    return m_BounceTypeIsSet;
}

void BounceProjection::unsetBounceType()
{
    m_BounceTypeIsSet = false;
}
utility::string_t BounceProjection::getBounceMta() const
{
    return m_BounceMta;
}

void BounceProjection::setBounceMta(const utility::string_t& value)
{
    m_BounceMta = value;
    m_BounceMtaIsSet = true;
}

bool BounceProjection::bounceMtaIsSet() const
{
    return m_BounceMtaIsSet;
}

void BounceProjection::unsetBounceMta()
{
    m_BounceMtaIsSet = false;
}
}
}
}
}


