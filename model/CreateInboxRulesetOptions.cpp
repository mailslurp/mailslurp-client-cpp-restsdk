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



#include "CreateInboxRulesetOptions.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




CreateInboxRulesetOptions::CreateInboxRulesetOptions()
{
    m_Action = utility::conversions::to_string_t("");
    m_ActionIsSet = false;
    m_Scope = utility::conversions::to_string_t("");
    m_ScopeIsSet = false;
    m_Target = utility::conversions::to_string_t("");
    m_TargetIsSet = false;
}

CreateInboxRulesetOptions::~CreateInboxRulesetOptions()
{
}

void CreateInboxRulesetOptions::validate()
{
    // TODO: implement validation
}

web::json::value CreateInboxRulesetOptions::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ActionIsSet)
    {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(m_Action);
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

bool CreateInboxRulesetOptions::fromJson(const web::json::value& val)
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

void CreateInboxRulesetOptions::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_ScopeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("scope"), m_Scope));
    }
    if(m_TargetIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("target"), m_Target));
    }
}

bool CreateInboxRulesetOptions::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

utility::string_t CreateInboxRulesetOptions::getAction() const
{
    return m_Action;
}

void CreateInboxRulesetOptions::setAction(const utility::string_t& value)
{
    m_Action = value;
    m_ActionIsSet = true;
}

bool CreateInboxRulesetOptions::actionIsSet() const
{
    return m_ActionIsSet;
}

void CreateInboxRulesetOptions::unsetAction()
{
    m_ActionIsSet = false;
}
utility::string_t CreateInboxRulesetOptions::getScope() const
{
    return m_Scope;
}

void CreateInboxRulesetOptions::setScope(const utility::string_t& value)
{
    m_Scope = value;
    m_ScopeIsSet = true;
}

bool CreateInboxRulesetOptions::scopeIsSet() const
{
    return m_ScopeIsSet;
}

void CreateInboxRulesetOptions::unsetScope()
{
    m_ScopeIsSet = false;
}
utility::string_t CreateInboxRulesetOptions::getTarget() const
{
    return m_Target;
}

void CreateInboxRulesetOptions::setTarget(const utility::string_t& value)
{
    m_Target = value;
    m_TargetIsSet = true;
}

bool CreateInboxRulesetOptions::targetIsSet() const
{
    return m_TargetIsSet;
}

void CreateInboxRulesetOptions::unsetTarget()
{
    m_TargetIsSet = false;
}
}
}
}
}


