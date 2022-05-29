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
 * ValidationMessage.h
 *
 * Optional warnings resulting from HTML validation
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_ValidationMessage_H_
#define COM_MAILSLURP_CLIENT_MODEL_ValidationMessage_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// Optional warnings resulting from HTML validation
/// </summary>
class  ValidationMessage
    : public ModelBase
{
public:
    ValidationMessage();
    virtual ~ValidationMessage();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ValidationMessage members

    /// <summary>
    /// 
    /// </summary>
    int32_t getLineNumber() const;
    bool lineNumberIsSet() const;
    void unsetLineNumber();

    void setLineNumber(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getMessage() const;
    bool messageIsSet() const;
    void unsetMessage();

    void setMessage(const utility::string_t& value);


protected:
    int32_t m_LineNumber;
    bool m_LineNumberIsSet;
    utility::string_t m_Message;
    bool m_MessageIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_ValidationMessage_H_ */
