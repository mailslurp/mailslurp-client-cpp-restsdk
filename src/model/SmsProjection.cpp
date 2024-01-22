/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://docs.mailslurp.com/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.2.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOpenAPIClient/model/SmsProjection.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



SmsProjection::SmsProjection()
{
    m_UserId = utility::conversions::to_string_t("");
    m_UserIdIsSet = false;
    m_PhoneNumber = utility::conversions::to_string_t("");
    m_PhoneNumberIsSet = false;
    m_FromNumber = utility::conversions::to_string_t("");
    m_FromNumberIsSet = false;
    m_Read = false;
    m_ReadIsSet = false;
    m_Body = utility::conversions::to_string_t("");
    m_BodyIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
}

SmsProjection::~SmsProjection()
{
}

void SmsProjection::validate()
{
    // TODO: implement validation
}

web::json::value SmsProjection::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_UserIdIsSet)
    {
        val[utility::conversions::to_string_t(U("userId"))] = ModelBase::toJson(m_UserId);
    }
    if(m_PhoneNumberIsSet)
    {
        val[utility::conversions::to_string_t(U("phoneNumber"))] = ModelBase::toJson(m_PhoneNumber);
    }
    if(m_FromNumberIsSet)
    {
        val[utility::conversions::to_string_t(U("fromNumber"))] = ModelBase::toJson(m_FromNumber);
    }
    if(m_ReadIsSet)
    {
        val[utility::conversions::to_string_t(U("read"))] = ModelBase::toJson(m_Read);
    }
    if(m_BodyIsSet)
    {
        val[utility::conversions::to_string_t(U("body"))] = ModelBase::toJson(m_Body);
    }
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t(U("createdAt"))] = ModelBase::toJson(m_CreatedAt);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }

    return val;
}

bool SmsProjection::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("userId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("userId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setUserId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUserId);
            setUserId(refVal_setUserId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("phoneNumber"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("phoneNumber")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setPhoneNumber;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPhoneNumber);
            setPhoneNumber(refVal_setPhoneNumber);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("fromNumber"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("fromNumber")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setFromNumber;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFromNumber);
            setFromNumber(refVal_setFromNumber);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("read"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("read")));
        if(!fieldValue.is_null())
        {
            bool refVal_setRead;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRead);
            setRead(refVal_setRead);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("body"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("body")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setBody;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBody);
            setBody(refVal_setBody);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("createdAt"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("createdAt")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setCreatedAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCreatedAt);
            setCreatedAt(refVal_setCreatedAt);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setId);
            setId(refVal_setId);
        }
    }
    return ok;
}

void SmsProjection::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_UserIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("userId")), m_UserId));
    }
    if(m_PhoneNumberIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("phoneNumber")), m_PhoneNumber));
    }
    if(m_FromNumberIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("fromNumber")), m_FromNumber));
    }
    if(m_ReadIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("read")), m_Read));
    }
    if(m_BodyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("body")), m_Body));
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("createdAt")), m_CreatedAt));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_Id));
    }
}

bool SmsProjection::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("userId"))))
    {
        utility::string_t refVal_setUserId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("userId"))), refVal_setUserId );
        setUserId(refVal_setUserId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("phoneNumber"))))
    {
        utility::string_t refVal_setPhoneNumber;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("phoneNumber"))), refVal_setPhoneNumber );
        setPhoneNumber(refVal_setPhoneNumber);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("fromNumber"))))
    {
        utility::string_t refVal_setFromNumber;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("fromNumber"))), refVal_setFromNumber );
        setFromNumber(refVal_setFromNumber);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("read"))))
    {
        bool refVal_setRead;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("read"))), refVal_setRead );
        setRead(refVal_setRead);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("body"))))
    {
        utility::string_t refVal_setBody;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("body"))), refVal_setBody );
        setBody(refVal_setBody);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("createdAt"))))
    {
        utility::datetime refVal_setCreatedAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("createdAt"))), refVal_setCreatedAt );
        setCreatedAt(refVal_setCreatedAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_setId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_setId );
        setId(refVal_setId);
    }
    return ok;
}

utility::string_t SmsProjection::getUserId() const
{
    return m_UserId;
}

void SmsProjection::setUserId(const utility::string_t& value)
{
    m_UserId = value;
    m_UserIdIsSet = true;
}

bool SmsProjection::userIdIsSet() const
{
    return m_UserIdIsSet;
}

void SmsProjection::unsetUserId()
{
    m_UserIdIsSet = false;
}
utility::string_t SmsProjection::getPhoneNumber() const
{
    return m_PhoneNumber;
}

void SmsProjection::setPhoneNumber(const utility::string_t& value)
{
    m_PhoneNumber = value;
    m_PhoneNumberIsSet = true;
}

bool SmsProjection::phoneNumberIsSet() const
{
    return m_PhoneNumberIsSet;
}

void SmsProjection::unsetPhoneNumber()
{
    m_PhoneNumberIsSet = false;
}
utility::string_t SmsProjection::getFromNumber() const
{
    return m_FromNumber;
}

void SmsProjection::setFromNumber(const utility::string_t& value)
{
    m_FromNumber = value;
    m_FromNumberIsSet = true;
}

bool SmsProjection::fromNumberIsSet() const
{
    return m_FromNumberIsSet;
}

void SmsProjection::unsetFromNumber()
{
    m_FromNumberIsSet = false;
}
bool SmsProjection::isRead() const
{
    return m_Read;
}

void SmsProjection::setRead(bool value)
{
    m_Read = value;
    m_ReadIsSet = true;
}

bool SmsProjection::readIsSet() const
{
    return m_ReadIsSet;
}

void SmsProjection::unsetRead()
{
    m_ReadIsSet = false;
}
utility::string_t SmsProjection::getBody() const
{
    return m_Body;
}

void SmsProjection::setBody(const utility::string_t& value)
{
    m_Body = value;
    m_BodyIsSet = true;
}

bool SmsProjection::bodyIsSet() const
{
    return m_BodyIsSet;
}

void SmsProjection::unsetBody()
{
    m_BodyIsSet = false;
}
utility::datetime SmsProjection::getCreatedAt() const
{
    return m_CreatedAt;
}

void SmsProjection::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool SmsProjection::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void SmsProjection::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
utility::string_t SmsProjection::getId() const
{
    return m_Id;
}

void SmsProjection::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool SmsProjection::idIsSet() const
{
    return m_IdIsSet;
}

void SmsProjection::unsetId()
{
    m_IdIsSet = false;
}
}
}
}
}


