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
 * CreateAliasOptions.h
 *
 * Create email alias options. Email aliases can be used to mask real email addresses behind an ID. You can also attach an inbox to an alias so that any email received by the inbox email address if forwarded to the alias email address.
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_CreateAliasOptions_H_
#define COM_MAILSLURP_CLIENT_MODEL_CreateAliasOptions_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// Create email alias options. Email aliases can be used to mask real email addresses behind an ID. You can also attach an inbox to an alias so that any email received by the inbox email address if forwarded to the alias email address.
/// </summary>
class  CreateAliasOptions
    : public ModelBase
{
public:
    CreateAliasOptions();
    virtual ~CreateAliasOptions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CreateAliasOptions members

    /// <summary>
    /// Email address to be hidden behind alias. Emails sent to the alias email address will be forwarded to this address. If you want to enable replies set useThreads true and the reply-to for the email will allow outbound communication via a thread.
    /// </summary>
    utility::string_t getEmailAddress() const;
    bool emailAddressIsSet() const;
    void unsetEmailAddress();

    void setEmailAddress(const utility::string_t& value);

    /// <summary>
    /// Optional inbox ID to attach to alias. Null by default means an a new inbox will be created for the alias. Use a custom inbox to control what email address the alias uses. To use custom email addresses create a domain and an inbox, the use the inbox ID with this call. Emails received by this inbox will be forwarded to the alias email address
    /// </summary>
    utility::string_t getInboxId() const;
    bool inboxIdIsSet() const;
    void unsetInboxId();

    void setInboxId(const utility::string_t& value);

    /// <summary>
    /// Optional name for alias
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// Enable threads options. If true emails will be sent with a unique reply-to thread address. This means you can reply to the forwarded email and it will be sent to the recipients via your alias address. That way a thread conversation is preserved.
    /// </summary>
    bool isUseThreads() const;
    bool useThreadsIsSet() const;
    void unsetUseThreads();

    void setUseThreads(bool value);


protected:
    utility::string_t m_EmailAddress;
    bool m_EmailAddressIsSet;
    utility::string_t m_InboxId;
    bool m_InboxIdIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    bool m_UseThreads;
    bool m_UseThreadsIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_CreateAliasOptions_H_ */
