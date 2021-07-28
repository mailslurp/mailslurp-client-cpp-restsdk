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
 * TestNewInboxRulesetOptions.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_TestNewInboxRulesetOptions_H_
#define COM_MAILSLURP_CLIENT_MODEL_TestNewInboxRulesetOptions_H_


#include "../ModelBase.h"

#include "CreateInboxRulesetOptions.h"
#include "InboxRulesetTestOptions.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  TestNewInboxRulesetOptions
    : public ModelBase
{
public:
    TestNewInboxRulesetOptions();
    virtual ~TestNewInboxRulesetOptions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// TestNewInboxRulesetOptions members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<InboxRulesetTestOptions> getInboxRulesetTestOptions() const;
    bool inboxRulesetTestOptionsIsSet() const;
    void unsetInboxRulesetTestOptions();

    void setInboxRulesetTestOptions(const std::shared_ptr<InboxRulesetTestOptions>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CreateInboxRulesetOptions> getCreateInboxRulesetOptions() const;
    bool createInboxRulesetOptionsIsSet() const;
    void unsetCreateInboxRulesetOptions();

    void setCreateInboxRulesetOptions(const std::shared_ptr<CreateInboxRulesetOptions>& value);


protected:
    std::shared_ptr<InboxRulesetTestOptions> m_InboxRulesetTestOptions;
    bool m_InboxRulesetTestOptionsIsSet;
    std::shared_ptr<CreateInboxRulesetOptions> m_CreateInboxRulesetOptions;
    bool m_CreateInboxRulesetOptionsIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_TestNewInboxRulesetOptions_H_ */
