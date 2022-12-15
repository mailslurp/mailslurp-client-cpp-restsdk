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
 * Email.h
 *
 * Email entity (also known as EmailDto). When an SMTP email message is received by MailSlurp it is parsed. The body and attachments are written to disk and the fields such as to, from, subject etc are stored in a database. The &#x60;body&#x60; contains the email content. If you want the original SMTP message see the &#x60;getRawEmail&#x60; endpoints. The attachments can be fetched using the AttachmentController
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_Email_H_
#define COM_MAILSLURP_CLIENT_MODEL_Email_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/EmailRecipients.h"
#include <cpprest/details/basic_types.h>
#include <map>
#include <vector>
#include "CppRestOpenAPIClient/model/EmailAnalysis.h"
#include "CppRestOpenAPIClient/model/Sender.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {

class Sender;
class EmailRecipients;
class EmailAnalysis;

/// <summary>
/// Email entity (also known as EmailDto). When an SMTP email message is received by MailSlurp it is parsed. The body and attachments are written to disk and the fields such as to, from, subject etc are stored in a database. The &#x60;body&#x60; contains the email content. If you want the original SMTP message see the &#x60;getRawEmail&#x60; endpoints. The attachments can be fetched using the AttachmentController
/// </summary>
class  Email
    : public ModelBase
{
public:
    Email();
    virtual ~Email();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Email members

    /// <summary>
    /// ID of the email entity
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// ID of user that email belongs to
    /// </summary>
    utility::string_t getUserId() const;
    bool userIdIsSet() const;
    void unsetUserId();

    void setUserId(const utility::string_t& value);

    /// <summary>
    /// ID of the inbox that received the email
    /// </summary>
    utility::string_t getInboxId() const;
    bool inboxIdIsSet() const;
    void unsetInboxId();

    void setInboxId(const utility::string_t& value);

    /// <summary>
    /// ID of the domain that received the email
    /// </summary>
    utility::string_t getDomainId() const;
    bool domainIdIsSet() const;
    void unsetDomainId();

    void setDomainId(const utility::string_t& value);

    /// <summary>
    /// List of &#x60;To&#x60; recipient email addresses that the email was addressed to. See recipients object for names.
    /// </summary>
    std::vector<utility::string_t>& getTo();
    bool toIsSet() const;
    void unsetTo();

    void setTo(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Who the email was sent from. An email address - see fromName for the sender name.
    /// </summary>
    utility::string_t getFrom() const;
    bool fromIsSet() const;
    void unsetFrom();

    void setFrom(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Sender> getSender() const;
    bool senderIsSet() const;
    void unsetSender();

    void setSender(const std::shared_ptr<Sender>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<EmailRecipients> getRecipients() const;
    bool recipientsIsSet() const;
    void unsetRecipients();

    void setRecipients(const std::shared_ptr<EmailRecipients>& value);

    /// <summary>
    /// The &#x60;replyTo&#x60; field on the received email message
    /// </summary>
    utility::string_t getReplyTo() const;
    bool replyToIsSet() const;
    void unsetReplyTo();

    void setReplyTo(const utility::string_t& value);

    /// <summary>
    /// List of &#x60;CC&#x60; recipients email addresses that the email was addressed to. See recipients object for names.
    /// </summary>
    std::vector<utility::string_t>& getCc();
    bool ccIsSet() const;
    void unsetCc();

    void setCc(const std::vector<utility::string_t>& value);

    /// <summary>
    /// List of &#x60;BCC&#x60; recipients email addresses that the email was addressed to. See recipients object for names.
    /// </summary>
    std::vector<utility::string_t>& getBcc();
    bool bccIsSet() const;
    void unsetBcc();

    void setBcc(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Collection of SMTP headers attached to email
    /// </summary>
    std::map<utility::string_t, utility::string_t>& getHeaders();
    bool headersIsSet() const;
    void unsetHeaders();

    void setHeaders(const std::map<utility::string_t, utility::string_t>& value);

    /// <summary>
    /// List of IDs of attachments found in the email. Use these IDs with the Inbox and Email Controllers to download attachments and attachment meta data such as filesize, name, extension.
    /// </summary>
    std::vector<utility::string_t>& getAttachments();
    bool attachmentsIsSet() const;
    void unsetAttachments();

    void setAttachments(const std::vector<utility::string_t>& value);

    /// <summary>
    /// The subject line of the email message as specified by SMTP subject header
    /// </summary>
    utility::string_t getSubject() const;
    bool subjectIsSet() const;
    void unsetSubject();

    void setSubject(const utility::string_t& value);

    /// <summary>
    /// The body of the email message as text parsed from the SMTP message body (does not include attachments). Fetch the raw content to access the SMTP message and use the attachments property to access attachments. The body is stored separately to the email entity so the body is not returned in paginated results only in full single email or wait requests.
    /// </summary>
    utility::string_t getBody() const;
    bool bodyIsSet() const;
    void unsetBody();

    void setBody(const utility::string_t& value);

    /// <summary>
    /// An excerpt of the body of the email message for quick preview .
    /// </summary>
    utility::string_t getBodyExcerpt() const;
    bool bodyExcerptIsSet() const;
    void unsetBodyExcerpt();

    void setBodyExcerpt(const utility::string_t& value);

    /// <summary>
    /// A hash signature of the email message using MD5. Useful for comparing emails without fetching full body.
    /// </summary>
    utility::string_t getBodyMD5Hash() const;
    bool bodyMD5HashIsSet() const;
    void unsetBodyMD5Hash();

    void setBodyMD5Hash(const utility::string_t& value);

    /// <summary>
    /// Is the email body content type HTML?
    /// </summary>
    bool isIsHTML() const;
    bool isHTMLIsSet() const;
    void unsetIsHTML();

    void setIsHTML(bool value);

    /// <summary>
    /// Detected character set of the email body such as UTF-8
    /// </summary>
    utility::string_t getCharset() const;
    bool charsetIsSet() const;
    void unsetCharset();

    void setCharset(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<EmailAnalysis> getAnalysis() const;
    bool analysisIsSet() const;
    void unsetAnalysis();

    void setAnalysis(const std::shared_ptr<EmailAnalysis>& value);

    /// <summary>
    /// When was the email received by MailSlurp
    /// </summary>
    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetCreatedAt();

    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// When was the email last updated
    /// </summary>
    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetUpdatedAt();

    void setUpdatedAt(const utility::datetime& value);

    /// <summary>
    /// Read flag. Has the email ever been viewed in the dashboard or fetched via the API with a hydrated body? If so the email is marked as read. Paginated results do not affect read status. Read status is different to email opened event as it depends on your own account accessing the email. Email opened is determined by tracking pixels sent to other uses if enable during sending. You can listened for both email read and email opened events using webhooks.
    /// </summary>
    bool isRead() const;
    bool readIsSet() const;
    void unsetRead();

    void setRead(bool value);

    /// <summary>
    /// Can the email be accessed by organization team members
    /// </summary>
    bool isTeamAccess() const;
    bool teamAccessIsSet() const;
    void unsetTeamAccess();

    void setTeamAccess(bool value);

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
    std::shared_ptr<Sender> m_Sender;
    bool m_SenderIsSet;
    std::shared_ptr<EmailRecipients> m_Recipients;
    bool m_RecipientsIsSet;
    utility::string_t m_ReplyTo;
    bool m_ReplyToIsSet;
    std::vector<utility::string_t> m_Cc;
    bool m_CcIsSet;
    std::vector<utility::string_t> m_Bcc;
    bool m_BccIsSet;
    std::map<utility::string_t, utility::string_t> m_Headers;
    bool m_HeadersIsSet;
    std::vector<utility::string_t> m_Attachments;
    bool m_AttachmentsIsSet;
    utility::string_t m_Subject;
    bool m_SubjectIsSet;
    utility::string_t m_Body;
    bool m_BodyIsSet;
    utility::string_t m_BodyExcerpt;
    bool m_BodyExcerptIsSet;
    utility::string_t m_BodyMD5Hash;
    bool m_BodyMD5HashIsSet;
    bool m_IsHTML;
    bool m_IsHTMLIsSet;
    utility::string_t m_Charset;
    bool m_CharsetIsSet;
    std::shared_ptr<EmailAnalysis> m_Analysis;
    bool m_AnalysisIsSet;
    utility::datetime m_CreatedAt;
    bool m_CreatedAtIsSet;
    utility::datetime m_UpdatedAt;
    bool m_UpdatedAtIsSet;
    bool m_Read;
    bool m_ReadIsSet;
    bool m_TeamAccess;
    bool m_TeamAccessIsSet;
    bool m_Html;
    bool m_HtmlIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_Email_H_ */
