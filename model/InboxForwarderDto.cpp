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



#include "InboxForwarderDto.h"

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
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_InboxIdIsSet)
    {
        val[utility::conversions::to_string_t("inboxId")] = ModelBase::toJson(m_InboxId);
    }
    if(m_FieldIsSet)
    {
        val[utility::conversions::to_string_t("field")] = ModelBase::toJson(m_Field);
    }
    if(m_MatchIsSet)
    {
        val[utility::conversions::to_string_t("match")] = ModelBase::toJson(m_Match);
    }
    if(m_ForwardToRecipientsIsSet)
    {
        val[utility::conversions::to_string_t("forwardToRecipients")] = ModelBase::toJson(m_ForwardToRecipients);
    }
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t("createdAt")] = ModelBase::toJson(m_CreatedAt);
    }

    return val;
}

bool InboxForwarderDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("field")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("field"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_field;
            ok &= ModelBase::fromJson(fieldValue, refVal_field);
            setField(refVal_field);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("match")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("match"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_match;
            ok &= ModelBase::fromJson(fieldValue, refVal_match);
            setMatch(refVal_match);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("forwardToRecipients")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("forwardToRecipients"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_forwardToRecipients;
            ok &= ModelBase::fromJson(fieldValue, refVal_forwardToRecipients);
            setForwardToRecipients(refVal_forwardToRecipients);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("createdAt")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("createdAt"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_createdAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_createdAt);
            setCreatedAt(refVal_createdAt);
        }
    }
    return ok;
}

void InboxForwarderDto::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_InboxIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("inboxId"), m_InboxId));
    }
    if(m_FieldIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("field"), m_Field));
    }
    if(m_MatchIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("match"), m_Match));
    }
    if(m_ForwardToRecipientsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("forwardToRecipients"), m_ForwardToRecipients));
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("createdAt"), m_CreatedAt));
    }
}

bool InboxForwarderDto::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
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
    if(multipart->hasContent(utility::conversions::to_string_t("field")))
    {
        utility::string_t refVal_field;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("field")), refVal_field );
        setField(refVal_field);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("match")))
    {
        utility::string_t refVal_match;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("match")), refVal_match );
        setMatch(refVal_match);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("forwardToRecipients")))
    {
        std::vector<utility::string_t> refVal_forwardToRecipients;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("forwardToRecipients")), refVal_forwardToRecipients );
        setForwardToRecipients(refVal_forwardToRecipients);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("createdAt")))
    {
        utility::datetime refVal_createdAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("createdAt")), refVal_createdAt );
        setCreatedAt(refVal_createdAt);
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


