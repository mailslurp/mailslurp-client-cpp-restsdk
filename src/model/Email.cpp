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



#include "CppRestOpenAPIClient/model/Email.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



Email::Email()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_UserId = utility::conversions::to_string_t("");
    m_UserIdIsSet = false;
    m_InboxId = utility::conversions::to_string_t("");
    m_InboxIdIsSet = false;
    m_DomainId = utility::conversions::to_string_t("");
    m_DomainIdIsSet = false;
    m_ToIsSet = false;
    m_From = utility::conversions::to_string_t("");
    m_FromIsSet = false;
    m_SenderIsSet = false;
    m_RecipientsIsSet = false;
    m_ReplyTo = utility::conversions::to_string_t("");
    m_ReplyToIsSet = false;
    m_CcIsSet = false;
    m_BccIsSet = false;
    m_HeadersIsSet = false;
    m_HeadersMapIsSet = false;
    m_AttachmentsIsSet = false;
    m_Subject = utility::conversions::to_string_t("");
    m_SubjectIsSet = false;
    m_Body = utility::conversions::to_string_t("");
    m_BodyIsSet = false;
    m_BodyExcerpt = utility::conversions::to_string_t("");
    m_BodyExcerptIsSet = false;
    m_BodyMD5Hash = utility::conversions::to_string_t("");
    m_BodyMD5HashIsSet = false;
    m_IsHTML = false;
    m_IsHTMLIsSet = false;
    m_Charset = utility::conversions::to_string_t("");
    m_CharsetIsSet = false;
    m_AnalysisIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
    m_UpdatedAt = utility::datetime();
    m_UpdatedAtIsSet = false;
    m_Read = false;
    m_ReadIsSet = false;
    m_TeamAccess = false;
    m_TeamAccessIsSet = false;
    m_Html = false;
    m_HtmlIsSet = false;
}

Email::~Email()
{
}

void Email::validate()
{
    // TODO: implement validation
}

web::json::value Email::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_UserIdIsSet)
    {
        val[utility::conversions::to_string_t(U("userId"))] = ModelBase::toJson(m_UserId);
    }
    if(m_InboxIdIsSet)
    {
        val[utility::conversions::to_string_t(U("inboxId"))] = ModelBase::toJson(m_InboxId);
    }
    if(m_DomainIdIsSet)
    {
        val[utility::conversions::to_string_t(U("domainId"))] = ModelBase::toJson(m_DomainId);
    }
    if(m_ToIsSet)
    {
        val[utility::conversions::to_string_t(U("to"))] = ModelBase::toJson(m_To);
    }
    if(m_FromIsSet)
    {
        val[utility::conversions::to_string_t(U("from"))] = ModelBase::toJson(m_From);
    }
    if(m_SenderIsSet)
    {
        val[utility::conversions::to_string_t(U("sender"))] = ModelBase::toJson(m_Sender);
    }
    if(m_RecipientsIsSet)
    {
        val[utility::conversions::to_string_t(U("recipients"))] = ModelBase::toJson(m_Recipients);
    }
    if(m_ReplyToIsSet)
    {
        val[utility::conversions::to_string_t(U("replyTo"))] = ModelBase::toJson(m_ReplyTo);
    }
    if(m_CcIsSet)
    {
        val[utility::conversions::to_string_t(U("cc"))] = ModelBase::toJson(m_Cc);
    }
    if(m_BccIsSet)
    {
        val[utility::conversions::to_string_t(U("bcc"))] = ModelBase::toJson(m_Bcc);
    }
    if(m_HeadersIsSet)
    {
        val[utility::conversions::to_string_t(U("headers"))] = ModelBase::toJson(m_Headers);
    }
    if(m_HeadersMapIsSet)
    {
        val[utility::conversions::to_string_t(U("headersMap"))] = ModelBase::toJson(m_HeadersMap);
    }
    if(m_AttachmentsIsSet)
    {
        val[utility::conversions::to_string_t(U("attachments"))] = ModelBase::toJson(m_Attachments);
    }
    if(m_SubjectIsSet)
    {
        val[utility::conversions::to_string_t(U("subject"))] = ModelBase::toJson(m_Subject);
    }
    if(m_BodyIsSet)
    {
        val[utility::conversions::to_string_t(U("body"))] = ModelBase::toJson(m_Body);
    }
    if(m_BodyExcerptIsSet)
    {
        val[utility::conversions::to_string_t(U("bodyExcerpt"))] = ModelBase::toJson(m_BodyExcerpt);
    }
    if(m_BodyMD5HashIsSet)
    {
        val[utility::conversions::to_string_t(U("bodyMD5Hash"))] = ModelBase::toJson(m_BodyMD5Hash);
    }
    if(m_IsHTMLIsSet)
    {
        val[utility::conversions::to_string_t(U("isHTML"))] = ModelBase::toJson(m_IsHTML);
    }
    if(m_CharsetIsSet)
    {
        val[utility::conversions::to_string_t(U("charset"))] = ModelBase::toJson(m_Charset);
    }
    if(m_AnalysisIsSet)
    {
        val[utility::conversions::to_string_t(U("analysis"))] = ModelBase::toJson(m_Analysis);
    }
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t(U("createdAt"))] = ModelBase::toJson(m_CreatedAt);
    }
    if(m_UpdatedAtIsSet)
    {
        val[utility::conversions::to_string_t(U("updatedAt"))] = ModelBase::toJson(m_UpdatedAt);
    }
    if(m_ReadIsSet)
    {
        val[utility::conversions::to_string_t(U("read"))] = ModelBase::toJson(m_Read);
    }
    if(m_TeamAccessIsSet)
    {
        val[utility::conversions::to_string_t(U("teamAccess"))] = ModelBase::toJson(m_TeamAccess);
    }
    if(m_HtmlIsSet)
    {
        val[utility::conversions::to_string_t(U("html"))] = ModelBase::toJson(m_Html);
    }

    return val;
}

