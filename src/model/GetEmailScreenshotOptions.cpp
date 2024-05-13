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



#include "CppRestOpenAPIClient/model/GetEmailScreenshotOptions.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



GetEmailScreenshotOptions::GetEmailScreenshotOptions()
{
    m_Height = 0;
    m_HeightIsSet = false;
    m_Width = 0;
    m_WidthIsSet = false;
}

GetEmailScreenshotOptions::~GetEmailScreenshotOptions()
{
}

void GetEmailScreenshotOptions::validate()
{
    // TODO: implement validation
}

web::json::value GetEmailScreenshotOptions::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_HeightIsSet)
    {
        val[utility::conversions::to_string_t(U("height"))] = ModelBase::toJson(m_Height);
    }
    if(m_WidthIsSet)
    {
        val[utility::conversions::to_string_t(U("width"))] = ModelBase::toJson(m_Width);
    }

    return val;
}

bool GetEmailScreenshotOptions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("height"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("height")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setHeight;
            ok &= ModelBase::fromJson(fieldValue, refVal_setHeight);
            setHeight(refVal_setHeight);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("width"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("width")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setWidth;
            ok &= ModelBase::fromJson(fieldValue, refVal_setWidth);
            setWidth(refVal_setWidth);
        }
    }
    return ok;
}

void GetEmailScreenshotOptions::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_HeightIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("height")), m_Height));
    }
    if(m_WidthIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("width")), m_Width));
    }
}

bool GetEmailScreenshotOptions::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("height"))))
    {
        int32_t refVal_setHeight;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("height"))), refVal_setHeight );
        setHeight(refVal_setHeight);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("width"))))
    {
        int32_t refVal_setWidth;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("width"))), refVal_setWidth );
        setWidth(refVal_setWidth);
    }
    return ok;
}

int32_t GetEmailScreenshotOptions::getHeight() const
{
    return m_Height;
}

void GetEmailScreenshotOptions::setHeight(int32_t value)
{
    m_Height = value;
    m_HeightIsSet = true;
}

bool GetEmailScreenshotOptions::heightIsSet() const
{
    return m_HeightIsSet;
}

void GetEmailScreenshotOptions::unsetHeight()
{
    m_HeightIsSet = false;
}
int32_t GetEmailScreenshotOptions::getWidth() const
{
    return m_Width;
}

void GetEmailScreenshotOptions::setWidth(int32_t value)
{
    m_Width = value;
    m_WidthIsSet = true;
}

bool GetEmailScreenshotOptions::widthIsSet() const
{
    return m_WidthIsSet;
}

void GetEmailScreenshotOptions::unsetWidth()
{
    m_WidthIsSet = false;
}
}
}
}
}


