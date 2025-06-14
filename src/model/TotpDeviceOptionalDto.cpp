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



#include "CppRestOpenAPIClient/model/TotpDeviceOptionalDto.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



TotpDeviceOptionalDto::TotpDeviceOptionalDto()
{
    m_DeviceIsSet = false;
}

TotpDeviceOptionalDto::~TotpDeviceOptionalDto()
{
}

void TotpDeviceOptionalDto::validate()
{
    // TODO: implement validation
}

web::json::value TotpDeviceOptionalDto::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_DeviceIsSet)
    {
        val[utility::conversions::to_string_t(U("device"))] = ModelBase::toJson(m_Device);
    }

    return val;
}

bool TotpDeviceOptionalDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("device"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("device")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<TotpDeviceDto> refVal_setDevice;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDevice);
            setDevice(refVal_setDevice);
        }
    }
    return ok;
}

void TotpDeviceOptionalDto::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_DeviceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("device")), m_Device));
    }
}

bool TotpDeviceOptionalDto::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("device"))))
    {
        std::shared_ptr<TotpDeviceDto> refVal_setDevice;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("device"))), refVal_setDevice );
        setDevice(refVal_setDevice);
    }
    return ok;
}

std::shared_ptr<TotpDeviceDto> TotpDeviceOptionalDto::getDevice() const
{
    return m_Device;
}

void TotpDeviceOptionalDto::setDevice(const std::shared_ptr<TotpDeviceDto>& value)
{
    m_Device = value;
    m_DeviceIsSet = true;
}

bool TotpDeviceOptionalDto::deviceIsSet() const
{
    return m_DeviceIsSet;
}

void TotpDeviceOptionalDto::unsetDevice()
{
    m_DeviceIsSet = false;
}
}
}
}
}


