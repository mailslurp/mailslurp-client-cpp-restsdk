/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://docs.mailslurp.com/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "AttachmentEntity.h"

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
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_AttachmentIdIsSet)
    {
        val[utility::conversions::to_string_t("attachmentId")] = ModelBase::toJson(m_AttachmentId);
    }
    if(m_BucketIsSet)
    {
        val[utility::conversions::to_string_t("bucket")] = ModelBase::toJson(m_Bucket);
    }
    if(m_UserIdIsSet)
    {
        val[utility::conversions::to_string_t("userId")] = ModelBase::toJson(m_UserId);
    }
    if(m_ContentTypeIsSet)
    {
        val[utility::conversions::to_string_t("contentType")] = ModelBase::toJson(m_ContentType);
    }
    if(m_ContentLengthIsSet)
    {
        val[utility::conversions::to_string_t("contentLength")] = ModelBase::toJson(m_ContentLength);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t("createdAt")] = ModelBase::toJson(m_CreatedAt);
    }
    if(m_UpdatedAtIsSet)
    {
        val[utility::conversions::to_string_t("updatedAt")] = ModelBase::toJson(m_UpdatedAt);
    }

    return val;
}

bool AttachmentEntity::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_id);
            setId(refVal_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attachmentId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attachmentId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_attachmentId;
            ok &= ModelBase::fromJson(fieldValue, refVal_attachmentId);
            setAttachmentId(refVal_attachmentId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bucket")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bucket"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_bucket;
            ok &= ModelBase::fromJson(fieldValue, refVal_bucket);
            setBucket(refVal_bucket);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("userId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_userId;
            ok &= ModelBase::fromJson(fieldValue, refVal_userId);
            setUserId(refVal_userId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("contentType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("contentType"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_contentType;
            ok &= ModelBase::fromJson(fieldValue, refVal_contentType);
            setContentType(refVal_contentType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("contentLength")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("contentLength"));
        if(!fieldValue.is_null())
        {
            int64_t refVal_contentLength;
            ok &= ModelBase::fromJson(fieldValue, refVal_contentLength);
            setContentLength(refVal_contentLength);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_name;
            ok &= ModelBase::fromJson(fieldValue, refVal_name);
            setName(refVal_name);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("createdAt")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("createdAt"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_createdAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_createdAt);
            setCreatedAt(refVal_createdAt);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updatedAt")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updatedAt"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_updatedAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_updatedAt);
            setUpdatedAt(refVal_updatedAt);
        }
    }
    return ok;
}

void AttachmentEntity::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_AttachmentIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("attachmentId"), m_AttachmentId));
    }
    if(m_BucketIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("bucket"), m_Bucket));
    }
    if(m_UserIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("userId"), m_UserId));
    }
    if(m_ContentTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("contentType"), m_ContentType));
    }
    if(m_ContentLengthIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("contentLength"), m_ContentLength));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("createdAt"), m_CreatedAt));
    }
    if(m_UpdatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("updatedAt"), m_UpdatedAt));
    }
}

bool AttachmentEntity::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        utility::string_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("id")), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("attachmentId")))
    {
        utility::string_t refVal_attachmentId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("attachmentId")), refVal_attachmentId );
        setAttachmentId(refVal_attachmentId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("bucket")))
    {
        utility::string_t refVal_bucket;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("bucket")), refVal_bucket );
        setBucket(refVal_bucket);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("userId")))
    {
        utility::string_t refVal_userId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("userId")), refVal_userId );
        setUserId(refVal_userId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("contentType")))
    {
        utility::string_t refVal_contentType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("contentType")), refVal_contentType );
        setContentType(refVal_contentType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("contentLength")))
    {
        int64_t refVal_contentLength;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("contentLength")), refVal_contentLength );
        setContentLength(refVal_contentLength);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        utility::string_t refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("name")), refVal_name );
        setName(refVal_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("createdAt")))
    {
        utility::datetime refVal_createdAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("createdAt")), refVal_createdAt );
        setCreatedAt(refVal_createdAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("updatedAt")))
    {
        utility::datetime refVal_updatedAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("updatedAt")), refVal_updatedAt );
        setUpdatedAt(refVal_updatedAt);
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


