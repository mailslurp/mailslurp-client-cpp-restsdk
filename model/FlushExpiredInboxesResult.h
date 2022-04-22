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
 * FlushExpiredInboxesResult.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_FlushExpiredInboxesResult_H_
#define COM_MAILSLURP_CLIENT_MODEL_FlushExpiredInboxesResult_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  FlushExpiredInboxesResult
    : public ModelBase
{
public:
    FlushExpiredInboxesResult();
    virtual ~FlushExpiredInboxesResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// FlushExpiredInboxesResult members

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getInboxIds();
    bool inboxIdsIsSet() const;
    void unsetInboxIds();

    void setInboxIds(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getExpireBefore() const;
    bool expireBeforeIsSet() const;
    void unsetExpireBefore();

    void setExpireBefore(const utility::datetime& value);


protected:
    std::vector<utility::string_t> m_InboxIds;
    bool m_InboxIdsIsSet;
    utility::datetime m_ExpireBefore;
    bool m_ExpireBeforeIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_FlushExpiredInboxesResult_H_ */
