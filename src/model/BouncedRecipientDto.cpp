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



#include "CppRestOpenAPIClient/model/BouncedRecipientDto.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



BouncedRecipientDto::BouncedRecipientDto()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_UserId = utility::conversions::to_string_t("");
    m_UserIdIsSet = false;
    m_SentEmailId = utility::conversions::to_string_t("");
    m_SentEmailIdIsSet = false;
    m_Recipient = utility::conversions::to_string_t("");
    m_RecipientIsSet = false;
    m_DiagnosticCode = utility::conversions::to_string_t("");
    m_DiagnosticCodeIsSet = false;
    m_Action = utility::conversions::to_string_t("");
    m_ActionIsSet = false;
    m_Status = utility::conversions::to_string_t("");
    m_StatusIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
}

BouncedRecipientDto::~BouncedRecipientDto()
{
}

void BouncedRecipientDto::validate()
{
    // TODO: implement validation
}

web::json::value BouncedRecipientDto::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_UserIdIsSet)
    {
        val[utility::conversions::to_string_t(U("userId"))] = ModelBase::toJson(m_UserId);
    }
    if(m_SentEmailIdIsSet)
    {
        val[utility::conversions::to_string_t(U("sentEmailId"))] = ModelBase::toJson(m_SentEmailId);
    }
    if(m_RecipientIsSet)
    {
        val[utility::conversions::to_string_t(U("recipient"))] = ModelBase::toJson(m_Recipient);
    }
    if(m_DiagnosticCodeIsSet)
    {
        val[utility::conversions::to_string_t(U("diagnosticCode"))] = ModelBase::toJson(m_DiagnosticCode);
    }
    if(m_ActionIsSet)
    {
        val[utility::conversions::to_string_t(U("action"))] = ModelBase::toJson(m_Action);
    }
    if(m_StatusIsSet)
    {
        val[utility::conversions::to_string_t(U("status"))] = ModelBase::toJson(m_Status);
    }
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t(U("createdAt"))] = ModelBase::toJson(m_CreatedAt);
    }

    return val;
}

bool BouncedRecipientDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("userId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("userId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setUserId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUserId);
            setUserId(refVal_setUserId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("sentEmailId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("sentEmailId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSentEmailId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSentEmailId);
            setSentEmailId(refVal_setSentEmailId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("recipient"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("recipient")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setRecipient;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRecipient);
            setRecipient(refVal_setRecipient);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("diagnosticCode"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("diagnosticCode")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDiagnosticCode;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDiagnosticCode);
            setDiagnosticCode(refVal_setDiagnosticCode);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("action"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("action")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setAction;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAction);
            setAction(refVal_setAction);
        }
    }
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

void BouncedRecipientDto::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_UserIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("userId")), m_UserId));
    }
    if(m_SentEmailIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("sentEmailId")), m_SentEmailId));
    }
    if(m_RecipientIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("recipient")), m_Recipient));
    }
    if(m_DiagnosticCodeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("diagnosticCode")), m_DiagnosticCode));
    }
    if(m_ActionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("action")), m_Action));
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("status")), m_Status));
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("createdAt")), m_CreatedAt));
    }
}

bool BouncedRecipientDto::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("userId"))))
    {
        utility::string_t refVal_setUserId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("userId"))), refVal_setUserId );
        setUserId(refVal_setUserId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("sentEmailId"))))
    {
        utility::string_t refVal_setSentEmailId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("sentEmailId"))), refVal_setSentEmailId );
        setSentEmailId(refVal_setSentEmailId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("recipient"))))
    {
        utility::string_t refVal_setRecipient;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("recipient"))), refVal_setRecipient );
        setRecipient(refVal_setRecipient);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("diagnosticCode"))))
    {
        utility::string_t refVal_setDiagnosticCode;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("diagnosticCode"))), refVal_setDiagnosticCode );
        setDiagnosticCode(refVal_setDiagnosticCode);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("action"))))
    {
        utility::string_t refVal_setAction;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("action"))), refVal_setAction );
        setAction(refVal_setAction);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("status"))))
    {
        utility::string_t refVal_setStatus;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("status"))), refVal_setStatus );
        setStatus(refVal_setStatus);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("createdAt"))))
    {
        utility::datetime refVal_setCreatedAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("createdAt"))), refVal_setCreatedAt );
        setCreatedAt(refVal_setCreatedAt);
    }
    return ok;
}

utility::string_t BouncedRecipientDto::getId() const
{
    return m_Id;
}

void BouncedRecipientDto::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool BouncedRecipientDto::idIsSet() const
{
    return m_IdIsSet;
}

void BouncedRecipientDto::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t BouncedRecipientDto::getUserId() const
{
    return m_UserId;
}

void BouncedRecipientDto::setUserId(const utility::string_t& value)
{
    m_UserId = value;
    m_UserIdIsSet = true;
}

bool BouncedRecipientDto::userIdIsSet() const
{
    return m_UserIdIsSet;
}

void BouncedRecipientDto::unsetUserId()
{
    m_UserIdIsSet = false;
}
utility::string_t BouncedRecipientDto::getSentEmailId() const
{
    return m_SentEmailId;
}

void BouncedRecipientDto::setSentEmailId(const utility::string_t& value)
{
    m_SentEmailId = value;
    m_SentEmailIdIsSet = true;
}

bool BouncedRecipientDto::sentEmailIdIsSet() const
{
    return m_SentEmailIdIsSet;
}

void BouncedRecipientDto::unsetSentEmailId()
{
    m_SentEmailIdIsSet = false;
}
utility::string_t BouncedRecipientDto::getRecipient() const
{
    return m_Recipient;
}

void BouncedRecipientDto::setRecipient(const utility::string_t& value)
{
    m_Recipient = value;
    m_RecipientIsSet = true;
}

bool BouncedRecipientDto::recipientIsSet() const
{
    return m_RecipientIsSet;
}

void BouncedRecipientDto::unsetRecipient()
{
    m_RecipientIsSet = false;
}
utility::string_t BouncedRecipientDto::getDiagnosticCode() const
{
    return m_DiagnosticCode;
}

void BouncedRecipientDto::setDiagnosticCode(const utility::string_t& value)
{
    m_DiagnosticCode = value;
    m_DiagnosticCodeIsSet = true;
}

bool BouncedRecipientDto::diagnosticCodeIsSet() const
{
    return m_DiagnosticCodeIsSet;
}

void BouncedRecipientDto::unsetDiagnosticCode()
{
    m_DiagnosticCodeIsSet = false;
}
utility::string_t BouncedRecipientDto::getAction() const
{
    return m_Action;
}

void BouncedRecipientDto::setAction(const utility::string_t& value)
{
    m_Action = value;
    m_ActionIsSet = true;
}

bool BouncedRecipientDto::actionIsSet() const
{
    return m_ActionIsSet;
}

void BouncedRecipientDto::unsetAction()
{
    m_ActionIsSet = false;
}
utility::string_t BouncedRecipientDto::getStatus() const
{
    return m_Status;
}

void BouncedRecipientDto::setStatus(const utility::string_t& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool BouncedRecipientDto::statusIsSet() const
{
    return m_StatusIsSet;
}

void BouncedRecipientDto::unsetStatus()
{
    m_StatusIsSet = false;
}
utility::datetime BouncedRecipientDto::getCreatedAt() const
{
    return m_CreatedAt;
}

void BouncedRecipientDto::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool BouncedRecipientDto::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void BouncedRecipientDto::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
}
}
}
}

