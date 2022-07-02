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



#include "InboxByNameResult.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




InboxByNameResult::InboxByNameResult()
{
    m_InboxId = utility::conversions::to_string_t("");
    m_InboxIdIsSet = false;
    m_Exists = false;
    m_ExistsIsSet = false;
}

InboxByNameResult::~InboxByNameResult()
{
}

void InboxByNameResult::validate()
{
    // TODO: implement validation
}

web::json::value InboxByNameResult::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_InboxIdIsSet)
    {
        val[utility::conversions::to_string_t("inboxId")] = ModelBase::toJson(m_InboxId);
    }
    if(m_ExistsIsSet)
    {
        val[utility::conversions::to_string_t("exists")] = ModelBase::toJson(m_Exists);
    }

    return val;
}

bool InboxByNameResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("exists")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exists"));
        if(!fieldValue.is_null())
        {
            bool refVal_exists;
            ok &= ModelBase::fromJson(fieldValue, refVal_exists);
            setExists(refVal_exists);
        }
    }
    return ok;
}

void InboxByNameResult::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_InboxIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("inboxId"), m_InboxId));
    }
    if(m_ExistsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("exists"), m_Exists));
    }
}

bool InboxByNameResult::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("inboxId")))
    {
        utility::string_t refVal_inboxId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("inboxId")), refVal_inboxId );
        setInboxId(refVal_inboxId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("exists")))
    {
        bool refVal_exists;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("exists")), refVal_exists );
        setExists(refVal_exists);
    }
    return ok;
}

utility::string_t InboxByNameResult::getInboxId() const
{
    return m_InboxId;
}

void InboxByNameResult::setInboxId(const utility::string_t& value)
{
    m_InboxId = value;
    m_InboxIdIsSet = true;
}

bool InboxByNameResult::inboxIdIsSet() const
{
    return m_InboxIdIsSet;
}

void InboxByNameResult::unsetInboxId()
{
    m_InboxIdIsSet = false;
}
bool InboxByNameResult::isExists() const
{
    return m_Exists;
}

void InboxByNameResult::setExists(bool value)
{
    m_Exists = value;
    m_ExistsIsSet = true;
}

bool InboxByNameResult::existsIsSet() const
{
    return m_ExistsIsSet;
}

void InboxByNameResult::unsetExists()
{
    m_ExistsIsSet = false;
}
}
}
}
}