bool Email::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setId);
            setId(refVal_setId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("userId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("userId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setUserId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUserId);
            setUserId(refVal_setUserId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("inboxId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("inboxId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setInboxId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setInboxId);
            setInboxId(refVal_setInboxId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("domainId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("domainId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDomainId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDomainId);
            setDomainId(refVal_setDomainId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("to"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("to")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setTo;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTo);
            setTo(refVal_setTo);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("from"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("from")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setFrom;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFrom);
            setFrom(refVal_setFrom);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("sender"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("sender")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Sender> refVal_setSender;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSender);
            setSender(refVal_setSender);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("recipients"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("recipients")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<EmailRecipients> refVal_setRecipients;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRecipients);
            setRecipients(refVal_setRecipients);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("replyTo"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("replyTo")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setReplyTo;
            ok &= ModelBase::fromJson(fieldValue, refVal_setReplyTo);
            setReplyTo(refVal_setReplyTo);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("cc"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("cc")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setCc;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCc);
            setCc(refVal_setCc);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("bcc"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("bcc")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setBcc;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBcc);
            setBcc(refVal_setBcc);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("headers"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("headers")));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, utility::string_t> refVal_setHeaders;
            ok &= ModelBase::fromJson(fieldValue, refVal_setHeaders);
            setHeaders(refVal_setHeaders);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("headersMap"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("headersMap")));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, std::vector<utility::string_t>> refVal_setHeadersMap;
            ok &= ModelBase::fromJson(fieldValue, refVal_setHeadersMap);
            setHeadersMap(refVal_setHeadersMap);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("attachments"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("attachments")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setAttachments;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAttachments);
            setAttachments(refVal_setAttachments);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("subject"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("subject")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSubject;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSubject);
            setSubject(refVal_setSubject);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("body"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("body")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setBody;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBody);
            setBody(refVal_setBody);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("bodyExcerpt"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("bodyExcerpt")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setBodyExcerpt;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBodyExcerpt);
            setBodyExcerpt(refVal_setBodyExcerpt);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("bodyMD5Hash"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("bodyMD5Hash")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setBodyMD5Hash;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBodyMD5Hash);
            setBodyMD5Hash(refVal_setBodyMD5Hash);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("isHTML"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("isHTML")));
        if(!fieldValue.is_null())
        {
            bool refVal_setIsHTML;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIsHTML);
            setIsHTML(refVal_setIsHTML);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("charset"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("charset")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCharset;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCharset);
            setCharset(refVal_setCharset);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("analysis"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("analysis")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<EmailAnalysis> refVal_setAnalysis;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAnalysis);
            setAnalysis(refVal_setAnalysis);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("createdAt"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("createdAt")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setCreatedAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCreatedAt);
            setCreatedAt(refVal_setCreatedAt);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("updatedAt"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("updatedAt")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setUpdatedAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUpdatedAt);
            setUpdatedAt(refVal_setUpdatedAt);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("read"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("read")));
        if(!fieldValue.is_null())
        {
            bool refVal_setRead;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRead);
            setRead(refVal_setRead);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("teamAccess"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("teamAccess")));
        if(!fieldValue.is_null())
        {
            bool refVal_setTeamAccess;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTeamAccess);
            setTeamAccess(refVal_setTeamAccess);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("html"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("html")));
        if(!fieldValue.is_null())
        {
            bool refVal_setHtml;
            ok &= ModelBase::fromJson(fieldValue, refVal_setHtml);
            setHtml(refVal_setHtml);
        }
    }
    return ok;
}

