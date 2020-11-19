/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.   ## Resources - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://www.mailslurp.com/docs/) - [Examples](https://github.com/mailslurp/examples) repository 
 *
 * The version of the OpenAPI document: 6.5.2
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * WaitForConditions.h
 *
 * Conditions that a &#x60;waitForXEmails&#x60; endpoint operates on. The methods wait until given conditions are met or a timeout is reached. If the conditions are met without needing to wait the results will be returned immediately.
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_WaitForConditions_H_
#define COM_MAILSLURP_CLIENT_MODEL_WaitForConditions_H_


#include "../ModelBase.h"

#include "MatchOption.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// Conditions that a &#x60;waitForXEmails&#x60; endpoint operates on. The methods wait until given conditions are met or a timeout is reached. If the conditions are met without needing to wait the results will be returned immediately.
/// </summary>
class  WaitForConditions
    : public ModelBase
{
public:
    WaitForConditions();
    virtual ~WaitForConditions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// WaitForConditions members

    /// <summary>
    /// Number of results that should match conditions. Either exactly or at least this amount based on the &#x60;countType&#x60;. If count condition is not met and the timeout has not been reached the &#x60;waitFor&#x60; method will retry the operation.
    /// </summary>
    int32_t getCount() const;
    bool countIsSet() const;
    void unsetCount();

    void setCount(int32_t value);

    /// <summary>
    /// How should the found count be compared to the expected count.
    /// </summary>
    utility::string_t getCountType() const;
    bool countTypeIsSet() const;
    void unsetCountType();

    void setCountType(const utility::string_t& value);

    /// <summary>
    /// ID of inbox to search within and apply conditions to. Essentially filtering the emails found to give a count.
    /// </summary>
    utility::string_t getInboxId() const;
    bool inboxIdIsSet() const;
    void unsetInboxId();

    void setInboxId(const utility::string_t& value);

    /// <summary>
    /// Conditions that should be matched for an email to qualify for results. Each condition will be applied in order to each email within an inbox to filter a result list of matching emails you are waiting for.
    /// </summary>
    std::vector<std::shared_ptr<MatchOption>>& getMatches();
    bool matchesIsSet() const;
    void unsetMatches();

    void setMatches(const std::vector<std::shared_ptr<MatchOption>>& value);

    /// <summary>
    /// Direction to sort matching emails by created time
    /// </summary>
    utility::string_t getSortDirection() const;
    bool sortDirectionIsSet() const;
    void unsetSortDirection();

    void setSortDirection(const utility::string_t& value);

    /// <summary>
    /// Max time in milliseconds to retry the &#x60;waitFor&#x60; operation until conditions are met.
    /// </summary>
    int64_t getTimeout() const;
    bool timeoutIsSet() const;
    void unsetTimeout();

    void setTimeout(int64_t value);

    /// <summary>
    /// Apply conditions only to **unread** emails. All emails begin with &#x60;read&#x3D;false&#x60;. An email is marked &#x60;read&#x3D;true&#x60; when an &#x60;EmailDto&#x60; representation of it has been returned to the user at least once. For example you have called &#x60;getEmail&#x60; or &#x60;waitForLatestEmail&#x60; etc., or you have viewed the email in the dashboard. 
    /// </summary>
    bool isUnreadOnly() const;
    bool unreadOnlyIsSet() const;
    void unsetUnreadOnly();

    void setUnreadOnly(bool value);


protected:
    int32_t m_Count;
    bool m_CountIsSet;
    utility::string_t m_CountType;
    bool m_CountTypeIsSet;
    utility::string_t m_InboxId;
    bool m_InboxIdIsSet;
    std::vector<std::shared_ptr<MatchOption>> m_Matches;
    bool m_MatchesIsSet;
    utility::string_t m_SortDirection;
    bool m_SortDirectionIsSet;
    int64_t m_Timeout;
    bool m_TimeoutIsSet;
    bool m_UnreadOnly;
    bool m_UnreadOnlyIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_WaitForConditions_H_ */
