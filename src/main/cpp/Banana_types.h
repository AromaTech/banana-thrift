/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef Banana_TYPES_H
#define Banana_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>


namespace aroma { namespace banana { namespace thrift {

struct ImageType {
  enum type {
    JPEG = 1,
    PNG = 2
  };
};

extern const std::map<int, const char*> _ImageType_VALUES_TO_NAMES;

struct Industry {
  enum type {
    BANKING = 0,
    ECOMMERCE = 1,
    EDUCATION = 2,
    GOVERMENT = 3,
    MARKETING = 4,
    RETAIL = 5,
    TECH = 6
  };
};

extern const std::map<int, const char*> _Industry_VALUES_TO_NAMES;

struct Tier {
  enum type {
    FREE = 0,
    PAID = 1
  };
};

extern const std::map<int, const char*> _Tier_VALUES_TO_NAMES;

struct TimeUnit {
  enum type {
    MILLIS = 0,
    SECONDS = 1,
    MINUTES = 2,
    HOURS = 3,
    DAYS = 4,
    WEEKS = 5
  };
};

extern const std::map<int, const char*> _TimeUnit_VALUES_TO_NAMES;

struct ProgrammingLanguage {
  enum type {
    JAVA = 0,
    CPP = 1,
    C_SHARP = 2,
    C = 3,
    OBJECTIVE_C = 4,
    SWIFT = 5,
    DOT_NET = 6,
    RUBY = 7,
    GROOVY = 8,
    PYTHON = 9,
    PHP = 10,
    NODE = 11,
    DART = 12,
    OTHER = 13
  };
};

extern const std::map<int, const char*> _ProgrammingLanguage_VALUES_TO_NAMES;

struct Role {
  enum type {
    DEVELOPER = 1,
    OPERATIONS = 2,
    MANAGER = 3,
    PRODUCT = 4,
    QA = 5
  };
};

extern const std::map<int, const char*> _Role_VALUES_TO_NAMES;

struct Urgency {
  enum type {
    LOW = 1,
    MEDIUM = 2,
    HIGH = 3
  };
};

extern const std::map<int, const char*> _Urgency_VALUES_TO_NAMES;

typedef int32_t int;

typedef int64_t long;

typedef int64_t timestamp;

typedef std::string uuid;

class LengthOfTime;

class Dimension;

class Image;

class Message;

class Organization;

class User;

class Application;

class ServiceAnnouncement;


class LengthOfTime {
 public:

  LengthOfTime(const LengthOfTime&);
  LengthOfTime& operator=(const LengthOfTime&);
  LengthOfTime() : unit((TimeUnit::type)0), value(0) {
  }

  virtual ~LengthOfTime() throw();
  TimeUnit::type unit;
  long value;

  void __set_unit(const TimeUnit::type val);

  void __set_value(const long val);

