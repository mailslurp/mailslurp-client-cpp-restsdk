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



#include "UpdateDomainOptions.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




UpdateDomainOptions::UpdateDomainOptions()
{
    m_CatchAllInboxId = utility::conversions::to_string_t("");
    m_CatchAllInboxIdIsSet = false;
}

UpdateDomainOptions::~UpdateDomainOptions()
{
}

void UpdateDomainOptions::validate()
{
    // TODO: implement validation
}

web::json::value UpdateDomainOptions::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_CatchAllInboxIdIsSet)
    {
        val[utility::conversions::to_string_t("catchAllInboxId")] = ModelBase::toJson(m_CatchAllInboxId);
    }

    return val;
}

bool UpdateDomainOptions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("catchAllInboxId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("catchAllInboxId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_catchAllInboxId;
            ok &= ModelBase::fromJson(fieldValue, refVal_catchAllInboxId);
            setCatchAllInboxId(refVal_catchAllInboxId);
        }
    }
    return ok;
}

void UpdateDomainOptions::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_CatchAllInboxIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("catchAllInboxId"), m_CatchAllInboxId));
    }
}

bool UpdateDomainOptions::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("catchAllInboxId")))
    {
        utility::string_t refVal_catchAllInboxId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("catchAllInboxId")), refVal_catchAllInboxId );
        setCatchAllInboxId(refVal_catchAllInboxId);
    }
    return ok;
}

utility::string_t UpdateDomainOptions::getCatchAllInboxId() const
{
    return m_CatchAllInboxId;
}

void UpdateDomainOptions::setCatchAllInboxId(const utility::string_t& value)
{
    m_CatchAllInboxId = value;
    m_CatchAllInboxIdIsSet = true;
}

bool UpdateDomainOptions::catchAllInboxIdIsSet() const
{
    return m_CatchAllInboxIdIsSet;
}

void UpdateDomainOptions::unsetCatchAllInboxId()
{
    m_CatchAllInboxIdIsSet = false;
}
}
}
}
}


