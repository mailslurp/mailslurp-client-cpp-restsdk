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



#include "CppRestOpenAPIClient/model/AttachmentEntity.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



AttachmentEntity::AttachmentEntity()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_AttachmentId = utility::conversions::to_string_t("");
    m_AttachmentIdIsSet = false;
    m_Bucket = utility::conversions::to_string_t("");
    m_BucketIsSet = false;
    m_UserId = utility::conversions::to_string_t("");
    m_UserIdIsSet = false;
    m_ContentType = utility::conversions::to_string_t("");
    m_ContentTypeIsSet = false;
    m_ContentLength = 0L;
    m_ContentLengthIsSet = false;
    m_ContentId = utility::conversions::to_string_t("");
    m_ContentIdIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
    m_UpdatedAt = utility::datetime();
    m_UpdatedAtIsSet = false;
}

AttachmentEntity::~AttachmentEntity()
{
}

void AttachmentEntity::validate()
{
    // TODO: implement validation
}

web::json::value AttachmentEntity::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_AttachmentIdIsSet)
    {
        val[utility::conversions::to_string_t(U("attachmentId"))] = ModelBase::toJson(m_AttachmentId);
    }
    if(m_BucketIsSet)
    {
        val[utility::conversions::to_string_t(U("bucket"))] = ModelBase::toJson(m_Bucket);
    }
    if(m_UserIdIsSet)
    {
        val[utility::conversions::to_string_t(U("userId"))] = ModelBase::toJson(m_UserId);
    }
    if(m_ContentTypeIsSet)
    {
        val[utility::conversions::to_string_t(U("contentType"))] = ModelBase::toJson(m_ContentType);
    }
    if(m_ContentLengthIsSet)
    {
        val[utility::conversions::to_string_t(U("contentLength"))] = ModelBase::toJson(m_ContentLength);
    }
    if(m_ContentIdIsSet)
    {
        val[utility::conversions::to_string_t(U("contentId"))] = ModelBase::toJson(m_ContentId);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t(U("createdAt"))] = ModelBase::toJson(m_CreatedAt);
    }
    if(m_UpdatedAtIsSet)
    {
        val[utility::conversions::to_string_t(U("updatedAt"))] = ModelBase::toJson(m_UpdatedAt);
    }

    return val;
}

bool AttachmentEntity::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("attachmentId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("attachmentId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setAttachmentId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAttachmentId);
            setAttachmentId(refVal_setAttachmentId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("bucket"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("bucket")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setBucket;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBucket);
            setBucket(refVal_setBucket);
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
    if(val.has_field(utility::conversions::to_string_t(U("contentType"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("contentType")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setContentType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setContentType);
            setContentType(refVal_setContentType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("contentLength"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("contentLength")));
        if(!fieldValue.is_null())
        {
            int64_t refVal_setContentLength;
            ok &= ModelBase::fromJson(fieldValue, refVal_setContentLength);
            setContentLength(refVal_setContentLength);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("contentId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("contentId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setContentId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setContentId);
            setContentId(refVal_setContentId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setName);
            setName(refVal_setName);
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
    return ok;
}

void AttachmentEntity::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_AttachmentIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("attachmentId")), m_AttachmentId));
    }
    if(m_BucketIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("bucket")), m_Bucket));
    }
    if(m_UserIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("userId")), m_UserId));
    }
    if(m_ContentTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("contentType")), m_ContentType));
    }
    if(m_ContentLengthIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("contentLength")), m_ContentLength));
    }
    if(m_ContentIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("contentId")), m_ContentId));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("createdAt")), m_CreatedAt));
    }
    if(m_UpdatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("updatedAt")), m_UpdatedAt));
    }
}

bool AttachmentEntity::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("attachmentId"))))
    {
        utility::string_t refVal_setAttachmentId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("attachmentId"))), refVal_setAttachmentId );
        setAttachmentId(refVal_setAttachmentId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("bucket"))))
    {
        utility::string_t refVal_setBucket;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("bucket"))), refVal_setBucket );
        setBucket(refVal_setBucket);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("userId"))))
    {
        utility::string_t refVal_setUserId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("userId"))), refVal_setUserId );
        setUserId(refVal_setUserId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("contentType"))))
    {
        utility::string_t refVal_setContentType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("contentType"))), refVal_setContentType );
        setContentType(refVal_setContentType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("contentLength"))))
    {
        int64_t refVal_setContentLength;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("contentLength"))), refVal_setContentLength );
        setContentLength(refVal_setContentLength);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("contentId"))))
    {
        utility::string_t refVal_setContentId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("contentId"))), refVal_setContentId );
        setContentId(refVal_setContentId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
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
    return ok;
}

