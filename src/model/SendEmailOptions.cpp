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



#include "CppRestOpenAPIClient/model/SendEmailOptions.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



SendEmailOptions::SendEmailOptions()
{
    m_ToContactsIsSet = false;
    m_ToGroup = utility::conversions::to_string_t("");
    m_ToGroupIsSet = false;
    m_ToIsSet = false;
    m_From = utility::conversions::to_string_t("");
    m_FromIsSet = false;
    m_CcIsSet = false;
    m_BccIsSet = false;
    m_Subject = utility::conversions::to_string_t("");
    m_SubjectIsSet = false;
    m_ReplyTo = utility::conversions::to_string_t("");
    m_ReplyToIsSet = false;
    m_Body = utility::conversions::to_string_t("");
    m_BodyIsSet = false;
    m_Html = false;
    m_HtmlIsSet = false;
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
    m_AddTrackingPixel = false;
    m_AddTrackingPixelIsSet = false;
    m_FilterBouncedRecipients = false;
    m_FilterBouncedRecipientsIsSet = false;
    m_ValidateEmailAddresses = utility::conversions::to_string_t("");
    m_ValidateEmailAddressesIsSet = false;
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
    
    if(m_ToContactsIsSet)
    {
        val[utility::conversions::to_string_t(U("toContacts"))] = ModelBase::toJson(m_ToContacts);
    }
    if(m_ToGroupIsSet)
    {
        val[utility::conversions::to_string_t(U("toGroup"))] = ModelBase::toJson(m_ToGroup);
    }
    if(m_ToIsSet)
    {
        val[utility::conversions::to_string_t(U("to"))] = ModelBase::toJson(m_To);
    }
    if(m_FromIsSet)
    {
        val[utility::conversions::to_string_t(U("from"))] = ModelBase::toJson(m_From);
    }
    if(m_CcIsSet)
    {
        val[utility::conversions::to_string_t(U("cc"))] = ModelBase::toJson(m_Cc);
    }
    if(m_BccIsSet)
    {
        val[utility::conversions::to_string_t(U("bcc"))] = ModelBase::toJson(m_Bcc);
    }
    if(m_SubjectIsSet)
    {
        val[utility::conversions::to_string_t(U("subject"))] = ModelBase::toJson(m_Subject);
    }
    if(m_ReplyToIsSet)
    {
        val[utility::conversions::to_string_t(U("replyTo"))] = ModelBase::toJson(m_ReplyTo);
    }
    if(m_BodyIsSet)
    {
        val[utility::conversions::to_string_t(U("body"))] = ModelBase::toJson(m_Body);
    }
    if(m_HtmlIsSet)
    {
        val[utility::conversions::to_string_t(U("html"))] = ModelBase::toJson(m_Html);
    }
    if(m_IsHTMLIsSet)
    {
        val[utility::conversions::to_string_t(U("isHTML"))] = ModelBase::toJson(m_IsHTML);
    }
    if(m_CharsetIsSet)
    {
        val[utility::conversions::to_string_t(U("charset"))] = ModelBase::toJson(m_Charset);
    }
    if(m_AttachmentsIsSet)
    {
        val[utility::conversions::to_string_t(U("attachments"))] = ModelBase::toJson(m_Attachments);
    }
    if(m_TemplateVariablesIsSet)
    {
        val[utility::conversions::to_string_t(U("templateVariables"))] = ModelBase::toJson(m_TemplateVariables);
    }
    if(m_r_templateIsSet)
    {
        val[utility::conversions::to_string_t(U("template"))] = ModelBase::toJson(m_r_template);
    }
    if(m_SendStrategyIsSet)
    {
        val[utility::conversions::to_string_t(U("sendStrategy"))] = ModelBase::toJson(m_SendStrategy);
    }
    if(m_UseInboxNameIsSet)
    {
        val[utility::conversions::to_string_t(U("useInboxName"))] = ModelBase::toJson(m_UseInboxName);
    }
    if(m_AddTrackingPixelIsSet)
    {
        val[utility::conversions::to_string_t(U("addTrackingPixel"))] = ModelBase::toJson(m_AddTrackingPixel);
    }
    if(m_FilterBouncedRecipientsIsSet)
    {
        val[utility::conversions::to_string_t(U("filterBouncedRecipients"))] = ModelBase::toJson(m_FilterBouncedRecipients);
    }
    if(m_ValidateEmailAddressesIsSet)
    {
        val[utility::conversions::to_string_t(U("validateEmailAddresses"))] = ModelBase::toJson(m_ValidateEmailAddresses);
    }

    return val;
}

