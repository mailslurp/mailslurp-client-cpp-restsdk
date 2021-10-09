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



#include "CreateInboxForwarderOptions.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




CreateInboxForwarderOptions::CreateInboxForwarderOptions()
{
    m_Field = utility::conversions::to_string_t("");
    m_FieldIsSet = false;
    m_ForwardToRecipientsIsSet = false;
    m_Match = utility::conversions::to_string_t("");
    m_MatchIsSet = false;
}

CreateInboxForwarderOptions::~CreateInboxForwarderOptions()
{
}

void CreateInboxForwarderOptions::validate()
{
    // TODO: implement validation
}

web::json::value CreateInboxForwarderOptions::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_FieldIsSet)
    {
        val[utility::conversions::to_string_t("field")] = ModelBase::toJson(m_Field);
    }
    if(m_ForwardToRecipientsIsSet)
    {
        val[utility::conversions::to_string_t("forwardToRecipients")] = ModelBase::toJson(m_ForwardToRecipients);
    }
    if(m_MatchIsSet)
    {
        val[utility::conversions::to_string_t("match")] = ModelBase::toJson(m_Match);
    }

    return val;
}

bool CreateInboxForwarderOptions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    return ok;
}

void CreateInboxForwarderOptions::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_FieldIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("field"), m_Field));
    }
    if(m_ForwardToRecipientsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("forwardToRecipients"), m_ForwardToRecipients));
    }
    if(m_MatchIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("match"), m_Match));
    }
}

bool CreateInboxForwarderOptions::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("field")))
    {
        utility::string_t refVal_field;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("field")), refVal_field );
        setField(refVal_field);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("forwardToRecipients")))
    {
        std::vector<utility::string_t> refVal_forwardToRecipients;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("forwardToRecipients")), refVal_forwardToRecipients );
        setForwardToRecipients(refVal_forwardToRecipients);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("match")))
    {
        utility::string_t refVal_match;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("match")), refVal_match );
        setMatch(refVal_match);
    }
    return ok;
}

utility::string_t CreateInboxForwarderOptions::getField() const
{
    return m_Field;
}

void CreateInboxForwarderOptions::setField(const utility::string_t& value)
{
    m_Field = value;
    m_FieldIsSet = true;
}

bool CreateInboxForwarderOptions::fieldIsSet() const
{
    return m_FieldIsSet;
}

void CreateInboxForwarderOptions::unsetField()
{
    m_FieldIsSet = false;
}
std::vector<utility::string_t>& CreateInboxForwarderOptions::getForwardToRecipients()
{
    return m_ForwardToRecipients;
}

void CreateInboxForwarderOptions::setForwardToRecipients(const std::vector<utility::string_t>& value)
{
    m_ForwardToRecipients = value;
    m_ForwardToRecipientsIsSet = true;
}

bool CreateInboxForwarderOptions::forwardToRecipientsIsSet() const
{
    return m_ForwardToRecipientsIsSet;
}

void CreateInboxForwarderOptions::unsetForwardToRecipients()
{
    m_ForwardToRecipientsIsSet = false;
}
utility::string_t CreateInboxForwarderOptions::getMatch() const
{
    return m_Match;
}

void CreateInboxForwarderOptions::setMatch(const utility::string_t& value)
{
    m_Match = value;
    m_MatchIsSet = true;
}

bool CreateInboxForwarderOptions::matchIsSet() const
{
    return m_MatchIsSet;
}

void CreateInboxForwarderOptions::unsetMatch()
{
    m_MatchIsSet = false;
}
}
}
}
}


