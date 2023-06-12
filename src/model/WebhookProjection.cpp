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



#include "CppRestOpenAPIClient/model/WebhookProjection.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



WebhookProjection::WebhookProjection()
{
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Url = utility::conversions::to_string_t("");
    m_UrlIsSet = false;
    m_InboxId = utility::conversions::to_string_t("");
    m_InboxIdIsSet = false;
    m_EventName = utility::conversions::to_string_t("");
    m_EventNameIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
    m_UpdatedAt = utility::datetime();
    m_UpdatedAtIsSet = false;
    m_PhoneNumberId = utility::conversions::to_string_t("");
    m_PhoneNumberIdIsSet = false;
}

WebhookProjection::~WebhookProjection()
{
}

void WebhookProjection::validate()
{
    // TODO: implement validation
}

web::json::value WebhookProjection::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_UrlIsSet)
    {
        val[utility::conversions::to_string_t(U("url"))] = ModelBase::toJson(m_Url);
    }
    if(m_InboxIdIsSet)
    {
        val[utility::conversions::to_string_t(U("inboxId"))] = ModelBase::toJson(m_InboxId);
    }
    if(m_EventNameIsSet)
    {
        val[utility::conversions::to_string_t(U("eventName"))] = ModelBase::toJson(m_EventName);
    }
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t(U("createdAt"))] = ModelBase::toJson(m_CreatedAt);
    }
    if(m_UpdatedAtIsSet)
    {
        val[utility::conversions::to_string_t(U("updatedAt"))] = ModelBase::toJson(m_UpdatedAt);
    }
    if(m_PhoneNumberIdIsSet)
    {
        val[utility::conversions::to_string_t(U("phoneNumberId"))] = ModelBase::toJson(m_PhoneNumberId);
    }

    return val;
}

bool WebhookProjection::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setName);
            setName(refVal_setName);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t(U("url"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("url")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setUrl;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUrl);
            setUrl(refVal_setUrl);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("inboxId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("inboxId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setInboxId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setInboxId);
            setInboxId(refVal_setInboxId);
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
    if(val.has_field(utility::conversions::to_string_t(U("updatedAt"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("updatedAt")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setUpdatedAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUpdatedAt);
            setUpdatedAt(refVal_setUpdatedAt);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("phoneNumberId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("phoneNumberId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setPhoneNumberId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPhoneNumberId);
            setPhoneNumberId(refVal_setPhoneNumberId);
        }
    }
    return ok;
}

void WebhookProjection::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_Id));
    }
    if(m_UrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("url")), m_Url));
    }
    if(m_InboxIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("inboxId")), m_InboxId));
    }
    if(m_EventNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("eventName")), m_EventName));
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("createdAt")), m_CreatedAt));
    }
    if(m_UpdatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("updatedAt")), m_UpdatedAt));
    }
    if(m_PhoneNumberIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("phoneNumberId")), m_PhoneNumberId));
    }
}

bool WebhookProjection::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_setId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_setId );
        setId(refVal_setId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("url"))))
    {
        utility::string_t refVal_setUrl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("url"))), refVal_setUrl );
        setUrl(refVal_setUrl);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("inboxId"))))
    {
        utility::string_t refVal_setInboxId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("inboxId"))), refVal_setInboxId );
        setInboxId(refVal_setInboxId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("eventName"))))
    {
        utility::string_t refVal_setEventName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("eventName"))), refVal_setEventName );
        setEventName(refVal_setEventName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("createdAt"))))
    {
        utility::datetime refVal_setCreatedAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("createdAt"))), refVal_setCreatedAt );
        setCreatedAt(refVal_setCreatedAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("updatedAt"))))
    {
        utility::datetime refVal_setUpdatedAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("updatedAt"))), refVal_setUpdatedAt );
        setUpdatedAt(refVal_setUpdatedAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("phoneNumberId"))))
    {
        utility::string_t refVal_setPhoneNumberId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("phoneNumberId"))), refVal_setPhoneNumberId );
        setPhoneNumberId(refVal_setPhoneNumberId);
    }
    return ok;
}

utility::string_t WebhookProjection::getName() const
{
    return m_Name;
}

void WebhookProjection::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool WebhookProjection::nameIsSet() const
{
    return m_NameIsSet;
}

void WebhookProjection::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t WebhookProjection::getId() const
{
    return m_Id;
}

void WebhookProjection::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool WebhookProjection::idIsSet() const
{
    return m_IdIsSet;
}

void WebhookProjection::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t WebhookProjection::getUrl() const
{
    return m_Url;
}

void WebhookProjection::setUrl(const utility::string_t& value)
{
    m_Url = value;
    m_UrlIsSet = true;
}

bool WebhookProjection::urlIsSet() const
{
    return m_UrlIsSet;
}

void WebhookProjection::unsetUrl()
{
    m_UrlIsSet = false;
}
utility::string_t WebhookProjection::getInboxId() const
{
    return m_InboxId;
}

void WebhookProjection::setInboxId(const utility::string_t& value)
{
    m_InboxId = value;
    m_InboxIdIsSet = true;
}

bool WebhookProjection::inboxIdIsSet() const
{
    return m_InboxIdIsSet;
}

void WebhookProjection::unsetInboxId()
{
    m_InboxIdIsSet = false;
}
utility::string_t WebhookProjection::getEventName() const
{
    return m_EventName;
}

void WebhookProjection::setEventName(const utility::string_t& value)
{
    m_EventName = value;
    m_EventNameIsSet = true;
}

bool WebhookProjection::eventNameIsSet() const
{
    return m_EventNameIsSet;
}

void WebhookProjection::unsetEventName()
{
    m_EventNameIsSet = false;
}
utility::datetime WebhookProjection::getCreatedAt() const
{
    return m_CreatedAt;
}

void WebhookProjection::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool WebhookProjection::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void WebhookProjection::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
utility::datetime WebhookProjection::getUpdatedAt() const
{
    return m_UpdatedAt;
}

void WebhookProjection::setUpdatedAt(const utility::datetime& value)
{
    m_UpdatedAt = value;
    m_UpdatedAtIsSet = true;
}

bool WebhookProjection::updatedAtIsSet() const
{
    return m_UpdatedAtIsSet;
}

void WebhookProjection::unsetUpdatedAt()
{
    m_UpdatedAtIsSet = false;
}
utility::string_t WebhookProjection::getPhoneNumberId() const
{
    return m_PhoneNumberId;
}

void WebhookProjection::setPhoneNumberId(const utility::string_t& value)
{
    m_PhoneNumberId = value;
    m_PhoneNumberIdIsSet = true;
}

bool WebhookProjection::phoneNumberIdIsSet() const
{
    return m_PhoneNumberIdIsSet;
}

void WebhookProjection::unsetPhoneNumberId()
{
    m_PhoneNumberIdIsSet = false;
}
}
}
}
}


