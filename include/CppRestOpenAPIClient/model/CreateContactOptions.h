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
 * CreateContactOptions.h
 *
 * Options for creating an email contact in address book
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_CreateContactOptions_H_
#define COM_MAILSLURP_CLIENT_MODEL_CreateContactOptions_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/Object.h"
#include <vector>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// Options for creating an email contact in address book
/// </summary>
class  CreateContactOptions
    : public ModelBase
{
public:
    CreateContactOptions();
    virtual ~CreateContactOptions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CreateContactOptions members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getFirstName() const;
    bool firstNameIsSet() const;
    void unsetFirstName();

    void setFirstName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getLastName() const;
    bool lastNameIsSet() const;
    void unsetLastName();

    void setLastName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCompany() const;
    bool companyIsSet() const;
    void unsetCompany();

    void setCompany(const utility::string_t& value);

    /// <summary>
    /// Set of email addresses belonging to the contact
    /// </summary>
    std::vector<utility::string_t>& getEmailAddresses();
    bool emailAddressesIsSet() const;
    void unsetEmailAddresses();

    void setEmailAddresses(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Tags that can be used to search and group contacts
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
    /// Has the user explicitly or implicitly opted out of being contacted? If so MailSlurp will ignore them in all actions.
    /// </summary>
    bool isOptOut() const;
    bool optOutIsSet() const;
    void unsetOptOut();

    void setOptOut(bool value);

    /// <summary>
    /// Group IDs that contact belongs to
    /// </summary>
    utility::string_t getGroupId() const;
    bool groupIdIsSet() const;
    void unsetGroupId();

    void setGroupId(const utility::string_t& value);


protected:
    utility::string_t m_FirstName;
    bool m_FirstNameIsSet;
    utility::string_t m_LastName;
    bool m_LastNameIsSet;
    utility::string_t m_Company;
    bool m_CompanyIsSet;
    std::vector<utility::string_t> m_EmailAddresses;
    bool m_EmailAddressesIsSet;
    std::vector<utility::string_t> m_Tags;
    bool m_TagsIsSet;
    std::shared_ptr<Object> m_MetaData;
    bool m_MetaDataIsSet;
    bool m_OptOut;
    bool m_OptOutIsSet;
    utility::string_t m_GroupId;
    bool m_GroupIdIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_CreateContactOptions_H_ */