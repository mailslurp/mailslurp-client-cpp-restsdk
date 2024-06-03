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



#include "CppRestOpenAPIClient/model/PageableObject.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



PageableObject::PageableObject()
{
    m_PageNumber = 0;
    m_PageNumberIsSet = false;
    m_PageSize = 0;
    m_PageSizeIsSet = false;
    m_Unpaged = false;
    m_UnpagedIsSet = false;
    m_Paged = false;
    m_PagedIsSet = false;
    m_Offset = 0L;
    m_OffsetIsSet = false;
    m_SortIsSet = false;
}

PageableObject::~PageableObject()
{
}

void PageableObject::validate()
{
    // TODO: implement validation
}

web::json::value PageableObject::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_PageNumberIsSet)
    {
        val[utility::conversions::to_string_t(U("pageNumber"))] = ModelBase::toJson(m_PageNumber);
    }
    if(m_PageSizeIsSet)
    {
        val[utility::conversions::to_string_t(U("pageSize"))] = ModelBase::toJson(m_PageSize);
    }
    if(m_UnpagedIsSet)
    {
        val[utility::conversions::to_string_t(U("unpaged"))] = ModelBase::toJson(m_Unpaged);
    }
    if(m_PagedIsSet)
    {
        val[utility::conversions::to_string_t(U("paged"))] = ModelBase::toJson(m_Paged);
    }
    if(m_OffsetIsSet)
    {
        val[utility::conversions::to_string_t(U("offset"))] = ModelBase::toJson(m_Offset);
    }
    if(m_SortIsSet)
    {
        val[utility::conversions::to_string_t(U("sort"))] = ModelBase::toJson(m_Sort);
    }

    return val;
}

bool PageableObject::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("pageNumber"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("pageNumber")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setPageNumber;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPageNumber);
            setPageNumber(refVal_setPageNumber);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("pageSize"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("pageSize")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setPageSize;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPageSize);
            setPageSize(refVal_setPageSize);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("unpaged"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("unpaged")));
        if(!fieldValue.is_null())
        {
            bool refVal_setUnpaged;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUnpaged);
            setUnpaged(refVal_setUnpaged);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("paged"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("paged")));
        if(!fieldValue.is_null())
        {
            bool refVal_setPaged;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPaged);
            setPaged(refVal_setPaged);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("offset"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("offset")));
        if(!fieldValue.is_null())
        {
            int64_t refVal_setOffset;
            ok &= ModelBase::fromJson(fieldValue, refVal_setOffset);
            setOffset(refVal_setOffset);
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
    return ok;
}

void PageableObject::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_PageNumberIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("pageNumber")), m_PageNumber));
    }
    if(m_PageSizeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("pageSize")), m_PageSize));
    }
    if(m_UnpagedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("unpaged")), m_Unpaged));
    }
    if(m_PagedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("paged")), m_Paged));
    }
    if(m_OffsetIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("offset")), m_Offset));
    }
    if(m_SortIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("sort")), m_Sort));
    }
}

bool PageableObject::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("pageNumber"))))
    {
        int32_t refVal_setPageNumber;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("pageNumber"))), refVal_setPageNumber );
        setPageNumber(refVal_setPageNumber);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("pageSize"))))
    {
        int32_t refVal_setPageSize;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("pageSize"))), refVal_setPageSize );
        setPageSize(refVal_setPageSize);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("unpaged"))))
    {
        bool refVal_setUnpaged;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("unpaged"))), refVal_setUnpaged );
        setUnpaged(refVal_setUnpaged);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("paged"))))
    {
        bool refVal_setPaged;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("paged"))), refVal_setPaged );
        setPaged(refVal_setPaged);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("offset"))))
    {
        int64_t refVal_setOffset;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("offset"))), refVal_setOffset );
        setOffset(refVal_setOffset);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("sort"))))
    {
        std::shared_ptr<SortObject> refVal_setSort;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("sort"))), refVal_setSort );
        setSort(refVal_setSort);
    }
    return ok;
}

int32_t PageableObject::getPageNumber() const
{
    return m_PageNumber;
}

void PageableObject::setPageNumber(int32_t value)
{
    m_PageNumber = value;
    m_PageNumberIsSet = true;
}

bool PageableObject::pageNumberIsSet() const
{
    return m_PageNumberIsSet;
}

void PageableObject::unsetPageNumber()
{
    m_PageNumberIsSet = false;
}
int32_t PageableObject::getPageSize() const
{
    return m_PageSize;
}

void PageableObject::setPageSize(int32_t value)
{
    m_PageSize = value;
    m_PageSizeIsSet = true;
}

bool PageableObject::pageSizeIsSet() const
{
    return m_PageSizeIsSet;
}

void PageableObject::unsetPageSize()
{
    m_PageSizeIsSet = false;
}
bool PageableObject::isUnpaged() const
{
    return m_Unpaged;
}

void PageableObject::setUnpaged(bool value)
{
    m_Unpaged = value;
    m_UnpagedIsSet = true;
}

bool PageableObject::unpagedIsSet() const
{
    return m_UnpagedIsSet;
}

void PageableObject::unsetUnpaged()
{
    m_UnpagedIsSet = false;
}
bool PageableObject::isPaged() const
{
    return m_Paged;
}

void PageableObject::setPaged(bool value)
{
    m_Paged = value;
    m_PagedIsSet = true;
}

bool PageableObject::pagedIsSet() const
{
    return m_PagedIsSet;
}

void PageableObject::unsetPaged()
{
    m_PagedIsSet = false;
}
int64_t PageableObject::getOffset() const
{
    return m_Offset;
}

void PageableObject::setOffset(int64_t value)
{
    m_Offset = value;
    m_OffsetIsSet = true;
}

bool PageableObject::offsetIsSet() const
{
    return m_OffsetIsSet;
}

void PageableObject::unsetOffset()
{
    m_OffsetIsSet = false;
}
std::shared_ptr<SortObject> PageableObject::getSort() const
{
    return m_Sort;
}

void PageableObject::setSort(const std::shared_ptr<SortObject>& value)
{
    m_Sort = value;
    m_SortIsSet = true;
}

bool PageableObject::sortIsSet() const
{
    return m_SortIsSet;
}

void PageableObject::unsetSort()
{
    m_SortIsSet = false;
}
}
}
}
}


