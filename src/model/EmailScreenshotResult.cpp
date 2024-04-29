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



#include "CppRestOpenAPIClient/model/EmailScreenshotResult.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



EmailScreenshotResult::EmailScreenshotResult()
{
    m_Base64EncodedImage = utility::conversions::to_string_t("");
    m_Base64EncodedImageIsSet = false;
}

EmailScreenshotResult::~EmailScreenshotResult()
{
}

void EmailScreenshotResult::validate()
{
    // TODO: implement validation
}

web::json::value EmailScreenshotResult::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Base64EncodedImageIsSet)
    {
        val[utility::conversions::to_string_t(U("base64EncodedImage"))] = ModelBase::toJson(m_Base64EncodedImage);
    }

    return val;
}

bool EmailScreenshotResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("base64EncodedImage"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("base64EncodedImage")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setBase64EncodedImage;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBase64EncodedImage);
            setBase64EncodedImage(refVal_setBase64EncodedImage);
        }
    }
    return ok;
}

void EmailScreenshotResult::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Base64EncodedImageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("base64EncodedImage")), m_Base64EncodedImage));
    }
}

bool EmailScreenshotResult::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("base64EncodedImage"))))
    {
        utility::string_t refVal_setBase64EncodedImage;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("base64EncodedImage"))), refVal_setBase64EncodedImage );
        setBase64EncodedImage(refVal_setBase64EncodedImage);
    }
    return ok;
}

utility::string_t EmailScreenshotResult::getBase64EncodedImage() const
{
    return m_Base64EncodedImage;
}

void EmailScreenshotResult::setBase64EncodedImage(const utility::string_t& value)
{
    m_Base64EncodedImage = value;
    m_Base64EncodedImageIsSet = true;
}

bool EmailScreenshotResult::base64EncodedImageIsSet() const
{
    return m_Base64EncodedImageIsSet;
}

void EmailScreenshotResult::unsetBase64EncodedImage()
{
    m_Base64EncodedImageIsSet = false;
}
}
}
}
}


