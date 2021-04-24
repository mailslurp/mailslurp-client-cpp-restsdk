/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.   ## Resources - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://www.mailslurp.com/docs/) - [Examples](https://github.com/mailslurp/examples) repository 
 *
 * The version of the OpenAPI document: 6.5.2
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CreateContactOptions.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




CreateContactOptions::CreateContactOptions()
{
    m_EmailAddressesIsSet = false;
    m_FirstName = utility::conversions::to_string_t("");
    m_FirstNameIsSet = false;
    m_GroupId = utility::conversions::to_string_t("");
    m_GroupIdIsSet = false;
    m_MetaDataIsSet = false;
    m_OptOut = false;
    m_OptOutIsSet = false;
    m_TagsIsSet = false;
    m_LastName = utility::conversions::to_string_t("");
    m_LastNameIsSet = false;
    m_Company = utility::conversions::to_string_t("");
    m_CompanyIsSet = false;
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
    
    if(m_EmailAddressesIsSet)
    {
        val[utility::conversions::to_string_t("emailAddresses")] = ModelBase::toJson(m_EmailAddresses);
    }
    if(m_FirstNameIsSet)
    {
        val[utility::conversions::to_string_t("firstName")] = ModelBase::toJson(m_FirstName);
    }
    if(m_GroupIdIsSet)
    {
        val[utility::conversions::to_string_t("groupId")] = ModelBase::toJson(m_GroupId);
    }
    if(m_MetaDataIsSet)
    {
        val[utility::conversions::to_string_t("metaData")] = ModelBase::toJson(m_MetaData);
    }
    if(m_OptOutIsSet)
    {
        val[utility::conversions::to_string_t("optOut")] = ModelBase::toJson(m_OptOut);
    }
    if(m_TagsIsSet)
    {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(m_Tags);
    }
    if(m_LastNameIsSet)
    {
        val[utility::conversions::to_string_t("lastName")] = ModelBase::toJson(m_LastName);
    }
    if(m_CompanyIsSet)
    {
        val[utility::conversions::to_string_t("company")] = ModelBase::toJson(m_Company);
    }

    return val;
}

bool CreateContactOptions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("emailAddresses")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("emailAddresses"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_emailAddresses;
            ok &= ModelBase::fromJson(fieldValue, refVal_emailAddresses);
            setEmailAddresses(refVal_emailAddresses);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("firstName")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("firstName"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_firstName;
            ok &= ModelBase::fromJson(fieldValue, refVal_firstName);
            setFirstName(refVal_firstName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("groupId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("groupId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_groupId;
            ok &= ModelBase::fromJson(fieldValue, refVal_groupId);
            setGroupId(refVal_groupId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metaData")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metaData"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> refVal_metaData;
            ok &= ModelBase::fromJson(fieldValue, refVal_metaData);
            setMetaData(refVal_metaData);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("optOut")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("optOut"));
        if(!fieldValue.is_null())
        {
            bool refVal_optOut;
            ok &= ModelBase::fromJson(fieldValue, refVal_optOut);
            setOptOut(refVal_optOut);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_tags;
            ok &= ModelBase::fromJson(fieldValue, refVal_tags);
            setTags(refVal_tags);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lastName")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lastName"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_lastName;
            ok &= ModelBase::fromJson(fieldValue, refVal_lastName);
            setLastName(refVal_lastName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("company")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("company"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_company;
            ok &= ModelBase::fromJson(fieldValue, refVal_company);
            setCompany(refVal_company);
        }
    }
    return ok;
}

void CreateContactOptions::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_EmailAddressesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("emailAddresses"), m_EmailAddresses));
    }
    if(m_FirstNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("firstName"), m_FirstName));
    }
    if(m_GroupIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("groupId"), m_GroupId));
    }
    if(m_MetaDataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("metaData"), m_MetaData));
    }
    if(m_OptOutIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("optOut"), m_OptOut));
    }
    if(m_TagsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("tags"), m_Tags));
    }
    if(m_LastNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("lastName"), m_LastName));
    }
    if(m_CompanyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("company"), m_Company));
    }
}

bool CreateContactOptions::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("emailAddresses")))
    {
        std::vector<utility::string_t> refVal_emailAddresses;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("emailAddresses")), refVal_emailAddresses );
        setEmailAddresses(refVal_emailAddresses);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("firstName")))
    {
        utility::string_t refVal_firstName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("firstName")), refVal_firstName );
        setFirstName(refVal_firstName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("groupId")))
    {
        utility::string_t refVal_groupId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("groupId")), refVal_groupId );
        setGroupId(refVal_groupId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("metaData")))
    {
        std::shared_ptr<Object> refVal_metaData;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("metaData")), refVal_metaData );
        setMetaData(refVal_metaData);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("optOut")))
    {
        bool refVal_optOut;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("optOut")), refVal_optOut );
        setOptOut(refVal_optOut);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("tags")))
    {
        std::vector<utility::string_t> refVal_tags;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("tags")), refVal_tags );
        setTags(refVal_tags);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("lastName")))
    {
        utility::string_t refVal_lastName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("lastName")), refVal_lastName );
        setLastName(refVal_lastName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("company")))
    {
        utility::string_t refVal_company;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("company")), refVal_company );
        setCompany(refVal_company);
    }
    return ok;
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
}
}
}
}