void Email::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_Id));
    }
    if(m_UserIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("userId")), m_UserId));
    }
    if(m_InboxIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("inboxId")), m_InboxId));
    }
    if(m_DomainIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("domainId")), m_DomainId));
    }
    if(m_ToIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("to")), m_To));
    }
    if(m_FromIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("from")), m_From));
    }
    if(m_SenderIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("sender")), m_Sender));
    }
    if(m_RecipientsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("recipients")), m_Recipients));
    }
    if(m_ReplyToIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("replyTo")), m_ReplyTo));
    }
    if(m_CcIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("cc")), m_Cc));
    }
    if(m_BccIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("bcc")), m_Bcc));
    }
    if(m_HeadersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("headers")), m_Headers));
    }
    if(m_HeadersMapIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("headersMap")), m_HeadersMap));
    }
    if(m_AttachmentsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("attachments")), m_Attachments));
    }
    if(m_SubjectIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("subject")), m_Subject));
    }
    if(m_BodyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("body")), m_Body));
    }
    if(m_BodyExcerptIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("bodyExcerpt")), m_BodyExcerpt));
    }
    if(m_BodyMD5HashIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("bodyMD5Hash")), m_BodyMD5Hash));
    }
    if(m_IsHTMLIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("isHTML")), m_IsHTML));
    }
    if(m_CharsetIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("charset")), m_Charset));
    }
    if(m_AnalysisIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("analysis")), m_Analysis));
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("createdAt")), m_CreatedAt));
    }
    if(m_UpdatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("updatedAt")), m_UpdatedAt));
    }
    if(m_ReadIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("read")), m_Read));
    }
    if(m_TeamAccessIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("teamAccess")), m_TeamAccess));
    }
    if(m_HtmlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("html")), m_Html));
    }
}

