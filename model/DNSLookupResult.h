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
 * DNSLookupResult.h
 *
 * DNS lookup result. Includes record type, time to live, raw response, and name value for the name server response.
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_DNSLookupResult_H_
#define COM_MAILSLURP_CLIENT_MODEL_DNSLookupResult_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// DNS lookup result. Includes record type, time to live, raw response, and name value for the name server response.
/// </summary>
class  DNSLookupResult
    : public ModelBase
{
public:
    DNSLookupResult();
    virtual ~DNSLookupResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// DNSLookupResult members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getRecordEntries();
    bool recordEntriesIsSet() const;
    void unsetRecordEntries();

    void setRecordEntries(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getRecordType() const;
    bool recordTypeIsSet() const;
    void unsetRecordType();

    void setRecordType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getTtl() const;
    bool ttlIsSet() const;
    void unsetTtl();

    void setTtl(int64_t value);


protected:
    utility::string_t m_Name;
    bool m_NameIsSet;
    std::vector<utility::string_t> m_RecordEntries;
    bool m_RecordEntriesIsSet;
    utility::string_t m_RecordType;
    bool m_RecordTypeIsSet;
    int64_t m_Ttl;
    bool m_TtlIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_DNSLookupResult_H_ */
