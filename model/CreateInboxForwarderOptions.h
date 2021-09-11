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
 * CreateInboxForwarderOptions.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_CreateInboxForwarderOptions_H_
#define COM_MAILSLURP_CLIENT_MODEL_CreateInboxForwarderOptions_H_


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
class  CreateInboxForwarderOptions
    : public ModelBase
{
public:
    CreateInboxForwarderOptions();
    virtual ~CreateInboxForwarderOptions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CreateInboxForwarderOptions members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getField() const;
    bool fieldIsSet() const;
    void unsetField();

    void setField(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getMatch() const;
    bool matchIsSet() const;
    void unsetMatch();

    void setMatch(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getForwardToRecipients();
    bool forwardToRecipientsIsSet() const;
    void unsetForwardToRecipients();

    void setForwardToRecipients(const std::vector<utility::string_t>& value);


protected:
    utility::string_t m_Field;
    bool m_FieldIsSet;
    utility::string_t m_Match;
    bool m_MatchIsSet;
    std::vector<utility::string_t> m_ForwardToRecipients;
    bool m_ForwardToRecipientsIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_CreateInboxForwarderOptions_H_ */
