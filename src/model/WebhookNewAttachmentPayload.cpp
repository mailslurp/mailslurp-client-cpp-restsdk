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



#include "CppRestOpenAPIClient/model/WebhookNewAttachmentPayload.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



WebhookNewAttachmentPayload::WebhookNewAttachmentPayload()
{
    m_MessageId = utility::conversions::to_string_t("");
    m_MessageIdIsSet = false;
    m_WebhookId = utility::conversions::to_string_t("");
    m_WebhookIdIsSet = false;
    m_WebhookName = utility::conversions::to_string_t("");
    m_WebhookNameIsSet = false;
    m_EventName = utility::conversions::to_string_t("");
    m_EventNameIsSet = false;
    m_AttachmentId = utility::conversions::to_string_t("");
    m_AttachmentIdIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_ContentType = utility::conversions::to_string_t("");
    m_ContentTypeIsSet = false;
    m_ContentLength = 0L;
    m_ContentLengthIsSet = false;
}

WebhookNewAttachmentPayload::~WebhookNewAttachmentPayload()
{
}

void WebhookNewAttachmentPayload::validate()
{
    // TODO: implement validation
}

web::json::value WebhookNewAttachmentPayload::toJson() const
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
    if(m_AttachmentIdIsSet)
    {
        val[utility::conversions::to_string_t(U("attachmentId"))] = ModelBase::toJson(m_AttachmentId);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_ContentTypeIsSet)
    {
        val[utility::conversions::to_string_t(U("contentType"))] = ModelBase::toJson(m_ContentType);
    }
    if(m_ContentLengthIsSet)
    {
        val[utility::conversions::to_string_t(U("contentLength"))] = ModelBase::toJson(m_ContentLength);
    }

    return val;
}

bool WebhookNewAttachmentPayload::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("attachmentId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("attachmentId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setAttachmentId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAttachmentId);
            setAttachmentId(refVal_setAttachmentId);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t(U("contentType"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("contentType")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setContentType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setContentType);
            setContentType(refVal_setContentType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("contentLength"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("contentLength")));
        if(!fieldValue.is_null())
        {
            int64_t refVal_setContentLength;
            ok &= ModelBase::fromJson(fieldValue, refVal_setContentLength);
            setContentLength(refVal_setContentLength);
        }
    }
    return ok;
}

void WebhookNewAttachmentPayload::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_AttachmentIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("attachmentId")), m_AttachmentId));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_ContentTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("contentType")), m_ContentType));
    }
    if(m_ContentLengthIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("contentLength")), m_ContentLength));
    }
}

bool WebhookNewAttachmentPayload::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("attachmentId"))))
    {
        utility::string_t refVal_setAttachmentId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("attachmentId"))), refVal_setAttachmentId );
        setAttachmentId(refVal_setAttachmentId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("contentType"))))
    {
        utility::string_t refVal_setContentType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("contentType"))), refVal_setContentType );
        setContentType(refVal_setContentType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("contentLength"))))
    {
        int64_t refVal_setContentLength;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("contentLength"))), refVal_setContentLength );
        setContentLength(refVal_setContentLength);
    }
    return ok;
}

utility::string_t WebhookNewAttachmentPayload::getMessageId() const
{
    return m_MessageId;
}

void WebhookNewAttachmentPayload::setMessageId(const utility::string_t& value)
{
    m_MessageId = value;
    m_MessageIdIsSet = true;
}

bool WebhookNewAttachmentPayload::messageIdIsSet() const
{
    return m_MessageIdIsSet;
}

void WebhookNewAttachmentPayload::unsetMessageId()
{
    m_MessageIdIsSet = false;
}
utility::string_t WebhookNewAttachmentPayload::getWebhookId() const
{
    return m_WebhookId;
}

void WebhookNewAttachmentPayload::setWebhookId(const utility::string_t& value)
{
    m_WebhookId = value;
    m_WebhookIdIsSet = true;
}

bool WebhookNewAttachmentPayload::webhookIdIsSet() const
{
    return m_WebhookIdIsSet;
}

void WebhookNewAttachmentPayload::unsetWebhookId()
{
    m_WebhookIdIsSet = false;
}
utility::string_t WebhookNewAttachmentPayload::getWebhookName() const
{
    return m_WebhookName;
}

void WebhookNewAttachmentPayload::setWebhookName(const utility::string_t& value)
{
    m_WebhookName = value;
    m_WebhookNameIsSet = true;
}

bool WebhookNewAttachmentPayload::webhookNameIsSet() const
{
    return m_WebhookNameIsSet;
}

void WebhookNewAttachmentPayload::unsetWebhookName()
{
    m_WebhookNameIsSet = false;
}
utility::string_t WebhookNewAttachmentPayload::getEventName() const
{
    return m_EventName;
}

void WebhookNewAttachmentPayload::setEventName(const utility::string_t& value)
{
    m_EventName = value;
    m_EventNameIsSet = true;
}

bool WebhookNewAttachmentPayload::eventNameIsSet() const
{
    return m_EventNameIsSet;
}

void WebhookNewAttachmentPayload::unsetEventName()
{
    m_EventNameIsSet = false;
}
utility::string_t WebhookNewAttachmentPayload::getAttachmentId() const
{
    return m_AttachmentId;
}

void WebhookNewAttachmentPayload::setAttachmentId(const utility::string_t& value)
{
    m_AttachmentId = value;
    m_AttachmentIdIsSet = true;
}

bool WebhookNewAttachmentPayload::attachmentIdIsSet() const
{
    return m_AttachmentIdIsSet;
}

void WebhookNewAttachmentPayload::unsetAttachmentId()
{
    m_AttachmentIdIsSet = false;
}
utility::string_t WebhookNewAttachmentPayload::getName() const
{
    return m_Name;
}

void WebhookNewAttachmentPayload::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool WebhookNewAttachmentPayload::nameIsSet() const
{
    return m_NameIsSet;
}

void WebhookNewAttachmentPayload::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t WebhookNewAttachmentPayload::getContentType() const
{
    return m_ContentType;
}

void WebhookNewAttachmentPayload::setContentType(const utility::string_t& value)
{
    m_ContentType = value;
    m_ContentTypeIsSet = true;
}

bool WebhookNewAttachmentPayload::contentTypeIsSet() const
{
    return m_ContentTypeIsSet;
}

void WebhookNewAttachmentPayload::unsetContentType()
{
    m_ContentTypeIsSet = false;
}
int64_t WebhookNewAttachmentPayload::getContentLength() const
{
    return m_ContentLength;
}

void WebhookNewAttachmentPayload::setContentLength(int64_t value)
{
    m_ContentLength = value;
    m_ContentLengthIsSet = true;
}

bool WebhookNewAttachmentPayload::contentLengthIsSet() const
{
    return m_ContentLengthIsSet;
}

void WebhookNewAttachmentPayload::unsetContentLength()
{
    m_ContentLengthIsSet = false;
}
}
}
}
}


