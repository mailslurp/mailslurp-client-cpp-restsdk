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



#include "CppRestOpenAPIClient/model/StructuredOutputSchema.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



StructuredOutputSchema::StructuredOutputSchema()
{
    m_AnyOfIsSet = false;
    m_r_defaultIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
    m_r_enumIsSet = false;
    m_ExampleIsSet = false;
    m_Format = utility::conversions::to_string_t("");
    m_FormatIsSet = false;
    m_ItemsIsSet = false;
    m_MaxItems = 0L;
    m_MaxItemsIsSet = false;
    m_MinItems = 0L;
    m_MinItemsIsSet = false;
    m_MaxLength = 0L;
    m_MaxLengthIsSet = false;
    m_MinLength = 0L;
    m_MinLengthIsSet = false;
    m_Pattern = utility::conversions::to_string_t("");
    m_PatternIsSet = false;
    m_PropertiesIsSet = false;
    m_PropertyOrderingIsSet = false;
    m_RequiredIsSet = false;
    m_MaxProperties = 0L;
    m_MaxPropertiesIsSet = false;
    m_MinProperties = 0L;
    m_MinPropertiesIsSet = false;
    m_Maximum = 0.0;
    m_MaximumIsSet = false;
    m_Minimum = 0.0;
    m_MinimumIsSet = false;
    m_Nullable = false;
    m_NullableIsSet = false;
    m_Title = utility::conversions::to_string_t("");
    m_TitleIsSet = false;
    m_Type = utility::conversions::to_string_t("");
    m_TypeIsSet = false;
}

StructuredOutputSchema::~StructuredOutputSchema()
{
}

void StructuredOutputSchema::validate()
{
    // TODO: implement validation
}

web::json::value StructuredOutputSchema::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_AnyOfIsSet)
    {
        val[utility::conversions::to_string_t(U("anyOf"))] = ModelBase::toJson(m_AnyOf);
    }
    if(m_r_defaultIsSet)
    {
        val[utility::conversions::to_string_t(U("default"))] = ModelBase::toJson(m_r_default);
    }
    if(m_DescriptionIsSet)
    {
        val[utility::conversions::to_string_t(U("description"))] = ModelBase::toJson(m_Description);
    }
    if(m_r_enumIsSet)
    {
        val[utility::conversions::to_string_t(U("enum"))] = ModelBase::toJson(m_r_enum);
    }
    if(m_ExampleIsSet)
    {
        val[utility::conversions::to_string_t(U("example"))] = ModelBase::toJson(m_Example);
    }
    if(m_FormatIsSet)
    {
        val[utility::conversions::to_string_t(U("format"))] = ModelBase::toJson(m_Format);
    }
    if(m_ItemsIsSet)
    {
        val[utility::conversions::to_string_t(U("items"))] = ModelBase::toJson(m_Items);
    }
    if(m_MaxItemsIsSet)
    {
        val[utility::conversions::to_string_t(U("maxItems"))] = ModelBase::toJson(m_MaxItems);
    }
    if(m_MinItemsIsSet)
    {
        val[utility::conversions::to_string_t(U("minItems"))] = ModelBase::toJson(m_MinItems);
    }
    if(m_MaxLengthIsSet)
    {
        val[utility::conversions::to_string_t(U("maxLength"))] = ModelBase::toJson(m_MaxLength);
    }
    if(m_MinLengthIsSet)
    {
        val[utility::conversions::to_string_t(U("minLength"))] = ModelBase::toJson(m_MinLength);
    }
    if(m_PatternIsSet)
    {
        val[utility::conversions::to_string_t(U("pattern"))] = ModelBase::toJson(m_Pattern);
    }
    if(m_PropertiesIsSet)
    {
        val[utility::conversions::to_string_t(U("properties"))] = ModelBase::toJson(m_Properties);
    }
    if(m_PropertyOrderingIsSet)
    {
        val[utility::conversions::to_string_t(U("propertyOrdering"))] = ModelBase::toJson(m_PropertyOrdering);
    }
    if(m_RequiredIsSet)
    {
        val[utility::conversions::to_string_t(U("required"))] = ModelBase::toJson(m_Required);
    }
    if(m_MaxPropertiesIsSet)
    {
        val[utility::conversions::to_string_t(U("maxProperties"))] = ModelBase::toJson(m_MaxProperties);
    }
    if(m_MinPropertiesIsSet)
    {
        val[utility::conversions::to_string_t(U("minProperties"))] = ModelBase::toJson(m_MinProperties);
    }
    if(m_MaximumIsSet)
    {
        val[utility::conversions::to_string_t(U("maximum"))] = ModelBase::toJson(m_Maximum);
    }
    if(m_MinimumIsSet)
    {
        val[utility::conversions::to_string_t(U("minimum"))] = ModelBase::toJson(m_Minimum);
    }
    if(m_NullableIsSet)
    {
        val[utility::conversions::to_string_t(U("nullable"))] = ModelBase::toJson(m_Nullable);
    }
    if(m_TitleIsSet)
    {
        val[utility::conversions::to_string_t(U("title"))] = ModelBase::toJson(m_Title);
    }
    if(m_TypeIsSet)
    {
        val[utility::conversions::to_string_t(U("type"))] = ModelBase::toJson(m_Type);
    }

    return val;
}

