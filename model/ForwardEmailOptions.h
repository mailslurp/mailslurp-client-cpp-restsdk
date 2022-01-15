/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://www.mailslurp.com/docs/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * ForwardEmailOptions.h
 *
 * Options for forwarding an email
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_ForwardEmailOptions_H_
#define COM_MAILSLURP_CLIENT_MODEL_ForwardEmailOptions_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// Options for forwarding an email
/// </summary>
class  ForwardEmailOptions
    : public ModelBase
{
public:
    ForwardEmailOptions();
    virtual ~ForwardEmailOptions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ForwardEmailOptions members

    /// <summary>
    /// To recipients for forwarded email
    /// </summary>
    std::vector<utility::string_t>& getTo();
    bool toIsSet() const;
    void unsetTo();

    void setTo(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Subject for forwarded email
    /// </summary>
    utility::string_t getSubject() const;
    bool subjectIsSet() const;
    void unsetSubject();

    void setSubject(const utility::string_t& value);

    /// <summary>
    /// Optional cc recipients
    /// </summary>
    std::vector<utility::string_t>& getCc();
    bool ccIsSet() const;
    void unsetCc();

    void setCc(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Optional bcc recipients
    /// </summary>
    std::vector<utility::string_t>& getBcc();
    bool bccIsSet() const;
    void unsetBcc();

    void setBcc(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Optional from override
    /// </summary>
    utility::string_t getFrom() const;
    bool fromIsSet() const;
    void unsetFrom();

    void setFrom(const utility::string_t& value);

    /// <summary>
    /// Optionally use inbox name as display name for sender email address
    /// </summary>
    bool isUseInboxName() const;
    bool useInboxNameIsSet() const;
    void unsetUseInboxName();

    void setUseInboxName(bool value);


protected:
    std::vector<utility::string_t> m_To;
    bool m_ToIsSet;
    utility::string_t m_Subject;
    bool m_SubjectIsSet;
    std::vector<utility::string_t> m_Cc;
    bool m_CcIsSet;
    std::vector<utility::string_t> m_Bcc;
    bool m_BccIsSet;
    utility::string_t m_From;
    bool m_FromIsSet;
    bool m_UseInboxName;
    bool m_UseInboxNameIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_ForwardEmailOptions_H_ */
