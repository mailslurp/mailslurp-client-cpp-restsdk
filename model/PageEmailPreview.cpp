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



#include "PageEmailPreview.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




PageEmailPreview::PageEmailPreview()
{
    m_ContentIsSet = false;
    m_PageableIsSet = false;
    m_Total = 0L;
    m_TotalIsSet = false;
    m_Last = false;
    m_LastIsSet = false;
    m_TotalElements = 0L;
    m_TotalElementsIsSet = false;
    m_TotalPages = 0;
    m_TotalPagesIsSet = false;
    m_Size = 0;
    m_SizeIsSet = false;
    m_number = 0;
    m_numberIsSet = false;
    m_SortIsSet = false;
    m_First = false;
    m_FirstIsSet = false;
    m_NumberOfElements = 0;
    m_NumberOfElementsIsSet = false;
    m_Empty = false;
    m_EmptyIsSet = false;
}

PageEmailPreview::~PageEmailPreview()
{
}

void PageEmailPreview::validate()
{
    // TODO: implement validation
}

web::json::value PageEmailPreview::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ContentIsSet)
    {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(m_Content);
    }
    if(m_PageableIsSet)
    {
        val[utility::conversions::to_string_t("pageable")] = ModelBase::toJson(m_Pageable);
    }
    if(m_TotalIsSet)
    {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(m_Total);
    }
    if(m_LastIsSet)
    {
        val[utility::conversions::to_string_t("last")] = ModelBase::toJson(m_Last);
    }
    if(m_TotalElementsIsSet)
    {
        val[utility::conversions::to_string_t("totalElements")] = ModelBase::toJson(m_TotalElements);
    }
    if(m_TotalPagesIsSet)
    {
        val[utility::conversions::to_string_t("totalPages")] = ModelBase::toJson(m_TotalPages);
    }
    if(m_SizeIsSet)
    {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(m_Size);
    }
    if(m_numberIsSet)
    {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(m_number);
    }
    if(m_SortIsSet)
    {
        val[utility::conversions::to_string_t("sort")] = ModelBase::toJson(m_Sort);
    }
    if(m_FirstIsSet)
    {
        val[utility::conversions::to_string_t("first")] = ModelBase::toJson(m_First);
    }
    if(m_NumberOfElementsIsSet)
    {
        val[utility::conversions::to_string_t("numberOfElements")] = ModelBase::toJson(m_NumberOfElements);
    }
    if(m_EmptyIsSet)
    {
        val[utility::conversions::to_string_t("empty")] = ModelBase::toJson(m_Empty);
    }

    return val;
}

bool PageEmailPreview::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("content")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<EmailPreview>> refVal_content;
            ok &= ModelBase::fromJson(fieldValue, refVal_content);
            setContent(refVal_content);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pageable")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pageable"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<PageableObject> refVal_pageable;
            ok &= ModelBase::fromJson(fieldValue, refVal_pageable);
            setPageable(refVal_pageable);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int64_t refVal_total;
            ok &= ModelBase::fromJson(fieldValue, refVal_total);
            setTotal(refVal_total);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last"));
        if(!fieldValue.is_null())
        {
            bool refVal_last;
            ok &= ModelBase::fromJson(fieldValue, refVal_last);
            setLast(refVal_last);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("totalElements")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("totalElements"));
        if(!fieldValue.is_null())
        {
            int64_t refVal_totalElements;
            ok &= ModelBase::fromJson(fieldValue, refVal_totalElements);
            setTotalElements(refVal_totalElements);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("totalPages")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("totalPages"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_totalPages;
            ok &= ModelBase::fromJson(fieldValue, refVal_totalPages);
            setTotalPages(refVal_totalPages);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_size;
            ok &= ModelBase::fromJson(fieldValue, refVal_size);
            setSize(refVal_size);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("number")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_number;
            ok &= ModelBase::fromJson(fieldValue, refVal_number);
            setNumber(refVal_number);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Sort> refVal_sort;
            ok &= ModelBase::fromJson(fieldValue, refVal_sort);
            setSort(refVal_sort);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("first")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("first"));
        if(!fieldValue.is_null())
        {
            bool refVal_first;
            ok &= ModelBase::fromJson(fieldValue, refVal_first);
            setFirst(refVal_first);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("numberOfElements")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("numberOfElements"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_numberOfElements;
            ok &= ModelBase::fromJson(fieldValue, refVal_numberOfElements);
            setNumberOfElements(refVal_numberOfElements);
        }
    }
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
    return ok;
}

