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



#include "CppRestOpenAPIClient/model/ConnectorSyncResult.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



ConnectorSyncResult::ConnectorSyncResult()
{
    m_EmailSyncCount = 0L;
    m_EmailSyncCountIsSet = false;
    m_LogLinesIsSet = false;
}

ConnectorSyncResult::~ConnectorSyncResult()
{
}

void ConnectorSyncResult::validate()
{
    // TODO: implement validation
}

web::json::value ConnectorSyncResult::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_EmailSyncCountIsSet)
    {
        val[utility::conversions::to_string_t(U("emailSyncCount"))] = ModelBase::toJson(m_EmailSyncCount);
    }
    if(m_LogLinesIsSet)
    {
        val[utility::conversions::to_string_t(U("logLines"))] = ModelBase::toJson(m_LogLines);
    }

    return val;
}

bool ConnectorSyncResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("emailSyncCount"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("emailSyncCount")));
        if(!fieldValue.is_null())
        {
            int64_t refVal_setEmailSyncCount;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEmailSyncCount);
            setEmailSyncCount(refVal_setEmailSyncCount);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("logLines"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("logLines")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setLogLines;
            ok &= ModelBase::fromJson(fieldValue, refVal_setLogLines);
            setLogLines(refVal_setLogLines);
        }
    }
    return ok;
}

void ConnectorSyncResult::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_EmailSyncCountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("emailSyncCount")), m_EmailSyncCount));
    }
    if(m_LogLinesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("logLines")), m_LogLines));
    }
}

bool ConnectorSyncResult::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("emailSyncCount"))))
    {
        int64_t refVal_setEmailSyncCount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("emailSyncCount"))), refVal_setEmailSyncCount );
        setEmailSyncCount(refVal_setEmailSyncCount);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("logLines"))))
    {
        std::vector<utility::string_t> refVal_setLogLines;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("logLines"))), refVal_setLogLines );
        setLogLines(refVal_setLogLines);
    }
    return ok;
}

int64_t ConnectorSyncResult::getEmailSyncCount() const
{
    return m_EmailSyncCount;
}

void ConnectorSyncResult::setEmailSyncCount(int64_t value)
{
    m_EmailSyncCount = value;
    m_EmailSyncCountIsSet = true;
}

bool ConnectorSyncResult::emailSyncCountIsSet() const
{
    return m_EmailSyncCountIsSet;
}

void ConnectorSyncResult::unsetEmailSyncCount()
{
    m_EmailSyncCountIsSet = false;
}
std::vector<utility::string_t>& ConnectorSyncResult::getLogLines()
{
    return m_LogLines;
}

void ConnectorSyncResult::setLogLines(const std::vector<utility::string_t>& value)
{
    m_LogLines = value;
    m_LogLinesIsSet = true;
}

bool ConnectorSyncResult::logLinesIsSet() const
{
    return m_LogLinesIsSet;
}

void ConnectorSyncResult::unsetLogLines()
{
    m_LogLinesIsSet = false;
}
}
}
}
}

