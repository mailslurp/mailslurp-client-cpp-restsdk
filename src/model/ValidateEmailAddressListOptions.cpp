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



#include "CppRestOpenAPIClient/model/ValidateEmailAddressListOptions.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



ValidateEmailAddressListOptions::ValidateEmailAddressListOptions()
{
    m_EmailAddressListIsSet = false;
}

ValidateEmailAddressListOptions::~ValidateEmailAddressListOptions()
{
}

void ValidateEmailAddressListOptions::validate()
{
    // TODO: implement validation
}

web::json::value ValidateEmailAddressListOptions::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_EmailAddressListIsSet)
    {
        val[utility::conversions::to_string_t(U("emailAddressList"))] = ModelBase::toJson(m_EmailAddressList);
    }

    return val;
}

bool ValidateEmailAddressListOptions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("emailAddressList"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("emailAddressList")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setEmailAddressList;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEmailAddressList);
            setEmailAddressList(refVal_setEmailAddressList);
        }
    }
    return ok;
}

void ValidateEmailAddressListOptions::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_EmailAddressListIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("emailAddressList")), m_EmailAddressList));
    }
}

bool ValidateEmailAddressListOptions::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("emailAddressList"))))
    {
        std::vector<utility::string_t> refVal_setEmailAddressList;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("emailAddressList"))), refVal_setEmailAddressList );
        setEmailAddressList(refVal_setEmailAddressList);
    }
    return ok;
}

std::vector<utility::string_t>& ValidateEmailAddressListOptions::getEmailAddressList()
{
    return m_EmailAddressList;
}

void ValidateEmailAddressListOptions::setEmailAddressList(const std::vector<utility::string_t>& value)
{
    m_EmailAddressList = value;
    m_EmailAddressListIsSet = true;
}

bool ValidateEmailAddressListOptions::emailAddressListIsSet() const
{
    return m_EmailAddressListIsSet;
}

void ValidateEmailAddressListOptions::unsetEmailAddressList()
{
    m_EmailAddressListIsSet = false;
}
}
}
}
}


