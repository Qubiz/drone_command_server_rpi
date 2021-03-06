// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: message_strocuture.proto

#ifndef PROTOBUF_INCLUDED_message_5fstrocuture_2eproto
#define PROTOBUF_INCLUDED_message_5fstrocuture_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_message_5fstrocuture_2eproto 

namespace protobuf_message_5fstrocuture_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[6];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_message_5fstrocuture_2eproto
class BaseMessage;
class BaseMessageDefaultTypeInternal;
extern BaseMessageDefaultTypeInternal _BaseMessage_default_instance_;
class HotPointMission;
class HotPointMissionDefaultTypeInternal;
extern HotPointMissionDefaultTypeInternal _HotPointMission_default_instance_;
class Location;
class LocationDefaultTypeInternal;
extern LocationDefaultTypeInternal _Location_default_instance_;
class StartMessage;
class StartMessageDefaultTypeInternal;
extern StartMessageDefaultTypeInternal _StartMessage_default_instance_;
class StopMessage;
class StopMessageDefaultTypeInternal;
extern StopMessageDefaultTypeInternal _StopMessage_default_instance_;
class TakeOffLanding;
class TakeOffLandingDefaultTypeInternal;
extern TakeOffLandingDefaultTypeInternal _TakeOffLanding_default_instance_;
namespace google {
namespace protobuf {
template<> ::BaseMessage* Arena::CreateMaybeMessage<::BaseMessage>(Arena*);
template<> ::HotPointMission* Arena::CreateMaybeMessage<::HotPointMission>(Arena*);
template<> ::Location* Arena::CreateMaybeMessage<::Location>(Arena*);
template<> ::StartMessage* Arena::CreateMaybeMessage<::StartMessage>(Arena*);
template<> ::StopMessage* Arena::CreateMaybeMessage<::StopMessage>(Arena*);
template<> ::TakeOffLanding* Arena::CreateMaybeMessage<::TakeOffLanding>(Arena*);
}  // namespace proto
}  // namespace google

enum MessageType {
  START_MESSAGE = 0,
  STOP_MESSAGE = 1,
  LOCATION = 2,
  HOTPOINTMISSION = 3,
  TAKEOFFLANDING = 4,
  MessageType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  MessageType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool MessageType_IsValid(int value);
const MessageType MessageType_MIN = START_MESSAGE;
const MessageType MessageType_MAX = TAKEOFFLANDING;
const int MessageType_ARRAYSIZE = MessageType_MAX + 1;

const ::google::protobuf::EnumDescriptor* MessageType_descriptor();
inline const ::std::string& MessageType_Name(MessageType value) {
  return ::google::protobuf::internal::NameOfEnum(
    MessageType_descriptor(), value);
}
inline bool MessageType_Parse(
    const ::std::string& name, MessageType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<MessageType>(
    MessageType_descriptor(), name, value);
}
enum Action {
  TAKE_OFF = 0,
  LAND = 1,
  Action_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Action_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool Action_IsValid(int value);
const Action Action_MIN = TAKE_OFF;
const Action Action_MAX = LAND;
const int Action_ARRAYSIZE = Action_MAX + 1;

const ::google::protobuf::EnumDescriptor* Action_descriptor();
inline const ::std::string& Action_Name(Action value) {
  return ::google::protobuf::internal::NameOfEnum(
    Action_descriptor(), value);
}
inline bool Action_Parse(
    const ::std::string& name, Action* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Action>(
    Action_descriptor(), name, value);
}
// ===================================================================

class BaseMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:BaseMessage) */ {
 public:
  BaseMessage();
  virtual ~BaseMessage();

  BaseMessage(const BaseMessage& from);