bool StructuredOutputSchema::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("anyOf"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("anyOf")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<StructuredOutputSchema>> refVal_setAnyOf;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAnyOf);
            setAnyOf(refVal_setAnyOf);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("default"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("default")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> refVal_setRDefault;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRDefault);
            setRDefault(refVal_setRDefault);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("description"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("description")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDescription;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDescription);
            setDescription(refVal_setDescription);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("enum"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("enum")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setREnum;
            ok &= ModelBase::fromJson(fieldValue, refVal_setREnum);
            setREnum(refVal_setREnum);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("example"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("example")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> refVal_setExample;
            ok &= ModelBase::fromJson(fieldValue, refVal_setExample);
            setExample(refVal_setExample);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("format"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("format")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setFormat;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFormat);
            setFormat(refVal_setFormat);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("items"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("items")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<StructuredOutputSchema> refVal_setItems;
            ok &= ModelBase::fromJson(fieldValue, refVal_setItems);
            setItems(refVal_setItems);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("maxItems"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("maxItems")));
        if(!fieldValue.is_null())
        {
            int64_t refVal_setMaxItems;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMaxItems);
            setMaxItems(refVal_setMaxItems);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("minItems"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("minItems")));
        if(!fieldValue.is_null())
        {
            int64_t refVal_setMinItems;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMinItems);
            setMinItems(refVal_setMinItems);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("maxLength"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("maxLength")));
        if(!fieldValue.is_null())
        {
            int64_t refVal_setMaxLength;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMaxLength);
            setMaxLength(refVal_setMaxLength);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("minLength"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("minLength")));
        if(!fieldValue.is_null())
        {
            int64_t refVal_setMinLength;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMinLength);
            setMinLength(refVal_setMinLength);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("pattern"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("pattern")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setPattern;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPattern);
            setPattern(refVal_setPattern);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("properties"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("properties")));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, std::shared_ptr<StructuredOutputSchema>> refVal_setProperties;
            ok &= ModelBase::fromJson(fieldValue, refVal_setProperties);
            setProperties(refVal_setProperties);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("propertyOrdering"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("propertyOrdering")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setPropertyOrdering;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPropertyOrdering);
            setPropertyOrdering(refVal_setPropertyOrdering);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("required"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("required")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setRequired;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRequired);
            setRequired(refVal_setRequired);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("maxProperties"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("maxProperties")));
        if(!fieldValue.is_null())
        {
            int64_t refVal_setMaxProperties;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMaxProperties);
            setMaxProperties(refVal_setMaxProperties);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("minProperties"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("minProperties")));
        if(!fieldValue.is_null())
        {
            int64_t refVal_setMinProperties;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMinProperties);
            setMinProperties(refVal_setMinProperties);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("maximum"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("maximum")));
        if(!fieldValue.is_null())
        {
            double refVal_setMaximum;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMaximum);
            setMaximum(refVal_setMaximum);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("minimum"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("minimum")));
        if(!fieldValue.is_null())
        {
            double refVal_setMinimum;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMinimum);
            setMinimum(refVal_setMinimum);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("nullable"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("nullable")));
        if(!fieldValue.is_null())
        {
            bool refVal_setNullable;
            ok &= ModelBase::fromJson(fieldValue, refVal_setNullable);
            setNullable(refVal_setNullable);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("title"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("title")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setTitle;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTitle);
            setTitle(refVal_setTitle);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("type")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setType);
            setType(refVal_setType);
        }
    }
    return ok;
}

