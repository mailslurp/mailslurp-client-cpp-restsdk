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



#include "CppRestOpenAPIClient/model/InboxIdItem.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



InboxIdItem::InboxIdItem()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_EmailAddress = utility::conversions::to_string_t("");
    m_EmailAddressIsSet = false;
}

InboxIdItem::~InboxIdItem()
{
}

void InboxIdItem::validate()
{
    // TODO: implement validation
}

web::json::value InboxIdItem::toJson() const
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

    return val;
}

bool InboxIdItem::fromJson(const web::json::value& val)
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
    return ok;
}

void InboxIdItem::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
}

bool InboxIdItem::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    return ok;
}

utility::string_t InboxIdItem::getId() const
{
    return m_Id;
}

void InboxIdItem::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool InboxIdItem::idIsSet() const
{
    return m_IdIsSet;
}

void InboxIdItem::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t InboxIdItem::getEmailAddress() const
{
    return m_EmailAddress;
}

void InboxIdItem::setEmailAddress(const utility::string_t& value)
{
    m_EmailAddress = value;
    m_EmailAddressIsSet = true;
}

bool InboxIdItem::emailAddressIsSet() const
{
    return m_EmailAddressIsSet;
}

void InboxIdItem::unsetEmailAddress()
{
    m_EmailAddressIsSet = false;
}
}
}
}
}


