/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://docs.mailslurp.com/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * PhoneControllerApi.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_API_PhoneControllerApi_H_
#define COM_MAILSLURP_CLIENT_API_PhoneControllerApi_H_


#include "../ApiClient.h"

#include "CreateEmergencyAddressOptions.h"
#include "EmergencyAddress.h"
#include "EmergencyAddressDto.h"
#include "EmptyResponseDto.h"
#include "PagePhoneNumberProjection.h"
#include "PhoneNumberDto.h"
#include "PhonePlanDto.h"
#include "TestPhoneNumberOptions.h"
#include <cpprest/details/basic_types.h>


#include <boost/optional.hpp>

namespace com {
namespace mailslurp {
namespace client {
namespace api {

using namespace com::mailslurp::client::model;



class  PhoneControllerApi 
{
public:

    explicit PhoneControllerApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~PhoneControllerApi();

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="createEmergencyAddressOptions"></param>
    pplx::task<std::shared_ptr<EmergencyAddress>> createEmergencyAddress(
        std::shared_ptr<CreateEmergencyAddressOptions> createEmergencyAddressOptions
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="addressId"></param>
    pplx::task<std::shared_ptr<EmptyResponseDto>> deleteEmergencyAddress(
        std::shared_ptr<utility::string_t> addressId
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="phoneNumberId"></param>
    pplx::task<void> deletePhoneNumber(
        std::shared_ptr<utility::string_t> phoneNumberId
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="addressId"></param>
    pplx::task<std::shared_ptr<EmergencyAddress>> getEmergencyAddress(
        std::shared_ptr<utility::string_t> addressId
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<std::vector<std::shared_ptr<EmergencyAddressDto>>> getEmergencyAddresses(
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="phoneNumberId"></param>
    pplx::task<std::shared_ptr<PhoneNumberDto>> getPhoneNumber(
        std::shared_ptr<utility::string_t> phoneNumberId
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="page">Optional page index for list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size for list pagination (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="since">Filter by created at after the given timestamp (optional, default to utility::datetime())</param>
    /// <param name="before">Filter by created at before the given timestamp (optional, default to utility::datetime())</param>
    pplx::task<std::shared_ptr<PagePhoneNumberProjection>> getPhoneNumbers(
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort,
        boost::optional<utility::datetime> since,
        boost::optional<utility::datetime> before
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<std::vector<std::shared_ptr<PhonePlanDto>>> getPhonePlans(
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="phoneNumberId"></param>
    /// <param name="testPhoneNumberOptions"></param>
    pplx::task<void> testPhoneNumberSendSms(
        std::shared_ptr<utility::string_t> phoneNumberId,
        std::shared_ptr<TestPhoneNumberOptions> testPhoneNumberOptions
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_API_PhoneControllerApi_H_ */

