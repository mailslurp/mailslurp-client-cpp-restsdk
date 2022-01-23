/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://www.mailslurp.com/docs/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "TestNewInboxForwarderOptions.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




TestNewInboxForwarderOptions::TestNewInboxForwarderOptions()
{
    m_InboxForwarderTestOptionsIsSet = false;
    m_CreateInboxForwarderOptionsIsSet = false;
}

TestNewInboxForwarderOptions::~TestNewInboxForwarderOptions()
{
}

void TestNewInboxForwarderOptions::validate()
{
    // TODO: implement validation
}

web::json::value TestNewInboxForwarderOptions::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_InboxForwarderTestOptionsIsSet)
    {
        val[utility::conversions::to_string_t("inboxForwarderTestOptions")] = ModelBase::toJson(m_InboxForwarderTestOptions);
    }
    if(m_CreateInboxForwarderOptionsIsSet)
    {
        val[utility::conversions::to_string_t("createInboxForwarderOptions")] = ModelBase::toJson(m_CreateInboxForwarderOptions);
    }

    return val;
}

bool TestNewInboxForwarderOptions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("inboxForwarderTestOptions")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inboxForwarderTestOptions"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<InboxForwarderTestOptions> refVal_inboxForwarderTestOptions;
            ok &= ModelBase::fromJson(fieldValue, refVal_inboxForwarderTestOptions);
            setInboxForwarderTestOptions(refVal_inboxForwarderTestOptions);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("createInboxForwarderOptions")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("createInboxForwarderOptions"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CreateInboxForwarderOptions> refVal_createInboxForwarderOptions;
            ok &= ModelBase::fromJson(fieldValue, refVal_createInboxForwarderOptions);
            setCreateInboxForwarderOptions(refVal_createInboxForwarderOptions);
        }
    }
    return ok;
}

void TestNewInboxForwarderOptions::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_InboxForwarderTestOptionsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("inboxForwarderTestOptions"), m_InboxForwarderTestOptions));
    }
    if(m_CreateInboxForwarderOptionsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("createInboxForwarderOptions"), m_CreateInboxForwarderOptions));
    }
}

bool TestNewInboxForwarderOptions::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("inboxForwarderTestOptions")))
    {
        std::shared_ptr<InboxForwarderTestOptions> refVal_inboxForwarderTestOptions;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("inboxForwarderTestOptions")), refVal_inboxForwarderTestOptions );
        setInboxForwarderTestOptions(refVal_inboxForwarderTestOptions);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("createInboxForwarderOptions")))
    {
        std::shared_ptr<CreateInboxForwarderOptions> refVal_createInboxForwarderOptions;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("createInboxForwarderOptions")), refVal_createInboxForwarderOptions );
        setCreateInboxForwarderOptions(refVal_createInboxForwarderOptions);
    }
    return ok;
}

std::shared_ptr<InboxForwarderTestOptions> TestNewInboxForwarderOptions::getInboxForwarderTestOptions() const
{
    return m_InboxForwarderTestOptions;
}

void TestNewInboxForwarderOptions::setInboxForwarderTestOptions(const std::shared_ptr<InboxForwarderTestOptions>& value)
{
    m_InboxForwarderTestOptions = value;
    m_InboxForwarderTestOptionsIsSet = true;
}

bool TestNewInboxForwarderOptions::inboxForwarderTestOptionsIsSet() const
{
    return m_InboxForwarderTestOptionsIsSet;
}

void TestNewInboxForwarderOptions::unsetInboxForwarderTestOptions()
{
    m_InboxForwarderTestOptionsIsSet = false;
}
std::shared_ptr<CreateInboxForwarderOptions> TestNewInboxForwarderOptions::getCreateInboxForwarderOptions() const
{
    return m_CreateInboxForwarderOptions;
}

void TestNewInboxForwarderOptions::setCreateInboxForwarderOptions(const std::shared_ptr<CreateInboxForwarderOptions>& value)
{
    m_CreateInboxForwarderOptions = value;
    m_CreateInboxForwarderOptionsIsSet = true;
}

bool TestNewInboxForwarderOptions::createInboxForwarderOptionsIsSet() const
{
    return m_CreateInboxForwarderOptionsIsSet;
}

void TestNewInboxForwarderOptions::unsetCreateInboxForwarderOptions()
{
    m_CreateInboxForwarderOptionsIsSet = false;
}
}
}
}
}


