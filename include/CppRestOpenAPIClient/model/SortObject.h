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
 * SortObject.h
 *
 * 
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_SortObject_H_
#define COM_MAILSLURP_CLIENT_MODEL_SortObject_H_


#include "CppRestOpenAPIClient/ModelBase.h"


namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  SortObject
    : public ModelBase
{
public:
    SortObject();
    virtual ~SortObject();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SortObject members

    /// <summary>
    /// 
    /// </summary>
    bool isUnsorted() const;
    bool unsortedIsSet() const;
    void unsetUnsorted();

    void setUnsorted(bool value);

    /// <summary>
    /// 
    /// </summary>
    bool isSorted() const;
    bool sortedIsSet() const;
    void unsetSorted();

    void setSorted(bool value);

    /// <summary>
    /// 
    /// </summary>
    bool isEmpty() const;
    bool emptyIsSet() const;
    void unsetEmpty();

    void setEmpty(bool value);


protected:
    bool m_Unsorted;
    bool m_UnsortedIsSet;
    bool m_Sorted;
    bool m_SortedIsSet;
    bool m_Empty;
    bool m_EmptyIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_SortObject_H_ */
