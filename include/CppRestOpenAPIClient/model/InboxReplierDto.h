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

/*
 * InboxReplierDto.h
 *
 * Inbox replier. Will automatically reply to inbound emails that match given field for an inbox.
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_InboxReplierDto_H_
#define COM_MAILSLURP_CLIENT_MODEL_InboxReplierDto_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/Object.h"
#include <map>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// Inbox replier. Will automatically reply to inbound emails that match given field for an inbox.
/// </summary>
class  InboxReplierDto
    : public ModelBase
{
public:
    InboxReplierDto();
    virtual ~InboxReplierDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// InboxReplierDto members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getInboxId() const;
    bool inboxIdIsSet() const;
    void unsetInboxId();

    void setInboxId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getField() const;
    bool fieldIsSet() const;
    void unsetField();

    void setField(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getMatch() const;
    bool matchIsSet() const;
    void unsetMatch();

    void setMatch(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getReplyTo() const;
    bool replyToIsSet() const;
    void unsetReplyTo();

    void setReplyTo(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSubject() const;
    bool subjectIsSet() const;
    void unsetSubject();

    void setSubject(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getFrom() const;
    bool fromIsSet() const;
    void unsetFrom();

    void setFrom(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCharset() const;
    bool charsetIsSet() const;
    void unsetCharset();

    void setCharset(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    bool isIsHTML() const;
    bool isHTMLIsSet() const;
    void unsetIsHTML();

    void setIsHTML(bool value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTemplateId() const;
    bool templateIdIsSet() const;
    void unsetTemplateId();

    void setTemplateId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::map<utility::string_t, std::shared_ptr<Object>>& getTemplateVariables();
    bool templateVariablesIsSet() const;
    void unsetTemplateVariables();

    void setTemplateVariables(const std::map<utility::string_t, std::shared_ptr<Object>>& value);

    /// <summary>
    /// 
    /// </summary>
    bool isIgnoreReplyTo() const;
    bool ignoreReplyToIsSet() const;
    void unsetIgnoreReplyTo();

    void setIgnoreReplyTo(bool value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetCreatedAt();

    void setCreatedAt(const utility::datetime& value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_InboxId;
    bool m_InboxIdIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_Field;
    bool m_FieldIsSet;
    utility::string_t m_Match;
    bool m_MatchIsSet;
    utility::string_t m_ReplyTo;
    bool m_ReplyToIsSet;
    utility::string_t m_Subject;
    bool m_SubjectIsSet;
    utility::string_t m_From;
    bool m_FromIsSet;
    utility::string_t m_Charset;
    bool m_CharsetIsSet;
    bool m_IsHTML;
    bool m_IsHTMLIsSet;
    utility::string_t m_TemplateId;
    bool m_TemplateIdIsSet;
    std::map<utility::string_t, std::shared_ptr<Object>> m_TemplateVariables;
    bool m_TemplateVariablesIsSet;
    bool m_IgnoreReplyTo;
    bool m_IgnoreReplyToIsSet;
    utility::datetime m_CreatedAt;
    bool m_CreatedAtIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_InboxReplierDto_H_ */