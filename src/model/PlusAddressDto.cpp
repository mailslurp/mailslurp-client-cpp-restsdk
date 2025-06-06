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



#include "CppRestOpenAPIClient/model/PlusAddressDto.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



PlusAddressDto::PlusAddressDto()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_PlusAddress = utility::conversions::to_string_t("");
    m_PlusAddressIsSet = false;
    m_FullAddress = utility::conversions::to_string_t("");
    m_FullAddressIsSet = false;
    m_UserId = utility::conversions::to_string_t("");
    m_UserIdIsSet = false;
    m_InboxId = utility::conversions::to_string_t("");
    m_InboxIdIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
    m_UpdatedAt = utility::datetime();
    m_UpdatedAtIsSet = false;
}

PlusAddressDto::~PlusAddressDto()
{
}

void PlusAddressDto::validate()
{
    // TODO: implement validation
}

web::json::value PlusAddressDto::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_PlusAddressIsSet)
    {
        val[utility::conversions::to_string_t(U("plusAddress"))] = ModelBase::toJson(m_PlusAddress);
    }
    if(m_FullAddressIsSet)
    {
        val[utility::conversions::to_string_t(U("fullAddress"))] = ModelBase::toJson(m_FullAddress);
    }
    if(m_UserIdIsSet)
    {
        val[utility::conversions::to_string_t(U("userId"))] = ModelBase::toJson(m_UserId);
    }
    if(m_InboxIdIsSet)
    {
        val[utility::conversions::to_string_t(U("inboxId"))] = ModelBase::toJson(m_InboxId);
    }
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t(U("createdAt"))] = ModelBase::toJson(m_CreatedAt);
    }
    if(m_UpdatedAtIsSet)
    {
        val[utility::conversions::to_string_t(U("updatedAt"))] = ModelBase::toJson(m_UpdatedAt);
    }

    return val;
}

bool PlusAddressDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t(U("plusAddress"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("plusAddress")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setPlusAddress;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPlusAddress);
            setPlusAddress(refVal_setPlusAddress);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("fullAddress"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("fullAddress")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setFullAddress;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFullAddress);
            setFullAddress(refVal_setFullAddress);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t(U("inboxId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("inboxId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setInboxId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setInboxId);
            setInboxId(refVal_setInboxId);
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
    if(val.has_field(utility::conversions::to_string_t(U("updatedAt"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("updatedAt")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setUpdatedAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUpdatedAt);
            setUpdatedAt(refVal_setUpdatedAt);
        }
    }
    return ok;
}

void PlusAddressDto::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_Id));
    }
    if(m_PlusAddressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("plusAddress")), m_PlusAddress));
    }
    if(m_FullAddressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("fullAddress")), m_FullAddress));
    }
    if(m_UserIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("userId")), m_UserId));
    }
    if(m_InboxIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("inboxId")), m_InboxId));
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("createdAt")), m_CreatedAt));
    }
    if(m_UpdatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("updatedAt")), m_UpdatedAt));
    }
}

bool PlusAddressDto::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_setId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_setId );
        setId(refVal_setId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("plusAddress"))))
    {
        utility::string_t refVal_setPlusAddress;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("plusAddress"))), refVal_setPlusAddress );
        setPlusAddress(refVal_setPlusAddress);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("fullAddress"))))
    {
        utility::string_t refVal_setFullAddress;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("fullAddress"))), refVal_setFullAddress );
        setFullAddress(refVal_setFullAddress);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("userId"))))
    {
        utility::string_t refVal_setUserId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("userId"))), refVal_setUserId );
        setUserId(refVal_setUserId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("inboxId"))))
    {
        utility::string_t refVal_setInboxId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("inboxId"))), refVal_setInboxId );
        setInboxId(refVal_setInboxId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("createdAt"))))
    {
        utility::datetime refVal_setCreatedAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("createdAt"))), refVal_setCreatedAt );
        setCreatedAt(refVal_setCreatedAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("updatedAt"))))
    {
        utility::datetime refVal_setUpdatedAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("updatedAt"))), refVal_setUpdatedAt );
        setUpdatedAt(refVal_setUpdatedAt);
    }
    return ok;
}

utility::string_t PlusAddressDto::getId() const
{
    return m_Id;
}

void PlusAddressDto::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool PlusAddressDto::idIsSet() const
{
    return m_IdIsSet;
}

void PlusAddressDto::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t PlusAddressDto::getPlusAddress() const
{
    return m_PlusAddress;
}

void PlusAddressDto::setPlusAddress(const utility::string_t& value)
{
    m_PlusAddress = value;
    m_PlusAddressIsSet = true;
}

bool PlusAddressDto::plusAddressIsSet() const
{
    return m_PlusAddressIsSet;
}

void PlusAddressDto::unsetPlusAddress()
{
    m_PlusAddressIsSet = false;
}
utility::string_t PlusAddressDto::getFullAddress() const
{
    return m_FullAddress;
}

void PlusAddressDto::setFullAddress(const utility::string_t& value)
{
    m_FullAddress = value;
    m_FullAddressIsSet = true;
}

bool PlusAddressDto::fullAddressIsSet() const
{
    return m_FullAddressIsSet;
}

void PlusAddressDto::unsetFullAddress()
{
    m_FullAddressIsSet = false;
}
utility::string_t PlusAddressDto::getUserId() const
{
    return m_UserId;
}

void PlusAddressDto::setUserId(const utility::string_t& value)
{
    m_UserId = value;
    m_UserIdIsSet = true;
}

bool PlusAddressDto::userIdIsSet() const
{
    return m_UserIdIsSet;
}

void PlusAddressDto::unsetUserId()
{
    m_UserIdIsSet = false;
}
utility::string_t PlusAddressDto::getInboxId() const
{
    return m_InboxId;
}

void PlusAddressDto::setInboxId(const utility::string_t& value)
{
    m_InboxId = value;
    m_InboxIdIsSet = true;
}

bool PlusAddressDto::inboxIdIsSet() const
{
    return m_InboxIdIsSet;
}

void PlusAddressDto::unsetInboxId()
{
    m_InboxIdIsSet = false;
}
utility::datetime PlusAddressDto::getCreatedAt() const
{
    return m_CreatedAt;
}

void PlusAddressDto::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool PlusAddressDto::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void PlusAddressDto::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
utility::datetime PlusAddressDto::getUpdatedAt() const
{
    return m_UpdatedAt;
}

void PlusAddressDto::setUpdatedAt(const utility::datetime& value)
{
    m_UpdatedAt = value;
    m_UpdatedAtIsSet = true;
}

bool PlusAddressDto::updatedAtIsSet() const
{
    return m_UpdatedAtIsSet;
}

void PlusAddressDto::unsetUpdatedAt()
{
    m_UpdatedAtIsSet = false;
}
}
}
}
}


