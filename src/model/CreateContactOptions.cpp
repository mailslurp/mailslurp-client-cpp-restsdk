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



#include "CppRestOpenAPIClient/model/CreateContactOptions.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



CreateContactOptions::CreateContactOptions()
{
    m_FirstName = utility::conversions::to_string_t("");
    m_FirstNameIsSet = false;
    m_LastName = utility::conversions::to_string_t("");
    m_LastNameIsSet = false;
    m_Company = utility::conversions::to_string_t("");
    m_CompanyIsSet = false;
    m_EmailAddressesIsSet = false;
    m_TagsIsSet = false;
    m_MetaDataIsSet = false;
    m_OptOut = false;
    m_OptOutIsSet = false;
    m_GroupId = utility::conversions::to_string_t("");
    m_GroupIdIsSet = false;
    m_VerifyEmailAddresses = false;
    m_VerifyEmailAddressesIsSet = false;
}

CreateContactOptions::~CreateContactOptions()
{
}

void CreateContactOptions::validate()
{
    // TODO: implement validation
}

web::json::value CreateContactOptions::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_FirstNameIsSet)
    {
        val[utility::conversions::to_string_t(U("firstName"))] = ModelBase::toJson(m_FirstName);
    }
    if(m_LastNameIsSet)
    {
        val[utility::conversions::to_string_t(U("lastName"))] = ModelBase::toJson(m_LastName);
    }
    if(m_CompanyIsSet)
    {
        val[utility::conversions::to_string_t(U("company"))] = ModelBase::toJson(m_Company);
    }
    if(m_EmailAddressesIsSet)
    {
        val[utility::conversions::to_string_t(U("emailAddresses"))] = ModelBase::toJson(m_EmailAddresses);
    }
    if(m_TagsIsSet)
    {
        val[utility::conversions::to_string_t(U("tags"))] = ModelBase::toJson(m_Tags);
    }
    if(m_MetaDataIsSet)
    {
        val[utility::conversions::to_string_t(U("metaData"))] = ModelBase::toJson(m_MetaData);
    }
    if(m_OptOutIsSet)
    {
        val[utility::conversions::to_string_t(U("optOut"))] = ModelBase::toJson(m_OptOut);
    }
    if(m_GroupIdIsSet)
    {
        val[utility::conversions::to_string_t(U("groupId"))] = ModelBase::toJson(m_GroupId);
    }
    if(m_VerifyEmailAddressesIsSet)
    {
        val[utility::conversions::to_string_t(U("verifyEmailAddresses"))] = ModelBase::toJson(m_VerifyEmailAddresses);
    }

    return val;
}

bool CreateContactOptions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("firstName"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("firstName")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setFirstName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFirstName);
            setFirstName(refVal_setFirstName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("lastName"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("lastName")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setLastName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setLastName);
            setLastName(refVal_setLastName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("company"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("company")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCompany;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCompany);
            setCompany(refVal_setCompany);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("emailAddresses"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("emailAddresses")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setEmailAddresses;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEmailAddresses);
            setEmailAddresses(refVal_setEmailAddresses);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("tags"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("tags")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setTags;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTags);
            setTags(refVal_setTags);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("metaData"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("metaData")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> refVal_setMetaData;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMetaData);
            setMetaData(refVal_setMetaData);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("optOut"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("optOut")));
        if(!fieldValue.is_null())
        {
            bool refVal_setOptOut;
            ok &= ModelBase::fromJson(fieldValue, refVal_setOptOut);
            setOptOut(refVal_setOptOut);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("groupId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("groupId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setGroupId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setGroupId);
            setGroupId(refVal_setGroupId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("verifyEmailAddresses"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("verifyEmailAddresses")));
        if(!fieldValue.is_null())
        {
            bool refVal_setVerifyEmailAddresses;
            ok &= ModelBase::fromJson(fieldValue, refVal_setVerifyEmailAddresses);
            setVerifyEmailAddresses(refVal_setVerifyEmailAddresses);
        }
    }
    return ok;
}

void CreateContactOptions::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_FirstNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("firstName")), m_FirstName));
    }
    if(m_LastNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("lastName")), m_LastName));
    }
    if(m_CompanyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("company")), m_Company));
    }
    if(m_EmailAddressesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("emailAddresses")), m_EmailAddresses));
    }
    if(m_TagsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("tags")), m_Tags));
    }
    if(m_MetaDataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("metaData")), m_MetaData));
    }
    if(m_OptOutIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("optOut")), m_OptOut));
    }
    if(m_GroupIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("groupId")), m_GroupId));
    }
    if(m_VerifyEmailAddressesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("verifyEmailAddresses")), m_VerifyEmailAddresses));
    }
}