bool SendEmailOptions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("toContacts"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("toContacts")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setToContacts;
            ok &= ModelBase::fromJson(fieldValue, refVal_setToContacts);
            setToContacts(refVal_setToContacts);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("toGroup"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("toGroup")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setToGroup;
            ok &= ModelBase::fromJson(fieldValue, refVal_setToGroup);
            setToGroup(refVal_setToGroup);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("to"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("to")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setTo;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTo);
            setTo(refVal_setTo);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("from"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("from")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setFrom;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFrom);
            setFrom(refVal_setFrom);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("cc"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("cc")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setCc;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCc);
            setCc(refVal_setCc);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("bcc"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("bcc")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setBcc;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBcc);
            setBcc(refVal_setBcc);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("subject"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("subject")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSubject;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSubject);
            setSubject(refVal_setSubject);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("replyTo"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("replyTo")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setReplyTo;
            ok &= ModelBase::fromJson(fieldValue, refVal_setReplyTo);
            setReplyTo(refVal_setReplyTo);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("body"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("body")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setBody;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBody);
            setBody(refVal_setBody);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("html"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("html")));
        if(!fieldValue.is_null())
        {
            bool refVal_setHtml;
            ok &= ModelBase::fromJson(fieldValue, refVal_setHtml);
            setHtml(refVal_setHtml);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("isHTML"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("isHTML")));
        if(!fieldValue.is_null())
        {
            bool refVal_setIsHTML;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIsHTML);
            setIsHTML(refVal_setIsHTML);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("charset"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("charset")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCharset;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCharset);
            setCharset(refVal_setCharset);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("attachments"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("attachments")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setAttachments;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAttachments);
            setAttachments(refVal_setAttachments);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("templateVariables"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("templateVariables")));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, std::shared_ptr<Object>> refVal_setTemplateVariables;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTemplateVariables);
            setTemplateVariables(refVal_setTemplateVariables);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("template"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("template")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setRTemplate;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRTemplate);
            setRTemplate(refVal_setRTemplate);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("sendStrategy"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("sendStrategy")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSendStrategy;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSendStrategy);
            setSendStrategy(refVal_setSendStrategy);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("useInboxName"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("useInboxName")));
        if(!fieldValue.is_null())
        {
            bool refVal_setUseInboxName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUseInboxName);
            setUseInboxName(refVal_setUseInboxName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("addTrackingPixel"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("addTrackingPixel")));
        if(!fieldValue.is_null())
        {
            bool refVal_setAddTrackingPixel;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAddTrackingPixel);
            setAddTrackingPixel(refVal_setAddTrackingPixel);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("filterBouncedRecipients"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("filterBouncedRecipients")));
        if(!fieldValue.is_null())
        {
            bool refVal_setFilterBouncedRecipients;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFilterBouncedRecipients);
            setFilterBouncedRecipients(refVal_setFilterBouncedRecipients);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("validateEmailAddresses"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("validateEmailAddresses")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setValidateEmailAddresses;
            ok &= ModelBase::fromJson(fieldValue, refVal_setValidateEmailAddresses);
            setValidateEmailAddresses(refVal_setValidateEmailAddresses);
        }
    }
    return ok;
}