  bool operator == (const LengthOfTime & rhs) const
  {
    if (!(unit == rhs.unit))
      return false;
    if (!(value == rhs.value))
      return false;
    return true;
  }
  bool operator != (const LengthOfTime &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const LengthOfTime & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(LengthOfTime &a, LengthOfTime &b);

inline std::ostream& operator<<(std::ostream& out, const LengthOfTime& obj)
{
  obj.printTo(out);
  return out;
}


class Dimension {
 public:

  Dimension(const Dimension&);
  Dimension& operator=(const Dimension&);
  Dimension() : width(0), height(0) {
  }

  virtual ~Dimension() throw();
  int width;
  int height;

  void __set_width(const int val);

  void __set_height(const int val);

  bool operator == (const Dimension & rhs) const
  {
    if (!(width == rhs.width))
      return false;
    if (!(height == rhs.height))
      return false;
    return true;
  }
  bool operator != (const Dimension &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Dimension & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(Dimension &a, Dimension &b);

inline std::ostream& operator<<(std::ostream& out, const Dimension& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _Image__isset {
  _Image__isset() : imageType(false), data(false), dimension(false) {}
  bool imageType :1;
  bool data :1;
  bool dimension :1;
} _Image__isset;

class Image {
 public:

  Image(const Image&);
  Image& operator=(const Image&);
  Image() : imageType((ImageType::type)0), data() {
  }

  virtual ~Image() throw();
  ImageType::type imageType;
  std::string data;
  Dimension dimension;

  _Image__isset __isset;

  void __set_imageType(const ImageType::type val);

  void __set_data(const std::string& val);

  void __set_dimension(const Dimension& val);

  bool operator == (const Image & rhs) const
  {
    if (!(imageType == rhs.imageType))
      return false;
    if (!(data == rhs.data))
      return false;
    if (!(dimension == rhs.dimension))
      return false;
    return true;
  }
  bool operator != (const Image &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Image & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(Image &a, Image &b);

inline std::ostream& operator<<(std::ostream& out, const Image& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _Message__isset {
  _Message__isset() : messageId(false), body(false), urgency(true), timeOfCreation(false), timeMessageReceived(false), applicationName(false), hostname(false), macAddress(false), isTruncated(true), title(false), applicationId(false) {}
  bool messageId :1;
  bool body :1;
  bool urgency :1;
  bool timeOfCreation :1;
  bool timeMessageReceived :1;
  bool applicationName :1;
  bool hostname :1;
  bool macAddress :1;
  bool isTruncated :1;
  bool title :1;
  bool applicationId :1;
} _Message__isset;

class Message {
 public:

  Message(const Message&);
  Message& operator=(const Message&);
  Message() : messageId(), body(), urgency((Urgency::type)1), timeOfCreation(0), timeMessageReceived(0), applicationName(), hostname(), macAddress(), isTruncated(false), title(), applicationId() {
    urgency = (Urgency::type)1;

  }

  virtual ~Message() throw();
  uuid messageId;
  std::string body;
  Urgency::type urgency;
  timestamp timeOfCreation;
  timestamp timeMessageReceived;
  std::string applicationName;
  std::string hostname;
  std::string macAddress;
  bool isTruncated;
  std::string title;
  uuid applicationId;

  _Message__isset __isset;

  void __set_messageId(const uuid& val);

  void __set_body(const std::string& val);

  void __set_urgency(const Urgency::type val);

  void __set_timeOfCreation(const timestamp val);

  void __set_timeMessageReceived(const timestamp val);

  void __set_applicationName(const std::string& val);

  void __set_hostname(const std::string& val);

  void __set_macAddress(const std::string& val);

  void __set_isTruncated(const bool val);

  void __set_title(const std::string& val);

  void __set_applicationId(const uuid& val);

  bool operator == (const Message & rhs) const
  {
    if (!(messageId == rhs.messageId))
      return false;
    if (__isset.body != rhs.__isset.body)
      return false;
    else if (__isset.body && !(body == rhs.body))
      return false;
    if (!(urgency == rhs.urgency))
      return false;
    if (!(timeOfCreation == rhs.timeOfCreation))
      return false;
    if (!(timeMessageReceived == rhs.timeMessageReceived))
      return false;
    if (!(applicationName == rhs.applicationName))
      return false;
    if (__isset.hostname != rhs.__isset.hostname)
      return false;
    else if (__isset.hostname && !(hostname == rhs.hostname))
      return false;
    if (__isset.macAddress != rhs.__isset.macAddress)
      return false;
    else if (__isset.macAddress && !(macAddress == rhs.macAddress))
      return false;
    if (__isset.isTruncated != rhs.__isset.isTruncated)
      return false;
    else if (__isset.isTruncated && !(isTruncated == rhs.isTruncated))
      return false;
    if (!(title == rhs.title))
      return false;
    if (!(applicationId == rhs.applicationId))
      return false;
    return true;
  }
  bool operator != (const Message &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Message & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(Message &a, Message &b);

inline std::ostream& operator<<(std::ostream& out, const Message& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _Organization__isset {
  _Organization__isset() : organizationId(false), organizationName(false), website(false), logo(false), techStack(false), owners(false), organizationEmail(false), stockMarketSymbol(false), logoLink(false), industry(false), tier(true), organizationDescription(false), githubProfile(false) {}
  bool organizationId :1;
  bool organizationName :1;
  bool website :1;
  bool logo :1;
  bool techStack :1;
  bool owners :1;
  bool organizationEmail :1;
  bool stockMarketSymbol :1;
  bool logoLink :1;
  bool industry :1;
  bool tier :1;
  bool organizationDescription :1;
  bool githubProfile :1;
} _Organization__isset;

class Organization {
 public:

  Organization(const Organization&);
  Organization& operator=(const Organization&);
  Organization() : organizationId(), organizationName(), website(), techStack(), organizationEmail(), stockMarketSymbol(), logoLink(), industry((Industry::type)0), tier((Tier::type)0), organizationDescription(), githubProfile() {
    tier = (Tier::type)0;

  }

  virtual ~Organization() throw();
  uuid organizationId;
  std::string organizationName;
  std::string website;
  Image logo;
  std::string techStack;
  std::vector<std::string>  owners;
  std::string organizationEmail;
  std::string stockMarketSymbol;
  std::string logoLink;
  Industry::type industry;
  Tier::type tier;
  std::string organizationDescription;
  std::string githubProfile;

  _Organization__isset __isset;

  void __set_organizationId(const uuid& val);

  void __set_organizationName(const std::string& val);

  void __set_website(const std::string& val);

  void __set_logo(const Image& val);

  void __set_techStack(const std::string& val);

  void __set_owners(const std::vector<std::string> & val);

  void __set_organizationEmail(const std::string& val);

  void __set_stockMarketSymbol(const std::string& val);

  void __set_logoLink(const std::string& val);

  void __set_industry(const Industry::type val);

  void __set_tier(const Tier::type val);

  void __set_organizationDescription(const std::string& val);

  void __set_githubProfile(const std::string& val);

  bool operator == (const Organization & rhs) const
  {
    if (!(organizationId == rhs.organizationId))
      return false;
    if (!(organizationName == rhs.organizationName))
      return false;
    if (__isset.website != rhs.__isset.website)
      return false;
    else if (__isset.website && !(website == rhs.website))
      return false;
    if (__isset.logo != rhs.__isset.logo)
      return false;
    else if (__isset.logo && !(logo == rhs.logo))
      return false;
    if (__isset.techStack != rhs.__isset.techStack)
      return false;
    else if (__isset.techStack && !(techStack == rhs.techStack))
      return false;
    if (__isset.owners != rhs.__isset.owners)
      return false;
    else if (__isset.owners && !(owners == rhs.owners))
      return false;
    if (__isset.organizationEmail != rhs.__isset.organizationEmail)
      return false;
    else if (__isset.organizationEmail && !(organizationEmail == rhs.organizationEmail))
      return false;
    if (__isset.stockMarketSymbol != rhs.__isset.stockMarketSymbol)
      return false;
    else if (__isset.stockMarketSymbol && !(stockMarketSymbol == rhs.stockMarketSymbol))
      return false;
    if (__isset.logoLink != rhs.__isset.logoLink)
      return false;
    else if (__isset.logoLink && !(logoLink == rhs.logoLink))
      return false;
    if (__isset.industry != rhs.__isset.industry)
      return false;
    else if (__isset.industry && !(industry == rhs.industry))
      return false;
    if (__isset.tier != rhs.__isset.tier)
      return false;
    else if (__isset.tier && !(tier == rhs.tier))
      return false;
    if (__isset.organizationDescription != rhs.__isset.organizationDescription)
      return false;
    else if (__isset.organizationDescription && !(organizationDescription == rhs.organizationDescription))
      return false;
    if (__isset.githubProfile != rhs.__isset.githubProfile)
      return false;
    else if (__isset.githubProfile && !(githubProfile == rhs.githubProfile))
      return false;
    return true;
  }
  bool operator != (const Organization &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Organization & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(Organization &a, Organization &b);

inline std::ostream& operator<<(std::ostream& out, const Organization& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _User__isset {
  _User__isset() : email(false), userId(false), name(false), roles(true), profileImage(false), profileImageLink(false), githubProfile(false), firstName(false), middleName(false), lastName(false), birthdate(false), timeUserJoined(false) {}
  bool email :1;
  bool userId :1;
  bool name :1;
  bool roles :1;
  bool profileImage :1;
  bool profileImageLink :1;
  bool githubProfile :1;
  bool firstName :1;
  bool middleName :1;
  bool lastName :1;
  bool birthdate :1;
  bool timeUserJoined :1;
} _User__isset;

class User {
 public:

  User(const User&);
  User& operator=(const User&);
  User() : email(), userId(), name(), profileImageLink(), githubProfile(), firstName(), middleName(), lastName(), birthdate(0), timeUserJoined(0) {
    roles.insert((Role::type)1);

  }

  virtual ~User() throw();
  std::string email;
  uuid userId;
  std::string name;
  std::set<Role::type>  roles;
  Image profileImage;
  std::string profileImageLink;
  std::string githubProfile;
  std::string firstName;
  std::string middleName;
  std::string lastName;
  timestamp birthdate;
  timestamp timeUserJoined;

  _User__isset __isset;

  void __set_email(const std::string& val);

  void __set_userId(const uuid& val);

  void __set_name(const std::string& val);

  void __set_roles(const std::set<Role::type> & val);

  void __set_profileImage(const Image& val);

  void __set_profileImageLink(const std::string& val);

  void __set_githubProfile(const std::string& val);

  void __set_firstName(const std::string& val);

  void __set_middleName(const std::string& val);

  void __set_lastName(const std::string& val);

  void __set_birthdate(const timestamp val);

  void __set_timeUserJoined(const timestamp val);

  bool operator == (const User & rhs) const
  {
    if (!(email == rhs.email))
      return false;
    if (!(userId == rhs.userId))
      return false;
    if (__isset.name != rhs.__isset.name)
      return false;
    else if (__isset.name && !(name == rhs.name))
      return false;
    if (!(roles == rhs.roles))
      return false;
    if (__isset.profileImage != rhs.__isset.profileImage)
      return false;
    else if (__isset.profileImage && !(profileImage == rhs.profileImage))
      return false;
    if (__isset.profileImageLink != rhs.__isset.profileImageLink)
      return false;
    else if (__isset.profileImageLink && !(profileImageLink == rhs.profileImageLink))
      return false;
    if (__isset.githubProfile != rhs.__isset.githubProfile)
      return false;
    else if (__isset.githubProfile && !(githubProfile == rhs.githubProfile))
      return false;
    if (__isset.firstName != rhs.__isset.firstName)
      return false;
    else if (__isset.firstName && !(firstName == rhs.firstName))
      return false;
    if (__isset.middleName != rhs.__isset.middleName)
      return false;
    else if (__isset.middleName && !(middleName == rhs.middleName))
      return false;
    if (__isset.lastName != rhs.__isset.lastName)
      return false;
    else if (__isset.lastName && !(lastName == rhs.lastName))
      return false;
    if (__isset.birthdate != rhs.__isset.birthdate)
      return false;
    else if (__isset.birthdate && !(birthdate == rhs.birthdate))
      return false;
    if (__isset.timeUserJoined != rhs.__isset.timeUserJoined)
      return false;
    else if (__isset.timeUserJoined && !(timeUserJoined == rhs.timeUserJoined))
      return false;
    return true;
  }
  bool operator != (const User &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const User & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(User &a, User &b);

inline std::ostream& operator<<(std::ostream& out, const User& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _Application__isset {
  _Application__isset() : owners(false), timeOfProvisioning(false), name(false), applicationId(false), totalMessagesSent(false), icon(false), programmingLanguage(false), followers(true), applicationDescription(false), organizationId(false), tier(true) {}
  bool owners :1;
  bool timeOfProvisioning :1;
  bool name :1;
  bool applicationId :1;
  bool totalMessagesSent :1;
  bool icon :1;
  bool programmingLanguage :1;
  bool followers :1;
  bool applicationDescription :1;
  bool organizationId :1;
  bool tier :1;
} _Application__isset;

class Application {
 public:

  Application(const Application&);
  Application& operator=(const Application&);
  Application() : timeOfProvisioning(0), name(), applicationId(), totalMessagesSent(0), programmingLanguage((ProgrammingLanguage::type)0), applicationDescription(), organizationId(), tier((Tier::type)0) {

    tier = (Tier::type)0;

  }

  virtual ~Application() throw();
  std::set<uuid>  owners;
  timestamp timeOfProvisioning;
  std::string name;
  uuid applicationId;
  long totalMessagesSent;
  Image icon;
  ProgrammingLanguage::type programmingLanguage;
  std::set<uuid>  followers;
  std::string applicationDescription;
  uuid organizationId;
  Tier::type tier;

  _Application__isset __isset;

  void __set_owners(const std::set<uuid> & val);

  void __set_timeOfProvisioning(const timestamp val);

  void __set_name(const std::string& val);

  void __set_applicationId(const uuid& val);

  void __set_totalMessagesSent(const long val);

  void __set_icon(const Image& val);

  void __set_programmingLanguage(const ProgrammingLanguage::type val);

  void __set_followers(const std::set<uuid> & val);

  void __set_applicationDescription(const std::string& val);

  void __set_organizationId(const uuid& val);

  void __set_tier(const Tier::type val);

  bool operator == (const Application & rhs) const
  {
    if (!(owners == rhs.owners))
      return false;
    if (!(timeOfProvisioning == rhs.timeOfProvisioning))
      return false;
    if (!(name == rhs.name))
      return false;
    if (!(applicationId == rhs.applicationId))
      return false;
    if (!(totalMessagesSent == rhs.totalMessagesSent))
      return false;
    if (__isset.icon != rhs.__isset.icon)
      return false;
    else if (__isset.icon && !(icon == rhs.icon))
      return false;
    if (__isset.programmingLanguage != rhs.__isset.programmingLanguage)
      return false;
    else if (__isset.programmingLanguage && !(programmingLanguage == rhs.programmingLanguage))
      return false;
    if (__isset.followers != rhs.__isset.followers)
      return false;
    else if (__isset.followers && !(followers == rhs.followers))
      return false;
    if (!(applicationDescription == rhs.applicationDescription))
      return false;
    if (!(organizationId == rhs.organizationId))
      return false;
    if (__isset.tier != rhs.__isset.tier)
      return false;
    else if (__isset.tier && !(tier == rhs.tier))
      return false;
    return true;
  }
  bool operator != (const Application &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Application & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(Application &a, Application &b);

inline std::ostream& operator<<(std::ostream& out, const Application& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _ServiceAnnouncement__isset {
  _ServiceAnnouncement__isset() : message(false), importance(false), id(false), timeOfExpiration(false) {}
  bool message :1;
  bool importance :1;
  bool id :1;
  bool timeOfExpiration :1;
} _ServiceAnnouncement__isset;

class ServiceAnnouncement {
 public:

  ServiceAnnouncement(const ServiceAnnouncement&);
  ServiceAnnouncement& operator=(const ServiceAnnouncement&);
  ServiceAnnouncement() : message(), importance((Urgency::type)0), id(), timeOfExpiration(0) {
  }

  virtual ~ServiceAnnouncement() throw();
  std::string message;
  Urgency::type importance;
  uuid id;
  timestamp timeOfExpiration;

  _ServiceAnnouncement__isset __isset;

  void __set_message(const std::string& val);

  void __set_importance(const Urgency::type val);

  void __set_id(const uuid& val);

  void __set_timeOfExpiration(const timestamp val);

  bool operator == (const ServiceAnnouncement & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    if (!(importance == rhs.importance))
      return false;
    if (!(id == rhs.id))
      return false;
    if (!(timeOfExpiration == rhs.timeOfExpiration))
      return false;
    return true;
  }
  bool operator != (const ServiceAnnouncement &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ServiceAnnouncement & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(ServiceAnnouncement &a, ServiceAnnouncement &b);

inline std::ostream& operator<<(std::ostream& out, const ServiceAnnouncement& obj)
{
  obj.printTo(out);
  return out;
}

}}} // namespace

#endif
