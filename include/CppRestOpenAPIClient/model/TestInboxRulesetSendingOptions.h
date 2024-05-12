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
 * TestInboxRulesetSendingOptions.h
 *
 * Test options for inbox ruleset sending test
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_TestInboxRulesetSendingOptions_H_
#define COM_MAILSLURP_CLIENT_MODEL_TestInboxRulesetSendingOptions_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// Test options for inbox ruleset sending test
/// </summary>
class  TestInboxRulesetSendingOptions
    : public ModelBase
{
public:
    TestInboxRulesetSendingOptions();
    virtual ~TestInboxRulesetSendingOptions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// TestInboxRulesetSendingOptions members

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
    utility::string_t getRecipient() const;
    bool recipientIsSet() const;
    void unsetRecipient();

    void setRecipient(const utility::string_t& value);


protected:
    utility::string_t m_InboxId;
    bool m_InboxIdIsSet;
    utility::string_t m_Recipient;
    bool m_RecipientIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_TestInboxRulesetSendingOptions_H_ */
