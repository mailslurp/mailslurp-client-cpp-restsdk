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
 * ExpiredInboxDto.h
 *
 * Expired inbox
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_ExpiredInboxDto_H_
#define COM_MAILSLURP_CLIENT_MODEL_ExpiredInboxDto_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// Expired inbox
/// </summary>
class  ExpiredInboxDto
    : public ModelBase
{
public:
    ExpiredInboxDto();
    virtual ~ExpiredInboxDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ExpiredInboxDto members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getEmailAddress() const;
    bool emailAddressIsSet() const;
    void unsetEmailAddress();

    void setEmailAddress(const utility::string_t& value);

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


protected:
    utility::string_t m_EmailAddress;
    bool m_EmailAddressIsSet;
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_InboxId;
    bool m_InboxIdIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_ExpiredInboxDto_H_ */
