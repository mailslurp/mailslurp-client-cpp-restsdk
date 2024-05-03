/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://docs.mailslurp.com/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.2.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * ImapServerFetchItem.h
 *
 * IMAP fetch content in raw format
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_ImapServerFetchItem_H_
#define COM_MAILSLURP_CLIENT_MODEL_ImapServerFetchItem_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// IMAP fetch content in raw format
/// </summary>
class  ImapServerFetchItem
    : public ModelBase
{
public:
    ImapServerFetchItem();
    virtual ~ImapServerFetchItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ImapServerFetchItem members

    /// <summary>
    /// Content of the email
    /// </summary>
    utility::string_t getContent() const;
    bool contentIsSet() const;
    void unsetContent();

    void setContent(const utility::string_t& value);

    /// <summary>
    /// ID of the email
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// UID of the email
    /// </summary>
    int64_t getUid() const;
    bool uidIsSet() const;
    void unsetUid();

    void setUid(int64_t value);

    /// <summary>
    /// Sequence number of the email
    /// </summary>
    int64_t getSeqNum() const;
    bool seqNumIsSet() const;
    void unsetSeqNum();

    void setSeqNum(int64_t value);

    /// <summary>
    /// Read status of the email
    /// </summary>
    bool isRead() const;
    bool readIsSet() const;
    void unsetRead();

    void setRead(bool value);


protected:
    utility::string_t m_Content;
    bool m_ContentIsSet;
    utility::string_t m_Id;
    bool m_IdIsSet;
    int64_t m_Uid;
    bool m_UidIsSet;
    int64_t m_SeqNum;
    bool m_SeqNumIsSet;
    bool m_Read;
    bool m_ReadIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_ImapServerFetchItem_H_ */