bool CreateContactOptions::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("firstName"))))
    {
        utility::string_t refVal_setFirstName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("firstName"))), refVal_setFirstName );
        setFirstName(refVal_setFirstName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("lastName"))))
    {
        utility::string_t refVal_setLastName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("lastName"))), refVal_setLastName );
        setLastName(refVal_setLastName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("company"))))
    {
        utility::string_t refVal_setCompany;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("company"))), refVal_setCompany );
        setCompany(refVal_setCompany);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("emailAddresses"))))
    {
        std::vector<utility::string_t> refVal_setEmailAddresses;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("emailAddresses"))), refVal_setEmailAddresses );
        setEmailAddresses(refVal_setEmailAddresses);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("tags"))))
    {
        std::vector<utility::string_t> refVal_setTags;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("tags"))), refVal_setTags );
        setTags(refVal_setTags);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("metaData"))))
    {
        std::shared_ptr<Object> refVal_setMetaData;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("metaData"))), refVal_setMetaData );
        setMetaData(refVal_setMetaData);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("optOut"))))
    {
        bool refVal_setOptOut;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("optOut"))), refVal_setOptOut );
        setOptOut(refVal_setOptOut);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("groupId"))))
    {
        utility::string_t refVal_setGroupId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("groupId"))), refVal_setGroupId );
        setGroupId(refVal_setGroupId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("verifyEmailAddresses"))))
    {
        bool refVal_setVerifyEmailAddresses;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("verifyEmailAddresses"))), refVal_setVerifyEmailAddresses );
        setVerifyEmailAddresses(refVal_setVerifyEmailAddresses);
    }
    return ok;
}

utility::string_t CreateContactOptions::getFirstName() const
{
    return m_FirstName;
}

void CreateContactOptions::setFirstName(const utility::string_t& value)
{
    m_FirstName = value;
    m_FirstNameIsSet = true;
}

bool CreateContactOptions::firstNameIsSet() const
{
    return m_FirstNameIsSet;
}

void CreateContactOptions::unsetFirstName()
{
    m_FirstNameIsSet = false;
}
utility::string_t CreateContactOptions::getLastName() const
{
    return m_LastName;
}

void CreateContactOptions::setLastName(const utility::string_t& value)
{
    m_LastName = value;
    m_LastNameIsSet = true;
}

bool CreateContactOptions::lastNameIsSet() const
{
    return m_LastNameIsSet;
}

void CreateContactOptions::unsetLastName()
{
    m_LastNameIsSet = false;
}
utility::string_t CreateContactOptions::getCompany() const
{
    return m_Company;
}

void CreateContactOptions::setCompany(const utility::string_t& value)
{
    m_Company = value;
    m_CompanyIsSet = true;
}

bool CreateContactOptions::companyIsSet() const
{
    return m_CompanyIsSet;
}

void CreateContactOptions::unsetCompany()
{
    m_CompanyIsSet = false;
}
std::vector<utility::string_t>& CreateContactOptions::getEmailAddresses()
{
    return m_EmailAddresses;
}

void CreateContactOptions::setEmailAddresses(const std::vector<utility::string_t>& value)
{
    m_EmailAddresses = value;
    m_EmailAddressesIsSet = true;
}

bool CreateContactOptions::emailAddressesIsSet() const
{
    return m_EmailAddressesIsSet;
}

void CreateContactOptions::unsetEmailAddresses()
{
    m_EmailAddressesIsSet = false;
}
std::vector<utility::string_t>& CreateContactOptions::getTags()
{
    return m_Tags;
}

void CreateContactOptions::setTags(const std::vector<utility::string_t>& value)
{
    m_Tags = value;
    m_TagsIsSet = true;
}

bool CreateContactOptions::tagsIsSet() const
{
    return m_TagsIsSet;
}

void CreateContactOptions::unsetTags()
{
    m_TagsIsSet = false;
}
std::shared_ptr<Object> CreateContactOptions::getMetaData() const
{
    return m_MetaData;
}

void CreateContactOptions::setMetaData(const std::shared_ptr<Object>& value)
{
    m_MetaData = value;
    m_MetaDataIsSet = true;
}

bool CreateContactOptions::metaDataIsSet() const
{
    return m_MetaDataIsSet;
}

void CreateContactOptions::unsetMetaData()
{
    m_MetaDataIsSet = false;
}
bool CreateContactOptions::isOptOut() const
{
    return m_OptOut;
}

void CreateContactOptions::setOptOut(bool value)
{
    m_OptOut = value;
    m_OptOutIsSet = true;
}

bool CreateContactOptions::optOutIsSet() const
{
    return m_OptOutIsSet;
}

void CreateContactOptions::unsetOptOut()
{
    m_OptOutIsSet = false;
}
utility::string_t CreateContactOptions::getGroupId() const
{
    return m_GroupId;
}

void CreateContactOptions::setGroupId(const utility::string_t& value)
{
    m_GroupId = value;
    m_GroupIdIsSet = true;
}

bool CreateContactOptions::groupIdIsSet() const
{
    return m_GroupIdIsSet;
}

void CreateContactOptions::unsetGroupId()
{
    m_GroupIdIsSet = false;
}
bool CreateContactOptions::isVerifyEmailAddresses() const
{
    return m_VerifyEmailAddresses;
}

void CreateContactOptions::setVerifyEmailAddresses(bool value)
{
    m_VerifyEmailAddresses = value;
    m_VerifyEmailAddressesIsSet = true;
}

bool CreateContactOptions::verifyEmailAddressesIsSet() const
{
    return m_VerifyEmailAddressesIsSet;
}

void CreateContactOptions::unsetVerifyEmailAddresses()
{
    m_VerifyEmailAddressesIsSet = false;
}
}
}
}
}