bool Email::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_setId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_setId );
        setId(refVal_setId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("userId"))))
    {
        utility::string_t refVal_setUserId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("userId"))), refVal_setUserId );
        setUserId(refVal_setUserId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("inboxId"))))
    {
        utility::string_t refVal_setInboxId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("inboxId"))), refVal_setInboxId );
        setInboxId(refVal_setInboxId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("domainId"))))
    {
        utility::string_t refVal_setDomainId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("domainId"))), refVal_setDomainId );
        setDomainId(refVal_setDomainId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("to"))))
    {
        std::vector<utility::string_t> refVal_setTo;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("to"))), refVal_setTo );
        setTo(refVal_setTo);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("from"))))
    {
        utility::string_t refVal_setFrom;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("from"))), refVal_setFrom );
        setFrom(refVal_setFrom);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("sender"))))
    {
        std::shared_ptr<Sender> refVal_setSender;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("sender"))), refVal_setSender );
        setSender(refVal_setSender);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("recipients"))))
    {
        std::shared_ptr<EmailRecipients> refVal_setRecipients;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("recipients"))), refVal_setRecipients );
        setRecipients(refVal_setRecipients);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("replyTo"))))
    {
        utility::string_t refVal_setReplyTo;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("replyTo"))), refVal_setReplyTo );
        setReplyTo(refVal_setReplyTo);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("cc"))))
    {
        std::vector<utility::string_t> refVal_setCc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("cc"))), refVal_setCc );
        setCc(refVal_setCc);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("bcc"))))
    {
        std::vector<utility::string_t> refVal_setBcc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("bcc"))), refVal_setBcc );
        setBcc(refVal_setBcc);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("headers"))))
    {
        std::map<utility::string_t, utility::string_t> refVal_setHeaders;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("headers"))), refVal_setHeaders );
        setHeaders(refVal_setHeaders);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("headersMap"))))
    {
        std::map<utility::string_t, std::vector<utility::string_t>> refVal_setHeadersMap;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("headersMap"))), refVal_setHeadersMap );
        setHeadersMap(refVal_setHeadersMap);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("attachments"))))
    {
        std::vector<utility::string_t> refVal_setAttachments;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("attachments"))), refVal_setAttachments );
        setAttachments(refVal_setAttachments);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("subject"))))
    {
        utility::string_t refVal_setSubject;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("subject"))), refVal_setSubject );
        setSubject(refVal_setSubject);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("body"))))
    {
        utility::string_t refVal_setBody;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("body"))), refVal_setBody );
        setBody(refVal_setBody);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("bodyExcerpt"))))
    {
        utility::string_t refVal_setBodyExcerpt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("bodyExcerpt"))), refVal_setBodyExcerpt );
        setBodyExcerpt(refVal_setBodyExcerpt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("bodyMD5Hash"))))
    {
        utility::string_t refVal_setBodyMD5Hash;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("bodyMD5Hash"))), refVal_setBodyMD5Hash );
        setBodyMD5Hash(refVal_setBodyMD5Hash);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("isHTML"))))
    {
        bool refVal_setIsHTML;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("isHTML"))), refVal_setIsHTML );
        setIsHTML(refVal_setIsHTML);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("charset"))))
    {
        utility::string_t refVal_setCharset;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("charset"))), refVal_setCharset );
        setCharset(refVal_setCharset);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("analysis"))))
    {
        std::shared_ptr<EmailAnalysis> refVal_setAnalysis;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("analysis"))), refVal_setAnalysis );
        setAnalysis(refVal_setAnalysis);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("createdAt"))))
    {
        utility::datetime refVal_setCreatedAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("createdAt"))), refVal_setCreatedAt );
        setCreatedAt(refVal_setCreatedAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("updatedAt"))))
    {
        utility::datetime refVal_setUpdatedAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("updatedAt"))), refVal_setUpdatedAt );
        setUpdatedAt(refVal_setUpdatedAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("read"))))
    {
        bool refVal_setRead;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("read"))), refVal_setRead );
        setRead(refVal_setRead);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("teamAccess"))))
    {
        bool refVal_setTeamAccess;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("teamAccess"))), refVal_setTeamAccess );
        setTeamAccess(refVal_setTeamAccess);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("html"))))
    {
        bool refVal_setHtml;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("html"))), refVal_setHtml );
        setHtml(refVal_setHtml);
    }
    return ok;
}

utility::string_t Email::getId() const
{
    return m_Id;
}

void Email::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool Email::idIsSet() const
{
    return m_IdIsSet;
}

void Email::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t Email::getUserId() const
{
    return m_UserId;
}

void Email::setUserId(const utility::string_t& value)
{
    m_UserId = value;
    m_UserIdIsSet = true;
}

bool Email::userIdIsSet() const
{
    return m_UserIdIsSet;
}

void Email::unsetUserId()
{
    m_UserIdIsSet = false;
}
utility::string_t Email::getInboxId() const
{
    return m_InboxId;
}

void Email::setInboxId(const utility::string_t& value)
{
    m_InboxId = value;
    m_InboxIdIsSet = true;
}

bool Email::inboxIdIsSet() const
{
    return m_InboxIdIsSet;
}

void Email::unsetInboxId()
{
    m_InboxIdIsSet = false;
}
utility::string_t Email::getDomainId() const
{
    return m_DomainId;
}

void Email::setDomainId(const utility::string_t& value)
{
    m_DomainId = value;
    m_DomainIdIsSet = true;
}

bool Email::domainIdIsSet() const
{
    return m_DomainIdIsSet;
}

