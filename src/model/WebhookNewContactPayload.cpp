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



#include "CppRestOpenAPIClient/model/WebhookNewContactPayload.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



WebhookNewContactPayload::WebhookNewContactPayload()
{
    m_MessageId = utility::conversions::to_string_t("");
    m_MessageIdIsSet = false;
    m_WebhookId = utility::conversions::to_string_t("");
    m_WebhookIdIsSet = false;
    m_WebhookName = utility::conversions::to_string_t("");
    m_WebhookNameIsSet = false;
    m_EventName = utility::conversions::to_string_t("");
    m_EventNameIsSet = false;
    m_ContactId = utility::conversions::to_string_t("");
    m_ContactIdIsSet = false;
    m_GroupId = utility::conversions::to_string_t("");
    m_GroupIdIsSet = false;
    m_FirstName = utility::conversions::to_string_t("");
    m_FirstNameIsSet = false;
    m_LastName = utility::conversions::to_string_t("");
    m_LastNameIsSet = false;
    m_Company = utility::conversions::to_string_t("");
    m_CompanyIsSet = false;
    m_PrimaryEmailAddress = utility::conversions::to_string_t("");
    m_PrimaryEmailAddressIsSet = false;
    m_EmailAddressesIsSet = false;
    m_TagsIsSet = false;
    m_MetaDataIsSet = false;
    m_OptOut = false;
    m_OptOutIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
}

WebhookNewContactPayload::~WebhookNewContactPayload()
{
}

void WebhookNewContactPayload::validate()
{
    // TODO: implement validation
}

web::json::value WebhookNewContactPayload::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_MessageIdIsSet)
    {
        val[utility::conversions::to_string_t(U("messageId"))] = ModelBase::toJson(m_MessageId);
    }
    if(m_WebhookIdIsSet)
    {
        val[utility::conversions::to_string_t(U("webhookId"))] = ModelBase::toJson(m_WebhookId);
    }
    if(m_WebhookNameIsSet)
    {
        val[utility::conversions::to_string_t(U("webhookName"))] = ModelBase::toJson(m_WebhookName);
    }
    if(m_EventNameIsSet)
    {
        val[utility::conversions::to_string_t(U("eventName"))] = ModelBase::toJson(m_EventName);
    }
    if(m_ContactIdIsSet)
    {
        val[utility::conversions::to_string_t(U("contactId"))] = ModelBase::toJson(m_ContactId);
    }
    if(m_GroupIdIsSet)
    {
        val[utility::conversions::to_string_t(U("groupId"))] = ModelBase::toJson(m_GroupId);
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
    if(m_PrimaryEmailAddressIsSet)
    {
        val[utility::conversions::to_string_t(U("primaryEmailAddress"))] = ModelBase::toJson(m_PrimaryEmailAddress);
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
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t(U("createdAt"))] = ModelBase::toJson(m_CreatedAt);
    }

    return val;
}

bool WebhookNewContactPayload::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("messageId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("messageId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setMessageId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMessageId);
            setMessageId(refVal_setMessageId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("webhookId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("webhookId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setWebhookId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setWebhookId);
            setWebhookId(refVal_setWebhookId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("webhookName"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("webhookName")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setWebhookName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setWebhookName);
            setWebhookName(refVal_setWebhookName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("eventName"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("eventName")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setEventName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEventName);
            setEventName(refVal_setEventName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("contactId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("contactId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setContactId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setContactId);
            setContactId(refVal_setContactId);
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
    if(val.has_field(utility::conversions::to_string_t(U("primaryEmailAddress"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("primaryEmailAddress")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setPrimaryEmailAddress;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPrimaryEmailAddress);
            setPrimaryEmailAddress(refVal_setPrimaryEmailAddress);
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
    return ok;
}

void WebhookNewContactPayload::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_MessageIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("messageId")), m_MessageId));
    }
    if(m_WebhookIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("webhookId")), m_WebhookId));
    }
    if(m_WebhookNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("webhookName")), m_WebhookName));
    }
    if(m_EventNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("eventName")), m_EventName));
    }
    if(m_ContactIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("contactId")), m_ContactId));
    }
    if(m_GroupIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("groupId")), m_GroupId));
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
    if(m_PrimaryEmailAddressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("primaryEmailAddress")), m_PrimaryEmailAddress));
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
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("createdAt")), m_CreatedAt));
    }
}

