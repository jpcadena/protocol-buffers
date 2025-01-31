// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: address.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_address_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_address_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4024000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4024004 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
#include "building.pb.h"
#include "city.pb.h"
#include "street.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_address_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_address_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_address_2eproto;
class Address;
struct AddressDefaultTypeInternal;
extern AddressDefaultTypeInternal _Address_default_instance_;
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google


// ===================================================================


// -------------------------------------------------------------------

class Address final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Address) */ {
 public:
  inline Address() : Address(nullptr) {}
  ~Address() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR Address(::google::protobuf::internal::ConstantInitialized);

  Address(const Address& from);
  Address(Address&& from) noexcept
    : Address() {
    *this = ::std::move(from);
  }

  inline Address& operator=(const Address& from) {
    CopyFrom(from);
    return *this;
  }
  inline Address& operator=(Address&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Address& default_instance() {
    return *internal_default_instance();
  }
  static inline const Address* internal_default_instance() {
    return reinterpret_cast<const Address*>(
               &_Address_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Address& a, Address& b) {
    a.Swap(&b);
  }
  inline void Swap(Address* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Address* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Address* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Address>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const Address& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const Address& from) {
    Address::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Address* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "Address";
  }
  protected:
  explicit Address(::google::protobuf::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCityFieldNumber = 1,
    kStreetFieldNumber = 2,
    kBuildingFieldNumber = 3,
  };
  // .City city = 1;
  bool has_city() const;
  void clear_city() ;
  const ::City& city() const;
  PROTOBUF_NODISCARD ::City* release_city();
  ::City* mutable_city();
  void set_allocated_city(::City* value);
  void unsafe_arena_set_allocated_city(::City* value);
  ::City* unsafe_arena_release_city();

  private:
  const ::City& _internal_city() const;
  ::City* _internal_mutable_city();

  public:
  // .Street street = 2;
  bool has_street() const;
  void clear_street() ;
  const ::Street& street() const;
  PROTOBUF_NODISCARD ::Street* release_street();
  ::Street* mutable_street();
  void set_allocated_street(::Street* value);
  void unsafe_arena_set_allocated_street(::Street* value);
  ::Street* unsafe_arena_release_street();

  private:
  const ::Street& _internal_street() const;
  ::Street* _internal_mutable_street();

  public:
  // .Building building = 3;
  bool has_building() const;
  void clear_building() ;
  const ::Building& building() const;
  PROTOBUF_NODISCARD ::Building* release_building();
  ::Building* mutable_building();
  void set_allocated_building(::Building* value);
  void unsafe_arena_set_allocated_building(::Building* value);
  ::Building* unsafe_arena_release_building();

  private:
  const ::Building& _internal_building() const;
  ::Building* _internal_mutable_building();

  public:
  // @@protoc_insertion_point(class_scope:Address)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<2, 3, 3, 0, 2> _table_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    ::City* city_;
    ::Street* street_;
    ::Building* building_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_address_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Address

// .City city = 1;
inline bool Address::has_city() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.city_ != nullptr);
  return value;
}
inline const ::City& Address::_internal_city() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  const ::City* p = _impl_.city_;
  return p != nullptr ? *p : reinterpret_cast<const ::City&>(::_City_default_instance_);
}
inline const ::City& Address::city() const {
  // @@protoc_insertion_point(field_get:Address.city)
  return _internal_city();
}
inline void Address::unsafe_arena_set_allocated_city(::City* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.city_);
  }
  _impl_.city_ = reinterpret_cast<::City*>(value);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Address.city)
}
inline ::City* Address::release_city() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);

  _impl_._has_bits_[0] &= ~0x00000001u;
  ::City* released = _impl_.city_;
  _impl_.city_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old = reinterpret_cast<::google::protobuf::MessageLite*>(released);
  released = ::google::protobuf::internal::DuplicateIfNonNull(released);
  if (GetArenaForAllocation() == nullptr) {
    delete old;
  }
#else   // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    released = ::google::protobuf::internal::DuplicateIfNonNull(released);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return released;
}
inline ::City* Address::unsafe_arena_release_city() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:Address.city)

  _impl_._has_bits_[0] &= ~0x00000001u;
  ::City* temp = _impl_.city_;
  _impl_.city_ = nullptr;
  return temp;
}
inline ::City* Address::_internal_mutable_city() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  if (_impl_.city_ == nullptr) {
    auto* p = CreateMaybeMessage<::City>(GetArenaForAllocation());
    _impl_.city_ = reinterpret_cast<::City*>(p);
  }
  return _impl_.city_;
}
inline ::City* Address::mutable_city() {
  ::City* _msg = _internal_mutable_city();
  // @@protoc_insertion_point(field_mutable:Address.city)
  return _msg;
}
inline void Address::set_allocated_city(::City* value) {
  ::google::protobuf::Arena* message_arena = GetArenaForAllocation();
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (message_arena == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.city_);
  }

  if (value != nullptr) {
    ::google::protobuf::Arena* submessage_arena =
        ::google::protobuf::Arena::InternalGetOwningArena(reinterpret_cast<::google::protobuf::MessageLite*>(value));
    if (message_arena != submessage_arena) {
      value = ::google::protobuf::internal::GetOwnedMessage(message_arena, value, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }

  _impl_.city_ = reinterpret_cast<::City*>(value);
  // @@protoc_insertion_point(field_set_allocated:Address.city)
}

// .Street street = 2;
inline bool Address::has_street() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.street_ != nullptr);
  return value;
}
inline const ::Street& Address::_internal_street() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  const ::Street* p = _impl_.street_;
  return p != nullptr ? *p : reinterpret_cast<const ::Street&>(::_Street_default_instance_);
}
inline const ::Street& Address::street() const {
  // @@protoc_insertion_point(field_get:Address.street)
  return _internal_street();
}
inline void Address::unsafe_arena_set_allocated_street(::Street* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.street_);
  }
  _impl_.street_ = reinterpret_cast<::Street*>(value);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Address.street)
}
inline ::Street* Address::release_street() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);

  _impl_._has_bits_[0] &= ~0x00000002u;
  ::Street* released = _impl_.street_;
  _impl_.street_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old = reinterpret_cast<::google::protobuf::MessageLite*>(released);
  released = ::google::protobuf::internal::DuplicateIfNonNull(released);
  if (GetArenaForAllocation() == nullptr) {
    delete old;
  }
