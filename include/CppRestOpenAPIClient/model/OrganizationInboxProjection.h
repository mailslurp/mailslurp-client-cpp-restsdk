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
 * OrganizationInboxProjection.h
 *
 * Organization team inbox
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_OrganizationInboxProjection_H_
#define COM_MAILSLURP_CLIENT_MODEL_OrganizationInboxProjection_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// Organization team inbox
/// </summary>
class  OrganizationInboxProjection
    : public ModelBase
{
public:
    OrganizationInboxProjection();
    virtual ~OrganizationInboxProjection();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// OrganizationInboxProjection members

    /// <summary>
    /// ID of the inbox. The ID is a UUID-V4 format string. Use the inboxId for calls to Inbox and Email Controller endpoints. See the emailAddress property for the email address or the inbox. To get emails in an inbox use the WaitFor and Inbox Controller methods &#x60;waitForLatestEmail&#x60; and &#x60;getEmails&#x60; methods respectively. Inboxes can be used with aliases to forward emails automatically.
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// ID of custom domain used by the inbox if any
    /// </summary>
    utility::string_t getDomainId() const;
    bool domainIdIsSet() const;
    void unsetDomainId();

    void setDomainId(const utility::string_t& value);

    /// <summary>
    /// When the inbox was created. Time stamps are in ISO DateTime Format &#x60;yyyy-MM-dd&#39;T&#39;HH:mm:ss.SSSXXX&#x60; e.g. &#x60;2000-10-31T01:30:00.000-05:00&#x60;.
    /// </summary>
    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetCreatedAt();

    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// Name of the inbox and used as the sender name when sending emails .Displayed in the dashboard for easier search
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// The inbox&#39;s email address. Inbox projections and previews may not include the email address. To view the email address fetch the inbox entity directly. Send an email to this address and the inbox will receive and store it for you. Note the email address in MailSlurp match characters exactly and are case sensitive so &#x60;+123&#x60; additions are considered different addresses. To retrieve the email use the Inbox and Email Controller endpoints with the inbox ID.
    /// </summary>
    utility::string_t getEmailAddress() const;
    bool emailAddressIsSet() const;
    void unsetEmailAddress();

    void setEmailAddress(const utility::string_t& value);

    /// <summary>
    /// Is the inbox a favorite inbox. Make an inbox a favorite is typically done in the dashboard for quick access or filtering
    /// </summary>
    bool isFavourite() const;
    bool favouriteIsSet() const;
    void unsetFavourite();

    void setFavourite(bool value);

    /// <summary>
    /// Tags that inbox has been tagged with. Tags can be added to inboxes to group different inboxes within an account. You can also search for inboxes by tag in the dashboard UI.
    /// </summary>
    std::vector<utility::string_t>& getTags();
    bool tagsIsSet() const;
    void unsetTags();

    void setTags(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Does inbox permit team access for organization team members. If so team users can use inbox and emails associated with it. See the team access guide at https://www.mailslurp.com/guides/team-email-account-sharing/
    /// </summary>
    bool isTeamAccess() const;
    bool teamAccessIsSet() const;
    void unsetTeamAccess();

    void setTeamAccess(bool value);

    /// <summary>
    /// Type of inbox. HTTP inboxes are faster and better for most cases. SMTP inboxes are more suited for public facing inbound messages (but cannot send).
    /// </summary>
    utility::string_t getInboxType() const;
    bool inboxTypeIsSet() const;
    void unsetInboxType();

    void setInboxType(const utility::string_t& value);

    /// <summary>
    /// Is the inbox readOnly for the caller. Read only means can not be deleted or modified. This flag is present when using team accounts and shared inboxes.
    /// </summary>
    bool isReadOnly() const;
    bool readOnlyIsSet() const;
    void unsetReadOnly();

    void setReadOnly(bool value);

    /// <summary>
    /// Virtual inbox can receive email but will not send emails to real recipients. Will save sent email record but never send an actual email. Perfect for testing mail server actions.
    /// </summary>
    bool isVirtualInbox() const;
    bool virtualInboxIsSet() const;
    void unsetVirtualInbox();

    void setVirtualInbox(bool value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_DomainId;
    bool m_DomainIdIsSet;
    utility::datetime m_CreatedAt;
    bool m_CreatedAtIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_EmailAddress;
    bool m_EmailAddressIsSet;
    bool m_Favourite;
    bool m_FavouriteIsSet;
    std::vector<utility::string_t> m_Tags;
    bool m_TagsIsSet;
    bool m_TeamAccess;
    bool m_TeamAccessIsSet;
    utility::string_t m_InboxType;
    bool m_InboxTypeIsSet;
    bool m_ReadOnly;
    bool m_ReadOnlyIsSet;
    bool m_VirtualInbox;
    bool m_VirtualInboxIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_OrganizationInboxProjection_H_ */
