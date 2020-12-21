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
 * EmailPreview.h
 *
 * Preview of an email message. For full message (including body and attachments) call the &#x60;getEmail&#x60; or other email endpoints with the provided email ID.
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_EmailPreview_H_
#define COM_MAILSLURP_CLIENT_MODEL_EmailPreview_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


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
    /// List of IDs of attachments found in the email. Use these IDs with the Inbox and Email Controllers to download attachments and attachment meta data such as filesize, name, extension.
    /// </summary>
    std::vector<utility::string_t>& getAttachments();
    bool attachmentsIsSet() const;
    void unsetAttachments();

    void setAttachments(const std::vector<utility::string_t>& value);

    /// <summary>
    /// List of &#x60;BCC&#x60; recipients email was addressed to
    /// </summary>
    std::vector<utility::string_t>& getBcc();
    bool bccIsSet() const;
    void unsetBcc();

    void setBcc(const std::vector<utility::string_t>& value);

    /// <summary>
    /// List of &#x60;CC&#x60; recipients email was addressed to
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
    /// Who the email was sent from
    /// </summary>
    utility::string_t getFrom() const;
    bool fromIsSet() const;
    void unsetFrom();

    void setFrom(const utility::string_t& value);

    /// <summary>
    /// ID of the email
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// Has the email been viewed ever
    /// </summary>
    bool isRead() const;
    bool readIsSet() const;
    void unsetRead();

    void setRead(bool value);

    /// <summary>
    /// The subject line of the email message
    /// </summary>
    utility::string_t getSubject() const;
    bool subjectIsSet() const;
    void unsetSubject();

    void setSubject(const utility::string_t& value);

    /// <summary>
    /// List of &#x60;To&#x60; recipients email was addressed to
    /// </summary>
    std::vector<utility::string_t>& getTo();
    bool toIsSet() const;
    void unsetTo();

    void setTo(const std::vector<utility::string_t>& value);


protected:
    std::vector<utility::string_t> m_Attachments;
    bool m_AttachmentsIsSet;
    std::vector<utility::string_t> m_Bcc;
    bool m_BccIsSet;
    std::vector<utility::string_t> m_Cc;
    bool m_CcIsSet;
    utility::datetime m_CreatedAt;
    bool m_CreatedAtIsSet;
    utility::string_t m_From;
    bool m_FromIsSet;
    utility::string_t m_Id;
    bool m_IdIsSet;
    bool m_Read;
    bool m_ReadIsSet;
    utility::string_t m_Subject;
    bool m_SubjectIsSet;
    std::vector<utility::string_t> m_To;
    bool m_ToIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_EmailPreview_H_ */