void StructuredOutputSchema::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_AnyOfIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("anyOf")), m_AnyOf));
    }
    if(m_r_defaultIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("default")), m_r_default));
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("description")), m_Description));
    }
    if(m_r_enumIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("enum")), m_r_enum));
    }
    if(m_ExampleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("example")), m_Example));
    }
    if(m_FormatIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("format")), m_Format));
    }
    if(m_ItemsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("items")), m_Items));
    }
    if(m_MaxItemsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("maxItems")), m_MaxItems));
    }
    if(m_MinItemsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("minItems")), m_MinItems));
    }
    if(m_MaxLengthIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("maxLength")), m_MaxLength));
    }
    if(m_MinLengthIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("minLength")), m_MinLength));
    }
    if(m_PatternIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("pattern")), m_Pattern));
    }
    if(m_PropertiesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("properties")), m_Properties));
    }
    if(m_PropertyOrderingIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("propertyOrdering")), m_PropertyOrdering));
    }
    if(m_RequiredIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("required")), m_Required));
    }
    if(m_MaxPropertiesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("maxProperties")), m_MaxProperties));
    }
    if(m_MinPropertiesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("minProperties")), m_MinProperties));
    }
    if(m_MaximumIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("maximum")), m_Maximum));
    }
    if(m_MinimumIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("minimum")), m_Minimum));
    }
    if(m_NullableIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("nullable")), m_Nullable));
    }
    if(m_TitleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("title")), m_Title));
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("type")), m_Type));
    }
}

