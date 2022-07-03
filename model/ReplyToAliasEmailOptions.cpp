/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://docs.mailslurp.com/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "ReplyToAliasEmailOptions.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




ReplyToAliasEmailOptions::ReplyToAliasEmailOptions()
{
    m_Body = utility::conversions::to_string_t("");
    m_BodyIsSet = false;
    m_IsHTML = false;
    m_IsHTMLIsSet = false;
    m_Charset = utility::conversions::to_string_t("");
    m_CharsetIsSet = false;
    m_AttachmentsIsSet = false;
    m_TemplateVariablesIsSet = false;
    m_r_template = utility::conversions::to_string_t("");
    m_r_templateIsSet = false;
    m_SendStrategy = utility::conversions::to_string_t("");
    m_SendStrategyIsSet = false;
    m_UseInboxName = false;
    m_UseInboxNameIsSet = false;
    m_Html = false;
    m_HtmlIsSet = false;
}

ReplyToAliasEmailOptions::~ReplyToAliasEmailOptions()
{
}

void ReplyToAliasEmailOptions::validate()
{
    // TODO: implement validation
}

web::json::value ReplyToAliasEmailOptions::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_BodyIsSet)
    {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(m_Body);
    }
    if(m_IsHTMLIsSet)
    {
        val[utility::conversions::to_string_t("isHTML")] = ModelBase::toJson(m_IsHTML);
    }
    if(m_CharsetIsSet)
    {
        val[utility::conversions::to_string_t("charset")] = ModelBase::toJson(m_Charset);
    }
    if(m_AttachmentsIsSet)
    {
        val[utility::conversions::to_string_t("attachments")] = ModelBase::toJson(m_Attachments);
    }
    if(m_TemplateVariablesIsSet)
    {
        val[utility::conversions::to_string_t("templateVariables")] = ModelBase::toJson(m_TemplateVariables);
    }
    if(m_r_templateIsSet)
    {
        val[utility::conversions::to_string_t("template")] = ModelBase::toJson(m_r_template);
    }
    if(m_SendStrategyIsSet)
    {
        val[utility::conversions::to_string_t("sendStrategy")] = ModelBase::toJson(m_SendStrategy);
    }
    if(m_UseInboxNameIsSet)
    {
        val[utility::conversions::to_string_t("useInboxName")] = ModelBase::toJson(m_UseInboxName);
    }
    if(m_HtmlIsSet)
    {
        val[utility::conversions::to_string_t("html")] = ModelBase::toJson(m_Html);
    }

    return val;
}

bool ReplyToAliasEmailOptions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_body;
            ok &= ModelBase::fromJson(fieldValue, refVal_body);
            setBody(refVal_body);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isHTML")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isHTML"));
        if(!fieldValue.is_null())
        {
            bool refVal_isHTML;
            ok &= ModelBase::fromJson(fieldValue, refVal_isHTML);
            setIsHTML(refVal_isHTML);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charset")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charset"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_charset;
            ok &= ModelBase::fromJson(fieldValue, refVal_charset);
            setCharset(refVal_charset);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attachments")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attachments"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_attachments;
            ok &= ModelBase::fromJson(fieldValue, refVal_attachments);
            setAttachments(refVal_attachments);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("templateVariables")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("templateVariables"));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, std::shared_ptr<Object>> refVal_templateVariables;
            ok &= ModelBase::fromJson(fieldValue, refVal_templateVariables);
            setTemplateVariables(refVal_templateVariables);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_template;
            ok &= ModelBase::fromJson(fieldValue, refVal_template);
            setRTemplate(refVal_template);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sendStrategy")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sendStrategy"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sendStrategy;
            ok &= ModelBase::fromJson(fieldValue, refVal_sendStrategy);
            setSendStrategy(refVal_sendStrategy);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("useInboxName")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("useInboxName"));
        if(!fieldValue.is_null())
        {
            bool refVal_useInboxName;
            ok &= ModelBase::fromJson(fieldValue, refVal_useInboxName);
            setUseInboxName(refVal_useInboxName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("html")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("html"));
        if(!fieldValue.is_null())
        {
            bool refVal_html;
            ok &= ModelBase::fromJson(fieldValue, refVal_html);
            setHtml(refVal_html);
        }
    }
    return ok;
}

void ReplyToAliasEmailOptions::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_BodyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("body"), m_Body));
    }
    if(m_IsHTMLIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("isHTML"), m_IsHTML));
    }
    if(m_CharsetIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("charset"), m_Charset));
    }
    if(m_AttachmentsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("attachments"), m_Attachments));
    }
    if(m_TemplateVariablesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("templateVariables"), m_TemplateVariables));
    }
    if(m_r_templateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("template"), m_r_template));
    }
    if(m_SendStrategyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sendStrategy"), m_SendStrategy));
    }
    if(m_UseInboxNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("useInboxName"), m_UseInboxName));
    }
    if(m_HtmlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("html"), m_Html));
    }
}

