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
 * CreateInboxDto.h
 *
 * Options for creating an inbox. An inbox has a real email address that can send and receive emails. Inboxes can be permanent or expire at a given time. Inboxes are either &#x60;SMTP&#x60; or &#x60;HTTP&#x60; mailboxes. Use &#x60;SMTP&#x60; for public facing mailboxes and &#x60;HTTP&#x60; for test email accounts. &#x60;SMTP&#x60; inboxes are processed by a mail server running at &#x60;mx.mailslurp.com&#x60; while &#x60;HTTP&#x60; inboxes are processed by AWS SES. Inboxes can use a custom email address (by verifying your own domain) or a randomly assigned email ending in either &#x60;mailslurp.com&#x60; or (if &#x60;useDomainPool&#x60; is enabled) ending in a similar domain such as &#x60;mailslurp.xyz&#x60; (selected at random). 
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_CreateInboxDto_H_
#define COM_MAILSLURP_CLIENT_MODEL_CreateInboxDto_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// Options for creating an inbox. An inbox has a real email address that can send and receive emails. Inboxes can be permanent or expire at a given time. Inboxes are either &#x60;SMTP&#x60; or &#x60;HTTP&#x60; mailboxes. Use &#x60;SMTP&#x60; for public facing mailboxes and &#x60;HTTP&#x60; for test email accounts. &#x60;SMTP&#x60; inboxes are processed by a mail server running at &#x60;mx.mailslurp.com&#x60; while &#x60;HTTP&#x60; inboxes are processed by AWS SES. Inboxes can use a custom email address (by verifying your own domain) or a randomly assigned email ending in either &#x60;mailslurp.com&#x60; or (if &#x60;useDomainPool&#x60; is enabled) ending in a similar domain such as &#x60;mailslurp.xyz&#x60; (selected at random). 
/// </summary>
class  CreateInboxDto
    : public ModelBase
{
public:
    CreateInboxDto();
    virtual ~CreateInboxDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CreateInboxDto members

    /// <summary>
    /// Grant team access to this inbox and the emails that belong to it for team members of your organization.
    /// </summary>
    bool isAllowTeamAccess() const;
    bool allowTeamAccessIsSet() const;
    void unsetAllowTeamAccess();

    void setAllowTeamAccess(bool value);

    /// <summary>
    /// Optional description of the inbox for labelling purposes. Is shown in the dashboard and can be used with
    /// </summary>
    utility::string_t getDescription() const;
    bool descriptionIsSet() const;
    void unsetDescription();

    void setDescription(const utility::string_t& value);

    /// <summary>
    /// A custom email address to use with the inbox. Defaults to null. When null MailSlurp will assign a random email address to the inbox such as &#x60;123@mailslurp.com&#x60;. If you use the &#x60;useDomainPool&#x60; option when the email address is null it will generate an email address with a more varied domain ending such as &#x60;123@mailslurp.info&#x60; or &#x60;123@mailslurp.biz&#x60;. When a custom email address is provided the address is split into a domain and the domain is queried against your user. If you have created the domain in the MailSlurp dashboard and verified it you can use any email address that ends with the domain. Note domain types must match the inbox type - so &#x60;SMTP&#x60; inboxes will only work with &#x60;SMTP&#x60; type domains. Send an email to this address and the inbox will receive and store it for you. To retrieve the email use the Inbox and Email Controller endpoints with the inbox ID.
    /// </summary>
    utility::string_t getEmailAddress() const;
    bool emailAddressIsSet() const;
    void unsetEmailAddress();

    void setEmailAddress(const utility::string_t& value);

    /// <summary>
    /// Optional inbox expiration date. If null then this inbox is permanent and the emails in it won&#39;t be deleted. If an expiration date is provided or is required by your plan the inbox will be closed when the expiration time is reached. Expired inboxes still contain their emails but can no longer send or receive emails. An ExpiredInboxRecord is created when an inbox and the email address and inbox ID are recorded. The expiresAt property is a timestamp string in ISO DateTime Format yyyy-MM-dd&#39;T&#39;HH:mm:ss.SSSXXX.
    /// </summary>
    utility::datetime getExpiresAt() const;
    bool expiresAtIsSet() const;
    void unsetExpiresAt();

    void setExpiresAt(const utility::datetime& value);

    /// <summary>
    /// Number of milliseconds that inbox should exist for
    /// </summary>
    int64_t getExpiresIn() const;
    bool expiresInIsSet() const;
    void unsetExpiresIn();

    void setExpiresIn(int64_t value);

    /// <summary>
    /// Is the inbox a favorite. Marking an inbox as a favorite is typically done in the dashboard for quick access or filtering
    /// </summary>
    bool isFavourite() const;
    bool favouriteIsSet() const;
    void unsetFavourite();

    void setFavourite(bool value);

    /// <summary>
    /// HTTP (default) or SMTP inbox type. HTTP inboxes are best for testing while SMTP inboxes are more reliable for public inbound email consumption. When using custom domains the domain type must match the inbox type. HTTP inboxes are processed by AWS SES while SMTP inboxes use a custom mail server running at &#x60;mx.mailslurp.com&#x60;.
    /// </summary>
    utility::string_t getInboxType() const;
    bool inboxTypeIsSet() const;
    void unsetInboxType();

    void setInboxType(const utility::string_t& value);

    /// <summary>
    /// Optional name of the inbox. Displayed in the dashboard for easier search and used as the sender name when sending emails.
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// Tags that inbox has been tagged with. Tags can be added to inboxes to group different inboxes within an account. You can also search for inboxes by tag in the dashboard UI.
    /// </summary>
    std::vector<utility::string_t>& getTags();
    bool tagsIsSet() const;
    void unsetTags();

    void setTags(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Use the MailSlurp domain name pool with this inbox when creating the email address. Defaults to null. If enabled the inbox will be an email address with a domain randomly chosen from a list of the MailSlurp domains. This is useful when the default &#x60;@mailslurp.com&#x60; email addresses used with inboxes are blocked or considered spam by a provider or receiving service. When domain pool is enabled an email address will be generated ending in &#x60;@mailslurp.{world,info,xyz,...}&#x60; . This means a TLD is randomly selecting from a list of &#x60;.biz&#x60;, &#x60;.info&#x60;, &#x60;.xyz&#x60; etc to add variance to the generated email addresses. When null or false MailSlurp uses the default behavior of &#x60;@mailslurp.com&#x60; or custom email address provided by the emailAddress field. Note this feature is only available for &#x60;HTTP&#x60; inbox types.
    /// </summary>
    bool isUseDomainPool() const;
    bool useDomainPoolIsSet() const;
    void unsetUseDomainPool();

    void setUseDomainPool(bool value);


protected:
    bool m_AllowTeamAccess;
    bool m_AllowTeamAccessIsSet;
    utility::string_t m_Description;
    bool m_DescriptionIsSet;
    utility::string_t m_EmailAddress;
    bool m_EmailAddressIsSet;
    utility::datetime m_ExpiresAt;
    bool m_ExpiresAtIsSet;
    int64_t m_ExpiresIn;
    bool m_ExpiresInIsSet;
    bool m_Favourite;
    bool m_FavouriteIsSet;
    utility::string_t m_InboxType;
    bool m_InboxTypeIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    std::vector<utility::string_t> m_Tags;
    bool m_TagsIsSet;
    bool m_UseDomainPool;
    bool m_UseDomainPoolIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_CreateInboxDto_H_ */
