/**
 * MailSlurp API
 * MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.  ## Resources  - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://www.mailslurp.com/docs/) - [Examples](https://github.com/mailslurp/examples) repository
 *
 * The version of the OpenAPI document: 6.5.2
 * Contact: contact@mailslurp.dev
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "EmailAnalysis.h"

namespace com {
namespace mailslurp {
namespace client {
namespace model {




EmailAnalysis::EmailAnalysis()
{
    m_SpamVerdict = utility::conversions::to_string_t("");
    m_SpamVerdictIsSet = false;
    m_VirusVerdict = utility::conversions::to_string_t("");
    m_VirusVerdictIsSet = false;
    m_SpfVerdict = utility::conversions::to_string_t("");
    m_SpfVerdictIsSet = false;
    m_DkimVerdict = utility::conversions::to_string_t("");
    m_DkimVerdictIsSet = false;
    m_DmarcVerdict = utility::conversions::to_string_t("");
    m_DmarcVerdictIsSet = false;
}

EmailAnalysis::~EmailAnalysis()
{
}

void EmailAnalysis::validate()
{
    // TODO: implement validation
}

web::json::value EmailAnalysis::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_SpamVerdictIsSet)
    {
        val[utility::conversions::to_string_t("spamVerdict")] = ModelBase::toJson(m_SpamVerdict);
    }
    if(m_VirusVerdictIsSet)
    {
        val[utility::conversions::to_string_t("virusVerdict")] = ModelBase::toJson(m_VirusVerdict);
    }
    if(m_SpfVerdictIsSet)
    {
        val[utility::conversions::to_string_t("spfVerdict")] = ModelBase::toJson(m_SpfVerdict);
    }
    if(m_DkimVerdictIsSet)
    {
        val[utility::conversions::to_string_t("dkimVerdict")] = ModelBase::toJson(m_DkimVerdict);
    }
    if(m_DmarcVerdictIsSet)
    {
        val[utility::conversions::to_string_t("dmarcVerdict")] = ModelBase::toJson(m_DmarcVerdict);
    }

    return val;
}

bool EmailAnalysis::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("spamVerdict")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spamVerdict"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_spamVerdict;
            ok &= ModelBase::fromJson(fieldValue, refVal_spamVerdict);
            setSpamVerdict(refVal_spamVerdict);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("virusVerdict")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("virusVerdict"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_virusVerdict;
            ok &= ModelBase::fromJson(fieldValue, refVal_virusVerdict);
            setVirusVerdict(refVal_virusVerdict);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spfVerdict")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spfVerdict"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_spfVerdict;
            ok &= ModelBase::fromJson(fieldValue, refVal_spfVerdict);
            setSpfVerdict(refVal_spfVerdict);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dkimVerdict")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dkimVerdict"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_dkimVerdict;
            ok &= ModelBase::fromJson(fieldValue, refVal_dkimVerdict);
            setDkimVerdict(refVal_dkimVerdict);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dmarcVerdict")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dmarcVerdict"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_dmarcVerdict;
            ok &= ModelBase::fromJson(fieldValue, refVal_dmarcVerdict);
            setDmarcVerdict(refVal_dmarcVerdict);
        }
    }
    return ok;
}

void EmailAnalysis::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_SpamVerdictIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("spamVerdict"), m_SpamVerdict));
    }
    if(m_VirusVerdictIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("virusVerdict"), m_VirusVerdict));
    }
    if(m_SpfVerdictIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("spfVerdict"), m_SpfVerdict));
    }
    if(m_DkimVerdictIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("dkimVerdict"), m_DkimVerdict));
    }
    if(m_DmarcVerdictIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("dmarcVerdict"), m_DmarcVerdict));
    }
}

bool EmailAnalysis::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("spamVerdict")))
    {
        utility::string_t refVal_spamVerdict;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("spamVerdict")), refVal_spamVerdict );
        setSpamVerdict(refVal_spamVerdict);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("virusVerdict")))
    {
        utility::string_t refVal_virusVerdict;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("virusVerdict")), refVal_virusVerdict );
        setVirusVerdict(refVal_virusVerdict);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("spfVerdict")))
    {
        utility::string_t refVal_spfVerdict;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("spfVerdict")), refVal_spfVerdict );
        setSpfVerdict(refVal_spfVerdict);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("dkimVerdict")))
    {
        utility::string_t refVal_dkimVerdict;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("dkimVerdict")), refVal_dkimVerdict );
        setDkimVerdict(refVal_dkimVerdict);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("dmarcVerdict")))
    {
        utility::string_t refVal_dmarcVerdict;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("dmarcVerdict")), refVal_dmarcVerdict );
        setDmarcVerdict(refVal_dmarcVerdict);
    }
    return ok;
}

utility::string_t EmailAnalysis::getSpamVerdict() const
{
    return m_SpamVerdict;
}

void EmailAnalysis::setSpamVerdict(const utility::string_t& value)
{
    m_SpamVerdict = value;
    m_SpamVerdictIsSet = true;
}

bool EmailAnalysis::spamVerdictIsSet() const
{
    return m_SpamVerdictIsSet;
}

void EmailAnalysis::unsetSpamVerdict()
{
    m_SpamVerdictIsSet = false;
}
utility::string_t EmailAnalysis::getVirusVerdict() const
{
    return m_VirusVerdict;
}

void EmailAnalysis::setVirusVerdict(const utility::string_t& value)
{
    m_VirusVerdict = value;
    m_VirusVerdictIsSet = true;
}

bool EmailAnalysis::virusVerdictIsSet() const
{
    return m_VirusVerdictIsSet;
}

void EmailAnalysis::unsetVirusVerdict()
{
    m_VirusVerdictIsSet = false;
}
utility::string_t EmailAnalysis::getSpfVerdict() const
{
    return m_SpfVerdict;
}

void EmailAnalysis::setSpfVerdict(const utility::string_t& value)
{
    m_SpfVerdict = value;
    m_SpfVerdictIsSet = true;
}

bool EmailAnalysis::spfVerdictIsSet() const
{
    return m_SpfVerdictIsSet;
}

void EmailAnalysis::unsetSpfVerdict()
{
    m_SpfVerdictIsSet = false;
}
utility::string_t EmailAnalysis::getDkimVerdict() const
{
    return m_DkimVerdict;
}

void EmailAnalysis::setDkimVerdict(const utility::string_t& value)
{
    m_DkimVerdict = value;
    m_DkimVerdictIsSet = true;
}

bool EmailAnalysis::dkimVerdictIsSet() const
{
    return m_DkimVerdictIsSet;
}

void EmailAnalysis::unsetDkimVerdict()
{
    m_DkimVerdictIsSet = false;
}
utility::string_t EmailAnalysis::getDmarcVerdict() const
{
    return m_DmarcVerdict;
}

void EmailAnalysis::setDmarcVerdict(const utility::string_t& value)
{
    m_DmarcVerdict = value;
    m_DmarcVerdictIsSet = true;
}

bool EmailAnalysis::dmarcVerdictIsSet() const
{
    return m_DmarcVerdictIsSet;
}

void EmailAnalysis::unsetDmarcVerdict()
{
    m_DmarcVerdictIsSet = false;
}
}
}
}
}


