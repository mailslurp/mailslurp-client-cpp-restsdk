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
 * EmailVerificationControllerApi.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_API_EmailVerificationControllerApi_H_
#define COM_MAILSLURP_CLIENT_API_EmailVerificationControllerApi_H_



#include "CppRestOpenAPIClient/ApiClient.h"

#include "CppRestOpenAPIClient/model/PageEmailValidationRequest.h"
#include "CppRestOpenAPIClient/model/ValidateEmailAddressListOptions.h"
#include "CppRestOpenAPIClient/model/ValidateEmailAddressListResult.h"
#include <cpprest/details/basic_types.h>
#include <boost/optional.hpp>

namespace com {
namespace mailslurp {
namespace client {
namespace api {

using namespace com::mailslurp::client::model;



class  EmailVerificationControllerApi 
{
public:

    explicit EmailVerificationControllerApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~EmailVerificationControllerApi();

    /// <summary>
    /// Validate a list of email addresses. Per unit billing. See your plan for pricing.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="page">Optional page index in list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size for paginated result list. (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="searchFilter">Optional search filter (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="since">Filter by created at after the given timestamp (optional, default to utility::datetime())</param>
    /// <param name="before">Filter by created at before the given timestamp (optional, default to utility::datetime())</param>
    /// <param name="isValid">Filter where email is valid is true or false (optional, default to false)</param>
    pplx::task<std::shared_ptr<PageEmailValidationRequest>> getValidationRequests(
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort,
        boost::optional<utility::string_t> searchFilter,
        boost::optional<utility::datetime> since,
        boost::optional<utility::datetime> before,
        boost::optional<bool> isValid
    ) const;
    /// <summary>
    /// Validate a list of email addresses. Per unit billing. See your plan for pricing.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="validateEmailAddressListOptions"></param>
    pplx::task<std::shared_ptr<ValidateEmailAddressListResult>> validateEmailAddressList(
        std::shared_ptr<ValidateEmailAddressListOptions> validateEmailAddressListOptions
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_API_EmailVerificationControllerApi_H_ */

