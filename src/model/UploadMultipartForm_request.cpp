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



#include "CppRestOpenAPIClient/model/UploadMultipartForm_request.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



UploadMultipartForm_request::UploadMultipartForm_request()
{
    m_fileIsSet = false;
}

UploadMultipartForm_request::~UploadMultipartForm_request()
{
}

void UploadMultipartForm_request::validate()
{
    // TODO: implement validation
}

web::json::value UploadMultipartForm_request::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_fileIsSet)
    {
        val[utility::conversions::to_string_t(U("file"))] = ModelBase::toJson(m_file);
    }

    return val;
}

bool UploadMultipartForm_request::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("file"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("file")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<HttpContent> refVal_setFile;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFile);
            setFile(refVal_setFile);
        }
    }
    return ok;
}

void UploadMultipartForm_request::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_fileIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("file")), m_file));
    }
}

bool UploadMultipartForm_request::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("file"))))
    {
        std::shared_ptr<HttpContent> refVal_setFile;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("file"))), refVal_setFile );
        setFile(refVal_setFile);
    }
    return ok;
}

std::shared_ptr<HttpContent> UploadMultipartForm_request::getFile() const
{
    return m_file;
}

void UploadMultipartForm_request::setFile(const std::shared_ptr<HttpContent>& value)
{
    m_file = value;
    m_fileIsSet = true;
}

bool UploadMultipartForm_request::fileIsSet() const
{
    return m_fileIsSet;
}

void UploadMultipartForm_request::unsetfile()
{
    m_fileIsSet = false;
}
}
}
}
}


