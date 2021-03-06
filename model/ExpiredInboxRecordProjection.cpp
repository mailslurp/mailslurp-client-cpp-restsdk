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



#include "ExpiredInboxRecordProjection.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




ExpiredInboxRecordProjection::ExpiredInboxRecordProjection()
{
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
    m_EmailAddress = utility::conversions::to_string_t("");
    m_EmailAddressIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_UserId = utility::conversions::to_string_t("");
    m_UserIdIsSet = false;
}

ExpiredInboxRecordProjection::~ExpiredInboxRecordProjection()
{
}

void ExpiredInboxRecordProjection::validate()
{
    // TODO: implement validation
}

web::json::value ExpiredInboxRecordProjection::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t("createdAt")] = ModelBase::toJson(m_CreatedAt);
    }
    if(m_EmailAddressIsSet)
    {
        val[utility::conversions::to_string_t("emailAddress")] = ModelBase::toJson(m_EmailAddress);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_UserIdIsSet)
    {
        val[utility::conversions::to_string_t("userId")] = ModelBase::toJson(m_UserId);
    }

    return val;
}

bool ExpiredInboxRecordProjection::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("emailAddress")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("emailAddress"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_emailAddress;
            ok &= ModelBase::fromJson(fieldValue, refVal_emailAddress);
            setEmailAddress(refVal_emailAddress);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("userId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_userId;
            ok &= ModelBase::fromJson(fieldValue, refVal_userId);
            setUserId(refVal_userId);
        }
    }
    return ok;
}

void ExpiredInboxRecordProjection::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("createdAt"), m_CreatedAt));
    }
    if(m_EmailAddressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("emailAddress"), m_EmailAddress));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_UserIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("userId"), m_UserId));
    }
}

bool ExpiredInboxRecordProjection::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("createdAt")))
    {
        utility::datetime refVal_createdAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("createdAt")), refVal_createdAt );
        setCreatedAt(refVal_createdAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("emailAddress")))
    {
        utility::string_t refVal_emailAddress;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("emailAddress")), refVal_emailAddress );
        setEmailAddress(refVal_emailAddress);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        utility::string_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("id")), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("userId")))
    {
        utility::string_t refVal_userId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("userId")), refVal_userId );
        setUserId(refVal_userId);
    }
    return ok;
}

utility::datetime ExpiredInboxRecordProjection::getCreatedAt() const
{
    return m_CreatedAt;
}

void ExpiredInboxRecordProjection::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool ExpiredInboxRecordProjection::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void ExpiredInboxRecordProjection::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
utility::string_t ExpiredInboxRecordProjection::getEmailAddress() const
{
    return m_EmailAddress;
}

void ExpiredInboxRecordProjection::setEmailAddress(const utility::string_t& value)
{
    m_EmailAddress = value;
    m_EmailAddressIsSet = true;
}

bool ExpiredInboxRecordProjection::emailAddressIsSet() const
{
    return m_EmailAddressIsSet;
}

void ExpiredInboxRecordProjection::unsetEmailAddress()
{
    m_EmailAddressIsSet = false;
}
utility::string_t ExpiredInboxRecordProjection::getId() const
{
    return m_Id;
}

void ExpiredInboxRecordProjection::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool ExpiredInboxRecordProjection::idIsSet() const
{
    return m_IdIsSet;
}

void ExpiredInboxRecordProjection::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t ExpiredInboxRecordProjection::getUserId() const
{
    return m_UserId;
}

void ExpiredInboxRecordProjection::setUserId(const utility::string_t& value)
{
    m_UserId = value;
    m_UserIdIsSet = true;
}

bool ExpiredInboxRecordProjection::userIdIsSet() const
{
    return m_UserIdIsSet;
}

void ExpiredInboxRecordProjection::unsetUserId()
{
    m_UserIdIsSet = false;
}
}
}
}
}


