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
 * SpellingIssue.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_SpellingIssue_H_
#define COM_MAILSLURP_CLIENT_MODEL_SpellingIssue_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  SpellingIssue
    : public ModelBase
{
public:
    SpellingIssue();
    virtual ~SpellingIssue();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SpellingIssue members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getGroup() const;
    bool groupIsSet() const;
    void unsetGroup();

    void setGroup(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSuggestion() const;
    bool suggestionIsSet() const;
    void unsetSuggestion();

    void setSuggestion(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSeverity() const;
    bool severityIsSet() const;
    void unsetSeverity();

    void setSeverity(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getMessage() const;
    bool messageIsSet() const;
    void unsetMessage();

    void setMessage(const utility::string_t& value);


protected:
    utility::string_t m_Group;
    bool m_GroupIsSet;
    utility::string_t m_Suggestion;
    bool m_SuggestionIsSet;
    utility::string_t m_Severity;
    bool m_SeverityIsSet;
    utility::string_t m_Message;
    bool m_MessageIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_SpellingIssue_H_ */