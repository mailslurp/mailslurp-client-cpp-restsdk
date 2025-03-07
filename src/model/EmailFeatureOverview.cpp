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



#include "CppRestOpenAPIClient/model/EmailFeatureOverview.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {



EmailFeatureOverview::EmailFeatureOverview()
{
    m_Feature = utility::conversions::to_string_t("");
    m_FeatureIsSet = false;
    m_Title = utility::conversions::to_string_t("");
    m_TitleIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
    m_Category = utility::conversions::to_string_t("");
    m_CategoryIsSet = false;
    m_Notes = utility::conversions::to_string_t("");
    m_NotesIsSet = false;
    m_NotesNumbersIsSet = false;
    m_FeatureStatisticsIsSet = false;
    m_StatusesIsSet = false;
}

EmailFeatureOverview::~EmailFeatureOverview()
{
}

void EmailFeatureOverview::validate()
{
    // TODO: implement validation
}

web::json::value EmailFeatureOverview::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_FeatureIsSet)
    {
        val[utility::conversions::to_string_t(U("feature"))] = ModelBase::toJson(m_Feature);
    }
    if(m_TitleIsSet)
    {
        val[utility::conversions::to_string_t(U("title"))] = ModelBase::toJson(m_Title);
    }
    if(m_DescriptionIsSet)
    {
        val[utility::conversions::to_string_t(U("description"))] = ModelBase::toJson(m_Description);
    }
    if(m_CategoryIsSet)
    {
        val[utility::conversions::to_string_t(U("category"))] = ModelBase::toJson(m_Category);
    }
    if(m_NotesIsSet)
    {
        val[utility::conversions::to_string_t(U("notes"))] = ModelBase::toJson(m_Notes);
    }
    if(m_NotesNumbersIsSet)
    {
        val[utility::conversions::to_string_t(U("notesNumbers"))] = ModelBase::toJson(m_NotesNumbers);
    }
    if(m_FeatureStatisticsIsSet)
    {
        val[utility::conversions::to_string_t(U("featureStatistics"))] = ModelBase::toJson(m_FeatureStatistics);
    }
    if(m_StatusesIsSet)
    {
        val[utility::conversions::to_string_t(U("statuses"))] = ModelBase::toJson(m_Statuses);
    }

    return val;
}

bool EmailFeatureOverview::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("feature"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("feature")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setFeature;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFeature);
            setFeature(refVal_setFeature);
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
    if(val.has_field(utility::conversions::to_string_t(U("category"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("category")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCategory;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCategory);
            setCategory(refVal_setCategory);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("notes"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("notes")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setNotes;
            ok &= ModelBase::fromJson(fieldValue, refVal_setNotes);
            setNotes(refVal_setNotes);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("notesNumbers"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("notesNumbers")));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, utility::string_t> refVal_setNotesNumbers;
            ok &= ModelBase::fromJson(fieldValue, refVal_setNotesNumbers);
            setNotesNumbers(refVal_setNotesNumbers);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("featureStatistics"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("featureStatistics")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<EmailFeatureFamilyStatistics>> refVal_setFeatureStatistics;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFeatureStatistics);
            setFeatureStatistics(refVal_setFeatureStatistics);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("statuses"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("statuses")));
        if(!fieldValue.is_null())
        {
            Set<utility::string_t> refVal_setStatuses;
            ok &= ModelBase::fromJson(fieldValue, refVal_setStatuses);
            setStatuses(refVal_setStatuses);
        }
    }
    return ok;
}

void EmailFeatureOverview::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_FeatureIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("feature")), m_Feature));
    }
    if(m_TitleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("title")), m_Title));
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("description")), m_Description));
    }
    if(m_CategoryIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("category")), m_Category));
    }
    if(m_NotesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("notes")), m_Notes));
    }
    if(m_NotesNumbersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("notesNumbers")), m_NotesNumbers));
    }
    if(m_FeatureStatisticsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("featureStatistics")), m_FeatureStatistics));
    }
    if(m_StatusesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("statuses")), m_Statuses));
    }
}

