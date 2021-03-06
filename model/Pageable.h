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
 * Pageable.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_Pageable_H_
#define COM_MAILSLURP_CLIENT_MODEL_Pageable_H_


#include "../ModelBase.h"

#include "Sort.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  Pageable
    : public ModelBase
{
public:
    Pageable();
    virtual ~Pageable();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Pageable members

    /// <summary>
    /// 
    /// </summary>
    int64_t getOffset() const;
    bool offsetIsSet() const;
    void unsetOffset();

    void setOffset(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getPageNumber() const;
    bool pageNumberIsSet() const;
    void unsetPageNumber();

    void setPageNumber(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetPageSize();

    void setPageSize(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    bool isPaged() const;
    bool pagedIsSet() const;
    void unsetPaged();

    void setPaged(bool value);

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
    bool isUnpaged() const;
    bool unpagedIsSet() const;
    void unsetUnpaged();

    void setUnpaged(bool value);


protected:
    int64_t m_Offset;
    bool m_OffsetIsSet;
    int32_t m_PageNumber;
    bool m_PageNumberIsSet;
    int32_t m_PageSize;
    bool m_PageSizeIsSet;
    bool m_Paged;
    bool m_PagedIsSet;
    std::shared_ptr<Sort> m_Sort;
    bool m_SortIsSet;
    bool m_Unpaged;
    bool m_UnpagedIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_Pageable_H_ */
