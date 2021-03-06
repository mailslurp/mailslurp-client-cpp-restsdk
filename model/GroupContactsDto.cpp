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



#include "GroupContactsDto.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




GroupContactsDto::GroupContactsDto()
{
    m_ContactsIsSet = false;
    m_GroupIsSet = false;
}

GroupContactsDto::~GroupContactsDto()
{
}

void GroupContactsDto::validate()
{
    // TODO: implement validation
}

web::json::value GroupContactsDto::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ContactsIsSet)
    {
        val[utility::conversions::to_string_t("contacts")] = ModelBase::toJson(m_Contacts);
    }
    if(m_GroupIsSet)
    {
        val[utility::conversions::to_string_t("group")] = ModelBase::toJson(m_Group);
    }

    return val;
}

bool GroupContactsDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("contacts")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("contacts"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<ContactDto>> refVal_contacts;
            ok &= ModelBase::fromJson(fieldValue, refVal_contacts);
            setContacts(refVal_contacts);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<GroupDto> refVal_group;
            ok &= ModelBase::fromJson(fieldValue, refVal_group);
            setGroup(refVal_group);
        }
    }
    return ok;
}

void GroupContactsDto::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ContactsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("contacts"), m_Contacts));
    }
    if(m_GroupIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("group"), m_Group));
    }
}

bool GroupContactsDto::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("contacts")))
    {
        std::vector<std::shared_ptr<ContactDto>> refVal_contacts;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("contacts")), refVal_contacts );
        setContacts(refVal_contacts);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("group")))
    {
        std::shared_ptr<GroupDto> refVal_group;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("group")), refVal_group );
        setGroup(refVal_group);
    }
    return ok;
}

std::vector<std::shared_ptr<ContactDto>>& GroupContactsDto::getContacts()
{
    return m_Contacts;
}

void GroupContactsDto::setContacts(const std::vector<std::shared_ptr<ContactDto>>& value)
{
    m_Contacts = value;
    m_ContactsIsSet = true;
}

bool GroupContactsDto::contactsIsSet() const
{
    return m_ContactsIsSet;
}

void GroupContactsDto::unsetContacts()
{
    m_ContactsIsSet = false;
}
std::shared_ptr<GroupDto> GroupContactsDto::getGroup() const
{
    return m_Group;
}

void GroupContactsDto::setGroup(const std::shared_ptr<GroupDto>& value)
{
    m_Group = value;
    m_GroupIsSet = true;
}

bool GroupContactsDto::groupIsSet() const
{
    return m_GroupIsSet;
}

void GroupContactsDto::unsetGroup()
{
    m_GroupIsSet = false;
}
}
}
}
}


