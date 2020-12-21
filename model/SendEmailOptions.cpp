/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.   ## Resources - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://www.mailslurp.com/docs/) - [Examples](https://github.com/mailslurp/examples) repository 
 *
 * The version of the OpenAPI document: 6.5.2
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "SendEmailOptions.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




SendEmailOptions::SendEmailOptions()
{
    m_AttachmentsIsSet = false;
    m_BccIsSet = false;
    m_Body = utility::conversions::to_string_t("");
    m_BodyIsSet = false;
    m_CcIsSet = false;
    m_Charset = utility::conversions::to_string_t("");
    m_CharsetIsSet = false;
    m_From = utility::conversions::to_string_t("");
    m_FromIsSet = false;
    m_IsHTML = false;
    m_IsHTMLIsSet = false;
    m_ReplyTo = utility::conversions::to_string_t("");
    m_ReplyToIsSet = false;
    m_SendStrategy = utility::conversions::to_string_t("");
    m_SendStrategyIsSet = false;
    m_Subject = utility::conversions::to_string_t("");
    m_SubjectIsSet = false;
    m_r_template = utility::conversions::to_string_t("");
    m_r_templateIsSet = false;
    m_TemplateVariablesIsSet = false;
    m_ToIsSet = false;
    m_ToContactsIsSet = false;
    m_ToGroup = utility::conversions::to_string_t("");
    m_ToGroupIsSet = false;
}

SendEmailOptions::~SendEmailOptions()
{
}

void SendEmailOptions::validate()
{
    // TODO: implement validation
}

web::json::value SendEmailOptions::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_AttachmentsIsSet)
    {
        val[utility::conversions::to_string_t("attachments")] = ModelBase::toJson(m_Attachments);
    }
    if(m_BccIsSet)
    {
        val[utility::conversions::to_string_t("bcc")] = ModelBase::toJson(m_Bcc);
    }
    if(m_BodyIsSet)
    {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(m_Body);
    }
    if(m_CcIsSet)
    {
        val[utility::conversions::to_string_t("cc")] = ModelBase::toJson(m_Cc);
    }
    if(m_CharsetIsSet)
    {
        val[utility::conversions::to_string_t("charset")] = ModelBase::toJson(m_Charset);
    }
    if(m_FromIsSet)
    {
        val[utility::conversions::to_string_t("from")] = ModelBase::toJson(m_From);
    }
    if(m_IsHTMLIsSet)
    {
        val[utility::conversions::to_string_t("isHTML")] = ModelBase::toJson(m_IsHTML);
    }
    if(m_ReplyToIsSet)
    {
        val[utility::conversions::to_string_t("replyTo")] = ModelBase::toJson(m_ReplyTo);
    }
    if(m_SendStrategyIsSet)
    {
        val[utility::conversions::to_string_t("sendStrategy")] = ModelBase::toJson(m_SendStrategy);
    }
    if(m_SubjectIsSet)
    {
        val[utility::conversions::to_string_t("subject")] = ModelBase::toJson(m_Subject);
    }
    if(m_r_templateIsSet)
    {
        val[utility::conversions::to_string_t("template")] = ModelBase::toJson(m_r_template);
    }
    if(m_TemplateVariablesIsSet)
    {
        val[utility::conversions::to_string_t("templateVariables")] = ModelBase::toJson(m_TemplateVariables);
    }
    if(m_ToIsSet)
    {
        val[utility::conversions::to_string_t("to")] = ModelBase::toJson(m_To);
    }
    if(m_ToContactsIsSet)
    {
        val[utility::conversions::to_string_t("toContacts")] = ModelBase::toJson(m_ToContacts);
    }
    if(m_ToGroupIsSet)
    {
        val[utility::conversions::to_string_t("toGroup")] = ModelBase::toJson(m_ToGroup);
    }

    return val;
}

