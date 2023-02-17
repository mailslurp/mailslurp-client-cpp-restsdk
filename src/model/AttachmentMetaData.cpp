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



#include "CppRestOpenAPIClient/model/AttachmentMetaData.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



AttachmentMetaData::AttachmentMetaData()
{
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_ContentType = utility::conversions::to_string_t("");
    m_ContentTypeIsSet = false;
    m_ContentLength = 0L;
    m_ContentLengthIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
}

AttachmentMetaData::~AttachmentMetaData()
{
}

void AttachmentMetaData::validate()
{
    // TODO: implement validation
}

web::json::value AttachmentMetaData::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_ContentTypeIsSet)
    {
        val[utility::conversions::to_string_t(U("contentType"))] = ModelBase::toJson(m_ContentType);
    }
    if(m_ContentLengthIsSet)
    {
        val[utility::conversions::to_string_t(U("contentLength"))] = ModelBase::toJson(m_ContentLength);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }

    return val;
}

bool AttachmentMetaData::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("contentType"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("contentType")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setContentType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setContentType);
            setContentType(refVal_setContentType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("contentLength"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("contentLength")));
        if(!fieldValue.is_null())
        {
            int64_t refVal_setContentLength;
            ok &= ModelBase::fromJson(fieldValue, refVal_setContentLength);
            setContentLength(refVal_setContentLength);
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
    return ok;
}

void AttachmentMetaData::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_ContentTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("contentType")), m_ContentType));
    }
    if(m_ContentLengthIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("contentLength")), m_ContentLength));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_Id));
    }
}

bool AttachmentMetaData::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("contentType"))))
    {
        utility::string_t refVal_setContentType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("contentType"))), refVal_setContentType );
        setContentType(refVal_setContentType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("contentLength"))))
    {
        int64_t refVal_setContentLength;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("contentLength"))), refVal_setContentLength );
        setContentLength(refVal_setContentLength);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_setId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_setId );
        setId(refVal_setId);
    }
    return ok;
}

utility::string_t AttachmentMetaData::getName() const
{
    return m_Name;
}

void AttachmentMetaData::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool AttachmentMetaData::nameIsSet() const
{
    return m_NameIsSet;
}

void AttachmentMetaData::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t AttachmentMetaData::getContentType() const
{
    return m_ContentType;
}

void AttachmentMetaData::setContentType(const utility::string_t& value)
{
    m_ContentType = value;
    m_ContentTypeIsSet = true;
}

bool AttachmentMetaData::contentTypeIsSet() const
{
    return m_ContentTypeIsSet;
}

void AttachmentMetaData::unsetContentType()
{
    m_ContentTypeIsSet = false;
}
int64_t AttachmentMetaData::getContentLength() const
{
    return m_ContentLength;
}

void AttachmentMetaData::setContentLength(int64_t value)
{
    m_ContentLength = value;
    m_ContentLengthIsSet = true;
}

bool AttachmentMetaData::contentLengthIsSet() const
{
    return m_ContentLengthIsSet;
}

void AttachmentMetaData::unsetContentLength()
{
    m_ContentLengthIsSet = false;
}
utility::string_t AttachmentMetaData::getId() const
{
    return m_Id;
}

void AttachmentMetaData::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool AttachmentMetaData::idIsSet() const
{
    return m_IdIsSet;
}

void AttachmentMetaData::unsetId()
{
    m_IdIsSet = false;
}
}
}
}
}