void SendEmailOptions::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ToContactsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("toContacts")), m_ToContacts));
    }
    if(m_ToGroupIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("toGroup")), m_ToGroup));
    }
    if(m_ToIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("to")), m_To));
    }
    if(m_FromIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("from")), m_From));
    }
    if(m_CcIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("cc")), m_Cc));
    }
    if(m_BccIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("bcc")), m_Bcc));
    }
    if(m_SubjectIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("subject")), m_Subject));
    }
    if(m_ReplyToIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("replyTo")), m_ReplyTo));
    }
    if(m_BodyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("body")), m_Body));
    }
    if(m_HtmlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("html")), m_Html));
    }
    if(m_IsHTMLIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("isHTML")), m_IsHTML));
    }
    if(m_CharsetIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("charset")), m_Charset));
    }
    if(m_AttachmentsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("attachments")), m_Attachments));
    }
    if(m_TemplateVariablesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("templateVariables")), m_TemplateVariables));
    }
    if(m_r_templateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("template")), m_r_template));
    }
    if(m_SendStrategyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("sendStrategy")), m_SendStrategy));
    }
    if(m_UseInboxNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("useInboxName")), m_UseInboxName));
    }
    if(m_AddTrackingPixelIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("addTrackingPixel")), m_AddTrackingPixel));
    }
    if(m_FilterBouncedRecipientsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("filterBouncedRecipients")), m_FilterBouncedRecipients));
    }
    if(m_ValidateEmailAddressesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("validateEmailAddresses")), m_ValidateEmailAddresses));
    }
}

bool SendEmailOptions::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("toContacts"))))
    {
        std::vector<utility::string_t> refVal_setToContacts;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("toContacts"))), refVal_setToContacts );
        setToContacts(refVal_setToContacts);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("toGroup"))))
    {
        utility::string_t refVal_setToGroup;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("toGroup"))), refVal_setToGroup );
        setToGroup(refVal_setToGroup);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("to"))))
    {
        std::vector<utility::string_t> refVal_setTo;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("to"))), refVal_setTo );
        setTo(refVal_setTo);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("from"))))
    {
        utility::string_t refVal_setFrom;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("from"))), refVal_setFrom );
        setFrom(refVal_setFrom);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("cc"))))
    {
        std::vector<utility::string_t> refVal_setCc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("cc"))), refVal_setCc );
        setCc(refVal_setCc);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("bcc"))))
    {
        std::vector<utility::string_t> refVal_setBcc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("bcc"))), refVal_setBcc );
        setBcc(refVal_setBcc);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("subject"))))
    {
        utility::string_t refVal_setSubject;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("subject"))), refVal_setSubject );
        setSubject(refVal_setSubject);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("replyTo"))))
    {
        utility::string_t refVal_setReplyTo;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("replyTo"))), refVal_setReplyTo );
        setReplyTo(refVal_setReplyTo);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("body"))))
    {
        utility::string_t refVal_setBody;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("body"))), refVal_setBody );
        setBody(refVal_setBody);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("html"))))
    {
        bool refVal_setHtml;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("html"))), refVal_setHtml );
        setHtml(refVal_setHtml);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("isHTML"))))
    {
        bool refVal_setIsHTML;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("isHTML"))), refVal_setIsHTML );
        setIsHTML(refVal_setIsHTML);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("charset"))))
    {
        utility::string_t refVal_setCharset;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("charset"))), refVal_setCharset );
        setCharset(refVal_setCharset);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("attachments"))))
    {
        std::vector<utility::string_t> refVal_setAttachments;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("attachments"))), refVal_setAttachments );
        setAttachments(refVal_setAttachments);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("templateVariables"))))
    {
        std::map<utility::string_t, std::shared_ptr<Object>> refVal_setTemplateVariables;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("templateVariables"))), refVal_setTemplateVariables );
        setTemplateVariables(refVal_setTemplateVariables);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("template"))))
    {
        utility::string_t refVal_setRTemplate;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("template"))), refVal_setRTemplate );
        setRTemplate(refVal_setRTemplate);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("sendStrategy"))))
    {
        utility::string_t refVal_setSendStrategy;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("sendStrategy"))), refVal_setSendStrategy );
        setSendStrategy(refVal_setSendStrategy);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("useInboxName"))))
    {
        bool refVal_setUseInboxName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("useInboxName"))), refVal_setUseInboxName );
        setUseInboxName(refVal_setUseInboxName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("addTrackingPixel"))))
    {
        bool refVal_setAddTrackingPixel;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("addTrackingPixel"))), refVal_setAddTrackingPixel );
        setAddTrackingPixel(refVal_setAddTrackingPixel);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("filterBouncedRecipients"))))
    {
        bool refVal_setFilterBouncedRecipients;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("filterBouncedRecipients"))), refVal_setFilterBouncedRecipients );
        setFilterBouncedRecipients(refVal_setFilterBouncedRecipients);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("validateEmailAddresses"))))
    {
        utility::string_t refVal_setValidateEmailAddresses;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("validateEmailAddresses"))), refVal_setValidateEmailAddresses );
        setValidateEmailAddresses(refVal_setValidateEmailAddresses);
    }
    return ok;
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
bool SendEmailOptions::isHtml() const
{
    return m_Html;
}

