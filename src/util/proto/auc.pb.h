// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: util/proto/auc.proto

#ifndef PROTOBUF_util_2fproto_2fauc_2eproto__INCLUDED
#define PROTOBUF_util_2fproto_2fauc_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace PS {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_util_2fproto_2fauc_2eproto();
void protobuf_AssignDesc_util_2fproto_2fauc_2eproto();
void protobuf_ShutdownFile_util_2fproto_2fauc_2eproto();

class AUCData;

// ===================================================================

class AUCData : public ::google::protobuf::Message {
 public:
  AUCData();
  virtual ~AUCData();

  AUCData(const AUCData& from);

  inline AUCData& operator=(const AUCData& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const AUCData& default_instance();

  void Swap(AUCData* other);

  // implements Message ----------------------------------------------

  AUCData* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const AUCData& from);
  void MergeFrom(const AUCData& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated int64 tp_key = 1;
  inline int tp_key_size() const;
  inline void clear_tp_key();
  static const int kTpKeyFieldNumber = 1;
  inline ::google::protobuf::int64 tp_key(int index) const;
  inline void set_tp_key(int index, ::google::protobuf::int64 value);
  inline void add_tp_key(::google::protobuf::int64 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
      tp_key() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
      mutable_tp_key();

  // repeated uint64 tp_count = 2;
  inline int tp_count_size() const;
  inline void clear_tp_count();
  static const int kTpCountFieldNumber = 2;
  inline ::google::protobuf::uint64 tp_count(int index) const;
  inline void set_tp_count(int index, ::google::protobuf::uint64 value);
  inline void add_tp_count(::google::protobuf::uint64 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
      tp_count() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
      mutable_tp_count();

  // repeated int64 fp_key = 3;
  inline int fp_key_size() const;
  inline void clear_fp_key();
  static const int kFpKeyFieldNumber = 3;
  inline ::google::protobuf::int64 fp_key(int index) const;
  inline void set_fp_key(int index, ::google::protobuf::int64 value);
  inline void add_fp_key(::google::protobuf::int64 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
      fp_key() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
      mutable_fp_key();

  // repeated uint64 fp_count = 4;
  inline int fp_count_size() const;
  inline void clear_fp_count();
  static const int kFpCountFieldNumber = 4;
  inline ::google::protobuf::uint64 fp_count(int index) const;
  inline void set_fp_count(int index, ::google::protobuf::uint64 value);
  inline void add_fp_count(::google::protobuf::uint64 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
      fp_count() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
      mutable_fp_count();

  // @@protoc_insertion_point(class_scope:PS.AUCData)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedField< ::google::protobuf::int64 > tp_key_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 > tp_count_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int64 > fp_key_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 > fp_count_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_util_2fproto_2fauc_2eproto();
  friend void protobuf_AssignDesc_util_2fproto_2fauc_2eproto();
  friend void protobuf_ShutdownFile_util_2fproto_2fauc_2eproto();

  void InitAsDefaultInstance();
  static AUCData* default_instance_;
};
// ===================================================================


// ===================================================================

// AUCData

// repeated int64 tp_key = 1;
inline int AUCData::tp_key_size() const {
  return tp_key_.size();
}
inline void AUCData::clear_tp_key() {
  tp_key_.Clear();
}
inline ::google::protobuf::int64 AUCData::tp_key(int index) const {
  return tp_key_.Get(index);
}
inline void AUCData::set_tp_key(int index, ::google::protobuf::int64 value) {
  tp_key_.Set(index, value);
}
inline void AUCData::add_tp_key(::google::protobuf::int64 value) {
  tp_key_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
AUCData::tp_key() const {
  return tp_key_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
AUCData::mutable_tp_key() {
  return &tp_key_;
}

// repeated uint64 tp_count = 2;
inline int AUCData::tp_count_size() const {
  return tp_count_.size();
}
inline void AUCData::clear_tp_count() {
  tp_count_.Clear();
}
inline ::google::protobuf::uint64 AUCData::tp_count(int index) const {
  return tp_count_.Get(index);
}
inline void AUCData::set_tp_count(int index, ::google::protobuf::uint64 value) {
  tp_count_.Set(index, value);
}
inline void AUCData::add_tp_count(::google::protobuf::uint64 value) {
  tp_count_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
AUCData::tp_count() const {
  return tp_count_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
AUCData::mutable_tp_count() {
  return &tp_count_;
}

// repeated int64 fp_key = 3;
inline int AUCData::fp_key_size() const {
  return fp_key_.size();
}
inline void AUCData::clear_fp_key() {
  fp_key_.Clear();
}
inline ::google::protobuf::int64 AUCData::fp_key(int index) const {
  return fp_key_.Get(index);
}
inline void AUCData::set_fp_key(int index, ::google::protobuf::int64 value) {
  fp_key_.Set(index, value);
}
inline void AUCData::add_fp_key(::google::protobuf::int64 value) {
  fp_key_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
AUCData::fp_key() const {
  return fp_key_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
AUCData::mutable_fp_key() {
  return &fp_key_;
}

// repeated uint64 fp_count = 4;
inline int AUCData::fp_count_size() const {
  return fp_count_.size();
}
inline void AUCData::clear_fp_count() {
  fp_count_.Clear();
}
inline ::google::protobuf::uint64 AUCData::fp_count(int index) const {
  return fp_count_.Get(index);
}
inline void AUCData::set_fp_count(int index, ::google::protobuf::uint64 value) {
  fp_count_.Set(index, value);
}
inline void AUCData::add_fp_count(::google::protobuf::uint64 value) {
  fp_count_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
AUCData::fp_count() const {
  return fp_count_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
AUCData::mutable_fp_count() {
  return &fp_count_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace PS

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_util_2fproto_2fauc_2eproto__INCLUDED