void PageEmailPreview::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ContentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("content"), m_Content));
    }
    if(m_PageableIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("pageable"), m_Pageable));
    }
    if(m_TotalIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("total"), m_Total));
    }
    if(m_LastIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("last"), m_Last));
    }
    if(m_TotalElementsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("totalElements"), m_TotalElements));
    }
    if(m_TotalPagesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("totalPages"), m_TotalPages));
    }
    if(m_SizeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("size"), m_Size));
    }
    if(m_numberIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("number"), m_number));
    }
    if(m_SortIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sort"), m_Sort));
    }
    if(m_FirstIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("first"), m_First));
    }
    if(m_NumberOfElementsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("numberOfElements"), m_NumberOfElements));
    }
    if(m_EmptyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("empty"), m_Empty));
    }
}

bool PageEmailPreview::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("content")))
    {
        std::vector<std::shared_ptr<EmailPreview>> refVal_content;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("content")), refVal_content );
        setContent(refVal_content);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("pageable")))
    {
        std::shared_ptr<PageableObject> refVal_pageable;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("pageable")), refVal_pageable );
        setPageable(refVal_pageable);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("total")))
    {
        int64_t refVal_total;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("total")), refVal_total );
        setTotal(refVal_total);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("last")))
    {
        bool refVal_last;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("last")), refVal_last );
        setLast(refVal_last);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("totalElements")))
    {
        int64_t refVal_totalElements;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("totalElements")), refVal_totalElements );
        setTotalElements(refVal_totalElements);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("totalPages")))
    {
        int32_t refVal_totalPages;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("totalPages")), refVal_totalPages );
        setTotalPages(refVal_totalPages);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("size")))
    {
        int32_t refVal_size;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("size")), refVal_size );
        setSize(refVal_size);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("number")))
    {
        int32_t refVal_number;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("number")), refVal_number );
        setNumber(refVal_number);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sort")))
    {
        std::shared_ptr<Sort> refVal_sort;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sort")), refVal_sort );
        setSort(refVal_sort);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("first")))
    {
        bool refVal_first;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("first")), refVal_first );
        setFirst(refVal_first);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("numberOfElements")))
    {
        int32_t refVal_numberOfElements;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("numberOfElements")), refVal_numberOfElements );
        setNumberOfElements(refVal_numberOfElements);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("empty")))
    {
        bool refVal_empty;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("empty")), refVal_empty );
        setEmpty(refVal_empty);
    }
    return ok;
}

std::vector<std::shared_ptr<EmailPreview>>& PageEmailPreview::getContent()
{
    return m_Content;
}

void PageEmailPreview::setContent(const std::vector<std::shared_ptr<EmailPreview>>& value)
{
    m_Content = value;
    m_ContentIsSet = true;
}

bool PageEmailPreview::contentIsSet() const
{
    return m_ContentIsSet;
}

void PageEmailPreview::unsetContent()
{
    m_ContentIsSet = false;
}
std::shared_ptr<PageableObject> PageEmailPreview::getPageable() const
{
    return m_Pageable;
}

void PageEmailPreview::setPageable(const std::shared_ptr<PageableObject>& value)
{
    m_Pageable = value;
    m_PageableIsSet = true;
}

bool PageEmailPreview::pageableIsSet() const
{
    return m_PageableIsSet;
}

void PageEmailPreview::unsetPageable()
{
    m_PageableIsSet = false;
}
int64_t PageEmailPreview::getTotal() const
{
    return m_Total;
}