void Email::unsetDomainId()
{
    m_DomainIdIsSet = false;
}
std::vector<utility::string_t>& Email::getTo()
{
    return m_To;
}

void Email::setTo(const std::vector<utility::string_t>& value)
{
    m_To = value;
    m_ToIsSet = true;
}

bool Email::toIsSet() const
{
    return m_ToIsSet;
}

void Email::unsetTo()
{
    m_ToIsSet = false;
}
utility::string_t Email::getFrom() const
{
    return m_From;
}

void Email::setFrom(const utility::string_t& value)
{
    m_From = value;
    m_FromIsSet = true;
}

bool Email::fromIsSet() const
{
    return m_FromIsSet;
}

void Email::unsetFrom()
{
    m_FromIsSet = false;
}
std::shared_ptr<Sender> Email::getSender() const
{
    return m_Sender;
}

void Email::setSender(const std::shared_ptr<Sender>& value)
{
    m_Sender = value;
    m_SenderIsSet = true;
}

bool Email::senderIsSet() const
{
    return m_SenderIsSet;
}

void Email::unsetSender()
{
    m_SenderIsSet = false;
}
std::shared_ptr<EmailRecipients> Email::getRecipients() const
{
    return m_Recipients;
}

void Email::setRecipients(const std::shared_ptr<EmailRecipients>& value)
{
    m_Recipients = value;
    m_RecipientsIsSet = true;
}

bool Email::recipientsIsSet() const
{
    return m_RecipientsIsSet;
}

void Email::unsetRecipients()
{
    m_RecipientsIsSet = false;
}
utility::string_t Email::getReplyTo() const
{
    return m_ReplyTo;
}

void Email::setReplyTo(const utility::string_t& value)
{
    m_ReplyTo = value;
    m_ReplyToIsSet = true;
}

bool Email::replyToIsSet() const
{
    return m_ReplyToIsSet;
}

void Email::unsetReplyTo()
{
    m_ReplyToIsSet = false;
}
std::vector<utility::string_t>& Email::getCc()
{
    return m_Cc;
}

void Email::setCc(const std::vector<utility::string_t>& value)
{
    m_Cc = value;
    m_CcIsSet = true;
}

bool Email::ccIsSet() const
{
    return m_CcIsSet;
}

void Email::unsetCc()
{
    m_CcIsSet = false;
}
std::vector<utility::string_t>& Email::getBcc()
{
    return m_Bcc;
}

void Email::setBcc(const std::vector<utility::string_t>& value)
{
    m_Bcc = value;
    m_BccIsSet = true;
}

bool Email::bccIsSet() const
{
    return m_BccIsSet;
}

void Email::unsetBcc()
{
    m_BccIsSet = false;
}
std::map<utility::string_t, utility::string_t>& Email::getHeaders()
{
    return m_Headers;
}

void Email::setHeaders(const std::map<utility::string_t, utility::string_t>& value)
{
    m_Headers = value;
    m_HeadersIsSet = true;
}

bool Email::headersIsSet() const
{
    return m_HeadersIsSet;
}

void Email::unsetHeaders()
{
    m_HeadersIsSet = false;
}
std::map<utility::string_t, std::vector<utility::string_t>>& Email::getHeadersMap()
{
    return m_HeadersMap;
}

void Email::setHeadersMap(const std::map<utility::string_t, std::vector<utility::string_t>>& value)
{
    m_HeadersMap = value;
    m_HeadersMapIsSet = true;
}

bool Email::headersMapIsSet() const
{
    return m_HeadersMapIsSet;
}

void Email::unsetHeadersMap()
{
    m_HeadersMapIsSet = false;
}
std::vector<utility::string_t>& Email::getAttachments()
{
    return m_Attachments;
}

void Email::setAttachments(const std::vector<utility::string_t>& value)
{
    m_Attachments = value;
    m_AttachmentsIsSet = true;
}

bool Email::attachmentsIsSet() const
{
    return m_AttachmentsIsSet;
}

void Email::unsetAttachments()
{
    m_AttachmentsIsSet = false;
}
utility::string_t Email::getSubject() const
{
    return m_Subject;
}

void Email::setSubject(const utility::string_t& value)
{
    m_Subject = value;
    m_SubjectIsSet = true;
}