bool StructuredOutputSchema::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("anyOf"))))
    {
        std::vector<std::shared_ptr<StructuredOutputSchema>> refVal_setAnyOf;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("anyOf"))), refVal_setAnyOf );
        setAnyOf(refVal_setAnyOf);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("default"))))
    {
        std::shared_ptr<Object> refVal_setRDefault;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("default"))), refVal_setRDefault );
        setRDefault(refVal_setRDefault);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("description"))))
    {
        utility::string_t refVal_setDescription;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("description"))), refVal_setDescription );
        setDescription(refVal_setDescription);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("enum"))))
    {
        std::vector<utility::string_t> refVal_setREnum;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("enum"))), refVal_setREnum );
        setREnum(refVal_setREnum);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("example"))))
    {
        std::shared_ptr<Object> refVal_setExample;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("example"))), refVal_setExample );
        setExample(refVal_setExample);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("format"))))
    {
        utility::string_t refVal_setFormat;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("format"))), refVal_setFormat );
        setFormat(refVal_setFormat);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("items"))))
    {
        std::shared_ptr<StructuredOutputSchema> refVal_setItems;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("items"))), refVal_setItems );
        setItems(refVal_setItems);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("maxItems"))))
    {
        int64_t refVal_setMaxItems;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("maxItems"))), refVal_setMaxItems );
        setMaxItems(refVal_setMaxItems);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("minItems"))))
    {
        int64_t refVal_setMinItems;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("minItems"))), refVal_setMinItems );
        setMinItems(refVal_setMinItems);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("maxLength"))))
    {
        int64_t refVal_setMaxLength;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("maxLength"))), refVal_setMaxLength );
        setMaxLength(refVal_setMaxLength);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("minLength"))))
    {
        int64_t refVal_setMinLength;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("minLength"))), refVal_setMinLength );
        setMinLength(refVal_setMinLength);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("pattern"))))
    {
        utility::string_t refVal_setPattern;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("pattern"))), refVal_setPattern );
        setPattern(refVal_setPattern);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("properties"))))
    {
        std::map<utility::string_t, std::shared_ptr<StructuredOutputSchema>> refVal_setProperties;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("properties"))), refVal_setProperties );
        setProperties(refVal_setProperties);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("propertyOrdering"))))
    {
        std::vector<utility::string_t> refVal_setPropertyOrdering;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("propertyOrdering"))), refVal_setPropertyOrdering );
        setPropertyOrdering(refVal_setPropertyOrdering);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("required"))))
    {
        std::vector<utility::string_t> refVal_setRequired;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("required"))), refVal_setRequired );
        setRequired(refVal_setRequired);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("maxProperties"))))
    {
        int64_t refVal_setMaxProperties;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("maxProperties"))), refVal_setMaxProperties );
        setMaxProperties(refVal_setMaxProperties);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("minProperties"))))
    {
        int64_t refVal_setMinProperties;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("minProperties"))), refVal_setMinProperties );
        setMinProperties(refVal_setMinProperties);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("maximum"))))
    {
        double refVal_setMaximum;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("maximum"))), refVal_setMaximum );
        setMaximum(refVal_setMaximum);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("minimum"))))
    {
        double refVal_setMinimum;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("minimum"))), refVal_setMinimum );
        setMinimum(refVal_setMinimum);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("nullable"))))
    {
        bool refVal_setNullable;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("nullable"))), refVal_setNullable );
        setNullable(refVal_setNullable);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("title"))))
    {
        utility::string_t refVal_setTitle;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("title"))), refVal_setTitle );
        setTitle(refVal_setTitle);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("type"))))
    {
        utility::string_t refVal_setType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("type"))), refVal_setType );
        setType(refVal_setType);
    }
    return ok;
}

std::vector<std::shared_ptr<StructuredOutputSchema>>& StructuredOutputSchema::getAnyOf()
{
    return m_AnyOf;
}

void StructuredOutputSchema::setAnyOf(const std::vector<std::shared_ptr<StructuredOutputSchema>>& value)
{
    m_AnyOf = value;
    m_AnyOfIsSet = true;
}

bool StructuredOutputSchema::anyOfIsSet() const
{
    return m_AnyOfIsSet;
}

void StructuredOutputSchema::unsetAnyOf()
{
    m_AnyOfIsSet = false;
}
std::shared_ptr<Object> StructuredOutputSchema::getRDefault() const
{
    return m_r_default;
}

void StructuredOutputSchema::setRDefault(const std::shared_ptr<Object>& value)
{
    m_r_default = value;
    m_r_defaultIsSet = true;
}

bool StructuredOutputSchema::rDefaultIsSet() const
{
    return m_r_defaultIsSet;
}

void StructuredOutputSchema::unsetr_default()
{
    m_r_defaultIsSet = false;
}
utility::string_t StructuredOutputSchema::getDescription() const
{
    return m_Description;
}

void StructuredOutputSchema::setDescription(const utility::string_t& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}

bool StructuredOutputSchema::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void StructuredOutputSchema::unsetDescription()
{
    m_DescriptionIsSet = false;
}
std::vector<utility::string_t>& StructuredOutputSchema::getREnum()
{
    return m_r_enum;
}

void StructuredOutputSchema::setREnum(const std::vector<utility::string_t>& value)
{
    m_r_enum = value;
    m_r_enumIsSet = true;
}

bool StructuredOutputSchema::rEnumIsSet() const
{
    return m_r_enumIsSet;
}

void StructuredOutputSchema::unsetr_enum()
{
    m_r_enumIsSet = false;
}
std::shared_ptr<Object> StructuredOutputSchema::getExample() const
{
    return m_Example;
}

void StructuredOutputSchema::setExample(const std::shared_ptr<Object>& value)
{
    m_Example = value;
    m_ExampleIsSet = true;
}

