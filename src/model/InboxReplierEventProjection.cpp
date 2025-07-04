/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails and SMS from dynamically allocated email addresses and phone numbers. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://docs.mailslurp.com/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.2.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOpenAPIClient/model/InboxReplierEventProjection.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



InboxReplierEventProjection::InboxReplierEventProjection()
{
    m_RecipientsIsSet = false;
    m_EmailId = utility::conversions::to_string_t("");
    m_EmailIdIsSet = false;
    m_InboxId = utility::conversions::to_string_t("");
    m_InboxIdIsSet = false;
    m_UserId = utility::conversions::to_string_t("");
    m_UserIdIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
    m_SentId = utility::conversions::to_string_t("");
    m_SentIdIsSet = false;
    m_ReplierId = utility::conversions::to_string_t("");
    m_ReplierIdIsSet = false;
    m_Message = utility::conversions::to_string_t("");
    m_MessageIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Status = utility::conversions::to_string_t("");
    m_StatusIsSet = false;
}

InboxReplierEventProjection::~InboxReplierEventProjection()
{
}

void InboxReplierEventProjection::validate()
{
    // TODO: implement validation
}

web::json::value InboxReplierEventProjection::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_RecipientsIsSet)
    {
        val[utility::conversions::to_string_t(U("recipients"))] = ModelBase::toJson(m_Recipients);
    }
    if(m_EmailIdIsSet)
    {
        val[utility::conversions::to_string_t(U("emailId"))] = ModelBase::toJson(m_EmailId);
    }
    if(m_InboxIdIsSet)
    {
        val[utility::conversions::to_string_t(U("inboxId"))] = ModelBase::toJson(m_InboxId);
    }
    if(m_UserIdIsSet)
    {
        val[utility::conversions::to_string_t(U("userId"))] = ModelBase::toJson(m_UserId);
    }
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t(U("createdAt"))] = ModelBase::toJson(m_CreatedAt);
    }
    if(m_SentIdIsSet)
    {
        val[utility::conversions::to_string_t(U("sentId"))] = ModelBase::toJson(m_SentId);
    }
    if(m_ReplierIdIsSet)
    {
        val[utility::conversions::to_string_t(U("replierId"))] = ModelBase::toJson(m_ReplierId);
    }
    if(m_MessageIsSet)
    {
        val[utility::conversions::to_string_t(U("message"))] = ModelBase::toJson(m_Message);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_StatusIsSet)
    {
        val[utility::conversions::to_string_t(U("status"))] = ModelBase::toJson(m_Status);
    }

    return val;
}

bool InboxReplierEventProjection::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("recipients"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("recipients")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setRecipients;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRecipients);
            setRecipients(refVal_setRecipients);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("emailId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("emailId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setEmailId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEmailId);
            setEmailId(refVal_setEmailId);
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
    if(val.has_field(utility::conversions::to_string_t(U("sentId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("sentId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSentId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSentId);
            setSentId(refVal_setSentId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("replierId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("replierId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setReplierId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setReplierId);
            setReplierId(refVal_setReplierId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("message"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("message")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setMessage;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMessage);
            setMessage(refVal_setMessage);
        }
    }
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
    return ok;
}

void InboxReplierEventProjection::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_RecipientsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("recipients")), m_Recipients));
    }
    if(m_EmailIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("emailId")), m_EmailId));
    }
    if(m_InboxIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("inboxId")), m_InboxId));
    }
    if(m_UserIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("userId")), m_UserId));
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("createdAt")), m_CreatedAt));
    }
    if(m_SentIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("sentId")), m_SentId));
    }
    if(m_ReplierIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("replierId")), m_ReplierId));
    }
    if(m_MessageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("message")), m_Message));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_Id));
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("status")), m_Status));
    }
}

bool InboxReplierEventProjection::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("recipients"))))
    {
        std::vector<utility::string_t> refVal_setRecipients;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("recipients"))), refVal_setRecipients );
        setRecipients(refVal_setRecipients);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("emailId"))))
    {
        utility::string_t refVal_setEmailId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("emailId"))), refVal_setEmailId );
        setEmailId(refVal_setEmailId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("inboxId"))))
    {
        utility::string_t refVal_setInboxId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("inboxId"))), refVal_setInboxId );
        setInboxId(refVal_setInboxId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("userId"))))
    {
        utility::string_t refVal_setUserId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("userId"))), refVal_setUserId );
        setUserId(refVal_setUserId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("createdAt"))))
    {
        utility::datetime refVal_setCreatedAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("createdAt"))), refVal_setCreatedAt );
        setCreatedAt(refVal_setCreatedAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("sentId"))))
    {
        utility::string_t refVal_setSentId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("sentId"))), refVal_setSentId );
        setSentId(refVal_setSentId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("replierId"))))
    {
        utility::string_t refVal_setReplierId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("replierId"))), refVal_setReplierId );
        setReplierId(refVal_setReplierId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("message"))))
    {
        utility::string_t refVal_setMessage;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("message"))), refVal_setMessage );
        setMessage(refVal_setMessage);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_setId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_setId );
        setId(refVal_setId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("status"))))
    {
        utility::string_t refVal_setStatus;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("status"))), refVal_setStatus );
        setStatus(refVal_setStatus);
    }
    return ok;
}

