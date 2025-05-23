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
 * StructuredOutputSchema.h
 *
 * JSON output schema for structured content repsonses. This schema dictates the format that an AI should use when responding to your instructions.
 */

#ifndef COM_MAILSLURP_CLIENT_MODEL_StructuredOutputSchema_H_
#define COM_MAILSLURP_CLIENT_MODEL_StructuredOutputSchema_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/StructuredOutputSchema.h"
#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/Object.h"
#include <map>
#include <vector>

namespace com {
namespace mailslurp {
namespace client {
namespace model {


/// <summary>
/// JSON output schema for structured content repsonses. This schema dictates the format that an AI should use when responding to your instructions.
/// </summary>
class  StructuredOutputSchema
    : public ModelBase
{
public:
    StructuredOutputSchema();
    virtual ~StructuredOutputSchema();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// StructuredOutputSchema members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<StructuredOutputSchema>>& getAnyOf();
    bool anyOfIsSet() const;
    void unsetAnyOf();

    void setAnyOf(const std::vector<std::shared_ptr<StructuredOutputSchema>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Object> getRDefault() const;
    bool rDefaultIsSet() const;
    void unsetr_default();

    void setRDefault(const std::shared_ptr<Object>& value);

    /// <summary>
    /// Provide a description of the schema to help the AI understand the schema.
    /// </summary>
    utility::string_t getDescription() const;
    bool descriptionIsSet() const;
    void unsetDescription();

    void setDescription(const utility::string_t& value);

    /// <summary>
    /// When using type string and format enum pass a collection of enum values here.
    /// </summary>
    std::vector<utility::string_t>& getREnum();
    bool rEnumIsSet() const;
    void unsetr_enum();

    void setREnum(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Object> getExample() const;
    bool exampleIsSet() const;
    void unsetExample();

    void setExample(const std::shared_ptr<Object>& value);

    /// <summary>
    /// Format for string types. Can be null, date-time or enum.
    /// </summary>
    utility::string_t getFormat() const;
    bool formatIsSet() const;
    void unsetFormat();

    void setFormat(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<StructuredOutputSchema> getItems() const;
    bool itemsIsSet() const;
    void unsetItems();

    void setItems(const std::shared_ptr<StructuredOutputSchema>& value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getMaxItems() const;
    bool maxItemsIsSet() const;
    void unsetMaxItems();

    void setMaxItems(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getMinItems() const;
    bool minItemsIsSet() const;
    void unsetMinItems();

    void setMinItems(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getMaxLength() const;
    bool maxLengthIsSet() const;
    void unsetMaxLength();

    void setMaxLength(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getMinLength() const;
    bool minLengthIsSet() const;
    void unsetMinLength();

    void setMinLength(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPattern() const;
    bool patternIsSet() const;
    void unsetPattern();

    void setPattern(const utility::string_t& value);

    /// <summary>
    /// Properties of an OBJECT schema. These are key value pairs where the key is the property name and the value is the schema for that property.
    /// </summary>
    std::map<utility::string_t, std::shared_ptr<StructuredOutputSchema>>& getProperties();
    bool propertiesIsSet() const;
    void unsetProperties();

    void setProperties(const std::map<utility::string_t, std::shared_ptr<StructuredOutputSchema>>& value);

    /// <summary>
    /// Pass an array of property names to specify the order of properties in the generated JSON object if required.
    /// </summary>
    std::vector<utility::string_t>& getPropertyOrdering();
    bool propertyOrderingIsSet() const;
    void unsetPropertyOrdering();

    void setPropertyOrdering(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getRequired();
    bool requiredIsSet() const;
    void unsetRequired();

    void setRequired(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getMaxProperties() const;
    bool maxPropertiesIsSet() const;
    void unsetMaxProperties();

    void setMaxProperties(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getMinProperties() const;
    bool minPropertiesIsSet() const;
    void unsetMinProperties();

    void setMinProperties(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    double getMaximum() const;
    bool maximumIsSet() const;
    void unsetMaximum();

    void setMaximum(double value);

    /// <summary>
    /// 
    /// </summary>
    double getMinimum() const;
    bool minimumIsSet() const;
    void unsetMinimum();

    void setMinimum(double value);

    /// <summary>
    /// 
    /// </summary>
    bool isNullable() const;
    bool nullableIsSet() const;
    void unsetNullable();

    void setNullable(bool value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTitle() const;
    bool titleIsSet() const;
    void unsetTitle();

    void setTitle(const utility::string_t& value);

    /// <summary>
    /// Primitive JSON schema types with a fallback CUSTOM for unknown values.
    /// </summary>
    utility::string_t getType() const;
    bool typeIsSet() const;
    void unsetType();

    void setType(const utility::string_t& value);


protected:
    std::vector<std::shared_ptr<StructuredOutputSchema>> m_AnyOf;
    bool m_AnyOfIsSet;
    std::shared_ptr<Object> m_r_default;
    bool m_r_defaultIsSet;
    utility::string_t m_Description;
    bool m_DescriptionIsSet;
    std::vector<utility::string_t> m_r_enum;
    bool m_r_enumIsSet;
    std::shared_ptr<Object> m_Example;
    bool m_ExampleIsSet;
    utility::string_t m_Format;
    bool m_FormatIsSet;
    std::shared_ptr<StructuredOutputSchema> m_Items;
    bool m_ItemsIsSet;
    int64_t m_MaxItems;
    bool m_MaxItemsIsSet;
    int64_t m_MinItems;
    bool m_MinItemsIsSet;
    int64_t m_MaxLength;
    bool m_MaxLengthIsSet;
    int64_t m_MinLength;
    bool m_MinLengthIsSet;
    utility::string_t m_Pattern;
    bool m_PatternIsSet;
    std::map<utility::string_t, std::shared_ptr<StructuredOutputSchema>> m_Properties;
    bool m_PropertiesIsSet;
    std::vector<utility::string_t> m_PropertyOrdering;
    bool m_PropertyOrderingIsSet;
    std::vector<utility::string_t> m_Required;
    bool m_RequiredIsSet;
    int64_t m_MaxProperties;
    bool m_MaxPropertiesIsSet;
    int64_t m_MinProperties;
    bool m_MinPropertiesIsSet;
    double m_Maximum;
    bool m_MaximumIsSet;
    double m_Minimum;
    bool m_MinimumIsSet;
    bool m_Nullable;
    bool m_NullableIsSet;
    utility::string_t m_Title;
    bool m_TitleIsSet;
    utility::string_t m_Type;
    bool m_TypeIsSet;
};


}
}
}
}

#endif /* COM_MAILSLURP_CLIENT_MODEL_StructuredOutputSchema_H_ */
