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



#include "CppRestOpenAPIClient/model/AITransformResultDto.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



AITransformResultDto::AITransformResultDto()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_UserId = utility::conversions::to_string_t("");
    m_UserIdIsSet = false;
    m_AiTransformId = utility::conversions::to_string_t("");
    m_AiTransformIdIsSet = false;
    m_AiTransformMappingId = utility::conversions::to_string_t("");
    m_AiTransformMappingIdIsSet = false;
    m_ValueIsSet = false;
    m_EntityId = utility::conversions::to_string_t("");
    m_EntityIdIsSet = false;
    m_EntityType = utility::conversions::to_string_t("");
    m_EntityTypeIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
    m_UpdatedAt = utility::datetime();
    m_UpdatedAtIsSet = false;
}

AITransformResultDto::~AITransformResultDto()
{
}

void AITransformResultDto::validate()
{
    // TODO: implement validation
}

web::json::value AITransformResultDto::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_UserIdIsSet)
    {
        val[utility::conversions::to_string_t(U("userId"))] = ModelBase::toJson(m_UserId);
    }
    if(m_AiTransformIdIsSet)
    {
        val[utility::conversions::to_string_t(U("aiTransformId"))] = ModelBase::toJson(m_AiTransformId);
    }
    if(m_AiTransformMappingIdIsSet)
    {
        val[utility::conversions::to_string_t(U("aiTransformMappingId"))] = ModelBase::toJson(m_AiTransformMappingId);
    }
    if(m_ValueIsSet)
    {
        val[utility::conversions::to_string_t(U("value"))] = ModelBase::toJson(m_Value);
    }
    if(m_EntityIdIsSet)
    {
        val[utility::conversions::to_string_t(U("entityId"))] = ModelBase::toJson(m_EntityId);
    }
    if(m_EntityTypeIsSet)
    {
        val[utility::conversions::to_string_t(U("entityType"))] = ModelBase::toJson(m_EntityType);
    }
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t(U("createdAt"))] = ModelBase::toJson(m_CreatedAt);
    }
    if(m_UpdatedAtIsSet)
    {
        val[utility::conversions::to_string_t(U("updatedAt"))] = ModelBase::toJson(m_UpdatedAt);
    }

    return val;
}

bool AITransformResultDto::fromJson(const web::json::value& val)
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
            std::shared_ptr<Object> refVal_setValue;
            ok &= ModelBase::fromJson(fieldValue, refVal_setValue);
            setValue(refVal_setValue);
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
    return ok;
}

void AITransformResultDto::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_UserIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("userId")), m_UserId));
    }
    if(m_AiTransformIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("aiTransformId")), m_AiTransformId));
    }
    if(m_AiTransformMappingIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("aiTransformMappingId")), m_AiTransformMappingId));
    }
    if(m_ValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("value")), m_Value));
    }
    if(m_EntityIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("entityId")), m_EntityId));
    }
    if(m_EntityTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("entityType")), m_EntityType));
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("createdAt")), m_CreatedAt));
    }
    if(m_UpdatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("updatedAt")), m_UpdatedAt));
    }
}

bool AITransformResultDto::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("aiTransformMappingId"))))
    {
        utility::string_t refVal_setAiTransformMappingId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("aiTransformMappingId"))), refVal_setAiTransformMappingId );
        setAiTransformMappingId(refVal_setAiTransformMappingId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("value"))))
    {
        std::shared_ptr<Object> refVal_setValue;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("value"))), refVal_setValue );
        setValue(refVal_setValue);
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
    return ok;
}

utility::string_t AITransformResultDto::getId() const
{
    return m_Id;
}

void AITransformResultDto::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool AITransformResultDto::idIsSet() const
{
    return m_IdIsSet;
}

void AITransformResultDto::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t AITransformResultDto::getUserId() const
{
    return m_UserId;
}

void AITransformResultDto::setUserId(const utility::string_t& value)
{
    m_UserId = value;
    m_UserIdIsSet = true;
}

bool AITransformResultDto::userIdIsSet() const
{
    return m_UserIdIsSet;
}

void AITransformResultDto::unsetUserId()
{
    m_UserIdIsSet = false;
}
utility::string_t AITransformResultDto::getAiTransformId() const
{
    return m_AiTransformId;
}

void AITransformResultDto::setAiTransformId(const utility::string_t& value)
{
    m_AiTransformId = value;
    m_AiTransformIdIsSet = true;
}

bool AITransformResultDto::aiTransformIdIsSet() const
{
    return m_AiTransformIdIsSet;
}

void AITransformResultDto::unsetAiTransformId()
{
    m_AiTransformIdIsSet = false;
}
utility::string_t AITransformResultDto::getAiTransformMappingId() const
{
    return m_AiTransformMappingId;
}

void AITransformResultDto::setAiTransformMappingId(const utility::string_t& value)
{
    m_AiTransformMappingId = value;
    m_AiTransformMappingIdIsSet = true;
}

bool AITransformResultDto::aiTransformMappingIdIsSet() const
{
    return m_AiTransformMappingIdIsSet;
}

void AITransformResultDto::unsetAiTransformMappingId()
{
    m_AiTransformMappingIdIsSet = false;
}
std::shared_ptr<Object> AITransformResultDto::getValue() const
{
    return m_Value;
}

void AITransformResultDto::setValue(const std::shared_ptr<Object>& value)
{
    m_Value = value;
    m_ValueIsSet = true;
}

bool AITransformResultDto::valueIsSet() const
{
    return m_ValueIsSet;
}

void AITransformResultDto::unsetValue()
{
    m_ValueIsSet = false;
}
utility::string_t AITransformResultDto::getEntityId() const
{
    return m_EntityId;
}

void AITransformResultDto::setEntityId(const utility::string_t& value)
{
    m_EntityId = value;
    m_EntityIdIsSet = true;
}

bool AITransformResultDto::entityIdIsSet() const
{
    return m_EntityIdIsSet;
}

void AITransformResultDto::unsetEntityId()
{
    m_EntityIdIsSet = false;
}
utility::string_t AITransformResultDto::getEntityType() const
{
    return m_EntityType;
}

void AITransformResultDto::setEntityType(const utility::string_t& value)
{
    m_EntityType = value;
    m_EntityTypeIsSet = true;
}

bool AITransformResultDto::entityTypeIsSet() const
{
    return m_EntityTypeIsSet;
}

void AITransformResultDto::unsetEntityType()
{
    m_EntityTypeIsSet = false;
}
utility::datetime AITransformResultDto::getCreatedAt() const
{
    return m_CreatedAt;
}

void AITransformResultDto::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool AITransformResultDto::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void AITransformResultDto::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
utility::datetime AITransformResultDto::getUpdatedAt() const
{
    return m_UpdatedAt;
}

void AITransformResultDto::setUpdatedAt(const utility::datetime& value)
{
    m_UpdatedAt = value;
    m_UpdatedAtIsSet = true;
}

bool AITransformResultDto::updatedAtIsSet() const
{
    return m_UpdatedAtIsSet;
}

void AITransformResultDto::unsetUpdatedAt()
{
    m_UpdatedAtIsSet = false;
}
}
}
}
}


