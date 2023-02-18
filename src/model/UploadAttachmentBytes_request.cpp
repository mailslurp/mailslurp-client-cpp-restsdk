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



#include "CppRestOpenAPIClient/model/UploadAttachmentBytes_request.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



UploadAttachmentBytes_request::UploadAttachmentBytes_request()
{
    m_short = 0;
    m_shortIsSet = false;
    m_char = utility::conversions::to_string_t("");
    m_charIsSet = false;
    m_int = 0;
    m_intIsSet = false;
    m_long = 0L;
    m_longIsSet = false;
    m_float = 0.0f;
    m_floatIsSet = false;
    m_double = 0.0;
    m_doubleIsSet = false;
    m_Direct = false;
    m_DirectIsSet = false;
    m_ReadOnly = false;
    m_ReadOnlyIsSet = false;
}

UploadAttachmentBytes_request::~UploadAttachmentBytes_request()
{
}

void UploadAttachmentBytes_request::validate()
{
    // TODO: implement validation
}

web::json::value UploadAttachmentBytes_request::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_shortIsSet)
    {
        val[utility::conversions::to_string_t(U("short"))] = ModelBase::toJson(m_short);
    }
    if(m_charIsSet)
    {
        val[utility::conversions::to_string_t(U("char"))] = ModelBase::toJson(m_char);
    }
    if(m_intIsSet)
    {
        val[utility::conversions::to_string_t(U("int"))] = ModelBase::toJson(m_int);
    }
    if(m_longIsSet)
    {
        val[utility::conversions::to_string_t(U("long"))] = ModelBase::toJson(m_long);
    }
    if(m_floatIsSet)
    {
        val[utility::conversions::to_string_t(U("float"))] = ModelBase::toJson(m_float);
    }
    if(m_doubleIsSet)
    {
        val[utility::conversions::to_string_t(U("double"))] = ModelBase::toJson(m_double);
    }
    if(m_DirectIsSet)
    {
        val[utility::conversions::to_string_t(U("direct"))] = ModelBase::toJson(m_Direct);
    }
    if(m_ReadOnlyIsSet)
    {
        val[utility::conversions::to_string_t(U("readOnly"))] = ModelBase::toJson(m_ReadOnly);
    }

    return val;
}

bool UploadAttachmentBytes_request::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("short"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("short")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setShort;
            ok &= ModelBase::fromJson(fieldValue, refVal_setShort);
            setShort(refVal_setShort);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("char"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("char")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setChar;
            ok &= ModelBase::fromJson(fieldValue, refVal_setChar);
            setChar(refVal_setChar);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("int"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("int")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setInt;
            ok &= ModelBase::fromJson(fieldValue, refVal_setInt);
            setInt(refVal_setInt);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("long"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("long")));
        if(!fieldValue.is_null())
        {
            int64_t refVal_setLong;
            ok &= ModelBase::fromJson(fieldValue, refVal_setLong);
            setLong(refVal_setLong);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("float"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("float")));
        if(!fieldValue.is_null())
        {
            float refVal_setFloat;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFloat);
            setFloat(refVal_setFloat);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("double"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("double")));
        if(!fieldValue.is_null())
        {
            double refVal_setDouble;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDouble);
            setDouble(refVal_setDouble);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("direct"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("direct")));
        if(!fieldValue.is_null())
        {
            bool refVal_setDirect;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDirect);
            setDirect(refVal_setDirect);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("readOnly"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("readOnly")));
        if(!fieldValue.is_null())
        {
            bool refVal_setReadOnly;
            ok &= ModelBase::fromJson(fieldValue, refVal_setReadOnly);
            setReadOnly(refVal_setReadOnly);
        }
    }
    return ok;
}

void UploadAttachmentBytes_request::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_shortIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("short")), m_short));
    }
    if(m_charIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("char")), m_char));
    }
    if(m_intIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("int")), m_int));
    }
    if(m_longIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("long")), m_long));
    }
    if(m_floatIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("float")), m_float));
    }
    if(m_doubleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("double")), m_double));
    }
    if(m_DirectIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("direct")), m_Direct));
    }
    if(m_ReadOnlyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("readOnly")), m_ReadOnly));
    }
}

