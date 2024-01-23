/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://docs.mailslurp.com/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.2.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOpenAPIClient/model/PageComplaint.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



PageComplaint::PageComplaint()
{
    m_ContentIsSet = false;
    m_PageableIsSet = false;
    m_Total = 0L;
    m_TotalIsSet = false;
    m_TotalElements = 0L;
    m_TotalElementsIsSet = false;
    m_TotalPages = 0;
    m_TotalPagesIsSet = false;
    m_Last = false;
    m_LastIsSet = false;
    m_NumberOfElements = 0;
    m_NumberOfElementsIsSet = false;
    m_First = false;
    m_FirstIsSet = false;
    m_Size = 0;
    m_SizeIsSet = false;
    m_number = 0;
    m_numberIsSet = false;
    m_SortIsSet = false;
    m_Empty = false;
    m_EmptyIsSet = false;
}

PageComplaint::~PageComplaint()
{
}

void PageComplaint::validate()
{
    // TODO: implement validation
}

web::json::value PageComplaint::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ContentIsSet)
    {
        val[utility::conversions::to_string_t(U("content"))] = ModelBase::toJson(m_Content);
    }
    if(m_PageableIsSet)
    {
        val[utility::conversions::to_string_t(U("pageable"))] = ModelBase::toJson(m_Pageable);
    }
    if(m_TotalIsSet)
    {
        val[utility::conversions::to_string_t(U("total"))] = ModelBase::toJson(m_Total);
    }
    if(m_TotalElementsIsSet)
    {
        val[utility::conversions::to_string_t(U("totalElements"))] = ModelBase::toJson(m_TotalElements);
    }
    if(m_TotalPagesIsSet)
    {
        val[utility::conversions::to_string_t(U("totalPages"))] = ModelBase::toJson(m_TotalPages);
    }
    if(m_LastIsSet)
    {
        val[utility::conversions::to_string_t(U("last"))] = ModelBase::toJson(m_Last);
    }
    if(m_NumberOfElementsIsSet)
    {
        val[utility::conversions::to_string_t(U("numberOfElements"))] = ModelBase::toJson(m_NumberOfElements);
    }
    if(m_FirstIsSet)
    {
        val[utility::conversions::to_string_t(U("first"))] = ModelBase::toJson(m_First);
    }
    if(m_SizeIsSet)
    {
        val[utility::conversions::to_string_t(U("size"))] = ModelBase::toJson(m_Size);
    }
    if(m_numberIsSet)
    {
        val[utility::conversions::to_string_t(U("number"))] = ModelBase::toJson(m_number);
    }
    if(m_SortIsSet)
    {
        val[utility::conversions::to_string_t(U("sort"))] = ModelBase::toJson(m_Sort);
    }
    if(m_EmptyIsSet)
    {
        val[utility::conversions::to_string_t(U("empty"))] = ModelBase::toJson(m_Empty);
    }

    return val;
}

bool PageComplaint::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("content"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("content")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Complaint>> refVal_setContent;
            ok &= ModelBase::fromJson(fieldValue, refVal_setContent);
            setContent(refVal_setContent);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("pageable"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("pageable")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<PageableObject> refVal_setPageable;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPageable);
            setPageable(refVal_setPageable);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("total"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("total")));
        if(!fieldValue.is_null())
        {
            int64_t refVal_setTotal;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTotal);
            setTotal(refVal_setTotal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("totalElements"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("totalElements")));
        if(!fieldValue.is_null())
        {
            int64_t refVal_setTotalElements;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTotalElements);
            setTotalElements(refVal_setTotalElements);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("totalPages"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("totalPages")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setTotalPages;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTotalPages);
            setTotalPages(refVal_setTotalPages);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("last"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("last")));
        if(!fieldValue.is_null())
        {
            bool refVal_setLast;
            ok &= ModelBase::fromJson(fieldValue, refVal_setLast);
            setLast(refVal_setLast);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("numberOfElements"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("numberOfElements")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setNumberOfElements;
            ok &= ModelBase::fromJson(fieldValue, refVal_setNumberOfElements);
            setNumberOfElements(refVal_setNumberOfElements);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("first"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("first")));
        if(!fieldValue.is_null())
        {
            bool refVal_setFirst;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFirst);
            setFirst(refVal_setFirst);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("size"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("size")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setSize;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSize);
            setSize(refVal_setSize);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("number"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("number")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setNumber;
            ok &= ModelBase::fromJson(fieldValue, refVal_setNumber);
            setNumber(refVal_setNumber);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("sort"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("sort")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<SortObject> refVal_setSort;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSort);
            setSort(refVal_setSort);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("empty"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("empty")));
        if(!fieldValue.is_null())
        {
            bool refVal_setEmpty;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEmpty);
            setEmpty(refVal_setEmpty);
        }
    }
    return ok;
}

