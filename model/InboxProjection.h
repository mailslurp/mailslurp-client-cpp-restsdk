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
 * InboxProjection.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_InboxProjection_H_
#define COM_MAILSLURP_CLIENT_MODEL_InboxProjection_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  InboxProjection
    : public ModelBase
{
public:
    InboxProjection();
    virtual ~InboxProjection();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// InboxProjection members

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetCreatedAt();

    void setCreatedAt(const utility::datetime& value);

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
    bool isFavourite() const;
    bool favouriteIsSet() const;
    void unsetFavourite();

    void setFavourite(bool value);

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
    utility::string_t getInboxType() const;
    bool inboxTypeIsSet() const;
    void unsetInboxType();

    void setInboxType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getTags();
    bool tagsIsSet() const;
    void unsetTags();

    void setTags(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    bool isTeamAccess() const;
    bool teamAccessIsSet() const;
    void unsetTeamAccess();

    void setTeamAccess(bool value);


protected:
    utility::datetime m_CreatedAt;
    bool m_CreatedAtIsSet;
    utility::string_t m_EmailAddress;
    bool m_EmailAddressIsSet;
    bool m_Favourite;
    bool m_FavouriteIsSet;
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_InboxType;
    bool m_InboxTypeIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    std::vector<utility::string_t> m_Tags;
    bool m_TagsIsSet;
    bool m_TeamAccess;
    bool m_TeamAccessIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_InboxProjection_H_ */
