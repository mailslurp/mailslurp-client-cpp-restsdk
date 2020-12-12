/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.   ## Resources - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://www.mailslurp.com/docs/) - [Examples](https://github.com/mailslurp/examples) repository 
 *
 * The version of the OpenAPI document: 6.5.2
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * BulkActionsControllerApi.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_API_BulkActionsControllerApi_H_
#define COM_MAILSLURP_CLIENT_API_BulkActionsControllerApi_H_


#include "../ApiClient.h"

#include "BulkSendEmailOptions.h"
#include "Inbox.h"
#include <vector>
#include <cpprest/details/basic_types.h>


#include <boost/optional.hpp>

namespace com {
namespace mailslurp {
namespace client {
namespace api {

using namespace com::mailslurp::client::model;



class  BulkActionsControllerApi 
{
public:

    explicit BulkActionsControllerApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~BulkActionsControllerApi();

    /// <summary>
    /// Bulk create Inboxes (email addresses)
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="count">Number of inboxes to be created in bulk</param>
    pplx::task<std::vector<std::shared_ptr<Inbox>>> bulkCreateInboxes(
        int32_t count
    ) const;
    /// <summary>
    /// Bulk Delete Inboxes
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="ids">ids</param>
    pplx::task<void> bulkDeleteInboxes(
        std::vector<utility::string_t> ids
    ) const;
    /// <summary>
    /// Bulk Send Emails
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="bulkSendEmailOptions">bulkSendEmailOptions</param>
    pplx::task<void> bulkSendEmails(
        std::shared_ptr<BulkSendEmailOptions> bulkSendEmailOptions
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_API_BulkActionsControllerApi_H_ */

