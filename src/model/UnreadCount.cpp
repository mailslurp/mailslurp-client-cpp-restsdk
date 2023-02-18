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



#include "CppRestOpenAPIClient/model/UnreadCount.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



UnreadCount::UnreadCount()
{
    m_Count = 0L;
    m_CountIsSet = false;
}

UnreadCount::~UnreadCount()
{
}

void UnreadCount::validate()
{
    // TODO: implement validation
}

web::json::value UnreadCount::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_CountIsSet)
    {
        val[utility::conversions::to_string_t(U("count"))] = ModelBase::toJson(m_Count);
    }

    return val;
}

bool UnreadCount::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("count"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("count")));
        if(!fieldValue.is_null())
        {
            int64_t refVal_setCount;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCount);
            setCount(refVal_setCount);
        }
    }
    return ok;
}

void UnreadCount::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_CountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("count")), m_Count));
    }
}

bool UnreadCount::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("count"))))
    {
        int64_t refVal_setCount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("count"))), refVal_setCount );
        setCount(refVal_setCount);
    }
    return ok;
}

int64_t UnreadCount::getCount() const
{
    return m_Count;
}

void UnreadCount::setCount(int64_t value)
{
    m_Count = value;
    m_CountIsSet = true;
}

bool UnreadCount::countIsSet() const
{
    return m_CountIsSet;
}

void UnreadCount::unsetCount()
{
    m_CountIsSet = false;
}
}
}
}
}

