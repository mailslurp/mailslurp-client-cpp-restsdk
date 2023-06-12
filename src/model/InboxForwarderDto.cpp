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



#include "CppRestOpenAPIClient/model/InboxForwarderDto.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



InboxForwarderDto::InboxForwarderDto()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_InboxId = utility::conversions::to_string_t("");
    m_InboxIdIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Field = utility::conversions::to_string_t("");
    m_FieldIsSet = false;
    m_Match = utility::conversions::to_string_t("");
    m_MatchIsSet = false;
    m_ForwardToRecipientsIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
}

InboxForwarderDto::~InboxForwarderDto()
{
}

void InboxForwarderDto::validate()
{
    // TODO: implement validation
}

web::json::value InboxForwarderDto::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_InboxIdIsSet)
    {
        val[utility::conversions::to_string_t(U("inboxId"))] = ModelBase::toJson(m_InboxId);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_FieldIsSet)
    {
        val[utility::conversions::to_string_t(U("field"))] = ModelBase::toJson(m_Field);
    }
    if(m_MatchIsSet)
    {
        val[utility::conversions::to_string_t(U("match"))] = ModelBase::toJson(m_Match);
    }
    if(m_ForwardToRecipientsIsSet)
    {
        val[utility::conversions::to_string_t(U("forwardToRecipients"))] = ModelBase::toJson(m_ForwardToRecipients);
    }
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t(U("createdAt"))] = ModelBase::toJson(m_CreatedAt);
    }

    return val;
}

bool InboxForwarderDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setName);
            setName(refVal_setName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("field"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("field")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setField;
            ok &= ModelBase::fromJson(fieldValue, refVal_setField);
            setField(refVal_setField);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("match"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("match")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setMatch;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMatch);
            setMatch(refVal_setMatch);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("forwardToRecipients"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("forwardToRecipients")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setForwardToRecipients;
            ok &= ModelBase::fromJson(fieldValue, refVal_setForwardToRecipients);
            setForwardToRecipients(refVal_setForwardToRecipients);
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
    return ok;
}

void InboxForwarderDto::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_InboxIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("inboxId")), m_InboxId));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_FieldIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("field")), m_Field));
    }
    if(m_MatchIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("match")), m_Match));
    }
    if(m_ForwardToRecipientsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("forwardToRecipients")), m_ForwardToRecipients));
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("createdAt")), m_CreatedAt));
    }
}

bool InboxForwarderDto::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("inboxId"))))
    {
        utility::string_t refVal_setInboxId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("inboxId"))), refVal_setInboxId );
        setInboxId(refVal_setInboxId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("field"))))
    {
        utility::string_t refVal_setField;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("field"))), refVal_setField );
        setField(refVal_setField);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("match"))))
    {
        utility::string_t refVal_setMatch;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("match"))), refVal_setMatch );
        setMatch(refVal_setMatch);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("forwardToRecipients"))))
    {
        std::vector<utility::string_t> refVal_setForwardToRecipients;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("forwardToRecipients"))), refVal_setForwardToRecipients );
        setForwardToRecipients(refVal_setForwardToRecipients);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("createdAt"))))
    {
        utility::datetime refVal_setCreatedAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("createdAt"))), refVal_setCreatedAt );
        setCreatedAt(refVal_setCreatedAt);
    }
    return ok;
}

utility::string_t InboxForwarderDto::getId() const
{
    return m_Id;
}

void InboxForwarderDto::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool InboxForwarderDto::idIsSet() const
{
    return m_IdIsSet;
}

void InboxForwarderDto::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t InboxForwarderDto::getInboxId() const
{
    return m_InboxId;
}

void InboxForwarderDto::setInboxId(const utility::string_t& value)
{
    m_InboxId = value;
    m_InboxIdIsSet = true;
}

bool InboxForwarderDto::inboxIdIsSet() const
{
    return m_InboxIdIsSet;
}

void InboxForwarderDto::unsetInboxId()
{
    m_InboxIdIsSet = false;
}
utility::string_t InboxForwarderDto::getName() const
{
    return m_Name;
}

void InboxForwarderDto::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool InboxForwarderDto::nameIsSet() const
{
    return m_NameIsSet;
}

void InboxForwarderDto::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t InboxForwarderDto::getField() const
{
    return m_Field;
}

void InboxForwarderDto::setField(const utility::string_t& value)
{
    m_Field = value;
    m_FieldIsSet = true;
}

bool InboxForwarderDto::fieldIsSet() const
{
    return m_FieldIsSet;
}

void InboxForwarderDto::unsetField()
{
    m_FieldIsSet = false;
}
utility::string_t InboxForwarderDto::getMatch() const
{
    return m_Match;
}

void InboxForwarderDto::setMatch(const utility::string_t& value)
{
    m_Match = value;
    m_MatchIsSet = true;
}

bool InboxForwarderDto::matchIsSet() const
{
    return m_MatchIsSet;
}

void InboxForwarderDto::unsetMatch()
{
    m_MatchIsSet = false;
}
std::vector<utility::string_t>& InboxForwarderDto::getForwardToRecipients()
{
    return m_ForwardToRecipients;
}

void InboxForwarderDto::setForwardToRecipients(const std::vector<utility::string_t>& value)
{
    m_ForwardToRecipients = value;
    m_ForwardToRecipientsIsSet = true;
}

bool InboxForwarderDto::forwardToRecipientsIsSet() const
{
    return m_ForwardToRecipientsIsSet;
}

void InboxForwarderDto::unsetForwardToRecipients()
{
    m_ForwardToRecipientsIsSet = false;
}
utility::datetime InboxForwarderDto::getCreatedAt() const
{
    return m_CreatedAt;
}

void InboxForwarderDto::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool InboxForwarderDto::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void InboxForwarderDto::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
}
}
}
}


