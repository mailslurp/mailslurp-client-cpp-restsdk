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
 * IPAddressResult.h
 *
 * IP Address look up result for a given domain / hostname
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_IPAddressResult_H_
#define COM_MAILSLURP_CLIENT_MODEL_IPAddressResult_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// IP Address look up result for a given domain / hostname
/// </summary>
class  IPAddressResult
    : public ModelBase
{
public:
    IPAddressResult();
    virtual ~IPAddressResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// IPAddressResult members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getAddress() const;
    bool addressIsSet() const;
    void unsetAddress();

    void setAddress(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getHostname() const;
    bool hostnameIsSet() const;
    void unsetHostname();

    void setHostname(const utility::string_t& value);


protected:
    utility::string_t m_Address;
    bool m_AddressIsSet;
    utility::string_t m_Hostname;
    bool m_HostnameIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_IPAddressResult_H_ */
