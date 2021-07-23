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



#include "InboxRulesetDto.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




InboxRulesetDto::InboxRulesetDto()
{
    m_Action = utility::conversions::to_string_t("");
    m_ActionIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
    m_Handler = utility::conversions::to_string_t("");
    m_HandlerIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_InboxId = utility::conversions::to_string_t("");
    m_InboxIdIsSet = false;
    m_Scope = utility::conversions::to_string_t("");
    m_ScopeIsSet = false;
    m_Target = utility::conversions::to_string_t("");
    m_TargetIsSet = false;
}

InboxRulesetDto::~InboxRulesetDto()
{
}

void InboxRulesetDto::validate()
{
    // TODO: implement validation
}

web::json::value InboxRulesetDto::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ActionIsSet)
    {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(m_Action);
    }
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t("createdAt")] = ModelBase::toJson(m_CreatedAt);
    }
    if(m_HandlerIsSet)
    {
        val[utility::conversions::to_string_t("handler")] = ModelBase::toJson(m_Handler);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_InboxIdIsSet)
    {
        val[utility::conversions::to_string_t("inboxId")] = ModelBase::toJson(m_InboxId);
    }
    if(m_ScopeIsSet)
    {
        val[utility::conversions::to_string_t("scope")] = ModelBase::toJson(m_Scope);
    }
    if(m_TargetIsSet)
    {
        val[utility::conversions::to_string_t("target")] = ModelBase::toJson(m_Target);
    }

    return val;
}

bool InboxRulesetDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_action;
            ok &= ModelBase::fromJson(fieldValue, refVal_action);
            setAction(refVal_action);
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
    if(val.has_field(utility::conversions::to_string_t("handler")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("handler"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_handler;
            ok &= ModelBase::fromJson(fieldValue, refVal_handler);
            setHandler(refVal_handler);
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
    if(val.has_field(utility::conversions::to_string_t("scope")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scope"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_scope;
            ok &= ModelBase::fromJson(fieldValue, refVal_scope);
            setScope(refVal_scope);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_target;
            ok &= ModelBase::fromJson(fieldValue, refVal_target);
            setTarget(refVal_target);
        }
    }
    return ok;
}

void InboxRulesetDto::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ActionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("action"), m_Action));
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("createdAt"), m_CreatedAt));
    }
    if(m_HandlerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("handler"), m_Handler));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_InboxIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("inboxId"), m_InboxId));
    }
    if(m_ScopeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("scope"), m_Scope));
    }
    if(m_TargetIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("target"), m_Target));
    }
}

bool InboxRulesetDto::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("action")))
    {
        utility::string_t refVal_action;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("action")), refVal_action );
        setAction(refVal_action);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("createdAt")))
    {
        utility::datetime refVal_createdAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("createdAt")), refVal_createdAt );
        setCreatedAt(refVal_createdAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("handler")))
    {
        utility::string_t refVal_handler;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("handler")), refVal_handler );
        setHandler(refVal_handler);
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
    if(multipart->hasContent(utility::conversions::to_string_t("scope")))
    {
        utility::string_t refVal_scope;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("scope")), refVal_scope );
        setScope(refVal_scope);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("target")))
    {
        utility::string_t refVal_target;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("target")), refVal_target );
        setTarget(refVal_target);
    }
    return ok;
}

utility::string_t InboxRulesetDto::getAction() const
{
    return m_Action;
}

void InboxRulesetDto::setAction(const utility::string_t& value)
{
    m_Action = value;
    m_ActionIsSet = true;
}

bool InboxRulesetDto::actionIsSet() const
{
    return m_ActionIsSet;
}

void InboxRulesetDto::unsetAction()
{
    m_ActionIsSet = false;
}
utility::datetime InboxRulesetDto::getCreatedAt() const
{
    return m_CreatedAt;
}

void InboxRulesetDto::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool InboxRulesetDto::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void InboxRulesetDto::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
utility::string_t InboxRulesetDto::getHandler() const
{
    return m_Handler;
}

void InboxRulesetDto::setHandler(const utility::string_t& value)
{
    m_Handler = value;
    m_HandlerIsSet = true;
}

bool InboxRulesetDto::handlerIsSet() const
{
    return m_HandlerIsSet;
}

void InboxRulesetDto::unsetHandler()
{
    m_HandlerIsSet = false;
}
utility::string_t InboxRulesetDto::getId() const
{
    return m_Id;
}

void InboxRulesetDto::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool InboxRulesetDto::idIsSet() const
{
    return m_IdIsSet;
}

void InboxRulesetDto::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t InboxRulesetDto::getInboxId() const
{
    return m_InboxId;
}

void InboxRulesetDto::setInboxId(const utility::string_t& value)
{
    m_InboxId = value;
    m_InboxIdIsSet = true;
}

bool InboxRulesetDto::inboxIdIsSet() const
{
    return m_InboxIdIsSet;
}

void InboxRulesetDto::unsetInboxId()
{
    m_InboxIdIsSet = false;
}
utility::string_t InboxRulesetDto::getScope() const
{
    return m_Scope;
}

void InboxRulesetDto::setScope(const utility::string_t& value)
{
    m_Scope = value;
    m_ScopeIsSet = true;
}

bool InboxRulesetDto::scopeIsSet() const
{
    return m_ScopeIsSet;
}

void InboxRulesetDto::unsetScope()
{
    m_ScopeIsSet = false;
}
utility::string_t InboxRulesetDto::getTarget() const
{
    return m_Target;
}

void InboxRulesetDto::setTarget(const utility::string_t& value)
{
    m_Target = value;
    m_TargetIsSet = true;
}

bool InboxRulesetDto::targetIsSet() const
{
    return m_TargetIsSet;
}

void InboxRulesetDto::unsetTarget()
{
    m_TargetIsSet = false;
}
}
}
}
}

