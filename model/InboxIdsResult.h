/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://www.mailslurp.com/docs/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * InboxIdsResult.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_InboxIdsResult_H_
#define COM_MAILSLURP_CLIENT_MODEL_InboxIdsResult_H_


#include "../ModelBase.h"

#include "InboxIdItem.h"
#include <vector>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  InboxIdsResult
    : public ModelBase
{
public:
    InboxIdsResult();
    virtual ~InboxIdsResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// InboxIdsResult members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<InboxIdItem>>& getInboxIds();
    bool inboxIdsIsSet() const;
    void unsetInboxIds();

    void setInboxIds(const std::vector<std::shared_ptr<InboxIdItem>>& value);


protected:
    std::vector<std::shared_ptr<InboxIdItem>> m_InboxIds;
    bool m_InboxIdsIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_InboxIdsResult_H_ */