void PageComplaint::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ContentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("content")), m_Content));
    }
    if(m_PageableIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("pageable")), m_Pageable));
    }
    if(m_TotalIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("total")), m_Total));
    }
    if(m_TotalElementsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("totalElements")), m_TotalElements));
    }
    if(m_TotalPagesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("totalPages")), m_TotalPages));
    }
    if(m_LastIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("last")), m_Last));
    }
    if(m_NumberOfElementsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("numberOfElements")), m_NumberOfElements));
    }
    if(m_FirstIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("first")), m_First));
    }
    if(m_SizeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("size")), m_Size));
    }
    if(m_numberIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("number")), m_number));
    }
    if(m_SortIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("sort")), m_Sort));
    }
    if(m_EmptyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("empty")), m_Empty));
    }
}

bool PageComplaint::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("content"))))
    {
        std::vector<std::shared_ptr<Complaint>> refVal_setContent;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("content"))), refVal_setContent );
        setContent(refVal_setContent);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("pageable"))))
    {
        std::shared_ptr<PageableObject> refVal_setPageable;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("pageable"))), refVal_setPageable );
        setPageable(refVal_setPageable);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("total"))))
    {
        int64_t refVal_setTotal;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("total"))), refVal_setTotal );
        setTotal(refVal_setTotal);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("totalElements"))))
    {
        int64_t refVal_setTotalElements;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("totalElements"))), refVal_setTotalElements );
        setTotalElements(refVal_setTotalElements);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("totalPages"))))
    {
        int32_t refVal_setTotalPages;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("totalPages"))), refVal_setTotalPages );
        setTotalPages(refVal_setTotalPages);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("last"))))
    {
        bool refVal_setLast;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("last"))), refVal_setLast );
        setLast(refVal_setLast);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("numberOfElements"))))
    {
        int32_t refVal_setNumberOfElements;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("numberOfElements"))), refVal_setNumberOfElements );
        setNumberOfElements(refVal_setNumberOfElements);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("first"))))
    {
        bool refVal_setFirst;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("first"))), refVal_setFirst );
        setFirst(refVal_setFirst);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("size"))))
    {
        int32_t refVal_setSize;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("size"))), refVal_setSize );
        setSize(refVal_setSize);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("number"))))
    {
        int32_t refVal_setNumber;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("number"))), refVal_setNumber );
        setNumber(refVal_setNumber);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("sort"))))
    {
        std::shared_ptr<SortObject> refVal_setSort;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("sort"))), refVal_setSort );
        setSort(refVal_setSort);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("empty"))))
    {
        bool refVal_setEmpty;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("empty"))), refVal_setEmpty );
        setEmpty(refVal_setEmpty);
    }
    return ok;
}

std::vector<std::shared_ptr<Complaint>>& PageComplaint::getContent()
{
    return m_Content;
}

void PageComplaint::setContent(const std::vector<std::shared_ptr<Complaint>>& value)
{
    m_Content = value;
    m_ContentIsSet = true;
}

bool PageComplaint::contentIsSet() const
{
    return m_ContentIsSet;
}

void PageComplaint::unsetContent()
{
    m_ContentIsSet = false;
}
std::shared_ptr<PageableObject> PageComplaint::getPageable() const
{
    return m_Pageable;
}

void PageComplaint::setPageable(const std::shared_ptr<PageableObject>& value)
{
    m_Pageable = value;
    m_PageableIsSet = true;
}