bool WebhookNewContactPayload::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("messageId"))))
    {
        utility::string_t refVal_setMessageId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("messageId"))), refVal_setMessageId );
        setMessageId(refVal_setMessageId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("webhookId"))))
    {
        utility::string_t refVal_setWebhookId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("webhookId"))), refVal_setWebhookId );
        setWebhookId(refVal_setWebhookId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("webhookName"))))
    {
        utility::string_t refVal_setWebhookName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("webhookName"))), refVal_setWebhookName );
        setWebhookName(refVal_setWebhookName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("eventName"))))
    {
        utility::string_t refVal_setEventName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("eventName"))), refVal_setEventName );
        setEventName(refVal_setEventName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("contactId"))))
    {
        utility::string_t refVal_setContactId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("contactId"))), refVal_setContactId );
        setContactId(refVal_setContactId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("groupId"))))
    {
        utility::string_t refVal_setGroupId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("groupId"))), refVal_setGroupId );
        setGroupId(refVal_setGroupId);
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("primaryEmailAddress"))))
    {
        utility::string_t refVal_setPrimaryEmailAddress;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("primaryEmailAddress"))), refVal_setPrimaryEmailAddress );
        setPrimaryEmailAddress(refVal_setPrimaryEmailAddress);
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("createdAt"))))
    {
        utility::datetime refVal_setCreatedAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("createdAt"))), refVal_setCreatedAt );
        setCreatedAt(refVal_setCreatedAt);
    }
    return ok;
}

utility::string_t WebhookNewContactPayload::getMessageId() const
{
    return m_MessageId;
}

void WebhookNewContactPayload::setMessageId(const utility::string_t& value)
{
    m_MessageId = value;
    m_MessageIdIsSet = true;
}

bool WebhookNewContactPayload::messageIdIsSet() const
{
    return m_MessageIdIsSet;
}

void WebhookNewContactPayload::unsetMessageId()
{
    m_MessageIdIsSet = false;
}
utility::string_t WebhookNewContactPayload::getWebhookId() const
{
    return m_WebhookId;
}

void WebhookNewContactPayload::setWebhookId(const utility::string_t& value)
{
    m_WebhookId = value;
    m_WebhookIdIsSet = true;
}

bool WebhookNewContactPayload::webhookIdIsSet() const
{
    return m_WebhookIdIsSet;
}

void WebhookNewContactPayload::unsetWebhookId()
{
    m_WebhookIdIsSet = false;
}
utility::string_t WebhookNewContactPayload::getWebhookName() const
{
    return m_WebhookName;
}

void WebhookNewContactPayload::setWebhookName(const utility::string_t& value)
{
    m_WebhookName = value;
    m_WebhookNameIsSet = true;
}

bool WebhookNewContactPayload::webhookNameIsSet() const
{
    return m_WebhookNameIsSet;
}

void WebhookNewContactPayload::unsetWebhookName()
{
    m_WebhookNameIsSet = false;
}
utility::string_t WebhookNewContactPayload::getEventName() const
{
    return m_EventName;
}

void WebhookNewContactPayload::setEventName(const utility::string_t& value)
{
    m_EventName = value;
    m_EventNameIsSet = true;
}

bool WebhookNewContactPayload::eventNameIsSet() const
{
    return m_EventNameIsSet;
}

void WebhookNewContactPayload::unsetEventName()
{
    m_EventNameIsSet = false;
}
utility::string_t WebhookNewContactPayload::getContactId() const
{
    return m_ContactId;
}

void WebhookNewContactPayload::setContactId(const utility::string_t& value)
{
    m_ContactId = value;
    m_ContactIdIsSet = true;
}

bool WebhookNewContactPayload::contactIdIsSet() const
{
    return m_ContactIdIsSet;
}

void WebhookNewContactPayload::unsetContactId()
{
    m_ContactIdIsSet = false;
}
utility::string_t WebhookNewContactPayload::getGroupId() const
{
    return m_GroupId;
}

void WebhookNewContactPayload::setGroupId(const utility::string_t& value)
{
    m_GroupId = value;
    m_GroupIdIsSet = true;
}

bool WebhookNewContactPayload::groupIdIsSet() const
{
    return m_GroupIdIsSet;
}

