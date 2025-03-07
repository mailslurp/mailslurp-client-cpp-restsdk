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
 * BulkSendEmailOptions.h
 *
 * Options for bulk sending an email from multiple addresses. See regular &#x60;sendEmail&#x60; methods for more information.
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_BulkSendEmailOptions_H_
#define COM_MAILSLURP_CLIENT_MODEL_BulkSendEmailOptions_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>
#include "CppRestOpenAPIClient/model/SendEmailOptions.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {

class SendEmailOptions;

/// <summary>
/// Options for bulk sending an email from multiple addresses. See regular &#x60;sendEmail&#x60; methods for more information.
/// </summary>
class  BulkSendEmailOptions
    : public ModelBase
{
public:
    BulkSendEmailOptions();
    virtual ~BulkSendEmailOptions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BulkSendEmailOptions members

    /// <summary>
    /// Inboxes to send the email from
    /// </summary>
    std::vector<utility::string_t>& getInboxIds();
    bool inboxIdsIsSet() const;
    void unsetInboxIds();

    void setInboxIds(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<SendEmailOptions> getSendEmailOptions() const;
    bool sendEmailOptionsIsSet() const;
    void unsetSendEmailOptions();

    void setSendEmailOptions(const std::shared_ptr<SendEmailOptions>& value);


protected:
    std::vector<utility::string_t> m_InboxIds;
    bool m_InboxIdsIsSet;
    std::shared_ptr<SendEmailOptions> m_SendEmailOptions;
    bool m_SendEmailOptionsIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_BulkSendEmailOptions_H_ */
