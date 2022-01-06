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
 * DescribeMailServerDomainResult.h
 *
 * Name Server lookup result
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_DescribeMailServerDomainResult_H_
#define COM_MAILSLURP_CLIENT_MODEL_DescribeMailServerDomainResult_H_


#include "../ModelBase.h"

#include "NameServerRecord.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// Name Server lookup result
/// </summary>
class  DescribeMailServerDomainResult
    : public ModelBase
{
public:
    DescribeMailServerDomainResult();
    virtual ~DescribeMailServerDomainResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// DescribeMailServerDomainResult members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<NameServerRecord>>& getMxRecords();
    bool mxRecordsIsSet() const;
    void unsetMxRecords();

    void setMxRecords(const std::vector<std::shared_ptr<NameServerRecord>>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDomain() const;
    bool domainIsSet() const;
    void unsetDomain();

    void setDomain(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getMessage() const;
    bool messageIsSet() const;
    void unsetMessage();

    void setMessage(const utility::string_t& value);


protected:
    std::vector<std::shared_ptr<NameServerRecord>> m_MxRecords;
    bool m_MxRecordsIsSet;
    utility::string_t m_Domain;
    bool m_DomainIsSet;
    utility::string_t m_Message;
    bool m_MessageIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_DescribeMailServerDomainResult_H_ */
