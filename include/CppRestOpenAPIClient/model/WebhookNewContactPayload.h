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
 * WebhookNewContactPayload.h
 *
 * NEW_CONTACT webhook payload. Sent to your webhook url endpoint via HTTP POST when an email is received by the inbox that your webhook is attached to that contains a recipient that has not been saved as a contact.
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_WebhookNewContactPayload_H_
#define COM_MAILSLURP_CLIENT_MODEL_WebhookNewContactPayload_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/Object.h"
#include <vector>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// NEW_CONTACT webhook payload. Sent to your webhook url endpoint via HTTP POST when an email is received by the inbox that your webhook is attached to that contains a recipient that has not been saved as a contact.
/// </summary>
class  WebhookNewContactPayload
    : public ModelBase
{
public:
    WebhookNewContactPayload();
    virtual ~WebhookNewContactPayload();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// WebhookNewContactPayload members

    /// <summary>
    /// Idempotent message ID. Store this ID locally or in a database to prevent message duplication.
    /// </summary>
    utility::string_t getMessageId() const;
    bool messageIdIsSet() const;
    void unsetMessageId();

    void setMessageId(const utility::string_t& value);

    /// <summary>
    /// ID of webhook entity being triggered
    /// </summary>
    utility::string_t getWebhookId() const;
    bool webhookIdIsSet() const;
    void unsetWebhookId();

    void setWebhookId(const utility::string_t& value);

    /// <summary>
    /// Name of the webhook being triggered
    /// </summary>
    utility::string_t getWebhookName() const;
    bool webhookNameIsSet() const;
    void unsetWebhookName();

    void setWebhookName(const utility::string_t& value);

    /// <summary>
    /// Name of the event type webhook is being triggered for.
    /// </summary>
    utility::string_t getEventName() const;
    bool eventNameIsSet() const;
    void unsetEventName();

    void setEventName(const utility::string_t& value);

    /// <summary>
    /// Contact ID
    /// </summary>
    utility::string_t getContactId() const;
    bool contactIdIsSet() const;
    void unsetContactId();

    void setContactId(const utility::string_t& value);

    /// <summary>
    /// Contact group ID
    /// </summary>
    utility::string_t getGroupId() const;
    bool groupIdIsSet() const;
    void unsetGroupId();

    void setGroupId(const utility::string_t& value);

    /// <summary>
    /// Contact first name
    /// </summary>
    utility::string_t getFirstName() const;
    bool firstNameIsSet() const;
    void unsetFirstName();

    void setFirstName(const utility::string_t& value);

    /// <summary>
    /// Contact last name
    /// </summary>
    utility::string_t getLastName() const;
    bool lastNameIsSet() const;
    void unsetLastName();

    void setLastName(const utility::string_t& value);

    /// <summary>
    /// Contact company name
    /// </summary>
    utility::string_t getCompany() const;
    bool companyIsSet() const;
    void unsetCompany();

    void setCompany(const utility::string_t& value);

    /// <summary>
    /// Primary email address for contact
    /// </summary>
    utility::string_t getPrimaryEmailAddress() const;
    bool primaryEmailAddressIsSet() const;
    void unsetPrimaryEmailAddress();

    void setPrimaryEmailAddress(const utility::string_t& value);

    /// <summary>
    /// Email addresses for contact
    /// </summary>
    std::vector<utility::string_t>& getEmailAddresses();
    bool emailAddressesIsSet() const;
    void unsetEmailAddresses();

    void setEmailAddresses(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Tags for contact
    /// </summary>
    std::vector<utility::string_t>& getTags();
    bool tagsIsSet() const;
    void unsetTags();

    void setTags(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Object> getMetaData() const;
    bool metaDataIsSet() const;
    void unsetMetaData();

    void setMetaData(const std::shared_ptr<Object>& value);

    /// <summary>
    /// Has contact opted out of emails
    /// </summary>
    bool isOptOut() const;
    bool optOutIsSet() const;
    void unsetOptOut();

    void setOptOut(bool value);

    /// <summary>
    /// Date time of event creation
    /// </summary>
    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetCreatedAt();

    void setCreatedAt(const utility::datetime& value);


protected:
    utility::string_t m_MessageId;
    bool m_MessageIdIsSet;
    utility::string_t m_WebhookId;
    bool m_WebhookIdIsSet;
    utility::string_t m_WebhookName;
    bool m_WebhookNameIsSet;
    utility::string_t m_EventName;
    bool m_EventNameIsSet;
    utility::string_t m_ContactId;
    bool m_ContactIdIsSet;
    utility::string_t m_GroupId;
    bool m_GroupIdIsSet;
    utility::string_t m_FirstName;
    bool m_FirstNameIsSet;
    utility::string_t m_LastName;
    bool m_LastNameIsSet;
    utility::string_t m_Company;
    bool m_CompanyIsSet;
    utility::string_t m_PrimaryEmailAddress;
    bool m_PrimaryEmailAddressIsSet;
    std::vector<utility::string_t> m_EmailAddresses;
    bool m_EmailAddressesIsSet;
    std::vector<utility::string_t> m_Tags;
    bool m_TagsIsSet;
    std::shared_ptr<Object> m_MetaData;
    bool m_MetaDataIsSet;
    bool m_OptOut;
    bool m_OptOutIsSet;
    utility::datetime m_CreatedAt;
    bool m_CreatedAtIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_WebhookNewContactPayload_H_ */
