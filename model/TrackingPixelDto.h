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
 * TrackingPixelDto.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_TrackingPixelDto_H_
#define COM_MAILSLURP_CLIENT_MODEL_TrackingPixelDto_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  TrackingPixelDto
    : public ModelBase
{
public:
    TrackingPixelDto();
    virtual ~TrackingPixelDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// TrackingPixelDto members

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
    bool isSeen() const;
    bool seenIsSet() const;
    void unsetSeen();

    void setSeen(bool value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getRecipient() const;
    bool recipientIsSet() const;
    void unsetRecipient();

    void setRecipient(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getHtml() const;
    bool htmlIsSet() const;
    void unsetHtml();

    void setHtml(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getUrl() const;
    bool urlIsSet() const;
    void unsetUrl();

    void setUrl(const utility::string_t& value);

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
    utility::string_t getSentEmailId() const;
    bool sentEmailIdIsSet() const;
    void unsetSentEmailId();

    void setSentEmailId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getSeenAt() const;
    bool seenAtIsSet() const;
    void unsetSeenAt();

    void setSeenAt(const utility::datetime& value);

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
    bool m_Seen;
    bool m_SeenIsSet;
    utility::string_t m_Recipient;
    bool m_RecipientIsSet;
    utility::string_t m_Html;
    bool m_HtmlIsSet;
    utility::string_t m_Url;
    bool m_UrlIsSet;
    utility::string_t m_InboxId;
    bool m_InboxIdIsSet;
    utility::string_t m_SentEmailId;
    bool m_SentEmailIdIsSet;
    utility::datetime m_SeenAt;
    bool m_SeenAtIsSet;
    utility::datetime m_CreatedAt;
    bool m_CreatedAtIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_TrackingPixelDto_H_ */
