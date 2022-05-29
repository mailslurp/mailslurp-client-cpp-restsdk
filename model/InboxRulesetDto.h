/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://docs.mailslurp.com/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * InboxRulesetDto.h
 *
 * Rules for inbox
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_InboxRulesetDto_H_
#define COM_MAILSLURP_CLIENT_MODEL_InboxRulesetDto_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// Rules for inbox
/// </summary>
class  InboxRulesetDto
    : public ModelBase
{
public:
    InboxRulesetDto();
    virtual ~InboxRulesetDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// InboxRulesetDto members

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
    utility::string_t getInboxId() const;
    bool inboxIdIsSet() const;
    void unsetInboxId();

    void setInboxId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getScope() const;
    bool scopeIsSet() const;
    void unsetScope();

    void setScope(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getAction() const;
    bool actionIsSet() const;
    void unsetAction();

    void setAction(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTarget() const;
    bool targetIsSet() const;
    void unsetTarget();

    void setTarget(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getHandler() const;
    bool handlerIsSet() const;
    void unsetHandler();

    void setHandler(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetCreatedAt();

    void setCreatedAt(const utility::datetime& value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_InboxId;
    bool m_InboxIdIsSet;
    utility::string_t m_Scope;
    bool m_ScopeIsSet;
    utility::string_t m_Action;
    bool m_ActionIsSet;
    utility::string_t m_Target;
    bool m_TargetIsSet;
    utility::string_t m_Handler;
    bool m_HandlerIsSet;
    utility::datetime m_CreatedAt;
    bool m_CreatedAtIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_InboxRulesetDto_H_ */