bool EmailFeatureOverview::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("feature"))))
    {
        utility::string_t refVal_setFeature;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("feature"))), refVal_setFeature );
        setFeature(refVal_setFeature);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("title"))))
    {
        utility::string_t refVal_setTitle;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("title"))), refVal_setTitle );
        setTitle(refVal_setTitle);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("description"))))
    {
        utility::string_t refVal_setDescription;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("description"))), refVal_setDescription );
        setDescription(refVal_setDescription);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("category"))))
    {
        utility::string_t refVal_setCategory;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("category"))), refVal_setCategory );
        setCategory(refVal_setCategory);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("notes"))))
    {
        utility::string_t refVal_setNotes;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("notes"))), refVal_setNotes );
        setNotes(refVal_setNotes);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("notesNumbers"))))
    {
        std::map<utility::string_t, utility::string_t> refVal_setNotesNumbers;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("notesNumbers"))), refVal_setNotesNumbers );
        setNotesNumbers(refVal_setNotesNumbers);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("featureStatistics"))))
    {
        std::vector<std::shared_ptr<EmailFeatureFamilyStatistics>> refVal_setFeatureStatistics;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("featureStatistics"))), refVal_setFeatureStatistics );
        setFeatureStatistics(refVal_setFeatureStatistics);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("statuses"))))
    {
        Set<utility::string_t> refVal_setStatuses;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("statuses"))), refVal_setStatuses );
        setStatuses(refVal_setStatuses);
    }
    return ok;
}

utility::string_t EmailFeatureOverview::getFeature() const
{
    return m_Feature;
}

void EmailFeatureOverview::setFeature(const utility::string_t& value)
{
    m_Feature = value;
    m_FeatureIsSet = true;
}

bool EmailFeatureOverview::featureIsSet() const
{
    return m_FeatureIsSet;
}

void EmailFeatureOverview::unsetFeature()
{
    m_FeatureIsSet = false;
}
utility::string_t EmailFeatureOverview::getTitle() const
{
    return m_Title;
}

void EmailFeatureOverview::setTitle(const utility::string_t& value)
{
    m_Title = value;
    m_TitleIsSet = true;
}

bool EmailFeatureOverview::titleIsSet() const
{
    return m_TitleIsSet;
}

void EmailFeatureOverview::unsetTitle()
{
    m_TitleIsSet = false;
}
utility::string_t EmailFeatureOverview::getDescription() const
{
    return m_Description;
}

void EmailFeatureOverview::setDescription(const utility::string_t& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}

bool EmailFeatureOverview::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void EmailFeatureOverview::unsetDescription()
{
    m_DescriptionIsSet = false;
}
utility::string_t EmailFeatureOverview::getCategory() const
{
    return m_Category;
}

void EmailFeatureOverview::setCategory(const utility::string_t& value)
{
    m_Category = value;
    m_CategoryIsSet = true;
}

bool EmailFeatureOverview::categoryIsSet() const
{
    return m_CategoryIsSet;
}

void EmailFeatureOverview::unsetCategory()
{
    m_CategoryIsSet = false;
}
utility::string_t EmailFeatureOverview::getNotes() const
{
    return m_Notes;
}

void EmailFeatureOverview::setNotes(const utility::string_t& value)
{
    m_Notes = value;
    m_NotesIsSet = true;
}

bool EmailFeatureOverview::notesIsSet() const
{
    return m_NotesIsSet;
}

void EmailFeatureOverview::unsetNotes()
{
    m_NotesIsSet = false;
}
std::map<utility::string_t, utility::string_t>& EmailFeatureOverview::getNotesNumbers()
{
    return m_NotesNumbers;
}

void EmailFeatureOverview::setNotesNumbers(const std::map<utility::string_t, utility::string_t>& value)
{
    m_NotesNumbers = value;
    m_NotesNumbersIsSet = true;
}

bool EmailFeatureOverview::notesNumbersIsSet() const
{
    return m_NotesNumbersIsSet;
}

void EmailFeatureOverview::unsetNotesNumbers()
{
    m_NotesNumbersIsSet = false;
}
std::vector<std::shared_ptr<EmailFeatureFamilyStatistics>>& EmailFeatureOverview::getFeatureStatistics()
{
    return m_FeatureStatistics;
}

void EmailFeatureOverview::setFeatureStatistics(const std::vector<std::shared_ptr<EmailFeatureFamilyStatistics>>& value)
{
    m_FeatureStatistics = value;
    m_FeatureStatisticsIsSet = true;
}

bool EmailFeatureOverview::featureStatisticsIsSet() const
{
    return m_FeatureStatisticsIsSet;
}

void EmailFeatureOverview::unsetFeatureStatistics()
{
    m_FeatureStatisticsIsSet = false;
}
Set<utility::string_t>& EmailFeatureOverview::getStatuses()
{
    return m_Statuses;
}

void EmailFeatureOverview::setStatuses(const Set<utility::string_t>& value)
{
    m_Statuses = value;
    m_StatusesIsSet = true;
}

bool EmailFeatureOverview::statusesIsSet() const
{
    return m_StatusesIsSet;
}

void EmailFeatureOverview::unsetStatuses()
{
    m_StatusesIsSet = false;
}
}
}
}
}