bool PageComplaint::pageableIsSet() const
{
    return m_PageableIsSet;
}

void PageComplaint::unsetPageable()
{
    m_PageableIsSet = false;
}
int64_t PageComplaint::getTotal() const
{
    return m_Total;
}

void PageComplaint::setTotal(int64_t value)
{
    m_Total = value;
    m_TotalIsSet = true;
}

bool PageComplaint::totalIsSet() const
{
    return m_TotalIsSet;
}

void PageComplaint::unsetTotal()
{
    m_TotalIsSet = false;
}
int64_t PageComplaint::getTotalElements() const
{
    return m_TotalElements;
}

void PageComplaint::setTotalElements(int64_t value)
{
    m_TotalElements = value;
    m_TotalElementsIsSet = true;
}

bool PageComplaint::totalElementsIsSet() const
{
    return m_TotalElementsIsSet;
}

void PageComplaint::unsetTotalElements()
{
    m_TotalElementsIsSet = false;
}
int32_t PageComplaint::getTotalPages() const
{
    return m_TotalPages;
}

void PageComplaint::setTotalPages(int32_t value)
{
    m_TotalPages = value;
    m_TotalPagesIsSet = true;
}

bool PageComplaint::totalPagesIsSet() const
{
    return m_TotalPagesIsSet;
}

void PageComplaint::unsetTotalPages()
{
    m_TotalPagesIsSet = false;
}
bool PageComplaint::isLast() const
{
    return m_Last;
}

void PageComplaint::setLast(bool value)
{
    m_Last = value;
    m_LastIsSet = true;
}

bool PageComplaint::lastIsSet() const
{
    return m_LastIsSet;
}

void PageComplaint::unsetLast()
{
    m_LastIsSet = false;
}
int32_t PageComplaint::getNumberOfElements() const
{
    return m_NumberOfElements;
}

void PageComplaint::setNumberOfElements(int32_t value)
{
    m_NumberOfElements = value;
    m_NumberOfElementsIsSet = true;
}

bool PageComplaint::numberOfElementsIsSet() const
{
    return m_NumberOfElementsIsSet;
}

void PageComplaint::unsetNumberOfElements()
{
    m_NumberOfElementsIsSet = false;
}
bool PageComplaint::isFirst() const
{
    return m_First;
}

void PageComplaint::setFirst(bool value)
{
    m_First = value;
    m_FirstIsSet = true;
}

bool PageComplaint::firstIsSet() const
{
    return m_FirstIsSet;
}

void PageComplaint::unsetFirst()
{
    m_FirstIsSet = false;
}
int32_t PageComplaint::getSize() const
{
    return m_Size;
}

void PageComplaint::setSize(int32_t value)
{
    m_Size = value;
    m_SizeIsSet = true;
}

bool PageComplaint::sizeIsSet() const
{
    return m_SizeIsSet;
}

void PageComplaint::unsetSize()
{
    m_SizeIsSet = false;
}
int32_t PageComplaint::getNumber() const
{
    return m_number;
}

void PageComplaint::setNumber(int32_t value)
{
    m_number = value;
    m_numberIsSet = true;
}

bool PageComplaint::numberIsSet() const
{
    return m_numberIsSet;
}

void PageComplaint::unsetnumber()
{
    m_numberIsSet = false;
}
std::shared_ptr<SortObject> PageComplaint::getSort() const
{
    return m_Sort;
}

void PageComplaint::setSort(const std::shared_ptr<SortObject>& value)
{
    m_Sort = value;
    m_SortIsSet = true;
}

bool PageComplaint::sortIsSet() const
{
    return m_SortIsSet;
}

void PageComplaint::unsetSort()
{
    m_SortIsSet = false;
}
bool PageComplaint::isEmpty() const
{
    return m_Empty;
}

void PageComplaint::setEmpty(bool value)
{
    m_Empty = value;
    m_EmptyIsSet = true;
}

bool PageComplaint::emptyIsSet() const
{
    return m_EmptyIsSet;
}

void PageComplaint::unsetEmpty()
{
    m_EmptyIsSet = false;
}
}
}
}
}


