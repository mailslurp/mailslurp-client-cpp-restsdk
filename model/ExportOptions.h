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
 * ExportOptions.h
 *
 * Options for exporting user data
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_ExportOptions_H_
#define COM_MAILSLURP_CLIENT_MODEL_ExportOptions_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "Object.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// Options for exporting user data
/// </summary>
class  ExportOptions
    : public ModelBase
{
public:
    ExportOptions();
    virtual ~ExportOptions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ExportOptions members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getOutputFormat() const;
    bool outputFormatIsSet() const;
    void unsetOutputFormat();

    void setOutputFormat(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    bool isExcludePreviouslyExported() const;
    bool excludePreviouslyExportedIsSet() const;
    void unsetExcludePreviouslyExported();

    void setExcludePreviouslyExported(bool value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getCreatedEarliestTime() const;
    bool createdEarliestTimeIsSet() const;
    void unsetCreatedEarliestTime();

    void setCreatedEarliestTime(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getCreatedOldestTime() const;
    bool createdOldestTimeIsSet() const;
    void unsetCreatedOldestTime();

    void setCreatedOldestTime(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getFilter() const;
    bool filterIsSet() const;
    void unsetFilter();

    void setFilter(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Object> getListSeparatorToken() const;
    bool listSeparatorTokenIsSet() const;
    void unsetListSeparatorToken();

    void setListSeparatorToken(const std::shared_ptr<Object>& value);


protected:
    utility::string_t m_OutputFormat;
    bool m_OutputFormatIsSet;
    bool m_ExcludePreviouslyExported;
    bool m_ExcludePreviouslyExportedIsSet;
    utility::datetime m_CreatedEarliestTime;
    bool m_CreatedEarliestTimeIsSet;
    utility::datetime m_CreatedOldestTime;
    bool m_CreatedOldestTimeIsSet;
    utility::string_t m_Filter;
    bool m_FilterIsSet;
    std::shared_ptr<Object> m_ListSeparatorToken;
    bool m_ListSeparatorTokenIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_ExportOptions_H_ */
