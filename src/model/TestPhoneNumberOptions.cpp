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



#include "CppRestOpenAPIClient/model/TestPhoneNumberOptions.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



TestPhoneNumberOptions::TestPhoneNumberOptions()
{
    m_Message = utility::conversions::to_string_t("");
    m_MessageIsSet = false;
}

TestPhoneNumberOptions::~TestPhoneNumberOptions()
{
}

void TestPhoneNumberOptions::validate()
{
    // TODO: implement validation
}

web::json::value TestPhoneNumberOptions::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_MessageIsSet)
    {
        val[utility::conversions::to_string_t(U("message"))] = ModelBase::toJson(m_Message);
    }

    return val;
}

bool TestPhoneNumberOptions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("message"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("message")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setMessage;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMessage);
            setMessage(refVal_setMessage);
        }
    }
    return ok;
}

void TestPhoneNumberOptions::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_MessageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("message")), m_Message));
    }
}

bool TestPhoneNumberOptions::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("message"))))
    {
        utility::string_t refVal_setMessage;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("message"))), refVal_setMessage );
        setMessage(refVal_setMessage);
    }
    return ok;
}

utility::string_t TestPhoneNumberOptions::getMessage() const
{
    return m_Message;
}

void TestPhoneNumberOptions::setMessage(const utility::string_t& value)
{
    m_Message = value;
    m_MessageIsSet = true;
}

bool TestPhoneNumberOptions::messageIsSet() const
{
    return m_MessageIsSet;
}

void TestPhoneNumberOptions::unsetMessage()
{
    m_MessageIsSet = false;
}
}
}
}
}


