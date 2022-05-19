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
 * ConditionOption.h
 *
 * Options for matching emails in an inbox based on a condition such as &#x60;HAS_ATTACHMENTS&#x3D;TRUE&#x60;
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_ConditionOption_H_
#define COM_MAILSLURP_CLIENT_MODEL_ConditionOption_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// Options for matching emails in an inbox based on a condition such as &#x60;HAS_ATTACHMENTS&#x3D;TRUE&#x60;
/// </summary>
class  ConditionOption
    : public ModelBase
{
public:
    ConditionOption();
    virtual ~ConditionOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ConditionOption members

    /// <summary>
    /// Condition of an email object that can be used to filter results
    /// </summary>
    utility::string_t getCondition() const;
    bool conditionIsSet() const;
    void unsetCondition();

    void setCondition(const utility::string_t& value);

    /// <summary>
    /// Expected condition value
    /// </summary>
    utility::string_t getValue() const;
    bool valueIsSet() const;
    void unsetValue();

    void setValue(const utility::string_t& value);


protected:
    utility::string_t m_Condition;
    bool m_ConditionIsSet;
    utility::string_t m_Value;
    bool m_ValueIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_ConditionOption_H_ */
