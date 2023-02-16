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
 * SentEmailDto.h
 *
 * Sent email details
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_SentEmailDto_H_
#define COM_MAILSLURP_CLIENT_MODEL_SentEmailDto_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/Object.h"
#include <map>
#include <vector>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// Sent email details
/// </summary>
class  SentEmailDto
    : public ModelBase
{
public:
    SentEmailDto();
    virtual ~SentEmailDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SentEmailDto members

    /// <summary>
    /// ID of sent email
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// User ID
    /// </summary>
    utility::string_t getUserId() const;
    bool userIdIsSet() const;
    void unsetUserId();

    void setUserId(const utility::string_t& value);

    /// <summary>
    /// Inbox ID email was sent from
    /// </summary>
    utility::string_t getInboxId() const;
    bool inboxIdIsSet() const;
    void unsetInboxId();

    void setInboxId(const utility::string_t& value);

    /// <summary>
    /// Domain ID
    /// </summary>
    utility::string_t getDomainId() const;
    bool domainIdIsSet() const;
    void unsetDomainId();

    void setDomainId(const utility::string_t& value);

    /// <summary>
    /// Recipients email was sent to
    /// </summary>
    std::vector<utility::string_t>& getTo();
    bool toIsSet() const;
    void unsetTo();

    void setTo(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Sent from address
    /// </summary>
    utility::string_t getFrom() const;
    bool fromIsSet() const;
    void unsetFrom();

    void setFrom(const utility::string_t& value);

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
    std::vector<utility::string_t>& getCc();
    bool ccIsSet() const;
    void unsetCc();

    void setCc(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getBcc();
    bool bccIsSet() const;
    void unsetBcc();

    void setBcc(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Array of IDs of attachments that were sent with this email
    /// </summary>
    std::vector<utility::string_t>& getAttachments();
    bool attachmentsIsSet() const;
    void unsetAttachments();

    void setAttachments(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSubject() const;
    bool subjectIsSet() const;
    void unsetSubject();

    void setSubject(const utility::string_t& value);

    /// <summary>
    /// MD5 Hash
    /// </summary>
    utility::string_t getBodyMD5Hash() const;
    bool bodyMD5HashIsSet() const;
    void unsetBodyMD5Hash();

    void setBodyMD5Hash(const utility::string_t& value);

    /// <summary>
    /// Sent email body
    /// </summary>
    utility::string_t getBody() const;
    bool bodyIsSet() const;
    void unsetBody();

    void setBody(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getToContacts();
    bool toContactsIsSet() const;
    void unsetToContacts();

    void setToContacts(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getToGroup() const;
    bool toGroupIsSet() const;
    void unsetToGroup();

    void setToGroup(const utility::string_t& value);

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
    utility::datetime getSentAt() const;
    bool sentAtIsSet() const;
    void unsetSentAt();

    void setSentAt(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getPixelIds();
    bool pixelIdsIsSet() const;
    void unsetPixelIds();

    void setPixelIds(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getMessageId() const;
    bool messageIdIsSet() const;
    void unsetMessageId();

    void setMessageId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getMessageIds();
    bool messageIdsIsSet() const;
    void unsetMessageIds();

    void setMessageIds(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    bool isVirtualSend() const;
    bool virtualSendIsSet() const;
    void unsetVirtualSend();

    void setVirtualSend(bool value);

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
    bool isHtml() const;
    bool htmlIsSet() const;
    void unsetHtml();

    void setHtml(bool value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_UserId;
    bool m_UserIdIsSet;
    utility::string_t m_InboxId;
    bool m_InboxIdIsSet;
    utility::string_t m_DomainId;
    bool m_DomainIdIsSet;
    std::vector<utility::string_t> m_To;
    bool m_ToIsSet;
    utility::string_t m_From;
    bool m_FromIsSet;
    utility::string_t m_ReplyTo;
    bool m_ReplyToIsSet;
    std::vector<utility::string_t> m_Cc;
    bool m_CcIsSet;
    std::vector<utility::string_t> m_Bcc;
    bool m_BccIsSet;
    std::vector<utility::string_t> m_Attachments;
    bool m_AttachmentsIsSet;
    utility::string_t m_Subject;
    bool m_SubjectIsSet;
    utility::string_t m_BodyMD5Hash;
    bool m_BodyMD5HashIsSet;
    utility::string_t m_Body;
    bool m_BodyIsSet;
    std::vector<utility::string_t> m_ToContacts;
    bool m_ToContactsIsSet;
    utility::string_t m_ToGroup;
    bool m_ToGroupIsSet;
    utility::string_t m_Charset;
    bool m_CharsetIsSet;
    bool m_IsHTML;
    bool m_IsHTMLIsSet;
    utility::datetime m_SentAt;
    bool m_SentAtIsSet;
    std::vector<utility::string_t> m_PixelIds;
    bool m_PixelIdsIsSet;
    utility::string_t m_MessageId;
    bool m_MessageIdIsSet;
    std::vector<utility::string_t> m_MessageIds;
    bool m_MessageIdsIsSet;
    bool m_VirtualSend;
    bool m_VirtualSendIsSet;
    utility::string_t m_TemplateId;
    bool m_TemplateIdIsSet;
    std::map<utility::string_t, std::shared_ptr<Object>> m_TemplateVariables;
    bool m_TemplateVariablesIsSet;
    bool m_Html;
    bool m_HtmlIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_SentEmailDto_H_ */
