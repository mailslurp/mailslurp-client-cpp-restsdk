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



#include "CppRestOpenAPIClient/model/ConnectorSyncRequestResult_exception_cause.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



ConnectorSyncRequestResult_exception_cause::ConnectorSyncRequestResult_exception_cause()
{
    m_StackTraceIsSet = false;
    m_Message = utility::conversions::to_string_t("");
    m_MessageIsSet = false;
    m_LocalizedMessage = utility::conversions::to_string_t("");
    m_LocalizedMessageIsSet = false;
}

ConnectorSyncRequestResult_exception_cause::~ConnectorSyncRequestResult_exception_cause()
{
}

void ConnectorSyncRequestResult_exception_cause::validate()
{
    // TODO: implement validation
}

web::json::value ConnectorSyncRequestResult_exception_cause::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_StackTraceIsSet)
    {
        val[utility::conversions::to_string_t(U("stackTrace"))] = ModelBase::toJson(m_StackTrace);
    }
    if(m_MessageIsSet)
    {
        val[utility::conversions::to_string_t(U("message"))] = ModelBase::toJson(m_Message);
    }
    if(m_LocalizedMessageIsSet)
    {
        val[utility::conversions::to_string_t(U("localizedMessage"))] = ModelBase::toJson(m_LocalizedMessage);
    }

    return val;
}

bool ConnectorSyncRequestResult_exception_cause::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("stackTrace"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("stackTrace")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<ConnectorSyncRequestResult_exception_cause_stackTrace_inner>> refVal_setStackTrace;
            ok &= ModelBase::fromJson(fieldValue, refVal_setStackTrace);
            setStackTrace(refVal_setStackTrace);
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
    if(val.has_field(utility::conversions::to_string_t(U("localizedMessage"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("localizedMessage")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setLocalizedMessage;
            ok &= ModelBase::fromJson(fieldValue, refVal_setLocalizedMessage);
            setLocalizedMessage(refVal_setLocalizedMessage);
        }
    }
    return ok;
}

void ConnectorSyncRequestResult_exception_cause::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_StackTraceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("stackTrace")), m_StackTrace));
    }
    if(m_MessageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("message")), m_Message));
    }
    if(m_LocalizedMessageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("localizedMessage")), m_LocalizedMessage));
    }
}

bool ConnectorSyncRequestResult_exception_cause::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("stackTrace"))))
    {
        std::vector<std::shared_ptr<ConnectorSyncRequestResult_exception_cause_stackTrace_inner>> refVal_setStackTrace;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("stackTrace"))), refVal_setStackTrace );
        setStackTrace(refVal_setStackTrace);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("message"))))
    {
        utility::string_t refVal_setMessage;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("message"))), refVal_setMessage );
        setMessage(refVal_setMessage);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("localizedMessage"))))
    {
        utility::string_t refVal_setLocalizedMessage;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("localizedMessage"))), refVal_setLocalizedMessage );
        setLocalizedMessage(refVal_setLocalizedMessage);
    }
    return ok;
}

std::vector<std::shared_ptr<ConnectorSyncRequestResult_exception_cause_stackTrace_inner>>& ConnectorSyncRequestResult_exception_cause::getStackTrace()
{
    return m_StackTrace;
}

void ConnectorSyncRequestResult_exception_cause::setStackTrace(const std::vector<std::shared_ptr<ConnectorSyncRequestResult_exception_cause_stackTrace_inner>>& value)
{
    m_StackTrace = value;
    m_StackTraceIsSet = true;
}

bool ConnectorSyncRequestResult_exception_cause::stackTraceIsSet() const
{
    return m_StackTraceIsSet;
}

void ConnectorSyncRequestResult_exception_cause::unsetStackTrace()
{
    m_StackTraceIsSet = false;
}
utility::string_t ConnectorSyncRequestResult_exception_cause::getMessage() const
{
    return m_Message;
}

void ConnectorSyncRequestResult_exception_cause::setMessage(const utility::string_t& value)
{
    m_Message = value;
    m_MessageIsSet = true;
}

bool ConnectorSyncRequestResult_exception_cause::messageIsSet() const
{
    return m_MessageIsSet;
}

void ConnectorSyncRequestResult_exception_cause::unsetMessage()
{
    m_MessageIsSet = false;
}
utility::string_t ConnectorSyncRequestResult_exception_cause::getLocalizedMessage() const
{
    return m_LocalizedMessage;
}

void ConnectorSyncRequestResult_exception_cause::setLocalizedMessage(const utility::string_t& value)
{
    m_LocalizedMessage = value;
    m_LocalizedMessageIsSet = true;
}

bool ConnectorSyncRequestResult_exception_cause::localizedMessageIsSet() const
{
    return m_LocalizedMessageIsSet;
}

void ConnectorSyncRequestResult_exception_cause::unsetLocalizedMessage()
{
    m_LocalizedMessageIsSet = false;
}
}
}
}
}


