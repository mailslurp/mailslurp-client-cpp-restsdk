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



#include "CppRestOpenAPIClient/model/LookupBimiDomainResults.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



LookupBimiDomainResults::LookupBimiDomainResults()
{
    m_Valid = false;
    m_ValidIsSet = false;
    m_QueryIsSet = false;
    m_RecordsIsSet = false;
    m_ErrorsIsSet = false;
    m_WarningsIsSet = false;
}

LookupBimiDomainResults::~LookupBimiDomainResults()
{
}

void LookupBimiDomainResults::validate()
{
    // TODO: implement validation
}

web::json::value LookupBimiDomainResults::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ValidIsSet)
    {
        val[utility::conversions::to_string_t(U("valid"))] = ModelBase::toJson(m_Valid);
    }
    if(m_QueryIsSet)
    {
        val[utility::conversions::to_string_t(U("query"))] = ModelBase::toJson(m_Query);
    }
    if(m_RecordsIsSet)
    {
        val[utility::conversions::to_string_t(U("records"))] = ModelBase::toJson(m_Records);
    }
    if(m_ErrorsIsSet)
    {
        val[utility::conversions::to_string_t(U("errors"))] = ModelBase::toJson(m_Errors);
    }
    if(m_WarningsIsSet)
    {
        val[utility::conversions::to_string_t(U("warnings"))] = ModelBase::toJson(m_Warnings);
    }

    return val;
}

bool LookupBimiDomainResults::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("valid"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("valid")));
        if(!fieldValue.is_null())
        {
            bool refVal_setValid;
            ok &= ModelBase::fromJson(fieldValue, refVal_setValid);
            setValid(refVal_setValid);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("query"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("query")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<DNSLookupOptions> refVal_setQuery;
            ok &= ModelBase::fromJson(fieldValue, refVal_setQuery);
            setQuery(refVal_setQuery);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("records"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("records")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<DNSLookupResult>> refVal_setRecords;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRecords);
            setRecords(refVal_setRecords);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("errors"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("errors")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setErrors;
            ok &= ModelBase::fromJson(fieldValue, refVal_setErrors);
            setErrors(refVal_setErrors);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("warnings"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("warnings")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setWarnings;
            ok &= ModelBase::fromJson(fieldValue, refVal_setWarnings);
            setWarnings(refVal_setWarnings);
        }
    }
    return ok;
}

void LookupBimiDomainResults::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ValidIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("valid")), m_Valid));
    }
    if(m_QueryIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("query")), m_Query));
    }
    if(m_RecordsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("records")), m_Records));
    }
    if(m_ErrorsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("errors")), m_Errors));
    }
    if(m_WarningsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("warnings")), m_Warnings));
    }
}

bool LookupBimiDomainResults::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("valid"))))
    {
        bool refVal_setValid;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("valid"))), refVal_setValid );
        setValid(refVal_setValid);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("query"))))
    {
        std::shared_ptr<DNSLookupOptions> refVal_setQuery;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("query"))), refVal_setQuery );
        setQuery(refVal_setQuery);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("records"))))
    {
        std::vector<std::shared_ptr<DNSLookupResult>> refVal_setRecords;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("records"))), refVal_setRecords );
        setRecords(refVal_setRecords);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("errors"))))
    {
        std::vector<utility::string_t> refVal_setErrors;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("errors"))), refVal_setErrors );
        setErrors(refVal_setErrors);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("warnings"))))
    {
        std::vector<utility::string_t> refVal_setWarnings;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("warnings"))), refVal_setWarnings );
        setWarnings(refVal_setWarnings);
    }
    return ok;
}

bool LookupBimiDomainResults::isValid() const
{
    return m_Valid;
}

void LookupBimiDomainResults::setValid(bool value)
{
    m_Valid = value;
    m_ValidIsSet = true;
}

bool LookupBimiDomainResults::validIsSet() const
{
    return m_ValidIsSet;
}

void LookupBimiDomainResults::unsetValid()
{
    m_ValidIsSet = false;
}
std::shared_ptr<DNSLookupOptions> LookupBimiDomainResults::getQuery() const
{
    return m_Query;
}

void LookupBimiDomainResults::setQuery(const std::shared_ptr<DNSLookupOptions>& value)
{
    m_Query = value;
    m_QueryIsSet = true;
}

bool LookupBimiDomainResults::queryIsSet() const
{
    return m_QueryIsSet;
}

void LookupBimiDomainResults::unsetQuery()
{
    m_QueryIsSet = false;
}
std::vector<std::shared_ptr<DNSLookupResult>>& LookupBimiDomainResults::getRecords()
{
    return m_Records;
}

void LookupBimiDomainResults::setRecords(const std::vector<std::shared_ptr<DNSLookupResult>>& value)
{
    m_Records = value;
    m_RecordsIsSet = true;
}

bool LookupBimiDomainResults::recordsIsSet() const
{
    return m_RecordsIsSet;
}

void LookupBimiDomainResults::unsetRecords()
{
    m_RecordsIsSet = false;
}
std::vector<utility::string_t>& LookupBimiDomainResults::getErrors()
{
    return m_Errors;
}

void LookupBimiDomainResults::setErrors(const std::vector<utility::string_t>& value)
{
    m_Errors = value;
    m_ErrorsIsSet = true;
}

bool LookupBimiDomainResults::errorsIsSet() const
{
    return m_ErrorsIsSet;
}

void LookupBimiDomainResults::unsetErrors()
{
    m_ErrorsIsSet = false;
}
std::vector<utility::string_t>& LookupBimiDomainResults::getWarnings()
{
    return m_Warnings;
}

void LookupBimiDomainResults::setWarnings(const std::vector<utility::string_t>& value)
{
    m_Warnings = value;
    m_WarningsIsSet = true;
}

bool LookupBimiDomainResults::warningsIsSet() const
{
    return m_WarningsIsSet;
}

void LookupBimiDomainResults::unsetWarnings()
{
    m_WarningsIsSet = false;
}
}
}
}
}


