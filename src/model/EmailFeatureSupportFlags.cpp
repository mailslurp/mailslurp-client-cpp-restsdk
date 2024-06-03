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



#include "CppRestOpenAPIClient/model/EmailFeatureSupportFlags.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



EmailFeatureSupportFlags::EmailFeatureSupportFlags()
{
    m_Status = utility::conversions::to_string_t("");
    m_StatusIsSet = false;
    m_NotesIsSet = false;
}

EmailFeatureSupportFlags::~EmailFeatureSupportFlags()
{
}

void EmailFeatureSupportFlags::validate()
{
    // TODO: implement validation
}

web::json::value EmailFeatureSupportFlags::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_StatusIsSet)
    {
        val[utility::conversions::to_string_t(U("status"))] = ModelBase::toJson(m_Status);
    }
    if(m_NotesIsSet)
    {
        val[utility::conversions::to_string_t(U("notes"))] = ModelBase::toJson(m_Notes);
    }

    return val;
}

bool EmailFeatureSupportFlags::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("status"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("status")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setStatus;
            ok &= ModelBase::fromJson(fieldValue, refVal_setStatus);
            setStatus(refVal_setStatus);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("notes"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("notes")));
        if(!fieldValue.is_null())
        {
            Set<utility::string_t> refVal_setNotes;
            ok &= ModelBase::fromJson(fieldValue, refVal_setNotes);
            setNotes(refVal_setNotes);
        }
    }
    return ok;
}

void EmailFeatureSupportFlags::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("status")), m_Status));
    }
    if(m_NotesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("notes")), m_Notes));
    }
}

bool EmailFeatureSupportFlags::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("status"))))
    {
        utility::string_t refVal_setStatus;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("status"))), refVal_setStatus );
        setStatus(refVal_setStatus);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("notes"))))
    {
        Set<utility::string_t> refVal_setNotes;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("notes"))), refVal_setNotes );
        setNotes(refVal_setNotes);
    }
    return ok;
}

utility::string_t EmailFeatureSupportFlags::getStatus() const
{
    return m_Status;
}

void EmailFeatureSupportFlags::setStatus(const utility::string_t& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool EmailFeatureSupportFlags::statusIsSet() const
{
    return m_StatusIsSet;
}

void EmailFeatureSupportFlags::unsetStatus()
{
    m_StatusIsSet = false;
}
Set<utility::string_t>& EmailFeatureSupportFlags::getNotes()
{
    return m_Notes;
}

void EmailFeatureSupportFlags::setNotes(const Set<utility::string_t>& value)
{
    m_Notes = value;
    m_NotesIsSet = true;
}

bool EmailFeatureSupportFlags::notesIsSet() const
{
    return m_NotesIsSet;
}

void EmailFeatureSupportFlags::unsetNotes()
{
    m_NotesIsSet = false;
}
}
}
}
}


