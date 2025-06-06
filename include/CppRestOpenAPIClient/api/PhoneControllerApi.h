/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails and SMS from dynamically allocated email addresses and phone numbers. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://docs.mailslurp.com/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.2.1.
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



#include "CppRestOpenAPIClient/ApiClient.h"

#include "CppRestOpenAPIClient/model/ConsentStatusDto.h"
#include "CppRestOpenAPIClient/model/CreateEmergencyAddressOptions.h"
#include "CppRestOpenAPIClient/model/CreatePhoneNumberOptions.h"
#include "CppRestOpenAPIClient/model/EmergencyAddress.h"
#include "CppRestOpenAPIClient/model/EmergencyAddressDto.h"
#include "CppRestOpenAPIClient/model/EmptyResponseDto.h"
#include "CppRestOpenAPIClient/model/PagePhoneMessageThreadItemProjection.h"
#include "CppRestOpenAPIClient/model/PagePhoneMessageThreadProjection.h"
#include "CppRestOpenAPIClient/model/PagePhoneNumberProjection.h"
#include "CppRestOpenAPIClient/model/PageSentSmsProjection.h"
#include "CppRestOpenAPIClient/model/PageSmsProjection.h"
#include "CppRestOpenAPIClient/model/PhoneNumberDto.h"
#include "CppRestOpenAPIClient/model/PhoneNumberValidationDto.h"
#include "CppRestOpenAPIClient/model/PhonePlanAvailability.h"
#include "CppRestOpenAPIClient/model/PhonePlanDto.h"
#include "CppRestOpenAPIClient/model/SentSmsDto.h"
#include "CppRestOpenAPIClient/model/SetPhoneFavouritedOptions.h"
#include "CppRestOpenAPIClient/model/SmsSendOptions.h"
#include "CppRestOpenAPIClient/model/TestPhoneNumberOptions.h"
#include "CppRestOpenAPIClient/model/UpdatePhoneNumberOptions.h"
#include "CppRestOpenAPIClient/model/ValidatePhoneNumberOptions.h"
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
    /// Create an emergency address
    /// </summary>
    /// <remarks>
    /// Add an emergency address to a phone number
    /// </remarks>
    /// <param name="createEmergencyAddressOptions"></param>
    pplx::task<std::shared_ptr<EmergencyAddress>> createEmergencyAddress(
        std::shared_ptr<CreateEmergencyAddressOptions> createEmergencyAddressOptions
    ) const;
    /// <summary>
    /// Add phone number to your account. Only works if you have already added a plan and an initial phone number in your account and acknowledged the pricing and terms of service by enabling API phone creation.
    /// </summary>
    /// <remarks>
    /// Create new phone number
    /// </remarks>
    /// <param name="createPhoneNumberOptions"></param>
    pplx::task<std::shared_ptr<PhoneNumberDto>> createPhoneNumber(
        std::shared_ptr<CreatePhoneNumberOptions> createPhoneNumberOptions
    ) const;
    /// <summary>
    /// Delete an emergency address
    /// </summary>
    /// <remarks>
    /// Delete an emergency address
    /// </remarks>
    /// <param name="addressId"></param>
    pplx::task<std::shared_ptr<EmptyResponseDto>> deleteEmergencyAddress(
        utility::string_t addressId
    ) const;
    /// <summary>
    /// Delete a phone number
    /// </summary>
    /// <remarks>
    /// Remove phone number from account
    /// </remarks>
    /// <param name="phoneNumberId"></param>
    pplx::task<void> deletePhoneNumber(
        utility::string_t phoneNumberId
    ) const;
    /// <summary>
    /// Get the latest messages for all phones
    /// </summary>
    /// <remarks>
    /// List all message threads for all phones
    /// </remarks>
    /// <param name="page"> (optional, default to 0)</param>
    /// <param name="size"> (optional, default to 0)</param>
    pplx::task<std::shared_ptr<PagePhoneMessageThreadProjection>> getAllPhoneMessageThreads(
        boost::optional<int32_t> page,
        boost::optional<int32_t> size
    ) const;
    /// <summary>
    /// Get consent status
    /// </summary>
    /// <remarks>
    /// Get the status of phone usage consent
    /// </remarks>
    pplx::task<std::shared_ptr<ConsentStatusDto>> getConsentStatus(
    ) const;
    /// <summary>
    /// Get an emergency address
    /// </summary>
    /// <remarks>
    /// Fetch an emergency address by ID
    /// </remarks>
    /// <param name="addressId"></param>
    pplx::task<std::shared_ptr<EmergencyAddress>> getEmergencyAddress(
        utility::string_t addressId
    ) const;
    /// <summary>
    /// Get emergency addresses
    /// </summary>
    /// <remarks>
    /// List emergency addresses
    /// </remarks>
    pplx::task<std::vector<std::shared_ptr<EmergencyAddressDto>>> getEmergencyAddresses(
    ) const;
    /// <summary>
    /// Get messages in a phone thread
    /// </summary>
    /// <remarks>
    /// List message thread messages for a phone message thread
    /// </remarks>
    /// <param name="phoneNumberId"></param>
    /// <param name="otherNumber"></param>
    /// <param name="page"> (optional, default to 0)</param>
    /// <param name="size"> (optional, default to 0)</param>
    pplx::task<std::shared_ptr<PagePhoneMessageThreadItemProjection>> getPhoneMessageThreadItems(
        utility::string_t phoneNumberId,
        utility::string_t otherNumber,
        boost::optional<int32_t> page,
        boost::optional<int32_t> size
    ) const;
    /// <summary>
    /// Get the latest message preview for a thread
    /// </summary>
    /// <remarks>
    /// List message threads for a phone
    /// </remarks>
    /// <param name="phoneNumberId"></param>
    /// <param name="page"> (optional, default to 0)</param>
    /// <param name="size"> (optional, default to 0)</param>
    pplx::task<std::shared_ptr<PagePhoneMessageThreadProjection>> getPhoneMessageThreads(
        utility::string_t phoneNumberId,
        boost::optional<int32_t> page,
        boost::optional<int32_t> size
    ) const;
    /// <summary>
    /// Get a phone number by ID
    /// </summary>
    /// <remarks>
    /// Get a phone number by ID
    /// </remarks>
    /// <param name="phoneNumberId"></param>
    pplx::task<std::shared_ptr<PhoneNumberDto>> getPhoneNumber(
        utility::string_t phoneNumberId
    ) const;
    /// <summary>
    /// Get a phone number by name
    /// </summary>
    /// <remarks>
    /// Get a phone number by name
    /// </remarks>
    /// <param name="name"></param>
    pplx::task<std::shared_ptr<PhoneNumberDto>> getPhoneNumberByName(
        utility::string_t name
    ) const;
    /// <summary>
    /// Get a phone number by phone number
    /// </summary>
    /// <remarks>
    /// Get a phone number by phone number
    /// </remarks>
    /// <param name="phoneNumber"></param>
    pplx::task<std::shared_ptr<PhoneNumberDto>> getPhoneNumberByPhoneNumber(
        utility::string_t phoneNumber
    ) const;
    /// <summary>
    /// Get phone numbers
    /// </summary>
    /// <remarks>
    /// List phone numbers for account
    /// </remarks>
    /// <param name="phoneCountry">Optional phone country (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="page">Optional page index for list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size for list pagination (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="since">Filter by created at after the given timestamp (optional, default to utility::datetime())</param>
    /// <param name="before">Filter by created at before the given timestamp (optional, default to utility::datetime())</param>
    /// <param name="search">Optional search filter (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="include">Optional phoneIds to include in result (optional, default to std::vector&lt;std::shared_ptr&lt;utility::string_t&gt;&gt;())</param>
    /// <param name="favourite">Optionally filter results for favourites only (optional, default to false)</param>
    pplx::task<std::shared_ptr<PagePhoneNumberProjection>> getPhoneNumbers(
        boost::optional<utility::string_t> phoneCountry,
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort,
        boost::optional<utility::datetime> since,
        boost::optional<utility::datetime> before,
        boost::optional<utility::string_t> search,
        boost::optional<std::vector<utility::string_t>> include,
        boost::optional<bool> favourite
    ) const;
    /// <summary>
    /// Get phone plans
    /// </summary>
    /// <remarks>
    /// Get phone number plans
    /// </remarks>
    pplx::task<std::vector<std::shared_ptr<PhonePlanDto>>> getPhonePlans(
    ) const;
    /// <summary>
    /// Get phone plans availability
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<std::shared_ptr<PhonePlanAvailability>> getPhonePlansAvailability(
    ) const;
    /// <summary>
    /// List sent TXT messages for a phone number
    /// </summary>
    /// <remarks>
    /// Get sent SMS messages for a phone number
    /// </remarks>
    /// <param name="phoneNumberId"></param>
    /// <param name="page">Optional page index in SMS list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size in SMS list pagination. Maximum size is 100. Use page index and sort to page through larger results (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="since">Optional filter SMSs received after given date time (optional, default to utility::datetime())</param>
    /// <param name="before">Optional filter SMSs received before given date time (optional, default to utility::datetime())</param>
    /// <param name="search">Optional search filter (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<PageSentSmsProjection>> getSentSmsByPhoneNumber(
        utility::string_t phoneNumberId,
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort,
        boost::optional<utility::datetime> since,
        boost::optional<utility::datetime> before,
        boost::optional<utility::string_t> search
    ) const;
    /// <summary>
    /// List SMS messages for a phone number
    /// </summary>
    /// <remarks>
    /// Get SMS messages for a phone number
    /// </remarks>
    /// <param name="phoneNumberId"></param>
    /// <param name="page">Optional page index in SMS list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size in SMS list pagination. Maximum size is 100. Use page index and sort to page through larger results (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="unreadOnly">Optional filter for unread SMS only. All SMS are considered unread until they are viewed in the dashboard or requested directly (optional, default to false)</param>
    /// <param name="since">Optional filter SMSs received after given date time (optional, default to utility::datetime())</param>
    /// <param name="before">Optional filter SMSs received before given date time (optional, default to utility::datetime())</param>
    /// <param name="search">Optional search filter (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="favourite">Optionally filter results for favourites only (optional, default to false)</param>
    pplx::task<std::shared_ptr<PageSmsProjection>> getSmsByPhoneNumber(
        utility::string_t phoneNumberId,
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort,
        boost::optional<bool> unreadOnly,
        boost::optional<utility::datetime> since,
        boost::optional<utility::datetime> before,
        boost::optional<utility::string_t> search,
        boost::optional<bool> favourite
    ) const;
    /// <summary>
    /// Send TXT message from a phone number
    /// </summary>
    /// <remarks>
    /// Send SMS from a phone number
    /// </remarks>
    /// <param name="phoneNumberId"></param>
    /// <param name="smsSendOptions"></param>
    pplx::task<std::shared_ptr<SentSmsDto>> sendSmsFromPhoneNumber(
        utility::string_t phoneNumberId,
        std::shared_ptr<SmsSendOptions> smsSendOptions
    ) const;
    /// <summary>
    /// Set consent status
    /// </summary>
    /// <remarks>
    /// Give or revoke consent for phone usage
    /// </remarks>
    /// <param name="agree"></param>
    pplx::task<std::shared_ptr<ConsentStatusDto>> setConsentStatus(
        bool agree
    ) const;
    /// <summary>
    /// Set phone favourited state
    /// </summary>
    /// <remarks>
    /// Set and return new favorite state for a phone
    /// </remarks>
    /// <param name="phoneNumberId">ID of phone to set favourite state</param>
    /// <param name="setPhoneFavouritedOptions"></param>
    pplx::task<std::shared_ptr<PhoneNumberDto>> setPhoneFavourited(
        utility::string_t phoneNumberId,
        std::shared_ptr<SetPhoneFavouritedOptions> setPhoneFavouritedOptions
    ) const;
    /// <summary>
    /// Test sending an SMS to a number
    /// </summary>
    /// <remarks>
    /// Test a phone number by sending an SMS to it
    /// </remarks>
    /// <param name="phoneNumberId"></param>
    /// <param name="testPhoneNumberOptions"></param>
    /// <param name="xTestId"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<void> testPhoneNumberSendSms(
        utility::string_t phoneNumberId,
        std::shared_ptr<TestPhoneNumberOptions> testPhoneNumberOptions,
        boost::optional<utility::string_t> xTestId
    ) const;
    /// <summary>
    /// Update a phone number
    /// </summary>
    /// <remarks>
    /// Set field for phone number
    /// </remarks>
    /// <param name="phoneNumberId">ID of phone to set favourite state</param>
    /// <param name="updatePhoneNumberOptions"></param>
    pplx::task<std::shared_ptr<PhoneNumberDto>> updatePhoneNumber(
        utility::string_t phoneNumberId,
        std::shared_ptr<UpdatePhoneNumberOptions> updatePhoneNumberOptions
    ) const;
    /// <summary>
    /// Verify validity of a phone number
    /// </summary>
    /// <remarks>
    /// Validate a phone number
    /// </remarks>
    /// <param name="validatePhoneNumberOptions"></param>
    pplx::task<std::shared_ptr<PhoneNumberValidationDto>> validatePhoneNumber(
        std::shared_ptr<ValidatePhoneNumberOptions> validatePhoneNumberOptions
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_API_PhoneControllerApi_H_ */