  inline BaseMessage& operator=(const BaseMessage& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  BaseMessage(BaseMessage&& from) noexcept
    : BaseMessage() {
    *this = ::std::move(from);
  }

  inline BaseMessage& operator=(BaseMessage&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const BaseMessage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const BaseMessage* internal_default_instance() {
    return reinterpret_cast<const BaseMessage*>(
               &_BaseMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(BaseMessage* other);
  friend void swap(BaseMessage& a, BaseMessage& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline BaseMessage* New() const final {
    return CreateMaybeMessage<BaseMessage>(NULL);
  }

  BaseMessage* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<BaseMessage>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const BaseMessage& from);
  void MergeFrom(const BaseMessage& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(BaseMessage* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // bytes data = 2;
  void clear_data();
  static const int kDataFieldNumber = 2;
  const ::std::string& data() const;
  void set_data(const ::std::string& value);
  #if LANG_CXX11
  void set_data(::std::string&& value);
  #endif
  void set_data(const char* value);
  void set_data(const void* value, size_t size);
  ::std::string* mutable_data();
  ::std::string* release_data();
  void set_allocated_data(::std::string* data);

  // .MessageType type = 1;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  ::MessageType type() const;
  void set_type(::MessageType value);

  // @@protoc_insertion_point(class_scope:BaseMessage)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr data_;
  int type_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_message_5fstrocuture_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class StartMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:StartMessage) */ {
 public:
  StartMessage();
  virtual ~StartMessage();

  StartMessage(const StartMessage& from);

  inline StartMessage& operator=(const StartMessage& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  StartMessage(StartMessage&& from) noexcept
    : StartMessage() {
    *this = ::std::move(from);
  }

  inline StartMessage& operator=(StartMessage&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const StartMessage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const StartMessage* internal_default_instance() {
    return reinterpret_cast<const StartMessage*>(
               &_StartMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(StartMessage* other);
  friend void swap(StartMessage& a, StartMessage& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline StartMessage* New() const final {
    return CreateMaybeMessage<StartMessage>(NULL);
  }

  StartMessage* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<StartMessage>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const StartMessage& from);
  void MergeFrom(const StartMessage& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(StartMessage* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // bool start = 1;
  void clear_start();
  static const int kStartFieldNumber = 1;
  bool start() const;
  void set_start(bool value);

  // @@protoc_insertion_point(class_scope:StartMessage)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool start_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_message_5fstrocuture_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class StopMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:StopMessage) */ {
 public:
  StopMessage();
  virtual ~StopMessage();

  StopMessage(const StopMessage& from);

  inline StopMessage& operator=(const StopMessage& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  StopMessage(StopMessage&& from) noexcept
    : StopMessage() {
    *this = ::std::move(from);
  }

  inline StopMessage& operator=(StopMessage&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const StopMessage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const StopMessage* internal_default_instance() {
    return reinterpret_cast<const StopMessage*>(
               &_StopMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(StopMessage* other);
  friend void swap(StopMessage& a, StopMessage& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline StopMessage* New() const final {
    return CreateMaybeMessage<StopMessage>(NULL);
  }

  StopMessage* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<StopMessage>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const StopMessage& from);
  void MergeFrom(const StopMessage& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(StopMessage* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // bool stop = 1;
  void clear_stop();
  static const int kStopFieldNumber = 1;
  bool stop() const;
  void set_stop(bool value);

  // @@protoc_insertion_point(class_scope:StopMessage)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool stop_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_message_5fstrocuture_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Location : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Location) */ {
 public:
  Location();
  virtual ~Location();

  Location(const Location& from);

  inline Location& operator=(const Location& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Location(Location&& from) noexcept
    : Location() {
    *this = ::std::move(from);
  }

  inline Location& operator=(Location&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Location& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Location* internal_default_instance() {
    return reinterpret_cast<const Location*>(
               &_Location_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  void Swap(Location* other);
  friend void swap(Location& a, Location& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Location* New() const final {
    return CreateMaybeMessage<Location>(NULL);
  }

  Location* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Location>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Location& from);
  void MergeFrom(const Location& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Location* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // double latitude = 1;
  void clear_latitude();
  static const int kLatitudeFieldNumber = 1;
  double latitude() const;
  void set_latitude(double value);

  // double longitude = 2;
  void clear_longitude();
  static const int kLongitudeFieldNumber = 2;
  double longitude() const;
  void set_longitude(double value);

  // double altitude = 3;
  void clear_altitude();
  static const int kAltitudeFieldNumber = 3;
  double altitude() const;
  void set_altitude(double value);

  // @@protoc_insertion_point(class_scope:Location)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  double latitude_;
  double longitude_;
  double altitude_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_message_5fstrocuture_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class HotPointMission : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:HotPointMission) */ {
 public:
  HotPointMission();
  virtual ~HotPointMission();

  HotPointMission(const HotPointMission& from);

  inline HotPointMission& operator=(const HotPointMission& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  HotPointMission(HotPointMission&& from) noexcept
    : HotPointMission() {
    *this = ::std::move(from);
  }

  inline HotPointMission& operator=(HotPointMission&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const HotPointMission& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const HotPointMission* internal_default_instance() {
    return reinterpret_cast<const HotPointMission*>(
               &_HotPointMission_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    4;

  void Swap(HotPointMission* other);
  friend void swap(HotPointMission& a, HotPointMission& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline HotPointMission* New() const final {
    return CreateMaybeMessage<HotPointMission>(NULL);
  }

  HotPointMission* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<HotPointMission>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const HotPointMission& from);
  void MergeFrom(const HotPointMission& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(HotPointMission* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .Location hotLocation = 1;
  bool has_hotlocation() const;
  void clear_hotlocation();
  static const int kHotLocationFieldNumber = 1;
  private:
  const ::Location& _internal_hotlocation() const;
  public:
  const ::Location& hotlocation() const;
  ::Location* release_hotlocation();
  ::Location* mutable_hotlocation();
  void set_allocated_hotlocation(::Location* hotlocation);

  // double radius = 2;
  void clear_radius();
  static const int kRadiusFieldNumber = 2;
  double radius() const;
  void set_radius(double value);

  // @@protoc_insertion_point(class_scope:HotPointMission)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::Location* hotlocation_;
  double radius_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_message_5fstrocuture_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class TakeOffLanding : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:TakeOffLanding) */ {
 public:
  TakeOffLanding();
  virtual ~TakeOffLanding();

  TakeOffLanding(const TakeOffLanding& from);

  inline TakeOffLanding& operator=(const TakeOffLanding& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  TakeOffLanding(TakeOffLanding&& from) noexcept
    : TakeOffLanding() {
    *this = ::std::move(from);
  }

  inline TakeOffLanding& operator=(TakeOffLanding&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const TakeOffLanding& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TakeOffLanding* internal_default_instance() {
    return reinterpret_cast<const TakeOffLanding*>(
               &_TakeOffLanding_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    5;

  void Swap(TakeOffLanding* other);
  friend void swap(TakeOffLanding& a, TakeOffLanding& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline TakeOffLanding* New() const final {
    return CreateMaybeMessage<TakeOffLanding>(NULL);
  }

  TakeOffLanding* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<TakeOffLanding>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const TakeOffLanding& from);
  void MergeFrom(const TakeOffLanding& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(TakeOffLanding* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .Action action = 1;
  void clear_action();
  static const int kActionFieldNumber = 1;
  ::Action action() const;
  void set_action(::Action value);

  // @@protoc_insertion_point(class_scope:TakeOffLanding)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  int action_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_message_5fstrocuture_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// BaseMessage

// .MessageType type = 1;
inline void BaseMessage::clear_type() {
  type_ = 0;
}
inline ::MessageType BaseMessage::type() const {
  // @@protoc_insertion_point(field_get:BaseMessage.type)
  return static_cast< ::MessageType >(type_);
}
inline void BaseMessage::set_type(::MessageType value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:BaseMessage.type)
}

// bytes data = 2;
inline void BaseMessage::clear_data() {
  data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& BaseMessage::data() const {
  // @@protoc_insertion_point(field_get:BaseMessage.data)
  return data_.GetNoArena();
}
inline void BaseMessage::set_data(const ::std::string& value) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:BaseMessage.data)
}
#if LANG_CXX11
inline void BaseMessage::set_data(::std::string&& value) {
  
  data_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:BaseMessage.data)
}
#endif
inline void BaseMessage::set_data(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:BaseMessage.data)
}
inline void BaseMessage::set_data(const void* value, size_t size) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:BaseMessage.data)
}
inline ::std::string* BaseMessage::mutable_data() {
  
  // @@protoc_insertion_point(field_mutable:BaseMessage.data)
  return data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* BaseMessage::release_data() {
  // @@protoc_insertion_point(field_release:BaseMessage.data)
  
  return data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void BaseMessage::set_allocated_data(::std::string* data) {
  if (data != NULL) {
    
  } else {
    
  }
  data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), data);
  // @@protoc_insertion_point(field_set_allocated:BaseMessage.data)
}

// -------------------------------------------------------------------

// StartMessage

// bool start = 1;
inline void StartMessage::clear_start() {
  start_ = false;
}
inline bool StartMessage::start() const {
  // @@protoc_insertion_point(field_get:StartMessage.start)
  return start_;
}
inline void StartMessage::set_start(bool value) {
  
  start_ = value;
  // @@protoc_insertion_point(field_set:StartMessage.start)
}

// -------------------------------------------------------------------

// StopMessage

// bool stop = 1;
inline void StopMessage::clear_stop() {
  stop_ = false;
}
inline bool StopMessage::stop() const {
  // @@protoc_insertion_point(field_get:StopMessage.stop)
  return stop_;
}
inline void StopMessage::set_stop(bool value) {
  
  stop_ = value;
  // @@protoc_insertion_point(field_set:StopMessage.stop)
}

// -------------------------------------------------------------------

// Location

// double latitude = 1;
inline void Location::clear_latitude() {
  latitude_ = 0;
}
inline double Location::latitude() const {
  // @@protoc_insertion_point(field_get:Location.latitude)
  return latitude_;
}
inline void Location::set_latitude(double value) {
  
  latitude_ = value;
  // @@protoc_insertion_point(field_set:Location.latitude)
}

// double longitude = 2;
inline void Location::clear_longitude() {
  longitude_ = 0;
}
inline double Location::longitude() const {
  // @@protoc_insertion_point(field_get:Location.longitude)
  return longitude_;
}
inline void Location::set_longitude(double value) {
  
  longitude_ = value;
  // @@protoc_insertion_point(field_set:Location.longitude)
}

// double altitude = 3;
inline void Location::clear_altitude() {
  altitude_ = 0;
}
inline double Location::altitude() const {
  // @@protoc_insertion_point(field_get:Location.altitude)
  return altitude_;
}
inline void Location::set_altitude(double value) {
  
  altitude_ = value;
  // @@protoc_insertion_point(field_set:Location.altitude)
}

// -------------------------------------------------------------------

// HotPointMission

// .Location hotLocation = 1;
inline bool HotPointMission::has_hotlocation() const {
  return this != internal_default_instance() && hotlocation_ != NULL;
}
inline void HotPointMission::clear_hotlocation() {
  if (GetArenaNoVirtual() == NULL && hotlocation_ != NULL) {
    delete hotlocation_;
  }
  hotlocation_ = NULL;
}
inline const ::Location& HotPointMission::_internal_hotlocation() const {
  return *hotlocation_;
}
inline const ::Location& HotPointMission::hotlocation() const {
  const ::Location* p = hotlocation_;
  // @@protoc_insertion_point(field_get:HotPointMission.hotLocation)
  return p != NULL ? *p : *reinterpret_cast<const ::Location*>(
      &::_Location_default_instance_);
}
inline ::Location* HotPointMission::release_hotlocation() {
  // @@protoc_insertion_point(field_release:HotPointMission.hotLocation)
  
  ::Location* temp = hotlocation_;
  hotlocation_ = NULL;
  return temp;
}
inline ::Location* HotPointMission::mutable_hotlocation() {
  
  if (hotlocation_ == NULL) {
    auto* p = CreateMaybeMessage<::Location>(GetArenaNoVirtual());
    hotlocation_ = p;
  }
  // @@protoc_insertion_point(field_mutable:HotPointMission.hotLocation)
  return hotlocation_;
}
inline void HotPointMission::set_allocated_hotlocation(::Location* hotlocation) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete hotlocation_;
  }
  if (hotlocation) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      hotlocation = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, hotlocation, submessage_arena);
    }
    
  } else {
    
  }
  hotlocation_ = hotlocation;
  // @@protoc_insertion_point(field_set_allocated:HotPointMission.hotLocation)
}

// double radius = 2;
inline void HotPointMission::clear_radius() {
  radius_ = 0;
}
inline double HotPointMission::radius() const {
  // @@protoc_insertion_point(field_get:HotPointMission.radius)
  return radius_;
}
inline void HotPointMission::set_radius(double value) {
  
  radius_ = value;
  // @@protoc_insertion_point(field_set:HotPointMission.radius)
}

// -------------------------------------------------------------------

// TakeOffLanding

// .Action action = 1;
inline void TakeOffLanding::clear_action() {
  action_ = 0;
}
inline ::Action TakeOffLanding::action() const {
  // @@protoc_insertion_point(field_get:TakeOffLanding.action)
  return static_cast< ::Action >(action_);
}
inline void TakeOffLanding::set_action(::Action value) {
  
  action_ = value;
  // @@protoc_insertion_point(field_set:TakeOffLanding.action)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::MessageType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::MessageType>() {
  return ::MessageType_descriptor();
}
template <> struct is_proto_enum< ::Action> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Action>() {
  return ::Action_descriptor();
}

}  // namespace proto
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_message_5fstrocuture_2eproto
