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



#include "ExpiredInboxDto.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




ExpiredInboxDto::ExpiredInboxDto()
{
    m_EmailAddress = utility::conversions::to_string_t("");
    m_EmailAddressIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_InboxId = utility::conversions::to_string_t("");
    m_InboxIdIsSet = false;
}

ExpiredInboxDto::~ExpiredInboxDto()
{
}

void ExpiredInboxDto::validate()
{
    // TODO: implement validation
}

web::json::value ExpiredInboxDto::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_EmailAddressIsSet)
    {
        val[utility::conversions::to_string_t("emailAddress")] = ModelBase::toJson(m_EmailAddress);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_InboxIdIsSet)
    {
        val[utility::conversions::to_string_t("inboxId")] = ModelBase::toJson(m_InboxId);
    }

    return val;
}

bool ExpiredInboxDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("inboxId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inboxId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_inboxId;
            ok &= ModelBase::fromJson(fieldValue, refVal_inboxId);
            setInboxId(refVal_inboxId);
        }
    }
    return ok;
}

void ExpiredInboxDto::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_EmailAddressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("emailAddress"), m_EmailAddress));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_InboxIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("inboxId"), m_InboxId));
    }
}

bool ExpiredInboxDto::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
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
    if(multipart->hasContent(utility::conversions::to_string_t("inboxId")))
    {
        utility::string_t refVal_inboxId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("inboxId")), refVal_inboxId );
        setInboxId(refVal_inboxId);
    }
    return ok;
}

utility::string_t ExpiredInboxDto::getEmailAddress() const
{
    return m_EmailAddress;
}

void ExpiredInboxDto::setEmailAddress(const utility::string_t& value)
{
    m_EmailAddress = value;
    m_EmailAddressIsSet = true;
}

bool ExpiredInboxDto::emailAddressIsSet() const
{
    return m_EmailAddressIsSet;
}

void ExpiredInboxDto::unsetEmailAddress()
{
    m_EmailAddressIsSet = false;
}
utility::string_t ExpiredInboxDto::getId() const
{
    return m_Id;
}

void ExpiredInboxDto::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool ExpiredInboxDto::idIsSet() const
{
    return m_IdIsSet;
}

void ExpiredInboxDto::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t ExpiredInboxDto::getInboxId() const
{
    return m_InboxId;
}

void ExpiredInboxDto::setInboxId(const utility::string_t& value)
{
    m_InboxId = value;
    m_InboxIdIsSet = true;
}

bool ExpiredInboxDto::inboxIdIsSet() const
{
    return m_InboxIdIsSet;
}

void ExpiredInboxDto::unsetInboxId()
{
    m_InboxIdIsSet = false;
}
}
}
}
}


