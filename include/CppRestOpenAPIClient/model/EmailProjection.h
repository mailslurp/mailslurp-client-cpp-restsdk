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
 * EmailProjection.h
 *
 * A compact representation of a full email. Used in list endpoints to keep response sizes low. Body and attachments are not included. To get all fields of the email use the &#x60;getEmail&#x60; method with the email projection&#39;s ID. See &#x60;EmailDto&#x60; for documentation on projection properties.
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_EmailProjection_H_
#define COM_MAILSLURP_CLIENT_MODEL_EmailProjection_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// A compact representation of a full email. Used in list endpoints to keep response sizes low. Body and attachments are not included. To get all fields of the email use the &#x60;getEmail&#x60; method with the email projection&#39;s ID. See &#x60;EmailDto&#x60; for documentation on projection properties.
/// </summary>
class  EmailProjection
    : public ModelBase
{
public:
    EmailProjection();
    virtual ~EmailProjection();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// EmailProjection members

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
    utility::string_t getFrom() const;
    bool fromIsSet() const;
    void unsetFrom();

    void setFrom(const utility::string_t& value);

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
    utility::string_t getInboxId() const;
    bool inboxIdIsSet() const;
    void unsetInboxId();

    void setInboxId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetCreatedAt();

    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getAttachments();
    bool attachmentsIsSet() const;
    void unsetAttachments();

    void setAttachments(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getTo();
    bool toIsSet() const;
    void unsetTo();

    void setTo(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getBcc();
    bool bccIsSet() const;
    void unsetBcc();

    void setBcc(const std::vector<utility::string_t>& value);

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
    utility::string_t getDomainId() const;
    bool domainIdIsSet() const;
    void unsetDomainId();

    void setDomainId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getBodyMD5Hash() const;
    bool bodyMD5HashIsSet() const;
    void unsetBodyMD5Hash();

    void setBodyMD5Hash(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    bool isRead() const;
    bool readIsSet() const;
    void unsetRead();

    void setRead(bool value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getBodyExcerpt() const;
    bool bodyExcerptIsSet() const;
    void unsetBodyExcerpt();

    void setBodyExcerpt(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    bool isTeamAccess() const;
    bool teamAccessIsSet() const;
    void unsetTeamAccess();

    void setTeamAccess(bool value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_From;
    bool m_FromIsSet;
    utility::string_t m_Subject;
    bool m_SubjectIsSet;
    utility::string_t m_InboxId;
    bool m_InboxIdIsSet;
    utility::datetime m_CreatedAt;
    bool m_CreatedAtIsSet;
    std::vector<utility::string_t> m_Attachments;
    bool m_AttachmentsIsSet;
    std::vector<utility::string_t> m_To;
    bool m_ToIsSet;
    std::vector<utility::string_t> m_Bcc;
    bool m_BccIsSet;
    std::vector<utility::string_t> m_Cc;
    bool m_CcIsSet;
    utility::string_t m_DomainId;
    bool m_DomainIdIsSet;
    utility::string_t m_BodyMD5Hash;
    bool m_BodyMD5HashIsSet;
    bool m_Read;
    bool m_ReadIsSet;
    utility::string_t m_BodyExcerpt;
    bool m_BodyExcerptIsSet;
    bool m_TeamAccess;
    bool m_TeamAccessIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_EmailProjection_H_ */
