/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails and SMS from dynamically allocated email addresses and phone numbers. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://docs.mailslurp.com/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.2.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * ContactProjection.h
 *
 * Email contact for address book
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_ContactProjection_H_
#define COM_MAILSLURP_CLIENT_MODEL_ContactProjection_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// Email contact for address book
/// </summary>
class  ContactProjection
    : public ModelBase
{
public:
    ContactProjection();
    virtual ~ContactProjection();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ContactProjection members

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
    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetCreatedAt();

    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getEmailAddresses();
    bool emailAddressesIsSet() const;
    void unsetEmailAddresses();

    void setEmailAddresses(const std::vector<utility::string_t>& value);

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
    /// 
    /// </summary>
    bool isOptOut() const;
    bool optOutIsSet() const;
    void unsetOptOut();

    void setOptOut(bool value);

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
    utility::string_t getGroupId() const;
    bool groupIdIsSet() const;
    void unsetGroupId();

    void setGroupId(const utility::string_t& value);


protected:
    utility::string_t m_EmailAddress;
    bool m_EmailAddressIsSet;
    utility::datetime m_CreatedAt;
    bool m_CreatedAtIsSet;
    std::vector<utility::string_t> m_EmailAddresses;
    bool m_EmailAddressesIsSet;
    utility::string_t m_FirstName;
    bool m_FirstNameIsSet;
    utility::string_t m_LastName;
    bool m_LastNameIsSet;
    utility::string_t m_Company;
    bool m_CompanyIsSet;
    bool m_OptOut;
    bool m_OptOutIsSet;
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_GroupId;
    bool m_GroupIdIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_ContactProjection_H_ */