void WebhookNewContactPayload::unsetGroupId()
{
    m_GroupIdIsSet = false;
}
utility::string_t WebhookNewContactPayload::getFirstName() const
{
    return m_FirstName;
}

void WebhookNewContactPayload::setFirstName(const utility::string_t& value)
{
    m_FirstName = value;
    m_FirstNameIsSet = true;
}

bool WebhookNewContactPayload::firstNameIsSet() const
{
    return m_FirstNameIsSet;
}

void WebhookNewContactPayload::unsetFirstName()
{
    m_FirstNameIsSet = false;
}
utility::string_t WebhookNewContactPayload::getLastName() const
{
    return m_LastName;
}

void WebhookNewContactPayload::setLastName(const utility::string_t& value)
{
    m_LastName = value;
    m_LastNameIsSet = true;
}

bool WebhookNewContactPayload::lastNameIsSet() const
{
    return m_LastNameIsSet;
}

void WebhookNewContactPayload::unsetLastName()
{
    m_LastNameIsSet = false;
}
utility::string_t WebhookNewContactPayload::getCompany() const
{
    return m_Company;
}

void WebhookNewContactPayload::setCompany(const utility::string_t& value)
{
    m_Company = value;
    m_CompanyIsSet = true;
}

bool WebhookNewContactPayload::companyIsSet() const
{
    return m_CompanyIsSet;
}

void WebhookNewContactPayload::unsetCompany()
{
    m_CompanyIsSet = false;
}
utility::string_t WebhookNewContactPayload::getPrimaryEmailAddress() const
{
    return m_PrimaryEmailAddress;
}

void WebhookNewContactPayload::setPrimaryEmailAddress(const utility::string_t& value)
{
    m_PrimaryEmailAddress = value;
    m_PrimaryEmailAddressIsSet = true;
}

bool WebhookNewContactPayload::primaryEmailAddressIsSet() const
{
    return m_PrimaryEmailAddressIsSet;
}

void WebhookNewContactPayload::unsetPrimaryEmailAddress()
{
    m_PrimaryEmailAddressIsSet = false;
}
std::vector<utility::string_t>& WebhookNewContactPayload::getEmailAddresses()
{
    return m_EmailAddresses;
}

void WebhookNewContactPayload::setEmailAddresses(const std::vector<utility::string_t>& value)
{
    m_EmailAddresses = value;
    m_EmailAddressesIsSet = true;
}

bool WebhookNewContactPayload::emailAddressesIsSet() const
{
    return m_EmailAddressesIsSet;
}

void WebhookNewContactPayload::unsetEmailAddresses()
{
    m_EmailAddressesIsSet = false;
}
std::vector<utility::string_t>& WebhookNewContactPayload::getTags()
{
    return m_Tags;
}

void WebhookNewContactPayload::setTags(const std::vector<utility::string_t>& value)
{
    m_Tags = value;
    m_TagsIsSet = true;
}

bool WebhookNewContactPayload::tagsIsSet() const
{
    return m_TagsIsSet;
}

void WebhookNewContactPayload::unsetTags()
{
    m_TagsIsSet = false;
}
std::shared_ptr<Object> WebhookNewContactPayload::getMetaData() const
{
    return m_MetaData;
}

void WebhookNewContactPayload::setMetaData(const std::shared_ptr<Object>& value)
{
    m_MetaData = value;
    m_MetaDataIsSet = true;
}

bool WebhookNewContactPayload::metaDataIsSet() const
{
    return m_MetaDataIsSet;
}

void WebhookNewContactPayload::unsetMetaData()
{
    m_MetaDataIsSet = false;
}
bool WebhookNewContactPayload::isOptOut() const
{
    return m_OptOut;
}

void WebhookNewContactPayload::setOptOut(bool value)
{
    m_OptOut = value;
    m_OptOutIsSet = true;
}

bool WebhookNewContactPayload::optOutIsSet() const
{
    return m_OptOutIsSet;
}

void WebhookNewContactPayload::unsetOptOut()
{
    m_OptOutIsSet = false;
}
utility::datetime WebhookNewContactPayload::getCreatedAt() const
{
    return m_CreatedAt;
}

void WebhookNewContactPayload::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool WebhookNewContactPayload::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void WebhookNewContactPayload::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
}
}
}
}


