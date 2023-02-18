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



#include "CppRestOpenAPIClient/model/InboxExistsDto.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



InboxExistsDto::InboxExistsDto()
{
    m_Exists = false;
    m_ExistsIsSet = false;
}

InboxExistsDto::~InboxExistsDto()
{
}

void InboxExistsDto::validate()
{
    // TODO: implement validation
}

web::json::value InboxExistsDto::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ExistsIsSet)
    {
        val[utility::conversions::to_string_t(U("exists"))] = ModelBase::toJson(m_Exists);
    }

    return val;
}

bool InboxExistsDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("exists"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("exists")));
        if(!fieldValue.is_null())
        {
            bool refVal_setExists;
            ok &= ModelBase::fromJson(fieldValue, refVal_setExists);
            setExists(refVal_setExists);
        }
    }
    return ok;
}

void InboxExistsDto::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ExistsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("exists")), m_Exists));
    }
}

bool InboxExistsDto::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("exists"))))
    {
        bool refVal_setExists;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("exists"))), refVal_setExists );
        setExists(refVal_setExists);
    }
    return ok;
}

bool InboxExistsDto::isExists() const
{
    return m_Exists;
}

void InboxExistsDto::setExists(bool value)
{
    m_Exists = value;
    m_ExistsIsSet = true;
}

bool InboxExistsDto::existsIsSet() const
{
    return m_ExistsIsSet;
}

void InboxExistsDto::unsetExists()
{
    m_ExistsIsSet = false;
}
}
}
}
}

