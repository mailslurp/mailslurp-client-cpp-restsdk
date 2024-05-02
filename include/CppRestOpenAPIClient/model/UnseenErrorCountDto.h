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
 * UnseenErrorCountDto.h
 *
 * Number of unseen errors
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_UnseenErrorCountDto_H_
#define COM_MAILSLURP_CLIENT_MODEL_UnseenErrorCountDto_H_


#include "CppRestOpenAPIClient/ModelBase.h"


namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// Number of unseen errors
/// </summary>
class  UnseenErrorCountDto
    : public ModelBase
{
public:
    UnseenErrorCountDto();
    virtual ~UnseenErrorCountDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// UnseenErrorCountDto members

    /// <summary>
    /// 
    /// </summary>
    int64_t getCount() const;
    bool countIsSet() const;
    void unsetCount();

    void setCount(int64_t value);


protected:
    int64_t m_Count;
    bool m_CountIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_UnseenErrorCountDto_H_ */
