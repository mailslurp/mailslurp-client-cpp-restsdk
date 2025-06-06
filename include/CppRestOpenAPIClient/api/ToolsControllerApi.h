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
 * ToolsControllerApi.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_API_ToolsControllerApi_H_
#define COM_MAILSLURP_CLIENT_API_ToolsControllerApi_H_



#include "CppRestOpenAPIClient/ApiClient.h"

#include "CppRestOpenAPIClient/model/CheckEmailFeaturesClientSupportOptions.h"
#include "CppRestOpenAPIClient/model/CheckEmailFeaturesClientSupportResults.h"
#include "CppRestOpenAPIClient/model/FakeEmailPreview.h"
#include "CppRestOpenAPIClient/model/FakeEmailResult.h"
#include "CppRestOpenAPIClient/model/GenerateBimiRecordOptions.h"
#include "CppRestOpenAPIClient/model/GenerateBimiRecordResults.h"
#include "CppRestOpenAPIClient/model/GenerateDmarcRecordOptions.h"
#include "CppRestOpenAPIClient/model/GenerateDmarcRecordResults.h"
#include "CppRestOpenAPIClient/model/GenerateMtaStsRecordOptions.h"
#include "CppRestOpenAPIClient/model/GenerateMtaStsRecordResults.h"
#include "CppRestOpenAPIClient/model/GenerateTlsReportingRecordOptions.h"
#include "CppRestOpenAPIClient/model/GenerateTlsReportingRecordResults.h"
#include "CppRestOpenAPIClient/model/LookupBimiDomainOptions.h"
#include "CppRestOpenAPIClient/model/LookupBimiDomainResults.h"
#include "CppRestOpenAPIClient/model/LookupDmarcDomainOptions.h"
#include "CppRestOpenAPIClient/model/LookupDmarcDomainResults.h"
#include "CppRestOpenAPIClient/model/LookupMtaStsDomainOptions.h"
#include "CppRestOpenAPIClient/model/LookupMtaStsDomainResults.h"
#include "CppRestOpenAPIClient/model/LookupTlsReportingDomainOptions.h"
#include "CppRestOpenAPIClient/model/LookupTlsReportingDomainResults.h"
#include "CppRestOpenAPIClient/model/NewFakeEmailAddressResult.h"
#include <cpprest/details/basic_types.h>
#include <boost/optional.hpp>

namespace com {
namespace mailslurp {
namespace client {
namespace api {

using namespace com::mailslurp::client::model;



class  ToolsControllerApi 
{
public:

    explicit ToolsControllerApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~ToolsControllerApi();

    /// <summary>
    /// Check email client support for email HTML and CSS features
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="checkEmailFeaturesClientSupportOptions"></param>
    pplx::task<std::shared_ptr<CheckEmailFeaturesClientSupportResults>> checkEmailFeaturesClientSupport(
        std::shared_ptr<CheckEmailFeaturesClientSupportOptions> checkEmailFeaturesClientSupportOptions
    ) const;
    /// <summary>
    /// Create a new email address using the fake email domains
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<std::shared_ptr<NewFakeEmailAddressResult>> createNewFakeEmailAddress(
    ) const;
    /// <summary>
    /// Delete a fake email address using the fake email domains
    /// </summary>
    /// <remarks>
    /// Delete a fake email address using the fake email domains
    /// </remarks>
    /// <param name="emailAddress"></param>
    pplx::task<void> deleteNewFakeEmailAddress(
        utility::string_t emailAddress
    ) const;
    /// <summary>
    /// Create a BIMI record policy
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="generateBimiRecordOptions"></param>
    pplx::task<std::shared_ptr<GenerateBimiRecordResults>> generateBimiRecord(
        std::shared_ptr<GenerateBimiRecordOptions> generateBimiRecordOptions
    ) const;
    /// <summary>
    /// Create a DMARC record policy
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="generateDmarcRecordOptions"></param>
    pplx::task<std::shared_ptr<GenerateDmarcRecordResults>> generateDmarcRecord(
        std::shared_ptr<GenerateDmarcRecordOptions> generateDmarcRecordOptions
    ) const;
    /// <summary>
    /// Create a TLS reporting record policy
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="generateMtaStsRecordOptions"></param>
    pplx::task<std::shared_ptr<GenerateMtaStsRecordResults>> generateMtaStsRecord(
        std::shared_ptr<GenerateMtaStsRecordOptions> generateMtaStsRecordOptions
    ) const;
    /// <summary>
    /// Create a TLS reporting record policy
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="generateTlsReportingRecordOptions"></param>
    pplx::task<std::shared_ptr<GenerateTlsReportingRecordResults>> generateTlsReportingRecord(
        std::shared_ptr<GenerateTlsReportingRecordOptions> generateTlsReportingRecordOptions
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="emailAddress"></param>
    pplx::task<std::shared_ptr<FakeEmailResult>> getFakeEmailByEmailAddress(
        utility::string_t emailAddress
    ) const;
    /// <summary>
    /// Get a fake email by its ID
    /// </summary>
    /// <remarks>
    /// Get a fake email by its ID
    /// </remarks>
    /// <param name="id"></param>
    pplx::task<std::shared_ptr<FakeEmailResult>> getFakeEmailById(
        utility::string_t id
    ) const;
    /// <summary>
    /// Get raw fake email content
    /// </summary>
    /// <remarks>
    /// Retrieve the raw content of a fake email by its ID
    /// </remarks>
    /// <param name="id"></param>
    pplx::task<utility::string_t> getFakeEmailRaw(
        utility::string_t id
    ) const;
    /// <summary>
    /// Get fake emails for an address
    /// </summary>
    /// <remarks>
    /// Get fake emails for an address
    /// </remarks>
    /// <param name="emailAddress"></param>
    /// <param name="page"> (optional, default to 0)</param>
    pplx::task<std::vector<std::shared_ptr<FakeEmailPreview>>> getFakeEmailsForAddress(
        utility::string_t emailAddress,
        boost::optional<int32_t> page
    ) const;
    /// <summary>
    /// Lookup a BIMI record policy
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="lookupBimiDomainOptions"></param>
    pplx::task<std::shared_ptr<LookupBimiDomainResults>> lookupBimiDomain(
        std::shared_ptr<LookupBimiDomainOptions> lookupBimiDomainOptions
    ) const;
    /// <summary>
    /// Lookup a DMARC record policy
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="lookupDmarcDomainOptions"></param>
    pplx::task<std::shared_ptr<LookupDmarcDomainResults>> lookupDmarcDomain(
        std::shared_ptr<LookupDmarcDomainOptions> lookupDmarcDomainOptions
    ) const;
    /// <summary>
    /// Lookup a MTA-STS domain policy
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="lookupMtaStsDomainOptions"></param>
    pplx::task<std::shared_ptr<LookupMtaStsDomainResults>> lookupMtaStsDomain(
        std::shared_ptr<LookupMtaStsDomainOptions> lookupMtaStsDomainOptions
    ) const;
    /// <summary>
    /// Lookup a TLS reporting domain policy
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="lookupTlsReportingDomainOptions"></param>
    pplx::task<std::shared_ptr<LookupTlsReportingDomainResults>> lookupTlsReportingDomain(
        std::shared_ptr<LookupTlsReportingDomainOptions> lookupTlsReportingDomainOptions
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_API_ToolsControllerApi_H_ */