bool StructuredOutputSchema::exampleIsSet() const
{
    return m_ExampleIsSet;
}

void StructuredOutputSchema::unsetExample()
{
    m_ExampleIsSet = false;
}
utility::string_t StructuredOutputSchema::getFormat() const
{
    return m_Format;
}

void StructuredOutputSchema::setFormat(const utility::string_t& value)
{
    m_Format = value;
    m_FormatIsSet = true;
}

bool StructuredOutputSchema::formatIsSet() const
{
    return m_FormatIsSet;
}

void StructuredOutputSchema::unsetFormat()
{
    m_FormatIsSet = false;
}
std::shared_ptr<StructuredOutputSchema> StructuredOutputSchema::getItems() const
{
    return m_Items;
}

void StructuredOutputSchema::setItems(const std::shared_ptr<StructuredOutputSchema>& value)
{
    m_Items = value;
    m_ItemsIsSet = true;
}

bool StructuredOutputSchema::itemsIsSet() const
{
    return m_ItemsIsSet;
}

void StructuredOutputSchema::unsetItems()
{
    m_ItemsIsSet = false;
}
int64_t StructuredOutputSchema::getMaxItems() const
{
    return m_MaxItems;
}

void StructuredOutputSchema::setMaxItems(int64_t value)
{
    m_MaxItems = value;
    m_MaxItemsIsSet = true;
}

bool StructuredOutputSchema::maxItemsIsSet() const
{
    return m_MaxItemsIsSet;
}

void StructuredOutputSchema::unsetMaxItems()
{
    m_MaxItemsIsSet = false;
}
int64_t StructuredOutputSchema::getMinItems() const
{
    return m_MinItems;
}

void StructuredOutputSchema::setMinItems(int64_t value)
{
    m_MinItems = value;
    m_MinItemsIsSet = true;
}

bool StructuredOutputSchema::minItemsIsSet() const
{
    return m_MinItemsIsSet;
}

void StructuredOutputSchema::unsetMinItems()
{
    m_MinItemsIsSet = false;
}
int64_t StructuredOutputSchema::getMaxLength() const
{
    return m_MaxLength;
}

void StructuredOutputSchema::setMaxLength(int64_t value)
{
    m_MaxLength = value;
    m_MaxLengthIsSet = true;
}

bool StructuredOutputSchema::maxLengthIsSet() const
{
    return m_MaxLengthIsSet;
}

void StructuredOutputSchema::unsetMaxLength()
{
    m_MaxLengthIsSet = false;
}
int64_t StructuredOutputSchema::getMinLength() const
{
    return m_MinLength;
}

void StructuredOutputSchema::setMinLength(int64_t value)
{
    m_MinLength = value;
    m_MinLengthIsSet = true;
}

bool StructuredOutputSchema::minLengthIsSet() const
{
    return m_MinLengthIsSet;
}

void StructuredOutputSchema::unsetMinLength()
{
    m_MinLengthIsSet = false;
}
utility::string_t StructuredOutputSchema::getPattern() const
{
    return m_Pattern;
}

void StructuredOutputSchema::setPattern(const utility::string_t& value)
{
    m_Pattern = value;
    m_PatternIsSet = true;
}

bool StructuredOutputSchema::patternIsSet() const
{
    return m_PatternIsSet;
}

void StructuredOutputSchema::unsetPattern()
{
    m_PatternIsSet = false;
}
std::map<utility::string_t, std::shared_ptr<StructuredOutputSchema>>& StructuredOutputSchema::getProperties()
{
    return m_Properties;
}

void StructuredOutputSchema::setProperties(const std::map<utility::string_t, std::shared_ptr<StructuredOutputSchema>>& value)
{
    m_Properties = value;
    m_PropertiesIsSet = true;
}

bool StructuredOutputSchema::propertiesIsSet() const
{
    return m_PropertiesIsSet;
}

void StructuredOutputSchema::unsetProperties()
{
    m_PropertiesIsSet = false;
}
std::vector<utility::string_t>& StructuredOutputSchema::getPropertyOrdering()
{
    return m_PropertyOrdering;
}

