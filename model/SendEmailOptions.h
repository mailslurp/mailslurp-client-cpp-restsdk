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

/*
 * SendEmailOptions.h
 *
 * Options for sending an email message from an inbox. You must provide one of: &#x60;to&#x60;, &#x60;toGroup&#x60;, or &#x60;toContacts&#x60; to send an email. All other parameters are optional.
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_SendEmailOptions_H_
#define COM_MAILSLURP_CLIENT_MODEL_SendEmailOptions_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "Object.h"
#include <vector>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// Options for sending an email message from an inbox. You must provide one of: &#x60;to&#x60;, &#x60;toGroup&#x60;, or &#x60;toContacts&#x60; to send an email. All other parameters are optional.
/// </summary>
class  SendEmailOptions
    : public ModelBase
{
public:
    SendEmailOptions();
    virtual ~SendEmailOptions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SendEmailOptions members

    /// <summary>
    /// Optional list of attachment IDs to send with this email. You must first upload each attachment separately in order to obtain attachment IDs. This way you can reuse attachments with different emails once uploaded.
    /// </summary>
    std::vector<utility::string_t>& getAttachments();
    bool attachmentsIsSet() const;
    void unsetAttachments();

    void setAttachments(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Optional list of bcc destination email addresses
    /// </summary>
    std::vector<utility::string_t>& getBcc();
    bool bccIsSet() const;
    void unsetBcc();

    void setBcc(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Optional contents of email. If body contains HTML then set &#x60;isHTML&#x60; to true to ensure that email clients render it correctly. You can use moustache template syntax in the email body in conjunction with &#x60;toGroup&#x60; contact variables or &#x60;templateVariables&#x60; data. If you need more templating control consider creating a template and using the &#x60;template&#x60; property instead of the body.
    /// </summary>
    utility::string_t getBody() const;
    bool bodyIsSet() const;
    void unsetBody();

    void setBody(const utility::string_t& value);

    /// <summary>
    /// Optional list of cc destination email addresses
    /// </summary>
    std::vector<utility::string_t>& getCc();
    bool ccIsSet() const;
    void unsetCc();

    void setCc(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Optional charset
    /// </summary>
    utility::string_t getCharset() const;
    bool charsetIsSet() const;
    void unsetCharset();

    void setCharset(const utility::string_t& value);

    /// <summary>
    /// Optional from address. If not set the source inbox address will be used for this field. Beware of potential spam penalties when setting this field to an address not used by the inbox. For custom email addresses use a custom domain.
    /// </summary>
    utility::string_t getFrom() const;
    bool fromIsSet() const;
    void unsetFrom();

    void setFrom(const utility::string_t& value);

    /// <summary>
    /// Optional HTML flag. If true the &#x60;content-type&#x60; of the email will be &#x60;text/html&#x60;. Set to true when sending HTML to ensure proper rending on email clients
    /// </summary>
    bool isIsHTML() const;
    bool isHTMLIsSet() const;
    void unsetIsHTML();

    void setIsHTML(bool value);

    /// <summary>
    /// Optional replyTo header
    /// </summary>
    utility::string_t getReplyTo() const;
    bool replyToIsSet() const;
    void unsetReplyTo();

    void setReplyTo(const utility::string_t& value);

    /// <summary>
    /// Optional strategy to use when sending the email
    /// </summary>
    utility::string_t getSendStrategy() const;
    bool sendStrategyIsSet() const;
    void unsetSendStrategy();

    void setSendStrategy(const utility::string_t& value);

    /// <summary>
    /// Optional email subject line
    /// </summary>
    utility::string_t getSubject() const;
    bool subjectIsSet() const;
    void unsetSubject();

    void setSubject(const utility::string_t& value);

    /// <summary>
    /// Optional template ID to use for body. Will override body if provided. When using a template make sure you pass the corresponding map of &#x60;templateVariables&#x60;. You can find which variables are needed by fetching the template itself or viewing it in the dashboard.
    /// </summary>
    utility::string_t getRTemplate() const;
    bool rTemplateIsSet() const;
    void unsetr_template();

    void setRTemplate(const utility::string_t& value);

    /// <summary>
    /// Optional map of template variables. Will replace moustache syntax variables in subject and body or template with the associated values if found.
    /// </summary>
    std::shared_ptr<Object> getTemplateVariables() const;
    bool templateVariablesIsSet() const;
    void unsetTemplateVariables();

    void setTemplateVariables(const std::shared_ptr<Object>& value);

    /// <summary>
    /// List of destination email addresses. Even single recipients must be in array form. Maximum recipients per email depends on your plan. If you need to send many emails try using contacts or contact groups or use a non standard sendStrategy to ensure that spam filters are not triggered (many recipients in one email can affect your spam rating).
    /// </summary>
    std::vector<utility::string_t>& getTo();
    bool toIsSet() const;
    void unsetTo();

    void setTo(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Optional list of contact IDs to send email to. Manage your contacts via the API or dashboard. When contacts are used the email is sent to each contact separately so they will not see other recipients.
    /// </summary>
    std::vector<utility::string_t>& getToContacts();
    bool toContactsIsSet() const;
    void unsetToContacts();

    void setToContacts(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Optional contact group ID to send email to. You can create contacts and contact groups in the API or dashboard and use them for email campaigns. When contact groups are used the email is sent to each contact separately so they will not see other recipients
    /// </summary>
    utility::string_t getToGroup() const;
    bool toGroupIsSet() const;
    void unsetToGroup();

    void setToGroup(const utility::string_t& value);


protected:
    std::vector<utility::string_t> m_Attachments;
    bool m_AttachmentsIsSet;
    std::vector<utility::string_t> m_Bcc;
    bool m_BccIsSet;
    utility::string_t m_Body;
    bool m_BodyIsSet;
    std::vector<utility::string_t> m_Cc;
    bool m_CcIsSet;
    utility::string_t m_Charset;
    bool m_CharsetIsSet;
    utility::string_t m_From;
    bool m_FromIsSet;
    bool m_IsHTML;
    bool m_IsHTMLIsSet;
    utility::string_t m_ReplyTo;
    bool m_ReplyToIsSet;
    utility::string_t m_SendStrategy;
    bool m_SendStrategyIsSet;
    utility::string_t m_Subject;
    bool m_SubjectIsSet;
    utility::string_t m_r_template;
    bool m_r_templateIsSet;
    std::shared_ptr<Object> m_TemplateVariables;
    bool m_TemplateVariablesIsSet;
    std::vector<utility::string_t> m_To;
    bool m_ToIsSet;
    std::vector<utility::string_t> m_ToContacts;
    bool m_ToContactsIsSet;
    utility::string_t m_ToGroup;
    bool m_ToGroupIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_SendEmailOptions_H_ */
