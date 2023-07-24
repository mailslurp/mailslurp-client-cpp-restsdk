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



#include "CppRestOpenAPIClient/model/GroupContactsDto.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



GroupContactsDto::GroupContactsDto()
{
    m_GroupIsSet = false;
    m_ContactsIsSet = false;
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
    
    if(m_GroupIsSet)
    {
        val[utility::conversions::to_string_t(U("group"))] = ModelBase::toJson(m_Group);
    }
    if(m_ContactsIsSet)
    {
        val[utility::conversions::to_string_t(U("contacts"))] = ModelBase::toJson(m_Contacts);
    }

    return val;
}

bool GroupContactsDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("group"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("group")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<GroupDto> refVal_setGroup;
            ok &= ModelBase::fromJson(fieldValue, refVal_setGroup);
            setGroup(refVal_setGroup);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("contacts"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("contacts")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<ContactDto>> refVal_setContacts;
            ok &= ModelBase::fromJson(fieldValue, refVal_setContacts);
            setContacts(refVal_setContacts);
        }
    }
    return ok;
}

void GroupContactsDto::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_GroupIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("group")), m_Group));
    }
    if(m_ContactsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("contacts")), m_Contacts));
    }
}

bool GroupContactsDto::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("group"))))
    {
        std::shared_ptr<GroupDto> refVal_setGroup;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("group"))), refVal_setGroup );
        setGroup(refVal_setGroup);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("contacts"))))
    {
        std::vector<std::shared_ptr<ContactDto>> refVal_setContacts;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("contacts"))), refVal_setContacts );
        setContacts(refVal_setContacts);
    }
    return ok;
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
}
}
}
}


