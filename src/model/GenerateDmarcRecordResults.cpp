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



#include "CppRestOpenAPIClient/model/GenerateDmarcRecordResults.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



GenerateDmarcRecordResults::GenerateDmarcRecordResults()
{
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Type = utility::conversions::to_string_t("");
    m_TypeIsSet = false;
    m_Ttl = 0;
    m_TtlIsSet = false;
    m_Value = utility::conversions::to_string_t("");
    m_ValueIsSet = false;
}

GenerateDmarcRecordResults::~GenerateDmarcRecordResults()
{
}

void GenerateDmarcRecordResults::validate()
{
    // TODO: implement validation
}

web::json::value GenerateDmarcRecordResults::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_TypeIsSet)
    {
        val[utility::conversions::to_string_t(U("type"))] = ModelBase::toJson(m_Type);
    }
    if(m_TtlIsSet)
    {
        val[utility::conversions::to_string_t(U("ttl"))] = ModelBase::toJson(m_Ttl);
    }
    if(m_ValueIsSet)
    {
        val[utility::conversions::to_string_t(U("value"))] = ModelBase::toJson(m_Value);
    }

    return val;
}

bool GenerateDmarcRecordResults::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setName);
            setName(refVal_setName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("type")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setType);
            setType(refVal_setType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("ttl"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ttl")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setTtl;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTtl);
            setTtl(refVal_setTtl);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("value"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("value")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setValue;
            ok &= ModelBase::fromJson(fieldValue, refVal_setValue);
            setValue(refVal_setValue);
        }
    }
    return ok;
}

void GenerateDmarcRecordResults::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("type")), m_Type));
    }
    if(m_TtlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ttl")), m_Ttl));
    }
    if(m_ValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("value")), m_Value));
    }
}

bool GenerateDmarcRecordResults::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("type"))))
    {
        utility::string_t refVal_setType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("type"))), refVal_setType );
        setType(refVal_setType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("ttl"))))
    {
        int32_t refVal_setTtl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ttl"))), refVal_setTtl );
        setTtl(refVal_setTtl);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("value"))))
    {
        utility::string_t refVal_setValue;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("value"))), refVal_setValue );
        setValue(refVal_setValue);
    }
    return ok;
}

utility::string_t GenerateDmarcRecordResults::getName() const
{
    return m_Name;
}

void GenerateDmarcRecordResults::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool GenerateDmarcRecordResults::nameIsSet() const
{
    return m_NameIsSet;
}

void GenerateDmarcRecordResults::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t GenerateDmarcRecordResults::getType() const
{
    return m_Type;
}

void GenerateDmarcRecordResults::setType(const utility::string_t& value)
{
    m_Type = value;
    m_TypeIsSet = true;
}

bool GenerateDmarcRecordResults::typeIsSet() const
{
    return m_TypeIsSet;
}

void GenerateDmarcRecordResults::unsetType()
{
    m_TypeIsSet = false;
}
int32_t GenerateDmarcRecordResults::getTtl() const
{
    return m_Ttl;
}

void GenerateDmarcRecordResults::setTtl(int32_t value)
{
    m_Ttl = value;
    m_TtlIsSet = true;
}

bool GenerateDmarcRecordResults::ttlIsSet() const
{
    return m_TtlIsSet;
}

void GenerateDmarcRecordResults::unsetTtl()
{
    m_TtlIsSet = false;
}
utility::string_t GenerateDmarcRecordResults::getValue() const
{
    return m_Value;
}

void GenerateDmarcRecordResults::setValue(const utility::string_t& value)
{
    m_Value = value;
    m_ValueIsSet = true;
}

bool GenerateDmarcRecordResults::valueIsSet() const
{
    return m_ValueIsSet;
}

void GenerateDmarcRecordResults::unsetValue()
{
    m_ValueIsSet = false;
}
}
}
}
}


