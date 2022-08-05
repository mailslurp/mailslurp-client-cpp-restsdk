/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://docs.mailslurp.com/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "UpdateGroupContacts.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




UpdateGroupContacts::UpdateGroupContacts()
{
    m_ContactIdsIsSet = false;
}

UpdateGroupContacts::~UpdateGroupContacts()
{
}

void UpdateGroupContacts::validate()
{
    // TODO: implement validation
}

web::json::value UpdateGroupContacts::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ContactIdsIsSet)
    {
        val[utility::conversions::to_string_t("contactIds")] = ModelBase::toJson(m_ContactIds);
    }

    return val;
}

bool UpdateGroupContacts::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("contactIds")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("contactIds"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_contactIds;
            ok &= ModelBase::fromJson(fieldValue, refVal_contactIds);
            setContactIds(refVal_contactIds);
        }
    }
    return ok;
}

void UpdateGroupContacts::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ContactIdsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("contactIds"), m_ContactIds));
    }
}

bool UpdateGroupContacts::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("contactIds")))
    {
        std::vector<utility::string_t> refVal_contactIds;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("contactIds")), refVal_contactIds );
        setContactIds(refVal_contactIds);
    }
    return ok;
}

std::vector<utility::string_t>& UpdateGroupContacts::getContactIds()
{
    return m_ContactIds;
}

void UpdateGroupContacts::setContactIds(const std::vector<utility::string_t>& value)
{
    m_ContactIds = value;
    m_ContactIdsIsSet = true;
}

bool UpdateGroupContacts::contactIdsIsSet() const
{
    return m_ContactIdsIsSet;
}

void UpdateGroupContacts::unsetContactIds()
{
    m_ContactIdsIsSet = false;
}
}
}
}
}