bool ReplyToAliasEmailOptions::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("body")))
    {
        utility::string_t refVal_body;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("body")), refVal_body );
        setBody(refVal_body);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("isHTML")))
    {
        bool refVal_isHTML;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("isHTML")), refVal_isHTML );
        setIsHTML(refVal_isHTML);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("charset")))
    {
        utility::string_t refVal_charset;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("charset")), refVal_charset );
        setCharset(refVal_charset);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("attachments")))
    {
        std::vector<utility::string_t> refVal_attachments;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("attachments")), refVal_attachments );
        setAttachments(refVal_attachments);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("templateVariables")))
    {
        std::map<utility::string_t, std::shared_ptr<Object>> refVal_templateVariables;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("templateVariables")), refVal_templateVariables );
        setTemplateVariables(refVal_templateVariables);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("template")))
    {
        utility::string_t refVal_template;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("template")), refVal_template );
        setRTemplate(refVal_template);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sendStrategy")))
    {
        utility::string_t refVal_sendStrategy;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sendStrategy")), refVal_sendStrategy );
        setSendStrategy(refVal_sendStrategy);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("useInboxName")))
    {
        bool refVal_useInboxName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("useInboxName")), refVal_useInboxName );
        setUseInboxName(refVal_useInboxName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("html")))
    {
        bool refVal_html;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("html")), refVal_html );
        setHtml(refVal_html);
    }
    return ok;
}

utility::string_t ReplyToAliasEmailOptions::getBody() const
{
    return m_Body;
}

void ReplyToAliasEmailOptions::setBody(const utility::string_t& value)
{
    m_Body = value;
    m_BodyIsSet = true;
}

bool ReplyToAliasEmailOptions::bodyIsSet() const
{
    return m_BodyIsSet;
}

void ReplyToAliasEmailOptions::unsetBody()
{
    m_BodyIsSet = false;
}
bool ReplyToAliasEmailOptions::isIsHTML() const
{
    return m_IsHTML;
}

void ReplyToAliasEmailOptions::setIsHTML(bool value)
{
    m_IsHTML = value;
    m_IsHTMLIsSet = true;
}

bool ReplyToAliasEmailOptions::isHTMLIsSet() const
{
    return m_IsHTMLIsSet;
}

void ReplyToAliasEmailOptions::unsetIsHTML()
{
    m_IsHTMLIsSet = false;
}
utility::string_t ReplyToAliasEmailOptions::getCharset() const
{
    return m_Charset;
}

void ReplyToAliasEmailOptions::setCharset(const utility::string_t& value)
{
    m_Charset = value;
    m_CharsetIsSet = true;
}

bool ReplyToAliasEmailOptions::charsetIsSet() const
{
    return m_CharsetIsSet;
}

void ReplyToAliasEmailOptions::unsetCharset()
{
    m_CharsetIsSet = false;
}
std::vector<utility::string_t>& ReplyToAliasEmailOptions::getAttachments()
{
    return m_Attachments;
}

void ReplyToAliasEmailOptions::setAttachments(const std::vector<utility::string_t>& value)
{
    m_Attachments = value;
    m_AttachmentsIsSet = true;
}

bool ReplyToAliasEmailOptions::attachmentsIsSet() const
{
    return m_AttachmentsIsSet;
}

void ReplyToAliasEmailOptions::unsetAttachments()
{
    m_AttachmentsIsSet = false;
}
std::map<utility::string_t, std::shared_ptr<Object>>& ReplyToAliasEmailOptions::getTemplateVariables()
{
    return m_TemplateVariables;
}

void ReplyToAliasEmailOptions::setTemplateVariables(const std::map<utility::string_t, std::shared_ptr<Object>>& value)
{
    m_TemplateVariables = value;
    m_TemplateVariablesIsSet = true;
}

bool ReplyToAliasEmailOptions::templateVariablesIsSet() const
{
    return m_TemplateVariablesIsSet;
}

void ReplyToAliasEmailOptions::unsetTemplateVariables()
{
    m_TemplateVariablesIsSet = false;
}
utility::string_t ReplyToAliasEmailOptions::getRTemplate() const
{
    return m_r_template;
}

void ReplyToAliasEmailOptions::setRTemplate(const utility::string_t& value)
{
    m_r_template = value;
    m_r_templateIsSet = true;
}

bool ReplyToAliasEmailOptions::rTemplateIsSet() const
{
    return m_r_templateIsSet;
}

void ReplyToAliasEmailOptions::unsetr_template()
{
    m_r_templateIsSet = false;
}
utility::string_t ReplyToAliasEmailOptions::getSendStrategy() const
{
    return m_SendStrategy;
}

void ReplyToAliasEmailOptions::setSendStrategy(const utility::string_t& value)
{
    m_SendStrategy = value;
    m_SendStrategyIsSet = true;
}

bool ReplyToAliasEmailOptions::sendStrategyIsSet() const
{
    return m_SendStrategyIsSet;
}

void ReplyToAliasEmailOptions::unsetSendStrategy()
{
    m_SendStrategyIsSet = false;
}
bool ReplyToAliasEmailOptions::isUseInboxName() const
{
    return m_UseInboxName;
}

void ReplyToAliasEmailOptions::setUseInboxName(bool value)
{
    m_UseInboxName = value;
    m_UseInboxNameIsSet = true;
}

bool ReplyToAliasEmailOptions::useInboxNameIsSet() const
{
    return m_UseInboxNameIsSet;
}

void ReplyToAliasEmailOptions::unsetUseInboxName()
{
    m_UseInboxNameIsSet = false;
}
bool ReplyToAliasEmailOptions::isHtml() const
{
    return m_Html;
}

void ReplyToAliasEmailOptions::setHtml(bool value)
{
    m_Html = value;
    m_HtmlIsSet = true;
}

bool ReplyToAliasEmailOptions::htmlIsSet() const
{
    return m_HtmlIsSet;
}

void ReplyToAliasEmailOptions::unsetHtml()
{
    m_HtmlIsSet = false;
}
}
}
}
}


