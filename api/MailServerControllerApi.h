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
 * MailServerControllerApi.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_API_MailServerControllerApi_H_
#define COM_MAILSLURP_CLIENT_API_MailServerControllerApi_H_


#include "../ApiClient.h"

#include "DNSLookupOptions.h"
#include "DNSLookupResults.h"
#include "DescribeDomainOptions.h"
#include "DescribeMailServerDomainResult.h"
#include "EmailVerificationResult.h"
#include "IPAddressResult.h"
#include "VerifyEmailAddressOptions.h"
#include <cpprest/details/basic_types.h>


#include <boost/optional.hpp>

namespace com {
namespace mailslurp {
namespace client {
namespace api {

using namespace com::mailslurp::client::model;



class  MailServerControllerApi 
{
public:

    explicit MailServerControllerApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~MailServerControllerApi();

    /// <summary>
    /// Get DNS Mail Server records for a domain
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="describeOptions">describeOptions</param>
    pplx::task<std::shared_ptr<DescribeMailServerDomainResult>> describeMailServerDomain(
        std::shared_ptr<DescribeDomainOptions> describeOptions
    ) const;
    /// <summary>
    /// Lookup DNS records for a domain
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="dnsLookupOptions">dnsLookupOptions</param>
    pplx::task<std::shared_ptr<DNSLookupResults>> getDnsLookup(
        std::shared_ptr<DNSLookupOptions> dnsLookupOptions
    ) const;
    /// <summary>
    /// Get IP address for a domain
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="name">name</param>
    pplx::task<std::shared_ptr<IPAddressResult>> getIpAddress(
        utility::string_t name
    ) const;
    /// <summary>
    /// Verify the existence of an email address at a given mail server.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="verifyOptions">verifyOptions</param>
    pplx::task<std::shared_ptr<EmailVerificationResult>> verifyEmailAddress(
        std::shared_ptr<VerifyEmailAddressOptions> verifyOptions
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_API_MailServerControllerApi_H_ */