bool SendEmailOptions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("bcc")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bcc"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_bcc;
            ok &= ModelBase::fromJson(fieldValue, refVal_bcc);
            setBcc(refVal_bcc);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("cc")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cc"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_cc;
            ok &= ModelBase::fromJson(fieldValue, refVal_cc);
            setCc(refVal_cc);
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
    if(val.has_field(utility::conversions::to_string_t("from")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("from"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_from;
            ok &= ModelBase::fromJson(fieldValue, refVal_from);
            setFrom(refVal_from);
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
    if(val.has_field(utility::conversions::to_string_t("replyTo")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replyTo"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_replyTo;
            ok &= ModelBase::fromJson(fieldValue, refVal_replyTo);
            setReplyTo(refVal_replyTo);
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
    if(val.has_field(utility::conversions::to_string_t("subject")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subject"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_subject;
            ok &= ModelBase::fromJson(fieldValue, refVal_subject);
            setSubject(refVal_subject);
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
    if(val.has_field(utility::conversions::to_string_t("templateVariables")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("templateVariables"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> refVal_templateVariables;
            ok &= ModelBase::fromJson(fieldValue, refVal_templateVariables);
            setTemplateVariables(refVal_templateVariables);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("to")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("to"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_to;
            ok &= ModelBase::fromJson(fieldValue, refVal_to);
            setTo(refVal_to);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("toContacts")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("toContacts"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_toContacts;
            ok &= ModelBase::fromJson(fieldValue, refVal_toContacts);
            setToContacts(refVal_toContacts);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("toGroup")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("toGroup"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_toGroup;
            ok &= ModelBase::fromJson(fieldValue, refVal_toGroup);
            setToGroup(refVal_toGroup);
        }
    }
    return ok;
}

void SendEmailOptions::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_AttachmentsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("attachments"), m_Attachments));
    }
    if(m_BccIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("bcc"), m_Bcc));
    }
    if(m_BodyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("body"), m_Body));
    }
    if(m_CcIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("cc"), m_Cc));
    }
    if(m_CharsetIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("charset"), m_Charset));
    }
    if(m_FromIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("from"), m_From));
    }
    if(m_IsHTMLIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("isHTML"), m_IsHTML));
    }
    if(m_ReplyToIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("replyTo"), m_ReplyTo));
    }
    if(m_SendStrategyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sendStrategy"), m_SendStrategy));
    }
    if(m_SubjectIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("subject"), m_Subject));
    }
    if(m_r_templateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("template"), m_r_template));
    }
    if(m_TemplateVariablesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("templateVariables"), m_TemplateVariables));
    }
    if(m_ToIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("to"), m_To));
    }
    if(m_ToContactsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("toContacts"), m_ToContacts));
    }
    if(m_ToGroupIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("toGroup"), m_ToGroup));
    }
}

bool SendEmailOptions::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("attachments")))
    {
        std::vector<utility::string_t> refVal_attachments;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("attachments")), refVal_attachments );
        setAttachments(refVal_attachments);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("bcc")))
    {
        std::vector<utility::string_t> refVal_bcc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("bcc")), refVal_bcc );
        setBcc(refVal_bcc);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("body")))
    {
        utility::string_t refVal_body;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("body")), refVal_body );
        setBody(refVal_body);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("cc")))
    {
        std::vector<utility::string_t> refVal_cc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("cc")), refVal_cc );
        setCc(refVal_cc);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("charset")))
    {
        utility::string_t refVal_charset;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("charset")), refVal_charset );
        setCharset(refVal_charset);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("from")))
    {
        utility::string_t refVal_from;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("from")), refVal_from );
        setFrom(refVal_from);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("isHTML")))
    {
        bool refVal_isHTML;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("isHTML")), refVal_isHTML );
        setIsHTML(refVal_isHTML);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("replyTo")))
    {
        utility::string_t refVal_replyTo;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("replyTo")), refVal_replyTo );
        setReplyTo(refVal_replyTo);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sendStrategy")))
    {
        utility::string_t refVal_sendStrategy;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sendStrategy")), refVal_sendStrategy );
        setSendStrategy(refVal_sendStrategy);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("subject")))
    {
        utility::string_t refVal_subject;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("subject")), refVal_subject );
        setSubject(refVal_subject);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("template")))
    {
        utility::string_t refVal_template;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("template")), refVal_template );
        setRTemplate(refVal_template);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("templateVariables")))
    {
        std::shared_ptr<Object> refVal_templateVariables;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("templateVariables")), refVal_templateVariables );
        setTemplateVariables(refVal_templateVariables);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("to")))
    {
        std::vector<utility::string_t> refVal_to;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("to")), refVal_to );
        setTo(refVal_to);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("toContacts")))
    {
        std::vector<utility::string_t> refVal_toContacts;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("toContacts")), refVal_toContacts );
        setToContacts(refVal_toContacts);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("toGroup")))
    {
        utility::string_t refVal_toGroup;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("toGroup")), refVal_toGroup );
        setToGroup(refVal_toGroup);
    }
    return ok;
}