bool UploadAttachmentBytes_request::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("short"))))
    {
        int32_t refVal_setShort;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("short"))), refVal_setShort );
        setShort(refVal_setShort);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("char"))))
    {
        utility::string_t refVal_setChar;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("char"))), refVal_setChar );
        setChar(refVal_setChar);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("int"))))
    {
        int32_t refVal_setInt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("int"))), refVal_setInt );
        setInt(refVal_setInt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("long"))))
    {
        int64_t refVal_setLong;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("long"))), refVal_setLong );
        setLong(refVal_setLong);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("float"))))
    {
        float refVal_setFloat;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("float"))), refVal_setFloat );
        setFloat(refVal_setFloat);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("double"))))
    {
        double refVal_setDouble;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("double"))), refVal_setDouble );
        setDouble(refVal_setDouble);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("direct"))))
    {
        bool refVal_setDirect;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("direct"))), refVal_setDirect );
        setDirect(refVal_setDirect);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("readOnly"))))
    {
        bool refVal_setReadOnly;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("readOnly"))), refVal_setReadOnly );
        setReadOnly(refVal_setReadOnly);
    }
    return ok;
}

int32_t UploadAttachmentBytes_request::getShort() const
{
    return m_short;
}

void UploadAttachmentBytes_request::setShort(int32_t value)
{
    m_short = value;
    m_shortIsSet = true;
}

bool UploadAttachmentBytes_request::r_shortIsSet() const
{
    return m_shortIsSet;
}

void UploadAttachmentBytes_request::unsetshort()
{
    m_shortIsSet = false;
}
utility::string_t UploadAttachmentBytes_request::getChar() const
{
    return m_char;
}

void UploadAttachmentBytes_request::setChar(const utility::string_t& value)
{
    m_char = value;
    m_charIsSet = true;
}

bool UploadAttachmentBytes_request::r_charIsSet() const
{
    return m_charIsSet;
}

void UploadAttachmentBytes_request::unsetchar()
{
    m_charIsSet = false;
}
int32_t UploadAttachmentBytes_request::getInt() const
{
    return m_int;
}

void UploadAttachmentBytes_request::setInt(int32_t value)
{
    m_int = value;
    m_intIsSet = true;
}

bool UploadAttachmentBytes_request::r_intIsSet() const
{
    return m_intIsSet;
}

void UploadAttachmentBytes_request::unsetint()
{
    m_intIsSet = false;
}
int64_t UploadAttachmentBytes_request::getLong() const
{
    return m_long;
}

void UploadAttachmentBytes_request::setLong(int64_t value)
{
    m_long = value;
    m_longIsSet = true;
}

bool UploadAttachmentBytes_request::r_longIsSet() const
{
    return m_longIsSet;
}

void UploadAttachmentBytes_request::unsetlong()
{
    m_longIsSet = false;
}
float UploadAttachmentBytes_request::getFloat() const
{
    return m_float;
}

void UploadAttachmentBytes_request::setFloat(float value)
{
    m_float = value;
    m_floatIsSet = true;
}

bool UploadAttachmentBytes_request::r_floatIsSet() const
{
    return m_floatIsSet;
}

void UploadAttachmentBytes_request::unsetfloat()
{
    m_floatIsSet = false;
}
double UploadAttachmentBytes_request::getDouble() const
{
    return m_double;
}

void UploadAttachmentBytes_request::setDouble(double value)
{
    m_double = value;
    m_doubleIsSet = true;
}

bool UploadAttachmentBytes_request::r_doubleIsSet() const
{
    return m_doubleIsSet;
}

void UploadAttachmentBytes_request::unsetdouble()
{
    m_doubleIsSet = false;
}
bool UploadAttachmentBytes_request::isDirect() const
{
    return m_Direct;
}

void UploadAttachmentBytes_request::setDirect(bool value)
{
    m_Direct = value;
    m_DirectIsSet = true;
}

bool UploadAttachmentBytes_request::directIsSet() const
{
    return m_DirectIsSet;
}

void UploadAttachmentBytes_request::unsetDirect()
{
    m_DirectIsSet = false;
}
bool UploadAttachmentBytes_request::isReadOnly() const
{
    return m_ReadOnly;
}

void UploadAttachmentBytes_request::setReadOnly(bool value)
{
    m_ReadOnly = value;
    m_ReadOnlyIsSet = true;
}

bool UploadAttachmentBytes_request::readOnlyIsSet() const
{
    return m_ReadOnlyIsSet;
}

void UploadAttachmentBytes_request::unsetReadOnly()
{
    m_ReadOnlyIsSet = false;
}
}
}
}
}