std::vector<utility::string_t>& InboxReplierEventProjection::getRecipients()
{
    return m_Recipients;
}

void InboxReplierEventProjection::setRecipients(const std::vector<utility::string_t>& value)
{
    m_Recipients = value;
    m_RecipientsIsSet = true;
}

bool InboxReplierEventProjection::recipientsIsSet() const
{
    return m_RecipientsIsSet;
}

void InboxReplierEventProjection::unsetRecipients()
{
    m_RecipientsIsSet = false;
}
utility::string_t InboxReplierEventProjection::getEmailId() const
{
    return m_EmailId;
}

void InboxReplierEventProjection::setEmailId(const utility::string_t& value)
{
    m_EmailId = value;
    m_EmailIdIsSet = true;
}

bool InboxReplierEventProjection::emailIdIsSet() const
{
    return m_EmailIdIsSet;
}

void InboxReplierEventProjection::unsetEmailId()
{
    m_EmailIdIsSet = false;
}
utility::string_t InboxReplierEventProjection::getInboxId() const
{
    return m_InboxId;
}

void InboxReplierEventProjection::setInboxId(const utility::string_t& value)
{
    m_InboxId = value;
    m_InboxIdIsSet = true;
}

bool InboxReplierEventProjection::inboxIdIsSet() const
{
    return m_InboxIdIsSet;
}

void InboxReplierEventProjection::unsetInboxId()
{
    m_InboxIdIsSet = false;
}
utility::string_t InboxReplierEventProjection::getUserId() const
{
    return m_UserId;
}

void InboxReplierEventProjection::setUserId(const utility::string_t& value)
{
    m_UserId = value;
    m_UserIdIsSet = true;
}

bool InboxReplierEventProjection::userIdIsSet() const
{
    return m_UserIdIsSet;
}

void InboxReplierEventProjection::unsetUserId()
{
    m_UserIdIsSet = false;
}
utility::datetime InboxReplierEventProjection::getCreatedAt() const
{
    return m_CreatedAt;
}

void InboxReplierEventProjection::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool InboxReplierEventProjection::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void InboxReplierEventProjection::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
utility::string_t InboxReplierEventProjection::getSentId() const
{
    return m_SentId;
}

void InboxReplierEventProjection::setSentId(const utility::string_t& value)
{
    m_SentId = value;
    m_SentIdIsSet = true;
}

bool InboxReplierEventProjection::sentIdIsSet() const
{
    return m_SentIdIsSet;
}

void InboxReplierEventProjection::unsetSentId()
{
    m_SentIdIsSet = false;
}
utility::string_t InboxReplierEventProjection::getReplierId() const
{
    return m_ReplierId;
}

void InboxReplierEventProjection::setReplierId(const utility::string_t& value)
{
    m_ReplierId = value;
    m_ReplierIdIsSet = true;
}

bool InboxReplierEventProjection::replierIdIsSet() const
{
    return m_ReplierIdIsSet;
}

void InboxReplierEventProjection::unsetReplierId()
{
    m_ReplierIdIsSet = false;
}
utility::string_t InboxReplierEventProjection::getMessage() const
{
    return m_Message;
}

void InboxReplierEventProjection::setMessage(const utility::string_t& value)
{
    m_Message = value;
    m_MessageIsSet = true;
}

bool InboxReplierEventProjection::messageIsSet() const
{
    return m_MessageIsSet;
}

void InboxReplierEventProjection::unsetMessage()
{
    m_MessageIsSet = false;
}
utility::string_t InboxReplierEventProjection::getId() const
{
    return m_Id;
}

void InboxReplierEventProjection::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool InboxReplierEventProjection::idIsSet() const
{
    return m_IdIsSet;
}

void InboxReplierEventProjection::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t InboxReplierEventProjection::getStatus() const
{
    return m_Status;
}

void InboxReplierEventProjection::setStatus(const utility::string_t& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool InboxReplierEventProjection::statusIsSet() const
{
    return m_StatusIsSet;
}

void InboxReplierEventProjection::unsetStatus()
{
    m_StatusIsSet = false;
}
}
}
}
}


