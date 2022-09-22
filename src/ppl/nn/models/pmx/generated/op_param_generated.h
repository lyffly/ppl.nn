// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_OPPARAM_PPL_NN_PMX_H_
#define FLATBUFFERS_GENERATED_OPPARAM_PPL_NN_PMX_H_

#include "flatbuffers/flatbuffers.h"

namespace ppl {
namespace nn {
namespace pmx {

struct ConvParam;
struct ConvParamBuilder;

struct OpParam;
struct OpParamBuilder;

enum OpParamType : uint8_t {
  OpParamType_NONE = 0,
  OpParamType_ConvParam = 1,
  OpParamType_MIN = OpParamType_NONE,
  OpParamType_MAX = OpParamType_ConvParam
};

inline const OpParamType (&EnumValuesOpParamType())[2] {
  static const OpParamType values[] = {
    OpParamType_NONE,
    OpParamType_ConvParam
  };
  return values;
}

inline const char * const *EnumNamesOpParamType() {
  static const char * const names[3] = {
    "NONE",
    "ConvParam",
    nullptr
  };
  return names;
}

inline const char *EnumNameOpParamType(OpParamType e) {
  if (flatbuffers::IsOutRange(e, OpParamType_NONE, OpParamType_ConvParam)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesOpParamType()[index];
}

template<typename T> struct OpParamTypeTraits {
  static const OpParamType enum_value = OpParamType_NONE;
};

template<> struct OpParamTypeTraits<ppl::nn::pmx::ConvParam> {
  static const OpParamType enum_value = OpParamType_ConvParam;
};

bool VerifyOpParamType(flatbuffers::Verifier &verifier, const void *obj, OpParamType type);
bool VerifyOpParamTypeVector(flatbuffers::Verifier &verifier, const flatbuffers::Vector<flatbuffers::Offset<void>> *values, const flatbuffers::Vector<uint8_t> *types);

struct ConvParam FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef ConvParamBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_DILATIONS = 4,
    VT_GROUP = 6,
    VT_KERNEL_SHAPE = 8,
    VT_PADS = 10,
    VT_STRIDES = 12,
    VT_DATA_ = 14
  };
  const flatbuffers::Vector<int32_t> *dilations() const {
    return GetPointer<const flatbuffers::Vector<int32_t> *>(VT_DILATIONS);
  }
  int32_t group() const {
    return GetField<int32_t>(VT_GROUP, 0);
  }
  const flatbuffers::Vector<int32_t> *kernel_shape() const {
    return GetPointer<const flatbuffers::Vector<int32_t> *>(VT_KERNEL_SHAPE);
  }
  const flatbuffers::Vector<int32_t> *pads() const {
    return GetPointer<const flatbuffers::Vector<int32_t> *>(VT_PADS);
  }
  const flatbuffers::Vector<int32_t> *strides() const {
    return GetPointer<const flatbuffers::Vector<int32_t> *>(VT_STRIDES);
  }
  const flatbuffers::Vector<uint8_t> *data_() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_DATA_);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_DILATIONS) &&
           verifier.VerifyVector(dilations()) &&
           VerifyField<int32_t>(verifier, VT_GROUP) &&
           VerifyOffset(verifier, VT_KERNEL_SHAPE) &&
           verifier.VerifyVector(kernel_shape()) &&
           VerifyOffset(verifier, VT_PADS) &&
           verifier.VerifyVector(pads()) &&
           VerifyOffset(verifier, VT_STRIDES) &&
           verifier.VerifyVector(strides()) &&
           VerifyOffset(verifier, VT_DATA_) &&
           verifier.VerifyVector(data_()) &&
           verifier.EndTable();
  }
};

struct ConvParamBuilder {
  typedef ConvParam Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_dilations(flatbuffers::Offset<flatbuffers::Vector<int32_t>> dilations) {
    fbb_.AddOffset(ConvParam::VT_DILATIONS, dilations);
  }
  void add_group(int32_t group) {
    fbb_.AddElement<int32_t>(ConvParam::VT_GROUP, group, 0);
  }
  void add_kernel_shape(flatbuffers::Offset<flatbuffers::Vector<int32_t>> kernel_shape) {
    fbb_.AddOffset(ConvParam::VT_KERNEL_SHAPE, kernel_shape);
  }
  void add_pads(flatbuffers::Offset<flatbuffers::Vector<int32_t>> pads) {
    fbb_.AddOffset(ConvParam::VT_PADS, pads);
  }
  void add_strides(flatbuffers::Offset<flatbuffers::Vector<int32_t>> strides) {
    fbb_.AddOffset(ConvParam::VT_STRIDES, strides);
  }
  void add_data_(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> data_) {
    fbb_.AddOffset(ConvParam::VT_DATA_, data_);
  }
  explicit ConvParamBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<ConvParam> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<ConvParam>(end);
    return o;
  }
};

inline flatbuffers::Offset<ConvParam> CreateConvParam(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<int32_t>> dilations = 0,
    int32_t group = 0,
    flatbuffers::Offset<flatbuffers::Vector<int32_t>> kernel_shape = 0,
    flatbuffers::Offset<flatbuffers::Vector<int32_t>> pads = 0,
    flatbuffers::Offset<flatbuffers::Vector<int32_t>> strides = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> data_ = 0) {
  ConvParamBuilder builder_(_fbb);
  builder_.add_data_(data_);
  builder_.add_strides(strides);
  builder_.add_pads(pads);
  builder_.add_kernel_shape(kernel_shape);
  builder_.add_group(group);
  builder_.add_dilations(dilations);
  return builder_.Finish();
}