void PageEmailPreview::setTotal(int64_t value)
{
    m_Total = value;
    m_TotalIsSet = true;
}

bool PageEmailPreview::totalIsSet() const
{
    return m_TotalIsSet;
}

void PageEmailPreview::unsetTotal()
{
    m_TotalIsSet = false;
}
bool PageEmailPreview::isLast() const
{
    return m_Last;
}

void PageEmailPreview::setLast(bool value)
{
    m_Last = value;
    m_LastIsSet = true;
}

bool PageEmailPreview::lastIsSet() const
{
    return m_LastIsSet;
}

void PageEmailPreview::unsetLast()
{
    m_LastIsSet = false;
}
int64_t PageEmailPreview::getTotalElements() const
{
    return m_TotalElements;
}

void PageEmailPreview::setTotalElements(int64_t value)
{
    m_TotalElements = value;
    m_TotalElementsIsSet = true;
}

bool PageEmailPreview::totalElementsIsSet() const
{
    return m_TotalElementsIsSet;
}

void PageEmailPreview::unsetTotalElements()
{
    m_TotalElementsIsSet = false;
}
int32_t PageEmailPreview::getTotalPages() const
{
    return m_TotalPages;
}

void PageEmailPreview::setTotalPages(int32_t value)
{
    m_TotalPages = value;
    m_TotalPagesIsSet = true;
}

bool PageEmailPreview::totalPagesIsSet() const
{
    return m_TotalPagesIsSet;
}

void PageEmailPreview::unsetTotalPages()
{
    m_TotalPagesIsSet = false;
}
int32_t PageEmailPreview::getSize() const
{
    return m_Size;
}

void PageEmailPreview::setSize(int32_t value)
{
    m_Size = value;
    m_SizeIsSet = true;
}

bool PageEmailPreview::sizeIsSet() const
{
    return m_SizeIsSet;
}

void PageEmailPreview::unsetSize()
{
    m_SizeIsSet = false;
}
int32_t PageEmailPreview::getNumber() const
{
    return m_number;
}

void PageEmailPreview::setNumber(int32_t value)
{
    m_number = value;
    m_numberIsSet = true;
}

bool PageEmailPreview::numberIsSet() const
{
    return m_numberIsSet;
}

void PageEmailPreview::unsetnumber()
{
    m_numberIsSet = false;
}
std::shared_ptr<Sort> PageEmailPreview::getSort() const
{
    return m_Sort;
}

void PageEmailPreview::setSort(const std::shared_ptr<Sort>& value)
{
    m_Sort = value;
    m_SortIsSet = true;
}

bool PageEmailPreview::sortIsSet() const
{
    return m_SortIsSet;
}

void PageEmailPreview::unsetSort()
{
    m_SortIsSet = false;
}
bool PageEmailPreview::isFirst() const
{
    return m_First;
}

void PageEmailPreview::setFirst(bool value)
{
    m_First = value;
    m_FirstIsSet = true;
}

bool PageEmailPreview::firstIsSet() const
{
    return m_FirstIsSet;
}

void PageEmailPreview::unsetFirst()
{
    m_FirstIsSet = false;
}
int32_t PageEmailPreview::getNumberOfElements() const
{
    return m_NumberOfElements;
}

void PageEmailPreview::setNumberOfElements(int32_t value)
{
    m_NumberOfElements = value;
    m_NumberOfElementsIsSet = true;
}

bool PageEmailPreview::numberOfElementsIsSet() const
{
    return m_NumberOfElementsIsSet;
}

void PageEmailPreview::unsetNumberOfElements()
{
    m_NumberOfElementsIsSet = false;
}
bool PageEmailPreview::isEmpty() const
{
    return m_Empty;
}

void PageEmailPreview::setEmpty(bool value)
{
    m_Empty = value;
    m_EmptyIsSet = true;
}

bool PageEmailPreview::emptyIsSet() const
{
    return m_EmptyIsSet;
}

void PageEmailPreview::unsetEmpty()
{
    m_EmptyIsSet = false;
}
}
}
}
}


