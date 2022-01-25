/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://www.mailslurp.com/docs/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "BulkSendEmailOptions.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




BulkSendEmailOptions::BulkSendEmailOptions()
{
    m_InboxIdsIsSet = false;
    m_SendEmailOptionsIsSet = false;
}

BulkSendEmailOptions::~BulkSendEmailOptions()
{
}

void BulkSendEmailOptions::validate()
{
    // TODO: implement validation
}

web::json::value BulkSendEmailOptions::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_InboxIdsIsSet)
    {
        val[utility::conversions::to_string_t("inboxIds")] = ModelBase::toJson(m_InboxIds);
    }
    if(m_SendEmailOptionsIsSet)
    {
        val[utility::conversions::to_string_t("sendEmailOptions")] = ModelBase::toJson(m_SendEmailOptions);
    }

    return val;
}

bool BulkSendEmailOptions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("inboxIds")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inboxIds"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_inboxIds;
            ok &= ModelBase::fromJson(fieldValue, refVal_inboxIds);
            setInboxIds(refVal_inboxIds);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sendEmailOptions")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sendEmailOptions"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<SendEmailOptions> refVal_sendEmailOptions;
            ok &= ModelBase::fromJson(fieldValue, refVal_sendEmailOptions);
            setSendEmailOptions(refVal_sendEmailOptions);
        }
    }
    return ok;
}

void BulkSendEmailOptions::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_InboxIdsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("inboxIds"), m_InboxIds));
    }
    if(m_SendEmailOptionsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sendEmailOptions"), m_SendEmailOptions));
    }
}

bool BulkSendEmailOptions::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("inboxIds")))
    {
        std::vector<utility::string_t> refVal_inboxIds;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("inboxIds")), refVal_inboxIds );
        setInboxIds(refVal_inboxIds);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sendEmailOptions")))
    {
        std::shared_ptr<SendEmailOptions> refVal_sendEmailOptions;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sendEmailOptions")), refVal_sendEmailOptions );
        setSendEmailOptions(refVal_sendEmailOptions);
    }
    return ok;
}

std::vector<utility::string_t>& BulkSendEmailOptions::getInboxIds()
{
    return m_InboxIds;
}

void BulkSendEmailOptions::setInboxIds(const std::vector<utility::string_t>& value)
{
    m_InboxIds = value;
    m_InboxIdsIsSet = true;
}

bool BulkSendEmailOptions::inboxIdsIsSet() const
{
    return m_InboxIdsIsSet;
}

void BulkSendEmailOptions::unsetInboxIds()
{
    m_InboxIdsIsSet = false;
}
std::shared_ptr<SendEmailOptions> BulkSendEmailOptions::getSendEmailOptions() const
{
    return m_SendEmailOptions;
}

void BulkSendEmailOptions::setSendEmailOptions(const std::shared_ptr<SendEmailOptions>& value)
{
    m_SendEmailOptions = value;
    m_SendEmailOptionsIsSet = true;
}

bool BulkSendEmailOptions::sendEmailOptionsIsSet() const
{
    return m_SendEmailOptionsIsSet;
}

void BulkSendEmailOptions::unsetSendEmailOptions()
{
    m_SendEmailOptionsIsSet = false;
}
}
}
}
}


