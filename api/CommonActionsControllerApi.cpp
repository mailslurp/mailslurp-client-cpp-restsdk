/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://www.mailslurp.com/docs/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


#include "CommonActionsControllerApi.h"
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

CommonActionsControllerApi::CommonActionsControllerApi( std::shared_ptr<const ApiClient> apiClient )
    : m_ApiClient(apiClient)
{
}

CommonActionsControllerApi::~CommonActionsControllerApi()
{
}

pplx::task<std::shared_ptr<InboxDto>> CommonActionsControllerApi::createNewEmailAddress(boost::optional<bool> allowTeamAccess, boost::optional<bool> useDomainPool, boost::optional<utility::datetime> expiresAt, boost::optional<int64_t> expiresIn, boost::optional<utility::string_t> emailAddress, boost::optional<utility::string_t> inboxType, boost::optional<utility::string_t> description, boost::optional<utility::string_t> name, boost::optional<std::vector<utility::string_t>> tags, boost::optional<bool> favourite) const
{


    std::shared_ptr<const ApiConfiguration> localVarApiConfiguration( m_ApiClient->getConfiguration() );
    utility::string_t localVarPath = utility::conversions::to_string_t("/newEmailAddress");
    
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
        throw ApiException(400, utility::conversions::to_string_t("CommonActionsControllerApi->createNewEmailAddress does not produce any supported media type"));
    }

    localVarHeaderParams[utility::conversions::to_string_t("Accept")] = localVarResponseHttpContentType;

    std::unordered_set<utility::string_t> localVarConsumeHttpContentTypes;

    if (allowTeamAccess)
    {
        localVarQueryParams[utility::conversions::to_string_t("allowTeamAccess")] = ApiClient::parameterToString(*allowTeamAccess);
    }
    if (useDomainPool)
    {
        localVarQueryParams[utility::conversions::to_string_t("useDomainPool")] = ApiClient::parameterToString(*useDomainPool);
    }
    if (expiresAt)
    {
        localVarQueryParams[utility::conversions::to_string_t("expiresAt")] = ApiClient::parameterToString(*expiresAt);
    }
    if (expiresIn)
    {
        localVarQueryParams[utility::conversions::to_string_t("expiresIn")] = ApiClient::parameterToString(*expiresIn);
    }
    if (emailAddress)
    {
        localVarQueryParams[utility::conversions::to_string_t("emailAddress")] = ApiClient::parameterToString(*emailAddress);
    }
    if (inboxType)
    {
        localVarQueryParams[utility::conversions::to_string_t("inboxType")] = ApiClient::parameterToString(*inboxType);
    }
    if (description)
    {
        localVarQueryParams[utility::conversions::to_string_t("description")] = ApiClient::parameterToString(*description);
    }
    if (name)
    {
        localVarQueryParams[utility::conversions::to_string_t("name")] = ApiClient::parameterToString(*name);
    }
    if (tags)
    {
        localVarQueryParams[utility::conversions::to_string_t("tags")] = ApiClient::parameterToString(*tags);
    }
    if (favourite)
    {
        localVarQueryParams[utility::conversions::to_string_t("favourite")] = ApiClient::parameterToString(*favourite);
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
        throw ApiException(415, utility::conversions::to_string_t("CommonActionsControllerApi->createNewEmailAddress does not consume any supported media type"));
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
                , utility::conversions::to_string_t("error calling createNewEmailAddress: ") + localVarResponse.reason_phrase()
                , std::make_shared<std::stringstream>(localVarResponse.extract_utf8string(true).get()));
        }

        // check response content type
        if(localVarResponse.headers().has(utility::conversions::to_string_t("Content-Type")))
        {
            utility::string_t localVarContentType = localVarResponse.headers()[utility::conversions::to_string_t("Content-Type")];
            if( localVarContentType.find(localVarResponseHttpContentType) == std::string::npos )
            {
                throw ApiException(500
                    , utility::conversions::to_string_t("error calling createNewEmailAddress: unexpected response type: ") + localVarContentType
                    , std::make_shared<std::stringstream>(localVarResponse.extract_utf8string(true).get()));
            }
        }

        return localVarResponse.extract_string();
    })
    .then([=](utility::string_t localVarResponse)
    {
        std::shared_ptr<InboxDto> localVarResult(new InboxDto());

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
                , utility::conversions::to_string_t("error calling createNewEmailAddress: unsupported response type"));
        }

        return localVarResult;
    });
}
pplx::task<std::shared_ptr<InboxDto>> CommonActionsControllerApi::createRandomInbox(boost::optional<bool> allowTeamAccess, boost::optional<bool> useDomainPool, boost::optional<utility::datetime> expiresAt, boost::optional<int64_t> expiresIn, boost::optional<utility::string_t> emailAddress, boost::optional<utility::string_t> inboxType, boost::optional<utility::string_t> description, boost::optional<utility::string_t> name, boost::optional<std::vector<utility::string_t>> tags, boost::optional<bool> favourite) const
{


    std::shared_ptr<const ApiConfiguration> localVarApiConfiguration( m_ApiClient->getConfiguration() );
    utility::string_t localVarPath = utility::conversions::to_string_t("/createInbox");
    
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
        throw ApiException(400, utility::conversions::to_string_t("CommonActionsControllerApi->createRandomInbox does not produce any supported media type"));
    }

    localVarHeaderParams[utility::conversions::to_string_t("Accept")] = localVarResponseHttpContentType;

    std::unordered_set<utility::string_t> localVarConsumeHttpContentTypes;

    if (allowTeamAccess)
    {
        localVarQueryParams[utility::conversions::to_string_t("allowTeamAccess")] = ApiClient::parameterToString(*allowTeamAccess);
    }
    if (useDomainPool)
    {
        localVarQueryParams[utility::conversions::to_string_t("useDomainPool")] = ApiClient::parameterToString(*useDomainPool);
    }
    if (expiresAt)
    {
        localVarQueryParams[utility::conversions::to_string_t("expiresAt")] = ApiClient::parameterToString(*expiresAt);
    }
    if (expiresIn)
    {
        localVarQueryParams[utility::conversions::to_string_t("expiresIn")] = ApiClient::parameterToString(*expiresIn);
    }
    if (emailAddress)
    {
        localVarQueryParams[utility::conversions::to_string_t("emailAddress")] = ApiClient::parameterToString(*emailAddress);
    }
    if (inboxType)
    {
        localVarQueryParams[utility::conversions::to_string_t("inboxType")] = ApiClient::parameterToString(*inboxType);
    }
    if (description)
    {
        localVarQueryParams[utility::conversions::to_string_t("description")] = ApiClient::parameterToString(*description);
    }
    if (name)
    {
        localVarQueryParams[utility::conversions::to_string_t("name")] = ApiClient::parameterToString(*name);
    }
    if (tags)
    {
        localVarQueryParams[utility::conversions::to_string_t("tags")] = ApiClient::parameterToString(*tags);
    }
    if (favourite)
    {
        localVarQueryParams[utility::conversions::to_string_t("favourite")] = ApiClient::parameterToString(*favourite);
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
        throw ApiException(415, utility::conversions::to_string_t("CommonActionsControllerApi->createRandomInbox does not consume any supported media type"));
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
                , utility::conversions::to_string_t("error calling createRandomInbox: ") + localVarResponse.reason_phrase()
                , std::make_shared<std::stringstream>(localVarResponse.extract_utf8string(true).get()));
        }

        // check response content type
        if(localVarResponse.headers().has(utility::conversions::to_string_t("Content-Type")))
        {
            utility::string_t localVarContentType = localVarResponse.headers()[utility::conversions::to_string_t("Content-Type")];
            if( localVarContentType.find(localVarResponseHttpContentType) == std::string::npos )
            {
                throw ApiException(500
                    , utility::conversions::to_string_t("error calling createRandomInbox: unexpected response type: ") + localVarContentType
                    , std::make_shared<std::stringstream>(localVarResponse.extract_utf8string(true).get()));
            }
        }

        return localVarResponse.extract_string();
    })
    .then([=](utility::string_t localVarResponse)
    {
        std::shared_ptr<InboxDto> localVarResult(new InboxDto());

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
                , utility::conversions::to_string_t("error calling createRandomInbox: unsupported response type"));
        }

        return localVarResult;
    });
}
pplx::task<void> CommonActionsControllerApi::deleteEmailAddress(std::shared_ptr<utility::string_t> inboxId) const
{

    // verify the required parameter 'inboxId' is set
    if (inboxId == nullptr)
    {
        throw ApiException(400, utility::conversions::to_string_t("Missing required parameter 'inboxId' when calling CommonActionsControllerApi->deleteEmailAddress"));
    }


    std::shared_ptr<const ApiConfiguration> localVarApiConfiguration( m_ApiClient->getConfiguration() );
    utility::string_t localVarPath = utility::conversions::to_string_t("/deleteEmailAddress");
    
    std::map<utility::string_t, utility::string_t> localVarQueryParams;
    std::map<utility::string_t, utility::string_t> localVarHeaderParams( localVarApiConfiguration->getDefaultHeaders() );
    std::map<utility::string_t, utility::string_t> localVarFormParams;
    std::map<utility::string_t, std::shared_ptr<HttpContent>> localVarFileParams;

    std::unordered_set<utility::string_t> localVarResponseHttpContentTypes;

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
        throw ApiException(400, utility::conversions::to_string_t("CommonActionsControllerApi->deleteEmailAddress does not produce any supported media type"));
    }

    localVarHeaderParams[utility::conversions::to_string_t("Accept")] = localVarResponseHttpContentType;

    std::unordered_set<utility::string_t> localVarConsumeHttpContentTypes;

    if (inboxId != nullptr)
    {
        localVarQueryParams[utility::conversions::to_string_t("inboxId")] = ApiClient::parameterToString(inboxId);
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
        throw ApiException(415, utility::conversions::to_string_t("CommonActionsControllerApi->deleteEmailAddress does not consume any supported media type"));
    }

    // authentication (API_KEY) required
    {
        utility::string_t localVarApiKey = localVarApiConfiguration->getApiKey(utility::conversions::to_string_t("x-api-key"));
        if ( localVarApiKey.size() > 0 )
        {
            localVarHeaderParams[utility::conversions::to_string_t("x-api-key")] = localVarApiKey;
        }
    }

    return m_ApiClient->callApi(localVarPath, utility::conversions::to_string_t("DELETE"), localVarQueryParams, localVarHttpBody, localVarHeaderParams, localVarFormParams, localVarFileParams, localVarRequestHttpContentType)
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
                , utility::conversions::to_string_t("error calling deleteEmailAddress: ") + localVarResponse.reason_phrase()
                , std::make_shared<std::stringstream>(localVarResponse.extract_utf8string(true).get()));
        }

        // check response content type
        if(localVarResponse.headers().has(utility::conversions::to_string_t("Content-Type")))
        {
            utility::string_t localVarContentType = localVarResponse.headers()[utility::conversions::to_string_t("Content-Type")];
            if( localVarContentType.find(localVarResponseHttpContentType) == std::string::npos )
            {
                throw ApiException(500
                    , utility::conversions::to_string_t("error calling deleteEmailAddress: unexpected response type: ") + localVarContentType
                    , std::make_shared<std::stringstream>(localVarResponse.extract_utf8string(true).get()));
            }
        }

        return localVarResponse.extract_string();
    })
    .then([=](utility::string_t localVarResponse)
    {
        return void();
    });
}
pplx::task<void> CommonActionsControllerApi::emptyInbox(std::shared_ptr<utility::string_t> inboxId) const
{

    // verify the required parameter 'inboxId' is set
    if (inboxId == nullptr)
    {
        throw ApiException(400, utility::conversions::to_string_t("Missing required parameter 'inboxId' when calling CommonActionsControllerApi->emptyInbox"));
    }


    std::shared_ptr<const ApiConfiguration> localVarApiConfiguration( m_ApiClient->getConfiguration() );
    utility::string_t localVarPath = utility::conversions::to_string_t("/emptyInbox");
    
    std::map<utility::string_t, utility::string_t> localVarQueryParams;
    std::map<utility::string_t, utility::string_t> localVarHeaderParams( localVarApiConfiguration->getDefaultHeaders() );
    std::map<utility::string_t, utility::string_t> localVarFormParams;
    std::map<utility::string_t, std::shared_ptr<HttpContent>> localVarFileParams;

    std::unordered_set<utility::string_t> localVarResponseHttpContentTypes;

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
        throw ApiException(400, utility::conversions::to_string_t("CommonActionsControllerApi->emptyInbox does not produce any supported media type"));
    }

    localVarHeaderParams[utility::conversions::to_string_t("Accept")] = localVarResponseHttpContentType;

    std::unordered_set<utility::string_t> localVarConsumeHttpContentTypes;

    if (inboxId != nullptr)
    {
        localVarQueryParams[utility::conversions::to_string_t("inboxId")] = ApiClient::parameterToString(inboxId);
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
        throw ApiException(415, utility::conversions::to_string_t("CommonActionsControllerApi->emptyInbox does not consume any supported media type"));
    }

    // authentication (API_KEY) required
    {
        utility::string_t localVarApiKey = localVarApiConfiguration->getApiKey(utility::conversions::to_string_t("x-api-key"));
        if ( localVarApiKey.size() > 0 )
        {
            localVarHeaderParams[utility::conversions::to_string_t("x-api-key")] = localVarApiKey;
        }
    }

    return m_ApiClient->callApi(localVarPath, utility::conversions::to_string_t("DELETE"), localVarQueryParams, localVarHttpBody, localVarHeaderParams, localVarFormParams, localVarFileParams, localVarRequestHttpContentType)
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
                , utility::conversions::to_string_t("error calling emptyInbox: ") + localVarResponse.reason_phrase()
                , std::make_shared<std::stringstream>(localVarResponse.extract_utf8string(true).get()));
        }

        // check response content type
        if(localVarResponse.headers().has(utility::conversions::to_string_t("Content-Type")))
        {
            utility::string_t localVarContentType = localVarResponse.headers()[utility::conversions::to_string_t("Content-Type")];
            if( localVarContentType.find(localVarResponseHttpContentType) == std::string::npos )
            {
                throw ApiException(500
                    , utility::conversions::to_string_t("error calling emptyInbox: unexpected response type: ") + localVarContentType
                    , std::make_shared<std::stringstream>(localVarResponse.extract_utf8string(true).get()));
            }
        }

        return localVarResponse.extract_string();
    })
    .then([=](utility::string_t localVarResponse)
    {
        return void();
    });
}
pplx::task<void> CommonActionsControllerApi::sendEmailSimple(std::shared_ptr<SimpleSendEmailOptions> simpleSendEmailOptions) const
{

    // verify the required parameter 'simpleSendEmailOptions' is set
    if (simpleSendEmailOptions == nullptr)
    {
        throw ApiException(400, utility::conversions::to_string_t("Missing required parameter 'simpleSendEmailOptions' when calling CommonActionsControllerApi->sendEmailSimple"));
    }


    std::shared_ptr<const ApiConfiguration> localVarApiConfiguration( m_ApiClient->getConfiguration() );
    utility::string_t localVarPath = utility::conversions::to_string_t("/sendEmail");
    
    std::map<utility::string_t, utility::string_t> localVarQueryParams;
    std::map<utility::string_t, utility::string_t> localVarHeaderParams( localVarApiConfiguration->getDefaultHeaders() );
    std::map<utility::string_t, utility::string_t> localVarFormParams;
    std::map<utility::string_t, std::shared_ptr<HttpContent>> localVarFileParams;

    std::unordered_set<utility::string_t> localVarResponseHttpContentTypes;

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
        throw ApiException(400, utility::conversions::to_string_t("CommonActionsControllerApi->sendEmailSimple does not produce any supported media type"));
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

        localVarJson = ModelBase::toJson(simpleSendEmailOptions);
        

        localVarHttpBody = std::shared_ptr<IHttpBody>( new JsonBody( localVarJson ) );
    }
    // multipart formdata
    else if( localVarConsumeHttpContentTypes.find(utility::conversions::to_string_t("multipart/form-data")) != localVarConsumeHttpContentTypes.end() )
    {
        localVarRequestHttpContentType = utility::conversions::to_string_t("multipart/form-data");
        std::shared_ptr<MultipartFormData> localVarMultipart(new MultipartFormData);

        if(simpleSendEmailOptions.get())
        {
            simpleSendEmailOptions->toMultipart(localVarMultipart, utility::conversions::to_string_t("simpleSendEmailOptions"));
        }
        

        localVarHttpBody = localVarMultipart;
        localVarRequestHttpContentType += utility::conversions::to_string_t("; boundary=") + localVarMultipart->getBoundary();
    }
    else
    {
        throw ApiException(415, utility::conversions::to_string_t("CommonActionsControllerApi->sendEmailSimple does not consume any supported media type"));
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
                , utility::conversions::to_string_t("error calling sendEmailSimple: ") + localVarResponse.reason_phrase()
                , std::make_shared<std::stringstream>(localVarResponse.extract_utf8string(true).get()));
        }

        // check response content type
        if(localVarResponse.headers().has(utility::conversions::to_string_t("Content-Type")))
        {
            utility::string_t localVarContentType = localVarResponse.headers()[utility::conversions::to_string_t("Content-Type")];
            if( localVarContentType.find(localVarResponseHttpContentType) == std::string::npos )
            {
                throw ApiException(500
                    , utility::conversions::to_string_t("error calling sendEmailSimple: unexpected response type: ") + localVarContentType
                    , std::make_shared<std::stringstream>(localVarResponse.extract_utf8string(true).get()));
            }
        }

        return localVarResponse.extract_string();
    })
    .then([=](utility::string_t localVarResponse)
    {
        return void();
    });
}

}
}
}
}

