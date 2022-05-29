/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://docs.mailslurp.com/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "DomainNameRecord.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




DomainNameRecord::DomainNameRecord()
{
    m_RecordType = utility::conversions::to_string_t("");
    m_RecordTypeIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_RecordEntriesIsSet = false;
    m_Ttl = 0L;
    m_TtlIsSet = false;
}

DomainNameRecord::~DomainNameRecord()
{
}

void DomainNameRecord::validate()
{
    // TODO: implement validation
}

web::json::value DomainNameRecord::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_RecordTypeIsSet)
    {
        val[utility::conversions::to_string_t("recordType")] = ModelBase::toJson(m_RecordType);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_RecordEntriesIsSet)
    {
        val[utility::conversions::to_string_t("recordEntries")] = ModelBase::toJson(m_RecordEntries);
    }
    if(m_TtlIsSet)
    {
        val[utility::conversions::to_string_t("ttl")] = ModelBase::toJson(m_Ttl);
    }

    return val;
}

bool DomainNameRecord::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("name")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_name;
            ok &= ModelBase::fromJson(fieldValue, refVal_name);
            setName(refVal_name);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("recordEntries")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recordEntries"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_recordEntries;
            ok &= ModelBase::fromJson(fieldValue, refVal_recordEntries);
            setRecordEntries(refVal_recordEntries);
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
    return ok;
}

void DomainNameRecord::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_RecordTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("recordType"), m_RecordType));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
    if(m_RecordEntriesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("recordEntries"), m_RecordEntries));
    }
    if(m_TtlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ttl"), m_Ttl));
    }
}

bool DomainNameRecord::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("recordType")))
    {
        utility::string_t refVal_recordType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("recordType")), refVal_recordType );
        setRecordType(refVal_recordType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        utility::string_t refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("name")), refVal_name );
        setName(refVal_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("recordEntries")))
    {
        std::vector<utility::string_t> refVal_recordEntries;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("recordEntries")), refVal_recordEntries );
        setRecordEntries(refVal_recordEntries);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ttl")))
    {
        int64_t refVal_ttl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("ttl")), refVal_ttl );
        setTtl(refVal_ttl);
    }
    return ok;
}

utility::string_t DomainNameRecord::getRecordType() const
{
    return m_RecordType;
}

void DomainNameRecord::setRecordType(const utility::string_t& value)
{
    m_RecordType = value;
    m_RecordTypeIsSet = true;
}

bool DomainNameRecord::recordTypeIsSet() const
{
    return m_RecordTypeIsSet;
}

void DomainNameRecord::unsetRecordType()
{
    m_RecordTypeIsSet = false;
}
utility::string_t DomainNameRecord::getName() const
{
    return m_Name;
}

void DomainNameRecord::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool DomainNameRecord::nameIsSet() const
{
    return m_NameIsSet;
}

void DomainNameRecord::unsetName()
{
    m_NameIsSet = false;
}
std::vector<utility::string_t>& DomainNameRecord::getRecordEntries()
{
    return m_RecordEntries;
}

void DomainNameRecord::setRecordEntries(const std::vector<utility::string_t>& value)
{
    m_RecordEntries = value;
    m_RecordEntriesIsSet = true;
}

bool DomainNameRecord::recordEntriesIsSet() const
{
    return m_RecordEntriesIsSet;
}

void DomainNameRecord::unsetRecordEntries()
{
    m_RecordEntriesIsSet = false;
}
int64_t DomainNameRecord::getTtl() const
{
    return m_Ttl;
}

void DomainNameRecord::setTtl(int64_t value)
{
    m_Ttl = value;
    m_TtlIsSet = true;
}

bool DomainNameRecord::ttlIsSet() const
{
    return m_TtlIsSet;
}

void DomainNameRecord::unsetTtl()
{
    m_TtlIsSet = false;
}
}
}
}
}


