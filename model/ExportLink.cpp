/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://www.mailslurp.com/docs/) - [Examples](https://github.com/mailslurp/examples) repository 
 *
 * The version of the OpenAPI document: 6.5.2
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "ExportLink.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




ExportLink::ExportLink()
{
    m_DownloadLink = utility::conversions::to_string_t("");
    m_DownloadLinkIsSet = false;
}

ExportLink::~ExportLink()
{
}

void ExportLink::validate()
{
    // TODO: implement validation
}

web::json::value ExportLink::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_DownloadLinkIsSet)
    {
        val[utility::conversions::to_string_t("downloadLink")] = ModelBase::toJson(m_DownloadLink);
    }

    return val;
}

bool ExportLink::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("downloadLink")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("downloadLink"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_downloadLink;
            ok &= ModelBase::fromJson(fieldValue, refVal_downloadLink);
            setDownloadLink(refVal_downloadLink);
        }
    }
    return ok;
}

void ExportLink::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_DownloadLinkIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("downloadLink"), m_DownloadLink));
    }
}

bool ExportLink::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("downloadLink")))
    {
        utility::string_t refVal_downloadLink;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("downloadLink")), refVal_downloadLink );
        setDownloadLink(refVal_downloadLink);
    }
    return ok;
}

utility::string_t ExportLink::getDownloadLink() const
{
    return m_DownloadLink;
}

void ExportLink::setDownloadLink(const utility::string_t& value)
{
    m_DownloadLink = value;
    m_DownloadLinkIsSet = true;
}

bool ExportLink::downloadLinkIsSet() const
{
    return m_DownloadLinkIsSet;
}

void ExportLink::unsetDownloadLink()
{
    m_DownloadLinkIsSet = false;
}
}
}
}
}


