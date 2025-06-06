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
 * TemplateProjection.h
 *
 * Email template data
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_TemplateProjection_H_
#define COM_MAILSLURP_CLIENT_MODEL_TemplateProjection_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// Email template data
/// </summary>
class  TemplateProjection
    : public ModelBase
{
public:
    TemplateProjection();
    virtual ~TemplateProjection();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// TemplateProjection members

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetUpdatedAt();

    void setUpdatedAt(const utility::datetime& value);

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
    std::vector<utility::string_t>& getVariables();
    bool variablesIsSet() const;
    void unsetVariables();

    void setVariables(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);


protected:
    utility::datetime m_UpdatedAt;
    bool m_UpdatedAtIsSet;
    utility::datetime m_CreatedAt;
    bool m_CreatedAtIsSet;
    std::vector<utility::string_t> m_Variables;
    bool m_VariablesIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_Id;
    bool m_IdIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_TemplateProjection_H_ */