#else   // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    released = ::google::protobuf::internal::DuplicateIfNonNull(released);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return released;
}
inline ::Street* Address::unsafe_arena_release_street() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:Address.street)

  _impl_._has_bits_[0] &= ~0x00000002u;
  ::Street* temp = _impl_.street_;
  _impl_.street_ = nullptr;
  return temp;
}
inline ::Street* Address::_internal_mutable_street() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000002u;
  if (_impl_.street_ == nullptr) {
    auto* p = CreateMaybeMessage<::Street>(GetArenaForAllocation());
    _impl_.street_ = reinterpret_cast<::Street*>(p);
  }
  return _impl_.street_;
}
inline ::Street* Address::mutable_street() {
  ::Street* _msg = _internal_mutable_street();
  // @@protoc_insertion_point(field_mutable:Address.street)
  return _msg;
}
inline void Address::set_allocated_street(::Street* value) {
  ::google::protobuf::Arena* message_arena = GetArenaForAllocation();
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (message_arena == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.street_);
  }

  if (value != nullptr) {
    ::google::protobuf::Arena* submessage_arena =
        ::google::protobuf::Arena::InternalGetOwningArena(reinterpret_cast<::google::protobuf::MessageLite*>(value));
    if (message_arena != submessage_arena) {
      value = ::google::protobuf::internal::GetOwnedMessage(message_arena, value, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }

  _impl_.street_ = reinterpret_cast<::Street*>(value);
  // @@protoc_insertion_point(field_set_allocated:Address.street)
}

// .Building building = 3;
inline bool Address::has_building() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.building_ != nullptr);
  return value;
}
inline const ::Building& Address::_internal_building() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  const ::Building* p = _impl_.building_;
  return p != nullptr ? *p : reinterpret_cast<const ::Building&>(::_Building_default_instance_);
}
inline const ::Building& Address::building() const {
  // @@protoc_insertion_point(field_get:Address.building)
  return _internal_building();
}
inline void Address::unsafe_arena_set_allocated_building(::Building* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.building_);
  }
  _impl_.building_ = reinterpret_cast<::Building*>(value);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000004u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000004u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Address.building)
}
inline ::Building* Address::release_building() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);

  _impl_._has_bits_[0] &= ~0x00000004u;
  ::Building* released = _impl_.building_;
  _impl_.building_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old = reinterpret_cast<::google::protobuf::MessageLite*>(released);
  released = ::google::protobuf::internal::DuplicateIfNonNull(released);
  if (GetArenaForAllocation() == nullptr) {
    delete old;
  }
#else   // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    released = ::google::protobuf::internal::DuplicateIfNonNull(released);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return released;
}
inline ::Building* Address::unsafe_arena_release_building() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:Address.building)

  _impl_._has_bits_[0] &= ~0x00000004u;
  ::Building* temp = _impl_.building_;
  _impl_.building_ = nullptr;
  return temp;
}
inline ::Building* Address::_internal_mutable_building() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000004u;
  if (_impl_.building_ == nullptr) {
    auto* p = CreateMaybeMessage<::Building>(GetArenaForAllocation());
    _impl_.building_ = reinterpret_cast<::Building*>(p);
  }
  return _impl_.building_;
}
inline ::Building* Address::mutable_building() {
  ::Building* _msg = _internal_mutable_building();
  // @@protoc_insertion_point(field_mutable:Address.building)
  return _msg;
}
inline void Address::set_allocated_building(::Building* value) {
  ::google::protobuf::Arena* message_arena = GetArenaForAllocation();
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (message_arena == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.building_);
  }

  if (value != nullptr) {
    ::google::protobuf::Arena* submessage_arena =
        ::google::protobuf::Arena::InternalGetOwningArena(reinterpret_cast<::google::protobuf::MessageLite*>(value));
    if (message_arena != submessage_arena) {
      value = ::google::protobuf::internal::GetOwnedMessage(message_arena, value, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000004u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000004u;
  }

  _impl_.building_ = reinterpret_cast<::Building*>(value);
  // @@protoc_insertion_point(field_set_allocated:Address.building)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_address_2eproto_2epb_2eh
