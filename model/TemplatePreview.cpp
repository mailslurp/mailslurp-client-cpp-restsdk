/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://docs.mailslurp.com/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "TemplatePreview.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




TemplatePreview::TemplatePreview()
{
    m_Preview = utility::conversions::to_string_t("");
    m_PreviewIsSet = false;
}

TemplatePreview::~TemplatePreview()
{
}

void TemplatePreview::validate()
{
    // TODO: implement validation
}

web::json::value TemplatePreview::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_PreviewIsSet)
    {
        val[utility::conversions::to_string_t("preview")] = ModelBase::toJson(m_Preview);
    }

    return val;
}

bool TemplatePreview::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("preview")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("preview"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_preview;
            ok &= ModelBase::fromJson(fieldValue, refVal_preview);
            setPreview(refVal_preview);
        }
    }
    return ok;
}

void TemplatePreview::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_PreviewIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("preview"), m_Preview));
    }
}

bool TemplatePreview::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("preview")))
    {
        utility::string_t refVal_preview;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("preview")), refVal_preview );
        setPreview(refVal_preview);
    }
    return ok;
}

utility::string_t TemplatePreview::getPreview() const
{
    return m_Preview;
}

void TemplatePreview::setPreview(const utility::string_t& value)
{
    m_Preview = value;
    m_PreviewIsSet = true;
}

bool TemplatePreview::previewIsSet() const
{
    return m_PreviewIsSet;
}

void TemplatePreview::unsetPreview()
{
    m_PreviewIsSet = false;
}
}
}
}
}

