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



#include "CppRestOpenAPIClient/model/ContactProjection.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



ContactProjection::ContactProjection()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_GroupId = utility::conversions::to_string_t("");
    m_GroupIdIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
    m_FirstName = utility::conversions::to_string_t("");
    m_FirstNameIsSet = false;
    m_LastName = utility::conversions::to_string_t("");
    m_LastNameIsSet = false;
    m_Company = utility::conversions::to_string_t("");
    m_CompanyIsSet = false;
    m_EmailAddressesIsSet = false;
    m_OptOut = false;
    m_OptOutIsSet = false;
}

ContactProjection::~ContactProjection()
{
}

void ContactProjection::validate()
{
    // TODO: implement validation
}

web::json::value ContactProjection::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_GroupIdIsSet)
    {
        val[utility::conversions::to_string_t(U("groupId"))] = ModelBase::toJson(m_GroupId);
    }
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t(U("createdAt"))] = ModelBase::toJson(m_CreatedAt);
    }
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
    if(m_OptOutIsSet)
    {
        val[utility::conversions::to_string_t(U("optOut"))] = ModelBase::toJson(m_OptOut);
    }

    return val;
}

bool ContactProjection::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setId);
            setId(refVal_setId);
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
    if(val.has_field(utility::conversions::to_string_t(U("createdAt"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("createdAt")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setCreatedAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCreatedAt);
            setCreatedAt(refVal_setCreatedAt);
        }
    }
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
    return ok;
}

void ContactProjection::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_Id));
    }
    if(m_GroupIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("groupId")), m_GroupId));
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("createdAt")), m_CreatedAt));
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
    if(m_OptOutIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("optOut")), m_OptOut));
    }
}

bool ContactProjection::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_setId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_setId );
        setId(refVal_setId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("groupId"))))
    {
        utility::string_t refVal_setGroupId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("groupId"))), refVal_setGroupId );
        setGroupId(refVal_setGroupId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("createdAt"))))
    {
        utility::datetime refVal_setCreatedAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("createdAt"))), refVal_setCreatedAt );
        setCreatedAt(refVal_setCreatedAt);
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("optOut"))))
    {
        bool refVal_setOptOut;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("optOut"))), refVal_setOptOut );
        setOptOut(refVal_setOptOut);
    }
    return ok;
}

utility::string_t ContactProjection::getId() const
{
    return m_Id;
}

void ContactProjection::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool ContactProjection::idIsSet() const
{
    return m_IdIsSet;
}

void ContactProjection::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t ContactProjection::getGroupId() const
{
    return m_GroupId;
}

void ContactProjection::setGroupId(const utility::string_t& value)
{
    m_GroupId = value;
    m_GroupIdIsSet = true;
}

bool ContactProjection::groupIdIsSet() const
{
    return m_GroupIdIsSet;
}

void ContactProjection::unsetGroupId()
{
    m_GroupIdIsSet = false;
}
utility::datetime ContactProjection::getCreatedAt() const
{
    return m_CreatedAt;
}

void ContactProjection::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool ContactProjection::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void ContactProjection::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
utility::string_t ContactProjection::getFirstName() const
{
    return m_FirstName;
}

void ContactProjection::setFirstName(const utility::string_t& value)
{
    m_FirstName = value;
    m_FirstNameIsSet = true;
}

bool ContactProjection::firstNameIsSet() const
{
    return m_FirstNameIsSet;
}

void ContactProjection::unsetFirstName()
{
    m_FirstNameIsSet = false;
}
utility::string_t ContactProjection::getLastName() const
{
    return m_LastName;
}

void ContactProjection::setLastName(const utility::string_t& value)
{
    m_LastName = value;
    m_LastNameIsSet = true;
}

bool ContactProjection::lastNameIsSet() const
{
    return m_LastNameIsSet;
}

void ContactProjection::unsetLastName()
{
    m_LastNameIsSet = false;
}
utility::string_t ContactProjection::getCompany() const
{
    return m_Company;
}

void ContactProjection::setCompany(const utility::string_t& value)
{
    m_Company = value;
    m_CompanyIsSet = true;
}

bool ContactProjection::companyIsSet() const
{
    return m_CompanyIsSet;
}

void ContactProjection::unsetCompany()
{
    m_CompanyIsSet = false;
}
std::vector<utility::string_t>& ContactProjection::getEmailAddresses()
{
    return m_EmailAddresses;
}

void ContactProjection::setEmailAddresses(const std::vector<utility::string_t>& value)
{
    m_EmailAddresses = value;
    m_EmailAddressesIsSet = true;
}

bool ContactProjection::emailAddressesIsSet() const
{
    return m_EmailAddressesIsSet;
}

void ContactProjection::unsetEmailAddresses()
{
    m_EmailAddressesIsSet = false;
}
bool ContactProjection::isOptOut() const
{
    return m_OptOut;
}

void ContactProjection::setOptOut(bool value)
{
    m_OptOut = value;
    m_OptOutIsSet = true;
}

bool ContactProjection::optOutIsSet() const
{
    return m_OptOutIsSet;
}

void ContactProjection::unsetOptOut()
{
    m_OptOutIsSet = false;
}
}
}
}
}


