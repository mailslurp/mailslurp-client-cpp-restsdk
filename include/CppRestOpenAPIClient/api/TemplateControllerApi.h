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

/*
 * TemplateControllerApi.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_API_TemplateControllerApi_H_
#define COM_MAILSLURP_CLIENT_API_TemplateControllerApi_H_



#include "CppRestOpenAPIClient/ApiClient.h"

#include "CppRestOpenAPIClient/model/CreateTemplateOptions.h"
#include "CppRestOpenAPIClient/model/PageTemplateProjection.h"
#include "CppRestOpenAPIClient/model/TemplateDto.h"
#include "CppRestOpenAPIClient/model/TemplatePreview.h"
#include "CppRestOpenAPIClient/model/TemplateProjection.h"
#include <cpprest/details/basic_types.h>
#include <boost/optional.hpp>

namespace com {
namespace mailslurp {
namespace client {
namespace api {

using namespace com::mailslurp::client::model;



class  TemplateControllerApi 
{
public:

    explicit TemplateControllerApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~TemplateControllerApi();

    /// <summary>
    /// Create a Template
    /// </summary>
    /// <remarks>
    /// Create an email template with variables for use with templated transactional emails.
    /// </remarks>
    /// <param name="createTemplateOptions"></param>
    pplx::task<std::shared_ptr<TemplateDto>> createTemplate(
        std::shared_ptr<CreateTemplateOptions> createTemplateOptions
    ) const;
    /// <summary>
    /// Delete email template
    /// </summary>
    /// <remarks>
    /// Delete template
    /// </remarks>
    /// <param name="templateId">Template ID</param>
    pplx::task<void> deleteTemplate(
        utility::string_t templateId
    ) const;
    /// <summary>
    /// List templates
    /// </summary>
    /// <remarks>
    /// Get all templates in paginated format
    /// </remarks>
    /// <param name="page">Optional page index in list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size in list pagination (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="since">Filter by created at after the given timestamp (optional, default to utility::datetime())</param>
    /// <param name="before">Filter by created at before the given timestamp (optional, default to utility::datetime())</param>
    pplx::task<std::shared_ptr<PageTemplateProjection>> getAllTemplates(
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort,
        boost::optional<utility::datetime> since,
        boost::optional<utility::datetime> before
    ) const;
    /// <summary>
    /// Get template
    /// </summary>
    /// <remarks>
    /// Get email template
    /// </remarks>
    /// <param name="templateId">Template ID</param>
    pplx::task<std::shared_ptr<TemplateDto>> getTemplate(
        utility::string_t templateId
    ) const;
    /// <summary>
    /// Get template preview HTML
    /// </summary>
    /// <remarks>
    /// Get email template preview with passed template variables in HTML format for browsers. Pass template variables as query params.
    /// </remarks>
    /// <param name="templateId">Template ID</param>
    pplx::task<utility::string_t> getTemplatePreviewHtml(
        utility::string_t templateId
    ) const;
    /// <summary>
    /// Get template preview Json
    /// </summary>
    /// <remarks>
    /// Get email template preview with passed template variables in JSON format. Pass template variables as query params.
    /// </remarks>
    /// <param name="templateId">Template ID</param>
    pplx::task<std::shared_ptr<TemplatePreview>> getTemplatePreviewJson(
        utility::string_t templateId
    ) const;
    /// <summary>
    /// List templates
    /// </summary>
    /// <remarks>
    /// Get all templates
    /// </remarks>
    pplx::task<std::vector<std::shared_ptr<TemplateProjection>>> getTemplates(
    ) const;
    /// <summary>
    /// Update template
    /// </summary>
    /// <remarks>
    /// Update email template
    /// </remarks>
    /// <param name="templateId">Template ID</param>
    /// <param name="createTemplateOptions"></param>
    pplx::task<std::shared_ptr<TemplateDto>> updateTemplate(
        utility::string_t templateId,
        std::shared_ptr<CreateTemplateOptions> createTemplateOptions
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_API_TemplateControllerApi_H_ */