std::vector<utility::string_t>& SendEmailOptions::getAttachments()
{
    return m_Attachments;
}

void SendEmailOptions::setAttachments(const std::vector<utility::string_t>& value)
{
    m_Attachments = value;
    m_AttachmentsIsSet = true;
}

bool SendEmailOptions::attachmentsIsSet() const
{
    return m_AttachmentsIsSet;
}

void SendEmailOptions::unsetAttachments()
{
    m_AttachmentsIsSet = false;
}
std::vector<utility::string_t>& SendEmailOptions::getBcc()
{
    return m_Bcc;
}

void SendEmailOptions::setBcc(const std::vector<utility::string_t>& value)
{
    m_Bcc = value;
    m_BccIsSet = true;
}

bool SendEmailOptions::bccIsSet() const
{
    return m_BccIsSet;
}

void SendEmailOptions::unsetBcc()
{
    m_BccIsSet = false;
}
utility::string_t SendEmailOptions::getBody() const
{
    return m_Body;
}

void SendEmailOptions::setBody(const utility::string_t& value)
{
    m_Body = value;
    m_BodyIsSet = true;
}

bool SendEmailOptions::bodyIsSet() const
{
    return m_BodyIsSet;
}

void SendEmailOptions::unsetBody()
{
    m_BodyIsSet = false;
}
std::vector<utility::string_t>& SendEmailOptions::getCc()
{
    return m_Cc;
}

void SendEmailOptions::setCc(const std::vector<utility::string_t>& value)
{
    m_Cc = value;
    m_CcIsSet = true;
}

bool SendEmailOptions::ccIsSet() const
{
    return m_CcIsSet;
}

void SendEmailOptions::unsetCc()
{
    m_CcIsSet = false;
}
utility::string_t SendEmailOptions::getCharset() const
{
    return m_Charset;
}

void SendEmailOptions::setCharset(const utility::string_t& value)
{
    m_Charset = value;
    m_CharsetIsSet = true;
}

bool SendEmailOptions::charsetIsSet() const
{
    return m_CharsetIsSet;
}

void SendEmailOptions::unsetCharset()
{
    m_CharsetIsSet = false;
}
utility::string_t SendEmailOptions::getFrom() const
{
    return m_From;
}

void SendEmailOptions::setFrom(const utility::string_t& value)
{
    m_From = value;
    m_FromIsSet = true;
}

bool SendEmailOptions::fromIsSet() const
{
    return m_FromIsSet;
}

void SendEmailOptions::unsetFrom()
{
    m_FromIsSet = false;
}
bool SendEmailOptions::isIsHTML() const
{
    return m_IsHTML;
}

void SendEmailOptions::setIsHTML(bool value)
{
    m_IsHTML = value;
    m_IsHTMLIsSet = true;
}

