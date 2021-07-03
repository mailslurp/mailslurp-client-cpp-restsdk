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

/*
 * ReplyToAliasEmailOptions.h
 *
 * Options for replying to an alias email using the alias inbox
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_ReplyToAliasEmailOptions_H_
#define COM_MAILSLURP_CLIENT_MODEL_ReplyToAliasEmailOptions_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "Object.h"
#include <vector>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// Options for replying to an alias email using the alias inbox
/// </summary>
class  ReplyToAliasEmailOptions
    : public ModelBase
{
public:
    ReplyToAliasEmailOptions();
    virtual ~ReplyToAliasEmailOptions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ReplyToAliasEmailOptions members

    /// <summary>
    /// List of uploaded attachments to send with the reply. Optional.
    /// </summary>
    std::vector<utility::string_t>& getAttachments();
    bool attachmentsIsSet() const;
    void unsetAttachments();

    void setAttachments(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Body of the reply email you want to send
    /// </summary>
    utility::string_t getBody() const;
    bool bodyIsSet() const;
    void unsetBody();

    void setBody(const utility::string_t& value);

    /// <summary>
    /// The charset that your message should be sent with. Optional. Default is UTF-8
    /// </summary>
    utility::string_t getCharset() const;
    bool charsetIsSet() const;
    void unsetCharset();

    void setCharset(const utility::string_t& value);

    /// <summary>
    /// Is the reply HTML
    /// </summary>
    bool isIsHTML() const;
    bool isHTMLIsSet() const;
    void unsetIsHTML();

    void setIsHTML(bool value);

    /// <summary>
    /// When to send the email. Typically immediately
    /// </summary>
    utility::string_t getSendStrategy() const;
    bool sendStrategyIsSet() const;
    void unsetSendStrategy();

    void setSendStrategy(const utility::string_t& value);

    /// <summary>
    /// Template ID to use instead of body. Will use template variable map to fill defined variable slots.
    /// </summary>
    utility::string_t getRTemplate() const;
    bool rTemplateIsSet() const;
    void unsetr_template();

    void setRTemplate(const utility::string_t& value);

    /// <summary>
    /// Template variables if using a template
    /// </summary>
    std::shared_ptr<Object> getTemplateVariables() const;
    bool templateVariablesIsSet() const;
    void unsetTemplateVariables();

    void setTemplateVariables(const std::shared_ptr<Object>& value);

    /// <summary>
    /// Optionally use inbox name as display name for sender email address
    /// </summary>
    bool isUseInboxName() const;
    bool useInboxNameIsSet() const;
    void unsetUseInboxName();

    void setUseInboxName(bool value);


protected:
    std::vector<utility::string_t> m_Attachments;
    bool m_AttachmentsIsSet;
    utility::string_t m_Body;
    bool m_BodyIsSet;
    utility::string_t m_Charset;
    bool m_CharsetIsSet;
    bool m_IsHTML;
    bool m_IsHTMLIsSet;
    utility::string_t m_SendStrategy;
    bool m_SendStrategyIsSet;
    utility::string_t m_r_template;
    bool m_r_templateIsSet;
    std::shared_ptr<Object> m_TemplateVariables;
    bool m_TemplateVariablesIsSet;
    bool m_UseInboxName;
    bool m_UseInboxNameIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_ReplyToAliasEmailOptions_H_ */