inline flatbuffers::Offset<ConvParam> CreateConvParamDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<int32_t> *dilations = nullptr,
    int32_t group = 0,
    const std::vector<int32_t> *kernel_shape = nullptr,
    const std::vector<int32_t> *pads = nullptr,
    const std::vector<int32_t> *strides = nullptr,
    const std::vector<uint8_t> *data_ = nullptr) {
  auto dilations__ = dilations ? _fbb.CreateVector<int32_t>(*dilations) : 0;
  auto kernel_shape__ = kernel_shape ? _fbb.CreateVector<int32_t>(*kernel_shape) : 0;
  auto pads__ = pads ? _fbb.CreateVector<int32_t>(*pads) : 0;
  auto strides__ = strides ? _fbb.CreateVector<int32_t>(*strides) : 0;
  auto data___ = data_ ? _fbb.CreateVector<uint8_t>(*data_) : 0;
  return ppl::nn::pmx::CreateConvParam(
      _fbb,
      dilations__,
      group,
      kernel_shape__,
      pads__,
      strides__,
      data___);
}

struct OpParam FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef OpParamBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_VALUE_TYPE = 4,
    VT_VALUE = 6
  };
  ppl::nn::pmx::OpParamType value_type() const {
    return static_cast<ppl::nn::pmx::OpParamType>(GetField<uint8_t>(VT_VALUE_TYPE, 0));
  }
  const void *value() const {
    return GetPointer<const void *>(VT_VALUE);
  }
  template<typename T> const T *value_as() const;
  const ppl::nn::pmx::ConvParam *value_as_ConvParam() const {
    return value_type() == ppl::nn::pmx::OpParamType_ConvParam ? static_cast<const ppl::nn::pmx::ConvParam *>(value()) : nullptr;
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_VALUE_TYPE) &&
           VerifyOffset(verifier, VT_VALUE) &&
           VerifyOpParamType(verifier, value(), value_type()) &&
           verifier.EndTable();
  }
};

template<> inline const ppl::nn::pmx::ConvParam *OpParam::value_as<ppl::nn::pmx::ConvParam>() const {
  return value_as_ConvParam();
}

struct OpParamBuilder {
  typedef OpParam Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_value_type(ppl::nn::pmx::OpParamType value_type) {
    fbb_.AddElement<uint8_t>(OpParam::VT_VALUE_TYPE, static_cast<uint8_t>(value_type), 0);
  }
  void add_value(flatbuffers::Offset<void> value) {
    fbb_.AddOffset(OpParam::VT_VALUE, value);
  }
  explicit OpParamBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<OpParam> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<OpParam>(end);
    return o;
  }
};

inline flatbuffers::Offset<OpParam> CreateOpParam(
    flatbuffers::FlatBufferBuilder &_fbb,
    ppl::nn::pmx::OpParamType value_type = ppl::nn::pmx::OpParamType_NONE,
    flatbuffers::Offset<void> value = 0) {
  OpParamBuilder builder_(_fbb);
  builder_.add_value(value);
  builder_.add_value_type(value_type);
  return builder_.Finish();
}

inline bool VerifyOpParamType(flatbuffers::Verifier &verifier, const void *obj, OpParamType type) {
  switch (type) {
    case OpParamType_NONE: {
      return true;
    }
    case OpParamType_ConvParam: {
      auto ptr = reinterpret_cast<const ppl::nn::pmx::ConvParam *>(obj);
      return verifier.VerifyTable(ptr);
    }
    default: return true;
  }
}

inline bool VerifyOpParamTypeVector(flatbuffers::Verifier &verifier, const flatbuffers::Vector<flatbuffers::Offset<void>> *values, const flatbuffers::Vector<uint8_t> *types) {
  if (!values || !types) return !values && !types;
  if (values->size() != types->size()) return false;
  for (flatbuffers::uoffset_t i = 0; i < values->size(); ++i) {
    if (!VerifyOpParamType(
        verifier,  values->Get(i), types->GetEnum<OpParamType>(i))) {
      return false;
    }
  }
  return true;
}

inline const ppl::nn::pmx::OpParam *GetOpParam(const void *buf) {
  return flatbuffers::GetRoot<ppl::nn::pmx::OpParam>(buf);
}

inline const ppl::nn::pmx::OpParam *GetSizePrefixedOpParam(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<ppl::nn::pmx::OpParam>(buf);
}

inline bool VerifyOpParamBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<ppl::nn::pmx::OpParam>(nullptr);
}

inline bool VerifySizePrefixedOpParamBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<ppl::nn::pmx::OpParam>(nullptr);
}

inline void FinishOpParamBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<ppl::nn::pmx::OpParam> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedOpParamBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<ppl::nn::pmx::OpParam> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace pmx
}  // namespace nn
}  // namespace ppl

#endif  // FLATBUFFERS_GENERATED_OPPARAM_PPL_NN_PMX_H_