bool SendEmailOptions::isHTMLIsSet() const
{
    return m_IsHTMLIsSet;
}

void SendEmailOptions::unsetIsHTML()
{
    m_IsHTMLIsSet = false;
}
utility::string_t SendEmailOptions::getReplyTo() const
{
    return m_ReplyTo;
}

void SendEmailOptions::setReplyTo(const utility::string_t& value)
{
    m_ReplyTo = value;
    m_ReplyToIsSet = true;
}

bool SendEmailOptions::replyToIsSet() const
{
    return m_ReplyToIsSet;
}

void SendEmailOptions::unsetReplyTo()
{
    m_ReplyToIsSet = false;
}
utility::string_t SendEmailOptions::getSendStrategy() const
{
    return m_SendStrategy;
}

void SendEmailOptions::setSendStrategy(const utility::string_t& value)
{
    m_SendStrategy = value;
    m_SendStrategyIsSet = true;
}

bool SendEmailOptions::sendStrategyIsSet() const
{
    return m_SendStrategyIsSet;
}

void SendEmailOptions::unsetSendStrategy()
{
    m_SendStrategyIsSet = false;
}
utility::string_t SendEmailOptions::getSubject() const
{
    return m_Subject;
}

void SendEmailOptions::setSubject(const utility::string_t& value)
{
    m_Subject = value;
    m_SubjectIsSet = true;
}

bool SendEmailOptions::subjectIsSet() const
{
    return m_SubjectIsSet;
}

void SendEmailOptions::unsetSubject()
{
    m_SubjectIsSet = false;
}
utility::string_t SendEmailOptions::getRTemplate() const
{
    return m_r_template;
}

void SendEmailOptions::setRTemplate(const utility::string_t& value)
{
    m_r_template = value;
    m_r_templateIsSet = true;
}

bool SendEmailOptions::rTemplateIsSet() const
{
    return m_r_templateIsSet;
}

void SendEmailOptions::unsetr_template()
{
    m_r_templateIsSet = false;
}
std::shared_ptr<Object> SendEmailOptions::getTemplateVariables() const
{
    return m_TemplateVariables;
}

void SendEmailOptions::setTemplateVariables(const std::shared_ptr<Object>& value)
{
    m_TemplateVariables = value;
    m_TemplateVariablesIsSet = true;
}

bool SendEmailOptions::templateVariablesIsSet() const
{
    return m_TemplateVariablesIsSet;
}

void SendEmailOptions::unsetTemplateVariables()
{
    m_TemplateVariablesIsSet = false;
}
std::vector<utility::string_t>& SendEmailOptions::getTo()
{
    return m_To;
}

void SendEmailOptions::setTo(const std::vector<utility::string_t>& value)
{
    m_To = value;
    m_ToIsSet = true;
}

bool SendEmailOptions::toIsSet() const
{
    return m_ToIsSet;
}

void SendEmailOptions::unsetTo()
{
    m_ToIsSet = false;
}
std::vector<utility::string_t>& SendEmailOptions::getToContacts()
{
    return m_ToContacts;
}

void SendEmailOptions::setToContacts(const std::vector<utility::string_t>& value)
{
    m_ToContacts = value;
    m_ToContactsIsSet = true;
}

bool SendEmailOptions::toContactsIsSet() const
{
    return m_ToContactsIsSet;
}

void SendEmailOptions::unsetToContacts()
{
    m_ToContactsIsSet = false;
}
utility::string_t SendEmailOptions::getToGroup() const
{
    return m_ToGroup;
}

void SendEmailOptions::setToGroup(const utility::string_t& value)
{
    m_ToGroup = value;
    m_ToGroupIsSet = true;
}

bool SendEmailOptions::toGroupIsSet() const
{
    return m_ToGroupIsSet;
}

void SendEmailOptions::unsetToGroup()
{
    m_ToGroupIsSet = false;
}
}
}
}
}