void SendEmailOptions::setHtml(bool value)
{
    m_Html = value;
    m_HtmlIsSet = true;
}

bool SendEmailOptions::htmlIsSet() const
{
    return m_HtmlIsSet;
}

void SendEmailOptions::unsetHtml()
{
    m_HtmlIsSet = false;
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
std::map<utility::string_t, std::shared_ptr<Object>>& SendEmailOptions::getTemplateVariables()
{
    return m_TemplateVariables;
}

void SendEmailOptions::setTemplateVariables(const std::map<utility::string_t, std::shared_ptr<Object>>& value)
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
bool SendEmailOptions::isUseInboxName() const
{
    return m_UseInboxName;
}

void SendEmailOptions::setUseInboxName(bool value)
{
    m_UseInboxName = value;
    m_UseInboxNameIsSet = true;
}

bool SendEmailOptions::useInboxNameIsSet() const
{
    return m_UseInboxNameIsSet;
}

void SendEmailOptions::unsetUseInboxName()
{
    m_UseInboxNameIsSet = false;
}
bool SendEmailOptions::isAddTrackingPixel() const
{
    return m_AddTrackingPixel;
}

void SendEmailOptions::setAddTrackingPixel(bool value)
{
    m_AddTrackingPixel = value;
    m_AddTrackingPixelIsSet = true;
}

bool SendEmailOptions::addTrackingPixelIsSet() const
{
    return m_AddTrackingPixelIsSet;
}

void SendEmailOptions::unsetAddTrackingPixel()
{
    m_AddTrackingPixelIsSet = false;
}
bool SendEmailOptions::isFilterBouncedRecipients() const
{
    return m_FilterBouncedRecipients;
}

void SendEmailOptions::setFilterBouncedRecipients(bool value)
{
    m_FilterBouncedRecipients = value;
    m_FilterBouncedRecipientsIsSet = true;
}

bool SendEmailOptions::filterBouncedRecipientsIsSet() const
{
    return m_FilterBouncedRecipientsIsSet;
}

void SendEmailOptions::unsetFilterBouncedRecipients()
{
    m_FilterBouncedRecipientsIsSet = false;
}
utility::string_t SendEmailOptions::getValidateEmailAddresses() const
{
    return m_ValidateEmailAddresses;
}

void SendEmailOptions::setValidateEmailAddresses(const utility::string_t& value)
{
    m_ValidateEmailAddresses = value;
    m_ValidateEmailAddressesIsSet = true;
}

bool SendEmailOptions::validateEmailAddressesIsSet() const
{
    return m_ValidateEmailAddressesIsSet;
}

void SendEmailOptions::unsetValidateEmailAddresses()
{
    m_ValidateEmailAddressesIsSet = false;
}
}
}
}
}


