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



#include "CppRestOpenAPIClient/model/ConnectorSyncRequestResult.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



ConnectorSyncRequestResult::ConnectorSyncRequestResult()
{
    m_SyncResultIsSet = false;
    m_Exception = utility::conversions::to_string_t("");
    m_ExceptionIsSet = false;
    m_EventId = utility::conversions::to_string_t("");
    m_EventIdIsSet = false;
}

ConnectorSyncRequestResult::~ConnectorSyncRequestResult()
{
}

void ConnectorSyncRequestResult::validate()
{
    // TODO: implement validation
}

web::json::value ConnectorSyncRequestResult::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_SyncResultIsSet)
    {
        val[utility::conversions::to_string_t(U("syncResult"))] = ModelBase::toJson(m_SyncResult);
    }
    if(m_ExceptionIsSet)
    {
        val[utility::conversions::to_string_t(U("exception"))] = ModelBase::toJson(m_Exception);
    }
    if(m_EventIdIsSet)
    {
        val[utility::conversions::to_string_t(U("eventId"))] = ModelBase::toJson(m_EventId);
    }

    return val;
}

bool ConnectorSyncRequestResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("syncResult"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("syncResult")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ConnectorSyncResult> refVal_setSyncResult;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSyncResult);
            setSyncResult(refVal_setSyncResult);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("exception"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("exception")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setException;
            ok &= ModelBase::fromJson(fieldValue, refVal_setException);
            setException(refVal_setException);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("eventId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("eventId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setEventId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEventId);
            setEventId(refVal_setEventId);
        }
    }
    return ok;
}

void ConnectorSyncRequestResult::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_SyncResultIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("syncResult")), m_SyncResult));
    }
    if(m_ExceptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("exception")), m_Exception));
    }
    if(m_EventIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("eventId")), m_EventId));
    }
}

bool ConnectorSyncRequestResult::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("syncResult"))))
    {
        std::shared_ptr<ConnectorSyncResult> refVal_setSyncResult;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("syncResult"))), refVal_setSyncResult );
        setSyncResult(refVal_setSyncResult);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("exception"))))
    {
        utility::string_t refVal_setException;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("exception"))), refVal_setException );
        setException(refVal_setException);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("eventId"))))
    {
        utility::string_t refVal_setEventId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("eventId"))), refVal_setEventId );
        setEventId(refVal_setEventId);
    }
    return ok;
}

std::shared_ptr<ConnectorSyncResult> ConnectorSyncRequestResult::getSyncResult() const
{
    return m_SyncResult;
}

void ConnectorSyncRequestResult::setSyncResult(const std::shared_ptr<ConnectorSyncResult>& value)
{
    m_SyncResult = value;
    m_SyncResultIsSet = true;
}

bool ConnectorSyncRequestResult::syncResultIsSet() const
{
    return m_SyncResultIsSet;
}

void ConnectorSyncRequestResult::unsetSyncResult()
{
    m_SyncResultIsSet = false;
}
utility::string_t ConnectorSyncRequestResult::getException() const
{
    return m_Exception;
}

void ConnectorSyncRequestResult::setException(const utility::string_t& value)
{
    m_Exception = value;
    m_ExceptionIsSet = true;
}

bool ConnectorSyncRequestResult::exceptionIsSet() const
{
    return m_ExceptionIsSet;
}

void ConnectorSyncRequestResult::unsetException()
{
    m_ExceptionIsSet = false;
}
utility::string_t ConnectorSyncRequestResult::getEventId() const
{
    return m_EventId;
}

void ConnectorSyncRequestResult::setEventId(const utility::string_t& value)
{
    m_EventId = value;
    m_EventIdIsSet = true;
}

bool ConnectorSyncRequestResult::eventIdIsSet() const
{
    return m_EventIdIsSet;
}

void ConnectorSyncRequestResult::unsetEventId()
{
    m_EventIdIsSet = false;
}
}
}
}
}


