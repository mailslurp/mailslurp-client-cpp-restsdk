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


#include "TrackingControllerApi.h"
#include "IHttpBody.h"
#include "JsonBody.h"
#include "MultipartFormData.h"

#include <unordered_set>

#include <boost/algorithm/string/replace.hpp>

namespace com {
namespace mailslurp {
namespace client {
namespace api {

using namespace com::mailslurp::client::model;

TrackingControllerApi::TrackingControllerApi( std::shared_ptr<const ApiClient> apiClient )
    : m_ApiClient(apiClient)
{
}

TrackingControllerApi::~TrackingControllerApi()
{
}

pplx::task<std::shared_ptr<TrackingPixelDto>> TrackingControllerApi::createTrackingPixel(std::shared_ptr<CreateTrackingPixelOptions> createTrackingPixelOptions) const
{

    // verify the required parameter 'createTrackingPixelOptions' is set
    if (createTrackingPixelOptions == nullptr)
    {
        throw ApiException(400, utility::conversions::to_string_t("Missing required parameter 'createTrackingPixelOptions' when calling TrackingControllerApi->createTrackingPixel"));
    }


    std::shared_ptr<const ApiConfiguration> localVarApiConfiguration( m_ApiClient->getConfiguration() );
    utility::string_t localVarPath = utility::conversions::to_string_t("/tracking/pixels");
    
    std::map<utility::string_t, utility::string_t> localVarQueryParams;
    std::map<utility::string_t, utility::string_t> localVarHeaderParams( localVarApiConfiguration->getDefaultHeaders() );
    std::map<utility::string_t, utility::string_t> localVarFormParams;
    std::map<utility::string_t, std::shared_ptr<HttpContent>> localVarFileParams;

    std::unordered_set<utility::string_t> localVarResponseHttpContentTypes;
    localVarResponseHttpContentTypes.insert( utility::conversions::to_string_t("*/*") );

    utility::string_t localVarResponseHttpContentType;

    // use JSON if possible
    if ( localVarResponseHttpContentTypes.size() == 0 )
    {
        localVarResponseHttpContentType = utility::conversions::to_string_t("application/json");
    }
    // JSON
    else if ( localVarResponseHttpContentTypes.find(utility::conversions::to_string_t("application/json")) != localVarResponseHttpContentTypes.end() )
    {
        localVarResponseHttpContentType = utility::conversions::to_string_t("application/json");
    }
    // multipart formdata
    else if( localVarResponseHttpContentTypes.find(utility::conversions::to_string_t("multipart/form-data")) != localVarResponseHttpContentTypes.end() )
    {
        localVarResponseHttpContentType = utility::conversions::to_string_t("multipart/form-data");
    }
    else
    {
        throw ApiException(400, utility::conversions::to_string_t("TrackingControllerApi->createTrackingPixel does not produce any supported media type"));
    }

    localVarHeaderParams[utility::conversions::to_string_t("Accept")] = localVarResponseHttpContentType;

    std::unordered_set<utility::string_t> localVarConsumeHttpContentTypes;
    localVarConsumeHttpContentTypes.insert( utility::conversions::to_string_t("application/json") );


    std::shared_ptr<IHttpBody> localVarHttpBody;
    utility::string_t localVarRequestHttpContentType;

    // use JSON if possible
    if ( localVarConsumeHttpContentTypes.size() == 0 || localVarConsumeHttpContentTypes.find(utility::conversions::to_string_t("application/json")) != localVarConsumeHttpContentTypes.end() )
    {
        localVarRequestHttpContentType = utility::conversions::to_string_t("application/json");
        web::json::value localVarJson;

        localVarJson = ModelBase::toJson(createTrackingPixelOptions);
        

        localVarHttpBody = std::shared_ptr<IHttpBody>( new JsonBody( localVarJson ) );
    }
    // multipart formdata
    else if( localVarConsumeHttpContentTypes.find(utility::conversions::to_string_t("multipart/form-data")) != localVarConsumeHttpContentTypes.end() )
    {
        localVarRequestHttpContentType = utility::conversions::to_string_t("multipart/form-data");
        std::shared_ptr<MultipartFormData> localVarMultipart(new MultipartFormData);

        if(createTrackingPixelOptions.get())
        {
            createTrackingPixelOptions->toMultipart(localVarMultipart, utility::conversions::to_string_t("createTrackingPixelOptions"));
        }
        

        localVarHttpBody = localVarMultipart;
        localVarRequestHttpContentType += utility::conversions::to_string_t("; boundary=") + localVarMultipart->getBoundary();
    }
    else
    {
        throw ApiException(415, utility::conversions::to_string_t("TrackingControllerApi->createTrackingPixel does not consume any supported media type"));
    }

    // authentication (API_KEY) required
    {
        utility::string_t localVarApiKey = localVarApiConfiguration->getApiKey(utility::conversions::to_string_t("x-api-key"));
        if ( localVarApiKey.size() > 0 )
        {
            localVarHeaderParams[utility::conversions::to_string_t("x-api-key")] = localVarApiKey;
        }
    }

    return m_ApiClient->callApi(localVarPath, utility::conversions::to_string_t("POST"), localVarQueryParams, localVarHttpBody, localVarHeaderParams, localVarFormParams, localVarFileParams, localVarRequestHttpContentType)
    .then([=](web::http::http_response localVarResponse)
    {
        if (m_ApiClient->getResponseHandler())
        {
            m_ApiClient->getResponseHandler()(localVarResponse.status_code(), localVarResponse.headers());
        }

        // 1xx - informational : OK
        // 2xx - successful       : OK
        // 3xx - redirection   : OK
        // 4xx - client error  : not OK
        // 5xx - client error  : not OK
        if (localVarResponse.status_code() >= 400)
        {
            throw ApiException(localVarResponse.status_code()
                , utility::conversions::to_string_t("error calling createTrackingPixel: ") + localVarResponse.reason_phrase()
                , std::make_shared<std::stringstream>(localVarResponse.extract_utf8string(true).get()));
        }

        // check response content type
        if(localVarResponse.headers().has(utility::conversions::to_string_t("Content-Type")))
        {
            utility::string_t localVarContentType = localVarResponse.headers()[utility::conversions::to_string_t("Content-Type")];
            if( localVarContentType.find(localVarResponseHttpContentType) == std::string::npos )
            {
                throw ApiException(500
                    , utility::conversions::to_string_t("error calling createTrackingPixel: unexpected response type: ") + localVarContentType
                    , std::make_shared<std::stringstream>(localVarResponse.extract_utf8string(true).get()));
            }
        }

        return localVarResponse.extract_string();
    })
    .then([=](utility::string_t localVarResponse)
    {
        std::shared_ptr<TrackingPixelDto> localVarResult(new TrackingPixelDto());

        if(localVarResponseHttpContentType == utility::conversions::to_string_t("application/json"))
        {
            web::json::value localVarJson = web::json::value::parse(localVarResponse);

            ModelBase::fromJson(localVarJson, localVarResult);
        }
        // else if(localVarResponseHttpContentType == utility::conversions::to_string_t("multipart/form-data"))
        // {
        // TODO multipart response parsing
        // }
        else
        {
            throw ApiException(500
                , utility::conversions::to_string_t("error calling createTrackingPixel: unsupported response type"));
        }

        return localVarResult;
    });
}
pplx::task<std::shared_ptr<PageTrackingPixelProjection>> TrackingControllerApi::getAllTrackingPixels(boost::optional<int32_t> page, boost::optional<int32_t> size, boost::optional<utility::string_t> sort, boost::optional<utility::string_t> searchFilter, boost::optional<utility::datetime> since, boost::optional<utility::datetime> before) const
{


    std::shared_ptr<const ApiConfiguration> localVarApiConfiguration( m_ApiClient->getConfiguration() );
    utility::string_t localVarPath = utility::conversions::to_string_t("/tracking/pixels");
    
    std::map<utility::string_t, utility::string_t> localVarQueryParams;
    std::map<utility::string_t, utility::string_t> localVarHeaderParams( localVarApiConfiguration->getDefaultHeaders() );
    std::map<utility::string_t, utility::string_t> localVarFormParams;
    std::map<utility::string_t, std::shared_ptr<HttpContent>> localVarFileParams;

    std::unordered_set<utility::string_t> localVarResponseHttpContentTypes;
    localVarResponseHttpContentTypes.insert( utility::conversions::to_string_t("*/*") );

    utility::string_t localVarResponseHttpContentType;

    // use JSON if possible
    if ( localVarResponseHttpContentTypes.size() == 0 )
    {
        localVarResponseHttpContentType = utility::conversions::to_string_t("application/json");
    }
    // JSON
    else if ( localVarResponseHttpContentTypes.find(utility::conversions::to_string_t("application/json")) != localVarResponseHttpContentTypes.end() )
    {
        localVarResponseHttpContentType = utility::conversions::to_string_t("application/json");
    }
    // multipart formdata
    else if( localVarResponseHttpContentTypes.find(utility::conversions::to_string_t("multipart/form-data")) != localVarResponseHttpContentTypes.end() )
    {
        localVarResponseHttpContentType = utility::conversions::to_string_t("multipart/form-data");
    }
    else
    {
        throw ApiException(400, utility::conversions::to_string_t("TrackingControllerApi->getAllTrackingPixels does not produce any supported media type"));
    }

    localVarHeaderParams[utility::conversions::to_string_t("Accept")] = localVarResponseHttpContentType;

    std::unordered_set<utility::string_t> localVarConsumeHttpContentTypes;

    if (page)
    {
        localVarQueryParams[utility::conversions::to_string_t("page")] = ApiClient::parameterToString(*page);
    }
    if (size)
    {
        localVarQueryParams[utility::conversions::to_string_t("size")] = ApiClient::parameterToString(*size);
    }
    if (sort)
    {
        localVarQueryParams[utility::conversions::to_string_t("sort")] = ApiClient::parameterToString(*sort);
    }
    if (searchFilter)
    {
        localVarQueryParams[utility::conversions::to_string_t("searchFilter")] = ApiClient::parameterToString(*searchFilter);
    }
    if (since)
    {
        localVarQueryParams[utility::conversions::to_string_t("since")] = ApiClient::parameterToString(*since);
    }
    if (before)
    {
        localVarQueryParams[utility::conversions::to_string_t("before")] = ApiClient::parameterToString(*before);
    }

    std::shared_ptr<IHttpBody> localVarHttpBody;
    utility::string_t localVarRequestHttpContentType;

    // use JSON if possible
    if ( localVarConsumeHttpContentTypes.size() == 0 || localVarConsumeHttpContentTypes.find(utility::conversions::to_string_t("application/json")) != localVarConsumeHttpContentTypes.end() )
    {
        localVarRequestHttpContentType = utility::conversions::to_string_t("application/json");
    }
    // multipart formdata
    else if( localVarConsumeHttpContentTypes.find(utility::conversions::to_string_t("multipart/form-data")) != localVarConsumeHttpContentTypes.end() )
    {
        localVarRequestHttpContentType = utility::conversions::to_string_t("multipart/form-data");
    }
    else
    {
        throw ApiException(415, utility::conversions::to_string_t("TrackingControllerApi->getAllTrackingPixels does not consume any supported media type"));
    }

    // authentication (API_KEY) required
    {
        utility::string_t localVarApiKey = localVarApiConfiguration->getApiKey(utility::conversions::to_string_t("x-api-key"));
        if ( localVarApiKey.size() > 0 )
        {
            localVarHeaderParams[utility::conversions::to_string_t("x-api-key")] = localVarApiKey;
        }
    }

    return m_ApiClient->callApi(localVarPath, utility::conversions::to_string_t("GET"), localVarQueryParams, localVarHttpBody, localVarHeaderParams, localVarFormParams, localVarFileParams, localVarRequestHttpContentType)
    .then([=](web::http::http_response localVarResponse)
    {
        if (m_ApiClient->getResponseHandler())
        {
            m_ApiClient->getResponseHandler()(localVarResponse.status_code(), localVarResponse.headers());
        }

        // 1xx - informational : OK
        // 2xx - successful       : OK
        // 3xx - redirection   : OK
        // 4xx - client error  : not OK
        // 5xx - client error  : not OK
        if (localVarResponse.status_code() >= 400)
        {
            throw ApiException(localVarResponse.status_code()
                , utility::conversions::to_string_t("error calling getAllTrackingPixels: ") + localVarResponse.reason_phrase()
                , std::make_shared<std::stringstream>(localVarResponse.extract_utf8string(true).get()));
        }

        // check response content type
        if(localVarResponse.headers().has(utility::conversions::to_string_t("Content-Type")))
        {
            utility::string_t localVarContentType = localVarResponse.headers()[utility::conversions::to_string_t("Content-Type")];
            if( localVarContentType.find(localVarResponseHttpContentType) == std::string::npos )
            {
                throw ApiException(500
                    , utility::conversions::to_string_t("error calling getAllTrackingPixels: unexpected response type: ") + localVarContentType
                    , std::make_shared<std::stringstream>(localVarResponse.extract_utf8string(true).get()));
            }
        }

        return localVarResponse.extract_string();
    })
    .then([=](utility::string_t localVarResponse)
    {
        std::shared_ptr<PageTrackingPixelProjection> localVarResult(new PageTrackingPixelProjection());

        if(localVarResponseHttpContentType == utility::conversions::to_string_t("application/json"))
        {
            web::json::value localVarJson = web::json::value::parse(localVarResponse);

            ModelBase::fromJson(localVarJson, localVarResult);
        }
        // else if(localVarResponseHttpContentType == utility::conversions::to_string_t("multipart/form-data"))
        // {
        // TODO multipart response parsing
        // }
        else
        {
            throw ApiException(500
                , utility::conversions::to_string_t("error calling getAllTrackingPixels: unsupported response type"));
        }

        return localVarResult;
    });
}
pplx::task<std::shared_ptr<TrackingPixelDto>> TrackingControllerApi::getTrackingPixel(std::shared_ptr<utility::string_t> id) const
{

    // verify the required parameter 'id' is set
    if (id == nullptr)
    {
        throw ApiException(400, utility::conversions::to_string_t("Missing required parameter 'id' when calling TrackingControllerApi->getTrackingPixel"));
    }


    std::shared_ptr<const ApiConfiguration> localVarApiConfiguration( m_ApiClient->getConfiguration() );
    utility::string_t localVarPath = utility::conversions::to_string_t("/tracking/pixels/{id}");
    boost::replace_all(localVarPath, utility::conversions::to_string_t("{") + utility::conversions::to_string_t("id") + utility::conversions::to_string_t("}"), ApiClient::parameterToString(id));

    std::map<utility::string_t, utility::string_t> localVarQueryParams;
    std::map<utility::string_t, utility::string_t> localVarHeaderParams( localVarApiConfiguration->getDefaultHeaders() );
    std::map<utility::string_t, utility::string_t> localVarFormParams;
    std::map<utility::string_t, std::shared_ptr<HttpContent>> localVarFileParams;

    std::unordered_set<utility::string_t> localVarResponseHttpContentTypes;
    localVarResponseHttpContentTypes.insert( utility::conversions::to_string_t("*/*") );

    utility::string_t localVarResponseHttpContentType;

    // use JSON if possible
    if ( localVarResponseHttpContentTypes.size() == 0 )
    {
        localVarResponseHttpContentType = utility::conversions::to_string_t("application/json");
    }
    // JSON
    else if ( localVarResponseHttpContentTypes.find(utility::conversions::to_string_t("application/json")) != localVarResponseHttpContentTypes.end() )
    {
        localVarResponseHttpContentType = utility::conversions::to_string_t("application/json");
    }
    // multipart formdata
    else if( localVarResponseHttpContentTypes.find(utility::conversions::to_string_t("multipart/form-data")) != localVarResponseHttpContentTypes.end() )
    {
        localVarResponseHttpContentType = utility::conversions::to_string_t("multipart/form-data");
    }
    else
    {
        throw ApiException(400, utility::conversions::to_string_t("TrackingControllerApi->getTrackingPixel does not produce any supported media type"));
    }

    localVarHeaderParams[utility::conversions::to_string_t("Accept")] = localVarResponseHttpContentType;

    std::unordered_set<utility::string_t> localVarConsumeHttpContentTypes;


    std::shared_ptr<IHttpBody> localVarHttpBody;
    utility::string_t localVarRequestHttpContentType;

    // use JSON if possible
    if ( localVarConsumeHttpContentTypes.size() == 0 || localVarConsumeHttpContentTypes.find(utility::conversions::to_string_t("application/json")) != localVarConsumeHttpContentTypes.end() )
    {
        localVarRequestHttpContentType = utility::conversions::to_string_t("application/json");
    }
    // multipart formdata
    else if( localVarConsumeHttpContentTypes.find(utility::conversions::to_string_t("multipart/form-data")) != localVarConsumeHttpContentTypes.end() )
    {
        localVarRequestHttpContentType = utility::conversions::to_string_t("multipart/form-data");
    }
    else
    {
        throw ApiException(415, utility::conversions::to_string_t("TrackingControllerApi->getTrackingPixel does not consume any supported media type"));
    }

    // authentication (API_KEY) required
    {
        utility::string_t localVarApiKey = localVarApiConfiguration->getApiKey(utility::conversions::to_string_t("x-api-key"));
        if ( localVarApiKey.size() > 0 )
        {
            localVarHeaderParams[utility::conversions::to_string_t("x-api-key")] = localVarApiKey;
        }
    }

    return m_ApiClient->callApi(localVarPath, utility::conversions::to_string_t("GET"), localVarQueryParams, localVarHttpBody, localVarHeaderParams, localVarFormParams, localVarFileParams, localVarRequestHttpContentType)
    .then([=](web::http::http_response localVarResponse)
    {
        if (m_ApiClient->getResponseHandler())
        {
            m_ApiClient->getResponseHandler()(localVarResponse.status_code(), localVarResponse.headers());
        }

        // 1xx - informational : OK
        // 2xx - successful       : OK
        // 3xx - redirection   : OK
        // 4xx - client error  : not OK
        // 5xx - client error  : not OK
        if (localVarResponse.status_code() >= 400)
        {
            throw ApiException(localVarResponse.status_code()
                , utility::conversions::to_string_t("error calling getTrackingPixel: ") + localVarResponse.reason_phrase()
                , std::make_shared<std::stringstream>(localVarResponse.extract_utf8string(true).get()));
        }

        // check response content type
        if(localVarResponse.headers().has(utility::conversions::to_string_t("Content-Type")))
        {
            utility::string_t localVarContentType = localVarResponse.headers()[utility::conversions::to_string_t("Content-Type")];
            if( localVarContentType.find(localVarResponseHttpContentType) == std::string::npos )
            {
                throw ApiException(500
                    , utility::conversions::to_string_t("error calling getTrackingPixel: unexpected response type: ") + localVarContentType
                    , std::make_shared<std::stringstream>(localVarResponse.extract_utf8string(true).get()));
            }
        }

        return localVarResponse.extract_string();
    })
    .then([=](utility::string_t localVarResponse)
    {
        std::shared_ptr<TrackingPixelDto> localVarResult(new TrackingPixelDto());

        if(localVarResponseHttpContentType == utility::conversions::to_string_t("application/json"))
        {
            web::json::value localVarJson = web::json::value::parse(localVarResponse);

            ModelBase::fromJson(localVarJson, localVarResult);
        }
        // else if(localVarResponseHttpContentType == utility::conversions::to_string_t("multipart/form-data"))
        // {
        // TODO multipart response parsing
        // }
        else
        {
            throw ApiException(500
                , utility::conversions::to_string_t("error calling getTrackingPixel: unsupported response type"));
        }

        return localVarResult;
    });
}

}
}
}
}

