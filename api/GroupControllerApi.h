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
 * GroupControllerApi.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_API_GroupControllerApi_H_
#define COM_MAILSLURP_CLIENT_API_GroupControllerApi_H_


#include "../ApiClient.h"

#include "CreateGroupOptions.h"
#include "GroupContactsDto.h"
#include "GroupDto.h"
#include "GroupProjection.h"
#include "PageContactProjection.h"
#include "PageGroupProjection.h"
#include "UpdateGroupContacts.h"
#include <cpprest/details/basic_types.h>


#include <boost/optional.hpp>

namespace com {
namespace mailslurp {
namespace client {
namespace api {

using namespace com::mailslurp::client::model;



class  GroupControllerApi 
{
public:

    explicit GroupControllerApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~GroupControllerApi();

    /// <summary>
    /// Add contacts to a group
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="groupId">groupId</param>
    /// <param name="updateGroupContactsOption">updateGroupContactsOption</param>
    pplx::task<std::shared_ptr<GroupContactsDto>> addContactsToGroup(
        std::shared_ptr<utility::string_t> groupId,
        std::shared_ptr<UpdateGroupContacts> updateGroupContactsOption
    ) const;
    /// <summary>
    /// Create a group
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="createGroupOptions">createGroupOptions</param>
    pplx::task<std::shared_ptr<GroupDto>> createGroup(
        std::shared_ptr<CreateGroupOptions> createGroupOptions
    ) const;
    /// <summary>
    /// Delete group
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="groupId">groupId</param>
    pplx::task<void> deleteGroup(
        std::shared_ptr<utility::string_t> groupId
    ) const;
    /// <summary>
    /// Get all Contact Groups in paginated format
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="page">Optional page index in inbox list pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size in inbox list pagination (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<PageGroupProjection>> getAllGroups(
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort
    ) const;
    /// <summary>
    /// Get group
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="groupId">groupId</param>
    pplx::task<std::shared_ptr<GroupDto>> getGroup(
        std::shared_ptr<utility::string_t> groupId
    ) const;
    /// <summary>
    /// Get group and contacts belonging to it
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="groupId">groupId</param>
    pplx::task<std::shared_ptr<GroupContactsDto>> getGroupWithContacts(
        std::shared_ptr<utility::string_t> groupId
    ) const;
    /// <summary>
    /// Get group and paginated contacts belonging to it
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="groupId">groupId</param>
    /// <param name="page">Optional page index in group contact pagination (optional, default to 0)</param>
    /// <param name="size">Optional page size in group contact pagination (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<PageContactProjection>> getGroupWithContactsPaginated(
        std::shared_ptr<utility::string_t> groupId,
        boost::optional<int32_t> page,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort
    ) const;
    /// <summary>
    /// Get all groups
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<std::vector<std::shared_ptr<GroupProjection>>> getGroups(
    ) const;
    /// <summary>
    /// Remove contacts from a group
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="groupId">groupId</param>
    /// <param name="updateGroupContactsOption">updateGroupContactsOption</param>
    pplx::task<std::shared_ptr<GroupContactsDto>> removeContactsFromGroup(
        std::shared_ptr<utility::string_t> groupId,
        std::shared_ptr<UpdateGroupContacts> updateGroupContactsOption
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_API_GroupControllerApi_H_ */

