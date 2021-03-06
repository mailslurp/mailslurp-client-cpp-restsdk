/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://www.mailslurp.com/docs/) - [Examples](https://github.com/mailslurp/examples) repository 
 *
 * The version of the OpenAPI document: 6.5.2
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * EmailTextLinesResult.h
 *
 * Parsed text of an email
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_EmailTextLinesResult_H_
#define COM_MAILSLURP_CLIENT_MODEL_EmailTextLinesResult_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// Parsed text of an email
/// </summary>
class  EmailTextLinesResult
    : public ModelBase
{
public:
    EmailTextLinesResult();
    virtual ~EmailTextLinesResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// EmailTextLinesResult members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getBody() const;
    bool bodyIsSet() const;
    void unsetBody();

    void setBody(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getLines();
    bool linesIsSet() const;
    void unsetLines();

    void setLines(const std::vector<utility::string_t>& value);


protected:
    utility::string_t m_Body;
    bool m_BodyIsSet;
    std::vector<utility::string_t> m_Lines;
    bool m_LinesIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_EmailTextLinesResult_H_ */
