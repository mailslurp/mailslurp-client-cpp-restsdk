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
 * FormControllerApi.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_API_FormControllerApi_H_
#define COM_MAILSLURP_CLIENT_API_FormControllerApi_H_


#include "../ApiClient.h"

#include <cpprest/details/basic_types.h>
#include "../ModelBase.h"

#include <boost/optional.hpp>

namespace com {
namespace mailslurp {
namespace client {
namespace api {

using namespace com::mailslurp::client::model;



class  FormControllerApi 
{
public:

    explicit FormControllerApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~FormControllerApi();

    /// <summary>
    /// Submit a form to be parsed and sent as an email to an address determined by the form fields
    /// </summary>
    /// <remarks>
    /// This endpoint allows you to submit HTML forms and receive the field values and files via email.   #### Parameters The endpoint looks for special meta parameters in the form fields OR in the URL request parameters. The meta parameters can be used to specify the behaviour of the email.   You must provide at-least a &#x60;_to&#x60; email address to tell the endpoint where the form should be emailed. These can be submitted as hidden HTML input fields with the corresponding &#x60;name&#x60; attributes or as URL query parameters such as &#x60;?_to&#x3D;test@example.com&#x60;  The endpoint takes all other form fields that are named and includes them in the message body of the email. Files are sent as attachments.  #### Submitting This endpoint accepts form submission via POST method. It accepts &#x60;application/x-www-form-urlencoded&#x60;, and &#x60;multipart/form-data&#x60; content-types.  #### HTML Example &#x60;&#x60;&#x60;html &lt;form    action&#x3D;\&quot;https://api.mailslurp.com/forms\&quot;   method&#x3D;\&quot;post\&quot; &gt;   &lt;input name&#x3D;\&quot;_to\&quot; type&#x3D;\&quot;hidden\&quot; value&#x3D;\&quot;test@example.com\&quot;/&gt;   &lt;textarea name&#x3D;\&quot;feedback\&quot;&gt;&lt;/textarea&gt;   &lt;button type&#x3D;\&quot;submit\&quot;&gt;Submit&lt;/button&gt; &lt;/form&gt; &#x60;&#x60;&#x60;  #### URL Example &#x60;&#x60;&#x60;html &lt;form    action&#x3D;\&quot;https://api.mailslurp.com/forms?_to&#x3D;test@example.com\&quot;   method&#x3D;\&quot;post\&quot; &gt;   &lt;textarea name&#x3D;\&quot;feedback\&quot;&gt;&lt;/textarea&gt;   &lt;button type&#x3D;\&quot;submit\&quot;&gt;Submit&lt;/button&gt; &lt;/form&gt; &#x60;&#x60;&#x60;    The email address is specified by a &#x60;_to&#x60; field OR is extracted from an email alias specified by a &#x60;_toAlias&#x60; field (see the alias controller for more information).  Endpoint accepts .  You can specify a content type in HTML forms using the &#x60;enctype&#x60; attribute, for instance: &#x60;&lt;form enctype&#x3D;\&quot;multipart/form-data\&quot;&gt;&#x60;.  
    /// </remarks>
    /// <param name="emailAddress">Email address of the submitting user. Include this if you wish to record the submitters email address and reply to it later. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="redirectTo">Optional URL to redirect form submitter to after submission. If not present user will see a success message. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="spamCheck">Optional but recommended field that catches spammers out. Include as a hidden form field but LEAVE EMPTY. Spam-bots will usually fill every field. If the _spamCheck field is filled the form submission will be ignored. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="subject">Optional subject of the email that will be sent. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="successMessage">Optional success message to display if no _redirectTo present. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="to">The email address that submitted form should be sent to. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="otherParameters">All other parameters or fields will be accepted and attached to the sent email. This includes files and any HTML form field with a name. These fields will become the body of the email that is sent. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<utility::string_t> submitForm(
        boost::optional<utility::string_t> emailAddress,
        boost::optional<utility::string_t> redirectTo,
        boost::optional<utility::string_t> spamCheck,
        boost::optional<utility::string_t> subject,
        boost::optional<utility::string_t> successMessage,
        boost::optional<utility::string_t> to,
        boost::optional<utility::string_t> otherParameters
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_API_FormControllerApi_H_ */

