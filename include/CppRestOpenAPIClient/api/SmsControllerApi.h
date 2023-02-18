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
 * SmsControllerApi.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_API_SmsControllerApi_H_
#define COM_MAILSLURP_CLIENT_API_SmsControllerApi_H_



#include "CppRestOpenAPIClient/ApiClient.h"

#include "CppRestOpenAPIClient/model/PageSmsProjection.h"
#include "CppRestOpenAPIClient/model/SmsDto.h"
#include <cpprest/details/basic_types.h>
#include <boost/optional.hpp>

namespace com {
namespace mailslurp {
namespace client {
namespace api {

using namespace com::mailslurp::client::model;



class  SmsControllerApi 
{
public:

    explicit SmsControllerApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~SmsControllerApi();

    /// <summary>
    /// Delete SMS message.
    /// </summary>
    /// <remarks>
    /// Delete an SMS message
    /// </remarks>
    /// <param name="smsId"></param>
    pplx::task<void> deleteSmsMessage(
        utility::string_t smsId
    ) const;
    /// <summary>
    /// Delete all SMS messages
    /// </summary>
    /// <remarks>
    /// Delete all SMS messages or all messages for a given phone number
    /// </remarks>
    /// <param name="phoneNumberId"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<void> deleteSmsMessages(
        boost::optional<utility::string_t> phoneNumberId
    ) const;
    /// <summary>
    /// Get SMS content including body. Expects SMS to exist by ID. For SMS that may not have arrived yet use the WaitForController.
    /// </summary>
    /// <remarks>
    /// Returns a SMS summary object with content.
    /// </remarks>
    /// <param name="smsId"></param>
    pplx::task<std::shared_ptr<SmsDto>> getSmsMessage(
        utility::string_t smsId
    ) const;
    /// <summary>
    /// Get all SMS messages in all phone numbers in paginated form. .
    /// </summary>
    /// <remarks>
    /// By default returns all SMS messages across all phone numbers sorted by ascending created at date. Responses are paginated. You can restrict results to a list of phone number IDs. You can also filter out read messages
    /// </remarks>
    /// <param name="phoneNumber">Optional receiving phone number to filter SMS messages for (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="page">Optional page index in SMS list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size in SMS list pagination. Maximum size is 100. Use page index and sort to page through larger results (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="unreadOnly">Optional filter for unread SMS only. All SMS are considered unread until they are viewed in the dashboard or requested directly (optional, default to false)</param>
    /// <param name="since">Optional filter SMSs received after given date time (optional, default to utility::datetime())</param>
    /// <param name="before">Optional filter SMSs received before given date time (optional, default to utility::datetime())</param>
    pplx::task<std::shared_ptr<PageSmsProjection>> getSmsMessagesPaginated(
        boost::optional<utility::string_t> phoneNumber,
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort,
        boost::optional<bool> unreadOnly,
        boost::optional<utility::datetime> since,
        boost::optional<utility::datetime> before
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_API_SmsControllerApi_H_ */

