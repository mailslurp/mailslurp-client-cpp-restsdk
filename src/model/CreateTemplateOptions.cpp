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



#include "CppRestOpenAPIClient/model/CreateTemplateOptions.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



CreateTemplateOptions::CreateTemplateOptions()
{
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Content = utility::conversions::to_string_t("");
    m_ContentIsSet = false;
}

CreateTemplateOptions::~CreateTemplateOptions()
{
}

void CreateTemplateOptions::validate()
{
    // TODO: implement validation
}

web::json::value CreateTemplateOptions::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_ContentIsSet)
    {
        val[utility::conversions::to_string_t(U("content"))] = ModelBase::toJson(m_Content);
    }

    return val;
}

bool CreateTemplateOptions::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("content"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("content")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setContent;
            ok &= ModelBase::fromJson(fieldValue, refVal_setContent);
            setContent(refVal_setContent);
        }
    }
    return ok;
}

void CreateTemplateOptions::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_ContentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("content")), m_Content));
    }
}

bool CreateTemplateOptions::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("content"))))
    {
        utility::string_t refVal_setContent;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("content"))), refVal_setContent );
        setContent(refVal_setContent);
    }
    return ok;
}

utility::string_t CreateTemplateOptions::getName() const
{
    return m_Name;
}

void CreateTemplateOptions::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool CreateTemplateOptions::nameIsSet() const
{
    return m_NameIsSet;
}

void CreateTemplateOptions::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t CreateTemplateOptions::getContent() const
{
    return m_Content;
}

void CreateTemplateOptions::setContent(const utility::string_t& value)
{
    m_Content = value;
    m_ContentIsSet = true;
}

bool CreateTemplateOptions::contentIsSet() const
{
    return m_ContentIsSet;
}

void CreateTemplateOptions::unsetContent()
{
    m_ContentIsSet = false;
}
}
}
}
}

