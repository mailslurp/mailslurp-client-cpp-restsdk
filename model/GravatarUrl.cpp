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



#include "GravatarUrl.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




GravatarUrl::GravatarUrl()
{
    m_Url = utility::conversions::to_string_t("");
    m_UrlIsSet = false;
    m_Hash = utility::conversions::to_string_t("");
    m_HashIsSet = false;
}

GravatarUrl::~GravatarUrl()
{
}

void GravatarUrl::validate()
{
    // TODO: implement validation
}

web::json::value GravatarUrl::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_UrlIsSet)
    {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(m_Url);
    }
    if(m_HashIsSet)
    {
        val[utility::conversions::to_string_t("hash")] = ModelBase::toJson(m_Hash);
    }

    return val;
}

bool GravatarUrl::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("url")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_url;
            ok &= ModelBase::fromJson(fieldValue, refVal_url);
            setUrl(refVal_url);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hash")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hash"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_hash;
            ok &= ModelBase::fromJson(fieldValue, refVal_hash);
            setHash(refVal_hash);
        }
    }
    return ok;
}

void GravatarUrl::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_UrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("url"), m_Url));
    }
    if(m_HashIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("hash"), m_Hash));
    }
}

bool GravatarUrl::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("url")))
    {
        utility::string_t refVal_url;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("url")), refVal_url );
        setUrl(refVal_url);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("hash")))
    {
        utility::string_t refVal_hash;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("hash")), refVal_hash );
        setHash(refVal_hash);
    }
    return ok;
}

utility::string_t GravatarUrl::getUrl() const
{
    return m_Url;
}

void GravatarUrl::setUrl(const utility::string_t& value)
{
    m_Url = value;
    m_UrlIsSet = true;
}

bool GravatarUrl::urlIsSet() const
{
    return m_UrlIsSet;
}

void GravatarUrl::unsetUrl()
{
    m_UrlIsSet = false;
}
utility::string_t GravatarUrl::getHash() const
{
    return m_Hash;
}

void GravatarUrl::setHash(const utility::string_t& value)
{
    m_Hash = value;
    m_HashIsSet = true;
}

bool GravatarUrl::hashIsSet() const
{
    return m_HashIsSet;
}

void GravatarUrl::unsetHash()
{
    m_HashIsSet = false;
}
}
}
}
}


