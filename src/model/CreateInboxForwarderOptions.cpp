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



#include "CppRestOpenAPIClient/model/CreateInboxForwarderOptions.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



CreateInboxForwarderOptions::CreateInboxForwarderOptions()
{
    m_Field = utility::conversions::to_string_t("");
    m_FieldIsSet = false;
    m_Match = utility::conversions::to_string_t("");
    m_MatchIsSet = false;
    m_ForwardToRecipientsIsSet = false;
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

    return val;
}

bool CreateInboxForwarderOptions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    return ok;
}

void CreateInboxForwarderOptions::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
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
}

bool CreateInboxForwarderOptions::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
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
}
}
}
}


