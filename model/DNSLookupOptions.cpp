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



#include "DNSLookupOptions.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




DNSLookupOptions::DNSLookupOptions()
{
    m_Hostname = utility::conversions::to_string_t("");
    m_HostnameIsSet = false;
    m_OmitFinalDNSDot = false;
    m_OmitFinalDNSDotIsSet = false;
    m_RecordTypesIsSet = false;
}

DNSLookupOptions::~DNSLookupOptions()
{
}

void DNSLookupOptions::validate()
{
    // TODO: implement validation
}

web::json::value DNSLookupOptions::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_HostnameIsSet)
    {
        val[utility::conversions::to_string_t("hostname")] = ModelBase::toJson(m_Hostname);
    }
    if(m_OmitFinalDNSDotIsSet)
    {
        val[utility::conversions::to_string_t("omitFinalDNSDot")] = ModelBase::toJson(m_OmitFinalDNSDot);
    }
    if(m_RecordTypesIsSet)
    {
        val[utility::conversions::to_string_t("recordTypes")] = ModelBase::toJson(m_RecordTypes);
    }

    return val;
}

bool DNSLookupOptions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("hostname")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hostname"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_hostname;
            ok &= ModelBase::fromJson(fieldValue, refVal_hostname);
            setHostname(refVal_hostname);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("omitFinalDNSDot")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("omitFinalDNSDot"));
        if(!fieldValue.is_null())
        {
            bool refVal_omitFinalDNSDot;
            ok &= ModelBase::fromJson(fieldValue, refVal_omitFinalDNSDot);
            setOmitFinalDNSDot(refVal_omitFinalDNSDot);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("recordTypes")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recordTypes"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_recordTypes;
            ok &= ModelBase::fromJson(fieldValue, refVal_recordTypes);
            setRecordTypes(refVal_recordTypes);
        }
    }
    return ok;
}

void DNSLookupOptions::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_HostnameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("hostname"), m_Hostname));
    }
    if(m_OmitFinalDNSDotIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("omitFinalDNSDot"), m_OmitFinalDNSDot));
    }
    if(m_RecordTypesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("recordTypes"), m_RecordTypes));
    }
}

bool DNSLookupOptions::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("hostname")))
    {
        utility::string_t refVal_hostname;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("hostname")), refVal_hostname );
        setHostname(refVal_hostname);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("omitFinalDNSDot")))
    {
        bool refVal_omitFinalDNSDot;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("omitFinalDNSDot")), refVal_omitFinalDNSDot );
        setOmitFinalDNSDot(refVal_omitFinalDNSDot);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("recordTypes")))
    {
        std::vector<utility::string_t> refVal_recordTypes;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("recordTypes")), refVal_recordTypes );
        setRecordTypes(refVal_recordTypes);
    }
    return ok;
}

utility::string_t DNSLookupOptions::getHostname() const
{
    return m_Hostname;
}

void DNSLookupOptions::setHostname(const utility::string_t& value)
{
    m_Hostname = value;
    m_HostnameIsSet = true;
}

bool DNSLookupOptions::hostnameIsSet() const
{
    return m_HostnameIsSet;
}

void DNSLookupOptions::unsetHostname()
{
    m_HostnameIsSet = false;
}
bool DNSLookupOptions::isOmitFinalDNSDot() const
{
    return m_OmitFinalDNSDot;
}

void DNSLookupOptions::setOmitFinalDNSDot(bool value)
{
    m_OmitFinalDNSDot = value;
    m_OmitFinalDNSDotIsSet = true;
}

bool DNSLookupOptions::omitFinalDNSDotIsSet() const
{
    return m_OmitFinalDNSDotIsSet;
}

void DNSLookupOptions::unsetOmitFinalDNSDot()
{
    m_OmitFinalDNSDotIsSet = false;
}
std::vector<utility::string_t>& DNSLookupOptions::getRecordTypes()
{
    return m_RecordTypes;
}

void DNSLookupOptions::setRecordTypes(const std::vector<utility::string_t>& value)
{
    m_RecordTypes = value;
    m_RecordTypesIsSet = true;
}

bool DNSLookupOptions::recordTypesIsSet() const
{
    return m_RecordTypesIsSet;
}

void DNSLookupOptions::unsetRecordTypes()
{
    m_RecordTypesIsSet = false;
}
}
}
}
}

