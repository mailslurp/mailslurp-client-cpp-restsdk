/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://www.mailslurp.com/docs/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * GroupContactsDto.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_GroupContactsDto_H_
#define COM_MAILSLURP_CLIENT_MODEL_GroupContactsDto_H_


#include "../ModelBase.h"

#include "ContactDto.h"
#include <vector>
#include "GroupDto.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  GroupContactsDto
    : public ModelBase
{
public:
    GroupContactsDto();
    virtual ~GroupContactsDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// GroupContactsDto members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<GroupDto> getGroup() const;
    bool groupIsSet() const;
    void unsetGroup();

    void setGroup(const std::shared_ptr<GroupDto>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<ContactDto>>& getContacts();
    bool contactsIsSet() const;
    void unsetContacts();

    void setContacts(const std::vector<std::shared_ptr<ContactDto>>& value);


protected:
    std::shared_ptr<GroupDto> m_Group;
    bool m_GroupIsSet;
    std::vector<std::shared_ptr<ContactDto>> m_Contacts;
    bool m_ContactsIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_GroupContactsDto_H_ */
