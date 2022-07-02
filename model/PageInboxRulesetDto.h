/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://docs.mailslurp.com/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * PageInboxRulesetDto.h
 *
 * Paginated inbox ruleset results. Page index starts at zero. Projection results may omit larger entity fields. For fetching a full entity use the projection ID with individual method calls.
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_PageInboxRulesetDto_H_
#define COM_MAILSLURP_CLIENT_MODEL_PageInboxRulesetDto_H_


#include "../ModelBase.h"

#include "Sort.h"
#include "PageableObject.h"
#include "InboxRulesetDto.h"
#include <vector>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// Paginated inbox ruleset results. Page index starts at zero. Projection results may omit larger entity fields. For fetching a full entity use the projection ID with individual method calls.
/// </summary>
class  PageInboxRulesetDto
    : public ModelBase
{
public:
    PageInboxRulesetDto();
    virtual ~PageInboxRulesetDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PageInboxRulesetDto members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<InboxRulesetDto>>& getContent();
    bool contentIsSet() const;
    void unsetContent();

    void setContent(const std::vector<std::shared_ptr<InboxRulesetDto>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<PageableObject> getPageable() const;
    bool pageableIsSet() const;
    void unsetPageable();

    void setPageable(const std::shared_ptr<PageableObject>& value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getTotal() const;
    bool totalIsSet() const;
    void unsetTotal();

    void setTotal(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    bool isLast() const;
    bool lastIsSet() const;
    void unsetLast();

    void setLast(bool value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getTotalPages() const;
    bool totalPagesIsSet() const;
    void unsetTotalPages();

    void setTotalPages(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getTotalElements() const;
    bool totalElementsIsSet() const;
    void unsetTotalElements();

    void setTotalElements(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetSize();

    void setSize(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();

    void setNumber(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Sort> getSort() const;
    bool sortIsSet() const;
    void unsetSort();

    void setSort(const std::shared_ptr<Sort>& value);

    /// <summary>
    /// 
    /// </summary>
    bool isFirst() const;
    bool firstIsSet() const;
    void unsetFirst();

    void setFirst(bool value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getNumberOfElements() const;
    bool numberOfElementsIsSet() const;
    void unsetNumberOfElements();

    void setNumberOfElements(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    bool isEmpty() const;
    bool emptyIsSet() const;
    void unsetEmpty();

    void setEmpty(bool value);


protected:
    std::vector<std::shared_ptr<InboxRulesetDto>> m_Content;
    bool m_ContentIsSet;
    std::shared_ptr<PageableObject> m_Pageable;
    bool m_PageableIsSet;
    int64_t m_Total;
    bool m_TotalIsSet;
    bool m_Last;
    bool m_LastIsSet;
    int32_t m_TotalPages;
    bool m_TotalPagesIsSet;
    int64_t m_TotalElements;
    bool m_TotalElementsIsSet;
    int32_t m_Size;
    bool m_SizeIsSet;
    int32_t m_number;
    bool m_numberIsSet;
    std::shared_ptr<Sort> m_Sort;
    bool m_SortIsSet;
    bool m_First;
    bool m_FirstIsSet;
    int32_t m_NumberOfElements;
    bool m_NumberOfElementsIsSet;
    bool m_Empty;
    bool m_EmptyIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_PageInboxRulesetDto_H_ */
