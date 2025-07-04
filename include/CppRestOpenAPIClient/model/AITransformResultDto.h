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
 * AITransformResultDto.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_AITransformResultDto_H_
#define COM_MAILSLURP_CLIENT_MODEL_AITransformResultDto_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/Object.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  AITransformResultDto
    : public ModelBase
{
public:
    AITransformResultDto();
    virtual ~AITransformResultDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// AITransformResultDto members

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
    utility::string_t getUserId() const;
    bool userIdIsSet() const;
    void unsetUserId();

    void setUserId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getAiTransformId() const;
    bool aiTransformIdIsSet() const;
    void unsetAiTransformId();

    void setAiTransformId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getAiTransformMappingId() const;
    bool aiTransformMappingIdIsSet() const;
    void unsetAiTransformMappingId();

    void setAiTransformMappingId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Object> getValue() const;
    bool valueIsSet() const;
    void unsetValue();

    void setValue(const std::shared_ptr<Object>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getEntityId() const;
    bool entityIdIsSet() const;
    void unsetEntityId();

    void setEntityId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getEntityType() const;
    bool entityTypeIsSet() const;
    void unsetEntityType();

    void setEntityType(const utility::string_t& value);

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
    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetUpdatedAt();

    void setUpdatedAt(const utility::datetime& value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_UserId;
    bool m_UserIdIsSet;
    utility::string_t m_AiTransformId;
    bool m_AiTransformIdIsSet;
    utility::string_t m_AiTransformMappingId;
    bool m_AiTransformMappingIdIsSet;
    std::shared_ptr<Object> m_Value;
    bool m_ValueIsSet;
    utility::string_t m_EntityId;
    bool m_EntityIdIsSet;
    utility::string_t m_EntityType;
    bool m_EntityTypeIsSet;
    utility::datetime m_CreatedAt;
    bool m_CreatedAtIsSet;
    utility::datetime m_UpdatedAt;
    bool m_UpdatedAtIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_AITransformResultDto_H_ */
