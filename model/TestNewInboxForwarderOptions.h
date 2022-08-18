/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://docs.mailslurp.com/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * TestNewInboxForwarderOptions.h
 *
 * Options for testing new inbox forwarder rules
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_TestNewInboxForwarderOptions_H_
#define COM_MAILSLURP_CLIENT_MODEL_TestNewInboxForwarderOptions_H_


#include "../ModelBase.h"

#include "CreateInboxForwarderOptions.h"
#include "InboxForwarderTestOptions.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// Options for testing new inbox forwarder rules
/// </summary>
class  TestNewInboxForwarderOptions
    : public ModelBase
{
public:
    TestNewInboxForwarderOptions();
    virtual ~TestNewInboxForwarderOptions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// TestNewInboxForwarderOptions members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<InboxForwarderTestOptions> getInboxForwarderTestOptions() const;
    bool inboxForwarderTestOptionsIsSet() const;
    void unsetInboxForwarderTestOptions();

    void setInboxForwarderTestOptions(const std::shared_ptr<InboxForwarderTestOptions>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CreateInboxForwarderOptions> getCreateInboxForwarderOptions() const;
    bool createInboxForwarderOptionsIsSet() const;
    void unsetCreateInboxForwarderOptions();

    void setCreateInboxForwarderOptions(const std::shared_ptr<CreateInboxForwarderOptions>& value);


protected:
    std::shared_ptr<InboxForwarderTestOptions> m_InboxForwarderTestOptions;
    bool m_InboxForwarderTestOptionsIsSet;
    std::shared_ptr<CreateInboxForwarderOptions> m_CreateInboxForwarderOptions;
    bool m_CreateInboxForwarderOptionsIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_TestNewInboxForwarderOptions_H_ */
