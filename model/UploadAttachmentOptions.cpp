/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://www.mailslurp.com/docs/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "UploadAttachmentOptions.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




UploadAttachmentOptions::UploadAttachmentOptions()
{
    m_ContentType = utility::conversions::to_string_t("");
    m_ContentTypeIsSet = false;
    m_Filename = utility::conversions::to_string_t("");
    m_FilenameIsSet = false;
    m_Base64Contents = utility::conversions::to_string_t("");
    m_Base64ContentsIsSet = false;
}

UploadAttachmentOptions::~UploadAttachmentOptions()
{
}

void UploadAttachmentOptions::validate()
{
    // TODO: implement validation
}

web::json::value UploadAttachmentOptions::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ContentTypeIsSet)
    {
        val[utility::conversions::to_string_t("contentType")] = ModelBase::toJson(m_ContentType);
    }
    if(m_FilenameIsSet)
    {
        val[utility::conversions::to_string_t("filename")] = ModelBase::toJson(m_Filename);
    }
    if(m_Base64ContentsIsSet)
    {
        val[utility::conversions::to_string_t("base64Contents")] = ModelBase::toJson(m_Base64Contents);
    }

    return val;
}

bool UploadAttachmentOptions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("contentType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("contentType"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_contentType;
            ok &= ModelBase::fromJson(fieldValue, refVal_contentType);
            setContentType(refVal_contentType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("filename")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filename"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_filename;
            ok &= ModelBase::fromJson(fieldValue, refVal_filename);
            setFilename(refVal_filename);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("base64Contents")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("base64Contents"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_base64Contents;
            ok &= ModelBase::fromJson(fieldValue, refVal_base64Contents);
            setBase64Contents(refVal_base64Contents);
        }
    }
    return ok;
}

void UploadAttachmentOptions::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ContentTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("contentType"), m_ContentType));
    }
    if(m_FilenameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("filename"), m_Filename));
    }
    if(m_Base64ContentsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("base64Contents"), m_Base64Contents));
    }
}

bool UploadAttachmentOptions::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("contentType")))
    {
        utility::string_t refVal_contentType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("contentType")), refVal_contentType );
        setContentType(refVal_contentType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("filename")))
    {
        utility::string_t refVal_filename;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("filename")), refVal_filename );
        setFilename(refVal_filename);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("base64Contents")))
    {
        utility::string_t refVal_base64Contents;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("base64Contents")), refVal_base64Contents );
        setBase64Contents(refVal_base64Contents);
    }
    return ok;
}

utility::string_t UploadAttachmentOptions::getContentType() const
{
    return m_ContentType;
}

void UploadAttachmentOptions::setContentType(const utility::string_t& value)
{
    m_ContentType = value;
    m_ContentTypeIsSet = true;
}

bool UploadAttachmentOptions::contentTypeIsSet() const
{
    return m_ContentTypeIsSet;
}

void UploadAttachmentOptions::unsetContentType()
{
    m_ContentTypeIsSet = false;
}
utility::string_t UploadAttachmentOptions::getFilename() const
{
    return m_Filename;
}

void UploadAttachmentOptions::setFilename(const utility::string_t& value)
{
    m_Filename = value;
    m_FilenameIsSet = true;
}

bool UploadAttachmentOptions::filenameIsSet() const
{
    return m_FilenameIsSet;
}

void UploadAttachmentOptions::unsetFilename()
{
    m_FilenameIsSet = false;
}
utility::string_t UploadAttachmentOptions::getBase64Contents() const
{
    return m_Base64Contents;
}

void UploadAttachmentOptions::setBase64Contents(const utility::string_t& value)
{
    m_Base64Contents = value;
    m_Base64ContentsIsSet = true;
}

bool UploadAttachmentOptions::base64ContentsIsSet() const
{
    return m_Base64ContentsIsSet;
}

void UploadAttachmentOptions::unsetBase64Contents()
{
    m_Base64ContentsIsSet = false;
}
}
}
}
}