utility::string_t AttachmentEntity::getId() const
{
    return m_Id;
}

void AttachmentEntity::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool AttachmentEntity::idIsSet() const
{
    return m_IdIsSet;
}

void AttachmentEntity::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t AttachmentEntity::getAttachmentId() const
{
    return m_AttachmentId;
}

void AttachmentEntity::setAttachmentId(const utility::string_t& value)
{
    m_AttachmentId = value;
    m_AttachmentIdIsSet = true;
}

bool AttachmentEntity::attachmentIdIsSet() const
{
    return m_AttachmentIdIsSet;
}

void AttachmentEntity::unsetAttachmentId()
{
    m_AttachmentIdIsSet = false;
}
utility::string_t AttachmentEntity::getBucket() const
{
    return m_Bucket;
}

void AttachmentEntity::setBucket(const utility::string_t& value)
{
    m_Bucket = value;
    m_BucketIsSet = true;
}

bool AttachmentEntity::bucketIsSet() const
{
    return m_BucketIsSet;
}

void AttachmentEntity::unsetBucket()
{
    m_BucketIsSet = false;
}
utility::string_t AttachmentEntity::getUserId() const
{
    return m_UserId;
}

void AttachmentEntity::setUserId(const utility::string_t& value)
{
    m_UserId = value;
    m_UserIdIsSet = true;
}

bool AttachmentEntity::userIdIsSet() const
{
    return m_UserIdIsSet;
}

void AttachmentEntity::unsetUserId()
{
    m_UserIdIsSet = false;
}
utility::string_t AttachmentEntity::getContentType() const
{
    return m_ContentType;
}

void AttachmentEntity::setContentType(const utility::string_t& value)
{
    m_ContentType = value;
    m_ContentTypeIsSet = true;
}

bool AttachmentEntity::contentTypeIsSet() const
{
    return m_ContentTypeIsSet;
}

void AttachmentEntity::unsetContentType()
{
    m_ContentTypeIsSet = false;
}
int64_t AttachmentEntity::getContentLength() const
{
    return m_ContentLength;
}

void AttachmentEntity::setContentLength(int64_t value)
{
    m_ContentLength = value;
    m_ContentLengthIsSet = true;
}

bool AttachmentEntity::contentLengthIsSet() const
{
    return m_ContentLengthIsSet;
}

void AttachmentEntity::unsetContentLength()
{
    m_ContentLengthIsSet = false;
}
utility::string_t AttachmentEntity::getContentId() const
{
    return m_ContentId;
}

void AttachmentEntity::setContentId(const utility::string_t& value)
{
    m_ContentId = value;
    m_ContentIdIsSet = true;
}

bool AttachmentEntity::contentIdIsSet() const
{
    return m_ContentIdIsSet;
}

void AttachmentEntity::unsetContentId()
{
    m_ContentIdIsSet = false;
}
utility::string_t AttachmentEntity::getName() const
{
    return m_Name;
}

void AttachmentEntity::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool AttachmentEntity::nameIsSet() const
{
    return m_NameIsSet;
}

void AttachmentEntity::unsetName()
{
    m_NameIsSet = false;
}
utility::datetime AttachmentEntity::getCreatedAt() const
{
    return m_CreatedAt;
}

void AttachmentEntity::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool AttachmentEntity::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void AttachmentEntity::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
utility::datetime AttachmentEntity::getUpdatedAt() const
{
    return m_UpdatedAt;
}

void AttachmentEntity::setUpdatedAt(const utility::datetime& value)
{
    m_UpdatedAt = value;
    m_UpdatedAtIsSet = true;
}

bool AttachmentEntity::updatedAtIsSet() const
{
    return m_UpdatedAtIsSet;
}

void AttachmentEntity::unsetUpdatedAt()
{
    m_UpdatedAtIsSet = false;
}
}
}
}
}


