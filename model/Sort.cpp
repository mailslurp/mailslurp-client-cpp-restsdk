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



#include "Sort.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




Sort::Sort()
{
    m_Empty = false;
    m_EmptyIsSet = false;
    m_Unsorted = false;
    m_UnsortedIsSet = false;
    m_Sorted = false;
    m_SortedIsSet = false;
}

Sort::~Sort()
{
}

void Sort::validate()
{
    // TODO: implement validation
}

web::json::value Sort::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_EmptyIsSet)
    {
        val[utility::conversions::to_string_t("empty")] = ModelBase::toJson(m_Empty);
    }
    if(m_UnsortedIsSet)
    {
        val[utility::conversions::to_string_t("unsorted")] = ModelBase::toJson(m_Unsorted);
    }
    if(m_SortedIsSet)
    {
        val[utility::conversions::to_string_t("sorted")] = ModelBase::toJson(m_Sorted);
    }

    return val;
}

bool Sort::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("empty")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("empty"));
        if(!fieldValue.is_null())
        {
            bool refVal_empty;
            ok &= ModelBase::fromJson(fieldValue, refVal_empty);
            setEmpty(refVal_empty);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unsorted")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unsorted"));
        if(!fieldValue.is_null())
        {
            bool refVal_unsorted;
            ok &= ModelBase::fromJson(fieldValue, refVal_unsorted);
            setUnsorted(refVal_unsorted);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sorted")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sorted"));
        if(!fieldValue.is_null())
        {
            bool refVal_sorted;
            ok &= ModelBase::fromJson(fieldValue, refVal_sorted);
            setSorted(refVal_sorted);
        }
    }
    return ok;
}

void Sort::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_EmptyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("empty"), m_Empty));
    }
    if(m_UnsortedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("unsorted"), m_Unsorted));
    }
    if(m_SortedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sorted"), m_Sorted));
    }
}

bool Sort::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("empty")))
    {
        bool refVal_empty;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("empty")), refVal_empty );
        setEmpty(refVal_empty);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("unsorted")))
    {
        bool refVal_unsorted;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("unsorted")), refVal_unsorted );
        setUnsorted(refVal_unsorted);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sorted")))
    {
        bool refVal_sorted;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sorted")), refVal_sorted );
        setSorted(refVal_sorted);
    }
    return ok;
}

bool Sort::isEmpty() const
{
    return m_Empty;
}

void Sort::setEmpty(bool value)
{
    m_Empty = value;
    m_EmptyIsSet = true;
}

bool Sort::emptyIsSet() const
{
    return m_EmptyIsSet;
}

void Sort::unsetEmpty()
{
    m_EmptyIsSet = false;
}
bool Sort::isUnsorted() const
{
    return m_Unsorted;
}

void Sort::setUnsorted(bool value)
{
    m_Unsorted = value;
    m_UnsortedIsSet = true;
}

bool Sort::unsortedIsSet() const
{
    return m_UnsortedIsSet;
}

void Sort::unsetUnsorted()
{
    m_UnsortedIsSet = false;
}
bool Sort::isSorted() const
{
    return m_Sorted;
}

void Sort::setSorted(bool value)
{
    m_Sorted = value;
    m_SortedIsSet = true;
}

bool Sort::sortedIsSet() const
{
    return m_SortedIsSet;
}

void Sort::unsetSorted()
{
    m_SortedIsSet = false;
}
}
}
}
}


