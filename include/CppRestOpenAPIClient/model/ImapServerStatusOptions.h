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

/*
 * ImapServerStatusOptions.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_ImapServerStatusOptions_H_
#define COM_MAILSLURP_CLIENT_MODEL_ImapServerStatusOptions_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  ImapServerStatusOptions
    : public ModelBase
{
public:
    ImapServerStatusOptions();
    virtual ~ImapServerStatusOptions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ImapServerStatusOptions members

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
    std::vector<utility::string_t>& getStatusItems();
    bool statusItemsIsSet() const;
    void unsetStatusItems();

    void setStatusItems(const std::vector<utility::string_t>& value);


protected:
    utility::string_t m_Name;
    bool m_NameIsSet;
    std::vector<utility::string_t> m_StatusItems;
    bool m_StatusItemsIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_ImapServerStatusOptions_H_ */