void StructuredOutputSchema::setPropertyOrdering(const std::vector<utility::string_t>& value)
{
    m_PropertyOrdering = value;
    m_PropertyOrderingIsSet = true;
}

bool StructuredOutputSchema::propertyOrderingIsSet() const
{
    return m_PropertyOrderingIsSet;
}

void StructuredOutputSchema::unsetPropertyOrdering()
{
    m_PropertyOrderingIsSet = false;
}
std::vector<utility::string_t>& StructuredOutputSchema::getRequired()
{
    return m_Required;
}

void StructuredOutputSchema::setRequired(const std::vector<utility::string_t>& value)
{
    m_Required = value;
    m_RequiredIsSet = true;
}

bool StructuredOutputSchema::requiredIsSet() const
{
    return m_RequiredIsSet;
}

void StructuredOutputSchema::unsetRequired()
{
    m_RequiredIsSet = false;
}
int64_t StructuredOutputSchema::getMaxProperties() const
{
    return m_MaxProperties;
}

void StructuredOutputSchema::setMaxProperties(int64_t value)
{
    m_MaxProperties = value;
    m_MaxPropertiesIsSet = true;
}

bool StructuredOutputSchema::maxPropertiesIsSet() const
{
    return m_MaxPropertiesIsSet;
}

void StructuredOutputSchema::unsetMaxProperties()
{
    m_MaxPropertiesIsSet = false;
}
int64_t StructuredOutputSchema::getMinProperties() const
{
    return m_MinProperties;
}

void StructuredOutputSchema::setMinProperties(int64_t value)
{
    m_MinProperties = value;
    m_MinPropertiesIsSet = true;
}

bool StructuredOutputSchema::minPropertiesIsSet() const
{
    return m_MinPropertiesIsSet;
}

void StructuredOutputSchema::unsetMinProperties()
{
    m_MinPropertiesIsSet = false;
}
double StructuredOutputSchema::getMaximum() const
{
    return m_Maximum;
}

void StructuredOutputSchema::setMaximum(double value)
{
    m_Maximum = value;
    m_MaximumIsSet = true;
}

bool StructuredOutputSchema::maximumIsSet() const
{
    return m_MaximumIsSet;
}

void StructuredOutputSchema::unsetMaximum()
{
    m_MaximumIsSet = false;
}
double StructuredOutputSchema::getMinimum() const
{
    return m_Minimum;
}

void StructuredOutputSchema::setMinimum(double value)
{
    m_Minimum = value;
    m_MinimumIsSet = true;
}

bool StructuredOutputSchema::minimumIsSet() const
{
    return m_MinimumIsSet;
}

void StructuredOutputSchema::unsetMinimum()
{
    m_MinimumIsSet = false;
}
bool StructuredOutputSchema::isNullable() const
{
    return m_Nullable;
}

void StructuredOutputSchema::setNullable(bool value)
{
    m_Nullable = value;
    m_NullableIsSet = true;
}

bool StructuredOutputSchema::nullableIsSet() const
{
    return m_NullableIsSet;
}

void StructuredOutputSchema::unsetNullable()
{
    m_NullableIsSet = false;
}
utility::string_t StructuredOutputSchema::getTitle() const
{
    return m_Title;
}

void StructuredOutputSchema::setTitle(const utility::string_t& value)
{
    m_Title = value;
    m_TitleIsSet = true;
}

bool StructuredOutputSchema::titleIsSet() const
{
    return m_TitleIsSet;
}

void StructuredOutputSchema::unsetTitle()
{
    m_TitleIsSet = false;
}
utility::string_t StructuredOutputSchema::getType() const
{
    return m_Type;
}

void StructuredOutputSchema::setType(const utility::string_t& value)
{
    m_Type = value;
    m_TypeIsSet = true;
}

bool StructuredOutputSchema::typeIsSet() const
{
    return m_TypeIsSet;
}

void StructuredOutputSchema::unsetType()
{
    m_TypeIsSet = false;
}
}
}
}
}


