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
 * DNSLookupResults.h
 *
 * Results of query on domain name servers
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_DNSLookupResults_H_
#define COM_MAILSLURP_CLIENT_MODEL_DNSLookupResults_H_


#include "../ModelBase.h"

#include "DNSLookupResult.h"
#include <vector>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// Results of query on domain name servers
/// </summary>
class  DNSLookupResults
    : public ModelBase
{
public:
    DNSLookupResults();
    virtual ~DNSLookupResults();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// DNSLookupResults members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<DNSLookupResult>>& getResults();
    bool resultsIsSet() const;
    void unsetResults();

    void setResults(const std::vector<std::shared_ptr<DNSLookupResult>>& value);


protected:
    std::vector<std::shared_ptr<DNSLookupResult>> m_Results;
    bool m_ResultsIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_DNSLookupResults_H_ */
