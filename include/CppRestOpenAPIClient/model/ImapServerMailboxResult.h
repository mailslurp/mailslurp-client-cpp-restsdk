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
 * ImapServerMailboxResult.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_ImapServerMailboxResult_H_
#define COM_MAILSLURP_CLIENT_MODEL_ImapServerMailboxResult_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  ImapServerMailboxResult
    : public ModelBase
{
public:
    ImapServerMailboxResult();
    virtual ~ImapServerMailboxResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ImapServerMailboxResult members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getMessage() const;
    bool messageIsSet() const;
    void unsetMessage();

    void setMessage(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    bool isSuccess() const;
    bool successIsSet() const;
    void unsetSuccess();

    void setSuccess(bool value);


protected:
    utility::string_t m_Message;
    bool m_MessageIsSet;
    bool m_Success;
    bool m_SuccessIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_ImapServerMailboxResult_H_ */
