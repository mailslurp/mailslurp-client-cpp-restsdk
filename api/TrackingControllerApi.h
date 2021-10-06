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
 * TrackingControllerApi.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_API_TrackingControllerApi_H_
#define COM_MAILSLURP_CLIENT_API_TrackingControllerApi_H_


#include "../ApiClient.h"

#include "CreateTrackingPixelOptions.h"
#include "PageTrackingPixelProjection.h"
#include "TrackingPixelDto.h"
#include <cpprest/details/basic_types.h>


#include <boost/optional.hpp>

namespace com {
namespace mailslurp {
namespace client {
namespace api {

using namespace com::mailslurp::client::model;



class  TrackingControllerApi 
{
public:

    explicit TrackingControllerApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~TrackingControllerApi();

    /// <summary>
    /// Create tracking pixel
    /// </summary>
    /// <remarks>
    /// Create a tracking pixel. A tracking pixel is an image that can be embedded in an email. When the email is viewed and the image is seen MailSlurp will mark the pixel as seen. Use tracking pixels to monitor email open events. You can receive open notifications via webhook or by fetching the pixel.
    /// </remarks>
    /// <param name="createTrackingPixelOptions">createTrackingPixelOptions</param>
    pplx::task<std::shared_ptr<TrackingPixelDto>> createTrackingPixel(
        std::shared_ptr<CreateTrackingPixelOptions> createTrackingPixelOptions
    ) const;
    /// <summary>
    /// Get tracking pixels
    /// </summary>
    /// <remarks>
    /// List tracking pixels in paginated form
    /// </remarks>
    /// <param name="before">Filter by created at before the given timestamp (optional, default to utility::datetime())</param>
    /// <param name="page">Optional page index in list pagination (optional, default to 0)</param>
    /// <param name="searchFilter">Optional search filter (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="since">Filter by created at after the given timestamp (optional, default to utility::datetime())</param>
    /// <param name="size">Optional page size in list pagination (optional, default to 0)</param>
    /// <param name="sort">Optional createdAt sort direction ASC or DESC (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<PageTrackingPixelProjection>> getAllTrackingPixels(
        boost::optional<utility::datetime> before,
        boost::optional<int32_t> page,
        boost::optional<utility::string_t> searchFilter,
        boost::optional<utility::datetime> since,
        boost::optional<int32_t> size,
        boost::optional<utility::string_t> sort
    ) const;
    /// <summary>
    /// Get pixel
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">id</param>
    pplx::task<std::shared_ptr<TrackingPixelDto>> getTrackingPixel(
        std::shared_ptr<utility::string_t> id
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_API_TrackingControllerApi_H_ */

