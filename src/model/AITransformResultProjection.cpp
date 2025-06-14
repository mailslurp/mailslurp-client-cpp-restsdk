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



#include "CppRestOpenAPIClient/model/AITransformResultProjection.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



AITransformResultProjection::AITransformResultProjection()
{
    m_UserId = utility::conversions::to_string_t("");
    m_UserIdIsSet = false;
    m_AiTransformId = utility::conversions::to_string_t("");
    m_AiTransformIdIsSet = false;
    m_EntityId = utility::conversions::to_string_t("");
    m_EntityIdIsSet = false;
    m_EntityType = utility::conversions::to_string_t("");
    m_EntityTypeIsSet = false;
    m_AiTransformMappingId = utility::conversions::to_string_t("");
    m_AiTransformMappingIdIsSet = false;
    m_Value = utility::conversions::to_string_t("");
    m_ValueIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
}

AITransformResultProjection::~AITransformResultProjection()
{
}

void AITransformResultProjection::validate()
{
    // TODO: implement validation
}

web::json::value AITransformResultProjection::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_UserIdIsSet)
    {
        val[utility::conversions::to_string_t(U("userId"))] = ModelBase::toJson(m_UserId);
    }
    if(m_AiTransformIdIsSet)
    {
        val[utility::conversions::to_string_t(U("aiTransformId"))] = ModelBase::toJson(m_AiTransformId);
    }
    if(m_EntityIdIsSet)
    {
        val[utility::conversions::to_string_t(U("entityId"))] = ModelBase::toJson(m_EntityId);
    }
    if(m_EntityTypeIsSet)
    {
        val[utility::conversions::to_string_t(U("entityType"))] = ModelBase::toJson(m_EntityType);
    }
    if(m_AiTransformMappingIdIsSet)
    {
        val[utility::conversions::to_string_t(U("aiTransformMappingId"))] = ModelBase::toJson(m_AiTransformMappingId);
    }
    if(m_ValueIsSet)
    {
        val[utility::conversions::to_string_t(U("value"))] = ModelBase::toJson(m_Value);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }

    return val;
}

bool AITransformResultProjection::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("userId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("userId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setUserId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUserId);
            setUserId(refVal_setUserId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("aiTransformId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("aiTransformId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setAiTransformId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAiTransformId);
            setAiTransformId(refVal_setAiTransformId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("entityId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("entityId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setEntityId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEntityId);
            setEntityId(refVal_setEntityId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("entityType"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("entityType")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setEntityType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEntityType);
            setEntityType(refVal_setEntityType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("aiTransformMappingId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("aiTransformMappingId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setAiTransformMappingId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAiTransformMappingId);
            setAiTransformMappingId(refVal_setAiTransformMappingId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("value"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("value")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setValue;
            ok &= ModelBase::fromJson(fieldValue, refVal_setValue);
            setValue(refVal_setValue);
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
    return ok;
}

void AITransformResultProjection::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_UserIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("userId")), m_UserId));
    }
    if(m_AiTransformIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("aiTransformId")), m_AiTransformId));
    }
    if(m_EntityIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("entityId")), m_EntityId));
    }
    if(m_EntityTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("entityType")), m_EntityType));
    }
    if(m_AiTransformMappingIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("aiTransformMappingId")), m_AiTransformMappingId));
    }
    if(m_ValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("value")), m_Value));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_Id));
    }
}

bool AITransformResultProjection::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("userId"))))
    {
        utility::string_t refVal_setUserId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("userId"))), refVal_setUserId );
        setUserId(refVal_setUserId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("aiTransformId"))))
    {
        utility::string_t refVal_setAiTransformId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("aiTransformId"))), refVal_setAiTransformId );
        setAiTransformId(refVal_setAiTransformId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("entityId"))))
    {
        utility::string_t refVal_setEntityId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("entityId"))), refVal_setEntityId );
        setEntityId(refVal_setEntityId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("entityType"))))
    {
        utility::string_t refVal_setEntityType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("entityType"))), refVal_setEntityType );
        setEntityType(refVal_setEntityType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("aiTransformMappingId"))))
    {
        utility::string_t refVal_setAiTransformMappingId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("aiTransformMappingId"))), refVal_setAiTransformMappingId );
        setAiTransformMappingId(refVal_setAiTransformMappingId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("value"))))
    {
        utility::string_t refVal_setValue;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("value"))), refVal_setValue );
        setValue(refVal_setValue);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_setId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_setId );
        setId(refVal_setId);
    }
    return ok;
}

utility::string_t AITransformResultProjection::getUserId() const
{
    return m_UserId;
}

void AITransformResultProjection::setUserId(const utility::string_t& value)
{
    m_UserId = value;
    m_UserIdIsSet = true;
}

bool AITransformResultProjection::userIdIsSet() const
{
    return m_UserIdIsSet;
}

void AITransformResultProjection::unsetUserId()
{
    m_UserIdIsSet = false;
}
utility::string_t AITransformResultProjection::getAiTransformId() const
{
    return m_AiTransformId;
}

void AITransformResultProjection::setAiTransformId(const utility::string_t& value)
{
    m_AiTransformId = value;
    m_AiTransformIdIsSet = true;
}

bool AITransformResultProjection::aiTransformIdIsSet() const
{
    return m_AiTransformIdIsSet;
}

void AITransformResultProjection::unsetAiTransformId()
{
    m_AiTransformIdIsSet = false;
}
utility::string_t AITransformResultProjection::getEntityId() const
{
    return m_EntityId;
}

void AITransformResultProjection::setEntityId(const utility::string_t& value)
{
    m_EntityId = value;
    m_EntityIdIsSet = true;
}

bool AITransformResultProjection::entityIdIsSet() const
{
    return m_EntityIdIsSet;
}

void AITransformResultProjection::unsetEntityId()
{
    m_EntityIdIsSet = false;
}
utility::string_t AITransformResultProjection::getEntityType() const
{
    return m_EntityType;
}

void AITransformResultProjection::setEntityType(const utility::string_t& value)
{
    m_EntityType = value;
    m_EntityTypeIsSet = true;
}

bool AITransformResultProjection::entityTypeIsSet() const
{
    return m_EntityTypeIsSet;
}

void AITransformResultProjection::unsetEntityType()
{
    m_EntityTypeIsSet = false;
}
utility::string_t AITransformResultProjection::getAiTransformMappingId() const
{
    return m_AiTransformMappingId;
}

void AITransformResultProjection::setAiTransformMappingId(const utility::string_t& value)
{
    m_AiTransformMappingId = value;
    m_AiTransformMappingIdIsSet = true;
}

bool AITransformResultProjection::aiTransformMappingIdIsSet() const
{
    return m_AiTransformMappingIdIsSet;
}

void AITransformResultProjection::unsetAiTransformMappingId()
{
    m_AiTransformMappingIdIsSet = false;
}
utility::string_t AITransformResultProjection::getValue() const
{
    return m_Value;
}

void AITransformResultProjection::setValue(const utility::string_t& value)
{
    m_Value = value;
    m_ValueIsSet = true;
}

bool AITransformResultProjection::valueIsSet() const
{
    return m_ValueIsSet;
}

void AITransformResultProjection::unsetValue()
{
    m_ValueIsSet = false;
}
utility::string_t AITransformResultProjection::getId() const
{
    return m_Id;
}

void AITransformResultProjection::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool AITransformResultProjection::idIsSet() const
{
    return m_IdIsSet;
}

void AITransformResultProjection::unsetId()
{
    m_IdIsSet = false;
}
}
}
}
}


