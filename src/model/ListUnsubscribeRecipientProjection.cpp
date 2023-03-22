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



#include "CppRestOpenAPIClient/model/ListUnsubscribeRecipientProjection.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



ListUnsubscribeRecipientProjection::ListUnsubscribeRecipientProjection()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_EmailAddress = utility::conversions::to_string_t("");
    m_EmailAddressIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
    m_DomainId = utility::conversions::to_string_t("");
    m_DomainIdIsSet = false;
}

ListUnsubscribeRecipientProjection::~ListUnsubscribeRecipientProjection()
{
}

void ListUnsubscribeRecipientProjection::validate()
{
    // TODO: implement validation
}

web::json::value ListUnsubscribeRecipientProjection::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_EmailAddressIsSet)
    {
        val[utility::conversions::to_string_t(U("emailAddress"))] = ModelBase::toJson(m_EmailAddress);
    }
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t(U("createdAt"))] = ModelBase::toJson(m_CreatedAt);
    }
    if(m_DomainIdIsSet)
    {
        val[utility::conversions::to_string_t(U("domainId"))] = ModelBase::toJson(m_DomainId);
    }

    return val;
}

bool ListUnsubscribeRecipientProjection::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("emailAddress"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("emailAddress")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setEmailAddress;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEmailAddress);
            setEmailAddress(refVal_setEmailAddress);
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
    if(val.has_field(utility::conversions::to_string_t(U("domainId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("domainId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDomainId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDomainId);
            setDomainId(refVal_setDomainId);
        }
    }
    return ok;
}

void ListUnsubscribeRecipientProjection::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_EmailAddressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("emailAddress")), m_EmailAddress));
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("createdAt")), m_CreatedAt));
    }
    if(m_DomainIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("domainId")), m_DomainId));
    }
}

bool ListUnsubscribeRecipientProjection::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("emailAddress"))))
    {
        utility::string_t refVal_setEmailAddress;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("emailAddress"))), refVal_setEmailAddress );
        setEmailAddress(refVal_setEmailAddress);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("createdAt"))))
    {
        utility::datetime refVal_setCreatedAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("createdAt"))), refVal_setCreatedAt );
        setCreatedAt(refVal_setCreatedAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("domainId"))))
    {
        utility::string_t refVal_setDomainId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("domainId"))), refVal_setDomainId );
        setDomainId(refVal_setDomainId);
    }
    return ok;
}

utility::string_t ListUnsubscribeRecipientProjection::getId() const
{
    return m_Id;
}

void ListUnsubscribeRecipientProjection::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool ListUnsubscribeRecipientProjection::idIsSet() const
{
    return m_IdIsSet;
}

void ListUnsubscribeRecipientProjection::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t ListUnsubscribeRecipientProjection::getEmailAddress() const
{
    return m_EmailAddress;
}

void ListUnsubscribeRecipientProjection::setEmailAddress(const utility::string_t& value)
{
    m_EmailAddress = value;
    m_EmailAddressIsSet = true;
}

bool ListUnsubscribeRecipientProjection::emailAddressIsSet() const
{
    return m_EmailAddressIsSet;
}

void ListUnsubscribeRecipientProjection::unsetEmailAddress()
{
    m_EmailAddressIsSet = false;
}
utility::datetime ListUnsubscribeRecipientProjection::getCreatedAt() const
{
    return m_CreatedAt;
}

void ListUnsubscribeRecipientProjection::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool ListUnsubscribeRecipientProjection::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void ListUnsubscribeRecipientProjection::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
utility::string_t ListUnsubscribeRecipientProjection::getDomainId() const
{
    return m_DomainId;
}

void ListUnsubscribeRecipientProjection::setDomainId(const utility::string_t& value)
{
    m_DomainId = value;
    m_DomainIdIsSet = true;
}

bool ListUnsubscribeRecipientProjection::domainIdIsSet() const
{
    return m_DomainIdIsSet;
}

void ListUnsubscribeRecipientProjection::unsetDomainId()
{
    m_DomainIdIsSet = false;
}
}
}
}
}


