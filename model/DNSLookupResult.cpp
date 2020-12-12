/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.   ## Resources - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://www.mailslurp.com/docs/) - [Examples](https://github.com/mailslurp/examples) repository 
 *
 * The version of the OpenAPI document: 6.5.2
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "DNSLookupResult.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




DNSLookupResult::DNSLookupResult()
{
    m_Data = utility::conversions::to_string_t("");
    m_DataIsSet = false;
    m_RecordType = utility::conversions::to_string_t("");
    m_RecordTypeIsSet = false;
    m_Ttl = 0L;
    m_TtlIsSet = false;
    m_Value = utility::conversions::to_string_t("");
    m_ValueIsSet = false;
}

DNSLookupResult::~DNSLookupResult()
{
}

void DNSLookupResult::validate()
{
    // TODO: implement validation
}

web::json::value DNSLookupResult::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_DataIsSet)
    {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(m_Data);
    }
    if(m_RecordTypeIsSet)
    {
        val[utility::conversions::to_string_t("recordType")] = ModelBase::toJson(m_RecordType);
    }
    if(m_TtlIsSet)
    {
        val[utility::conversions::to_string_t("ttl")] = ModelBase::toJson(m_Ttl);
    }
    if(m_ValueIsSet)
    {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(m_Value);
    }

    return val;
}

bool DNSLookupResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_data;
            ok &= ModelBase::fromJson(fieldValue, refVal_data);
            setData(refVal_data);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("recordType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recordType"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_recordType;
            ok &= ModelBase::fromJson(fieldValue, refVal_recordType);
            setRecordType(refVal_recordType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ttl")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ttl"));
        if(!fieldValue.is_null())
        {
            int64_t refVal_ttl;
            ok &= ModelBase::fromJson(fieldValue, refVal_ttl);
            setTtl(refVal_ttl);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_value;
            ok &= ModelBase::fromJson(fieldValue, refVal_value);
            setValue(refVal_value);
        }
    }
    return ok;
}

void DNSLookupResult::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_DataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("data"), m_Data));
    }
    if(m_RecordTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("recordType"), m_RecordType));
    }
    if(m_TtlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ttl"), m_Ttl));
    }
    if(m_ValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("value"), m_Value));
    }
}

bool DNSLookupResult::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("data")))
    {
        utility::string_t refVal_data;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("data")), refVal_data );
        setData(refVal_data);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("recordType")))
    {
        utility::string_t refVal_recordType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("recordType")), refVal_recordType );
        setRecordType(refVal_recordType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ttl")))
    {
        int64_t refVal_ttl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("ttl")), refVal_ttl );
        setTtl(refVal_ttl);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("value")))
    {
        utility::string_t refVal_value;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("value")), refVal_value );
        setValue(refVal_value);
    }
    return ok;
}

utility::string_t DNSLookupResult::getData() const
{
    return m_Data;
}

void DNSLookupResult::setData(const utility::string_t& value)
{
    m_Data = value;
    m_DataIsSet = true;
}

bool DNSLookupResult::dataIsSet() const
{
    return m_DataIsSet;
}

void DNSLookupResult::unsetData()
{
    m_DataIsSet = false;
}
utility::string_t DNSLookupResult::getRecordType() const
{
    return m_RecordType;
}

void DNSLookupResult::setRecordType(const utility::string_t& value)
{
    m_RecordType = value;
    m_RecordTypeIsSet = true;
}

bool DNSLookupResult::recordTypeIsSet() const
{
    return m_RecordTypeIsSet;
}

void DNSLookupResult::unsetRecordType()
{
    m_RecordTypeIsSet = false;
}
int64_t DNSLookupResult::getTtl() const
{
    return m_Ttl;
}

void DNSLookupResult::setTtl(int64_t value)
{
    m_Ttl = value;
    m_TtlIsSet = true;
}

bool DNSLookupResult::ttlIsSet() const
{
    return m_TtlIsSet;
}

void DNSLookupResult::unsetTtl()
{
    m_TtlIsSet = false;
}
utility::string_t DNSLookupResult::getValue() const
{
    return m_Value;
}

void DNSLookupResult::setValue(const utility::string_t& value)
{
    m_Value = value;
    m_ValueIsSet = true;
}

bool DNSLookupResult::valueIsSet() const
{
    return m_ValueIsSet;
}

void DNSLookupResult::unsetValue()
{
    m_ValueIsSet = false;
}
}
}
}
}