bool Email::subjectIsSet() const
{
    return m_SubjectIsSet;
}

void Email::unsetSubject()
{
    m_SubjectIsSet = false;
}
utility::string_t Email::getBody() const
{
    return m_Body;
}

void Email::setBody(const utility::string_t& value)
{
    m_Body = value;
    m_BodyIsSet = true;
}

bool Email::bodyIsSet() const
{
    return m_BodyIsSet;
}

void Email::unsetBody()
{
    m_BodyIsSet = false;
}
utility::string_t Email::getBodyExcerpt() const
{
    return m_BodyExcerpt;
}

void Email::setBodyExcerpt(const utility::string_t& value)
{
    m_BodyExcerpt = value;
    m_BodyExcerptIsSet = true;
}

bool Email::bodyExcerptIsSet() const
{
    return m_BodyExcerptIsSet;
}

void Email::unsetBodyExcerpt()
{
    m_BodyExcerptIsSet = false;
}
utility::string_t Email::getBodyMD5Hash() const
{
    return m_BodyMD5Hash;
}

void Email::setBodyMD5Hash(const utility::string_t& value)
{
    m_BodyMD5Hash = value;
    m_BodyMD5HashIsSet = true;
}

bool Email::bodyMD5HashIsSet() const
{
    return m_BodyMD5HashIsSet;
}

void Email::unsetBodyMD5Hash()
{
    m_BodyMD5HashIsSet = false;
}
bool Email::isIsHTML() const
{
    return m_IsHTML;
}

void Email::setIsHTML(bool value)
{
    m_IsHTML = value;
    m_IsHTMLIsSet = true;
}

bool Email::isHTMLIsSet() const
{
    return m_IsHTMLIsSet;
}

void Email::unsetIsHTML()
{
    m_IsHTMLIsSet = false;
}
utility::string_t Email::getCharset() const
{
    return m_Charset;
}

void Email::setCharset(const utility::string_t& value)
{
    m_Charset = value;
    m_CharsetIsSet = true;
}

bool Email::charsetIsSet() const
{
    return m_CharsetIsSet;
}

void Email::unsetCharset()
{
    m_CharsetIsSet = false;
}
std::shared_ptr<EmailAnalysis> Email::getAnalysis() const
{
    return m_Analysis;
}

void Email::setAnalysis(const std::shared_ptr<EmailAnalysis>& value)
{
    m_Analysis = value;
    m_AnalysisIsSet = true;
}

bool Email::analysisIsSet() const
{
    return m_AnalysisIsSet;
}

void Email::unsetAnalysis()
{
    m_AnalysisIsSet = false;
}
utility::datetime Email::getCreatedAt() const
{
    return m_CreatedAt;
}

void Email::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool Email::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void Email::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
utility::datetime Email::getUpdatedAt() const
{
    return m_UpdatedAt;
}

void Email::setUpdatedAt(const utility::datetime& value)
{
    m_UpdatedAt = value;
    m_UpdatedAtIsSet = true;
}

bool Email::updatedAtIsSet() const
{
    return m_UpdatedAtIsSet;
}

void Email::unsetUpdatedAt()
{
    m_UpdatedAtIsSet = false;
}
bool Email::isRead() const
{
    return m_Read;
}

void Email::setRead(bool value)
{
    m_Read = value;
    m_ReadIsSet = true;
}

bool Email::readIsSet() const
{
    return m_ReadIsSet;
}

void Email::unsetRead()
{
    m_ReadIsSet = false;
}
bool Email::isTeamAccess() const
{
    return m_TeamAccess;
}

void Email::setTeamAccess(bool value)
{
    m_TeamAccess = value;
    m_TeamAccessIsSet = true;
}

bool Email::teamAccessIsSet() const
{
    return m_TeamAccessIsSet;
}

void Email::unsetTeamAccess()
{
    m_TeamAccessIsSet = false;
}
bool Email::isHtml() const
{
    return m_Html;
}

void Email::setHtml(bool value)
{
    m_Html = value;
    m_HtmlIsSet = true;
}

bool Email::htmlIsSet() const
{
    return m_HtmlIsSet;
}

void Email::unsetHtml()
{
    m_HtmlIsSet = false;
}
}
}
}
}


