/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails and SMS from dynamically allocated email addresses and phone numbers. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://docs.mailslurp.com/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.2.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * EmailPreview.h
 *
 * Preview of an email message. For full message (including body and attachments) call the &#x60;getEmail&#x60; or other email endpoints with the provided email ID.
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_EmailPreview_H_
#define COM_MAILSLURP_CLIENT_MODEL_EmailPreview_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/EmailRecipients.h"
#include <cpprest/details/basic_types.h>
#include <vector>
#include "CppRestOpenAPIClient/model/Sender.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {

class Sender;
class EmailRecipients;

/// <summary>
/// Preview of an email message. For full message (including body and attachments) call the &#x60;getEmail&#x60; or other email endpoints with the provided email ID.
/// </summary>
class  EmailPreview
    : public ModelBase
{
public:
    EmailPreview();
    virtual ~EmailPreview();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// EmailPreview members

    /// <summary>
    /// ID of the email entity
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

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
    /// The subject line of the email message as specified by SMTP subject header
    /// </summary>
    utility::string_t getSubject() const;
    bool subjectIsSet() const;
    void unsetSubject();

    void setSubject(const utility::string_t& value);

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
    /// List of &#x60;BCC&#x60; recipients email addresses that the email was addressed to. See recipients object for names.
    /// </summary>
    std::vector<utility::string_t>& getBcc();
    bool bccIsSet() const;
    void unsetBcc();

    void setBcc(const std::vector<utility::string_t>& value);

    /// <summary>
    /// List of &#x60;CC&#x60; recipients email addresses that the email was addressed to. See recipients object for names.
    /// </summary>
    std::vector<utility::string_t>& getCc();
    bool ccIsSet() const;
    void unsetCc();

    void setCc(const std::vector<utility::string_t>& value);

    /// <summary>
    /// When was the email received by MailSlurp
    /// </summary>
    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetCreatedAt();

    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// Read flag. Has the email ever been viewed in the dashboard or fetched via the API with a hydrated body? If so the email is marked as read. Paginated results do not affect read status. Read status is different to email opened event as it depends on your own account accessing the email. Email opened is determined by tracking pixels sent to other uses if enable during sending. You can listened for both email read and email opened events using webhooks.
    /// </summary>
    bool isRead() const;
    bool readIsSet() const;
    void unsetRead();

    void setRead(bool value);

    /// <summary>
    /// List of IDs of attachments found in the email. Use these IDs with the Inbox and Email Controllers to download attachments and attachment meta data such as filesize, name, extension.
    /// </summary>
    std::vector<utility::string_t>& getAttachments();
    bool attachmentsIsSet() const;
    void unsetAttachments();

    void setAttachments(const std::vector<utility::string_t>& value);

    /// <summary>
    /// MailSlurp thread ID for email chain that enables lookup for In-Reply-To and References fields.
    /// </summary>
    utility::string_t getThreadId() const;
    bool threadIdIsSet() const;
    void unsetThreadId();

    void setThreadId(const utility::string_t& value);

    /// <summary>
    /// RFC 5322 Message-ID header value without angle brackets.
    /// </summary>
    utility::string_t getMessageId() const;
    bool messageIdIsSet() const;
    void unsetMessageId();

    void setMessageId(const utility::string_t& value);

    /// <summary>
    /// Parsed value of In-Reply-To header. A Message-ID in a thread.
    /// </summary>
    utility::string_t getInReplyTo() const;
    bool inReplyToIsSet() const;
    void unsetInReplyTo();

    void setInReplyTo(const utility::string_t& value);

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
    /// 
    /// </summary>
    bool isFavourite() const;
    bool favouriteIsSet() const;
    void unsetFavourite();

    void setFavourite(bool value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getBodyPartContentTypes();
    bool bodyPartContentTypesIsSet() const;
    void unsetBodyPartContentTypes();

    void setBodyPartContentTypes(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPlusAddress() const;
    bool plusAddressIsSet() const;
    void unsetPlusAddress();

    void setPlusAddress(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getSizeBytes() const;
    bool sizeBytesIsSet() const;
    void unsetSizeBytes();

    void setSizeBytes(int64_t value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_InboxId;
    bool m_InboxIdIsSet;
    utility::string_t m_DomainId;
    bool m_DomainIdIsSet;
    utility::string_t m_Subject;
    bool m_SubjectIsSet;
    std::vector<utility::string_t> m_To;
    bool m_ToIsSet;
    utility::string_t m_From;
    bool m_FromIsSet;
    std::vector<utility::string_t> m_Bcc;
    bool m_BccIsSet;
    std::vector<utility::string_t> m_Cc;
    bool m_CcIsSet;
    utility::datetime m_CreatedAt;
    bool m_CreatedAtIsSet;
    bool m_Read;
    bool m_ReadIsSet;
    std::vector<utility::string_t> m_Attachments;
    bool m_AttachmentsIsSet;
    utility::string_t m_ThreadId;
    bool m_ThreadIdIsSet;
    utility::string_t m_MessageId;
    bool m_MessageIdIsSet;
    utility::string_t m_InReplyTo;
    bool m_InReplyToIsSet;
    std::shared_ptr<Sender> m_Sender;
    bool m_SenderIsSet;
    std::shared_ptr<EmailRecipients> m_Recipients;
    bool m_RecipientsIsSet;
    bool m_Favourite;
    bool m_FavouriteIsSet;
    std::vector<utility::string_t> m_BodyPartContentTypes;
    bool m_BodyPartContentTypesIsSet;
    utility::string_t m_PlusAddress;
    bool m_PlusAddressIsSet;
    int64_t m_SizeBytes;
    bool m_SizeBytesIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_EmailPreview_H_ */
