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
 * EmailFeatureNames.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_EmailFeatureNames_H_
#define COM_MAILSLURP_CLIENT_MODEL_EmailFeatureNames_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/EmailFeatureCategoryName.h"
#include <vector>
#include "CppRestOpenAPIClient/model/EmailFeatureFamilyName.h"
#include "CppRestOpenAPIClient/model/EmailFeaturePlatformName.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {

class EmailFeatureFamilyName;
class EmailFeaturePlatformName;
class EmailFeatureCategoryName;

/// <summary>
/// 
/// </summary>
class  EmailFeatureNames
    : public ModelBase
{
public:
    EmailFeatureNames();
    virtual ~EmailFeatureNames();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// EmailFeatureNames members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<EmailFeatureFamilyName>>& getFamily();
    bool familyIsSet() const;
    void unsetFamily();

    void setFamily(const std::vector<std::shared_ptr<EmailFeatureFamilyName>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<EmailFeaturePlatformName>>& getPlatform();
    bool platformIsSet() const;
    void unsetPlatform();

    void setPlatform(const std::vector<std::shared_ptr<EmailFeaturePlatformName>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<EmailFeatureCategoryName>>& getCategory();
    bool categoryIsSet() const;
    void unsetCategory();

    void setCategory(const std::vector<std::shared_ptr<EmailFeatureCategoryName>>& value);


protected:
    std::vector<std::shared_ptr<EmailFeatureFamilyName>> m_Family;
    bool m_FamilyIsSet;
    std::vector<std::shared_ptr<EmailFeaturePlatformName>> m_Platform;
    bool m_PlatformIsSet;
    std::vector<std::shared_ptr<EmailFeatureCategoryName>> m_Category;
    bool m_CategoryIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_EmailFeatureNames_H_ */
