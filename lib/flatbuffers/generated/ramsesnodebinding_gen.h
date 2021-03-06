// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_RAMSESNODEBINDING_RLOGIC_SERIALIZATION_H_
#define FLATBUFFERS_GENERATED_RAMSESNODEBINDING_RLOGIC_SERIALIZATION_H_

#include "flatbuffers/flatbuffers.h"

#include "logicnode_gen.h"
#include "property_gen.h"

namespace rlogic_serialization {

struct RamsesNodeBinding;
struct RamsesNodeBindingBuilder;

struct RamsesNodeBinding FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef RamsesNodeBindingBuilder Builder;
  struct Traits;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_LOGICNODE = 4,
    VT_RAMSESNODE = 6
  };
  const rlogic_serialization::LogicNode *logicnode() const {
    return GetPointer<const rlogic_serialization::LogicNode *>(VT_LOGICNODE);
  }
  uint64_t ramsesNode() const {
    return GetField<uint64_t>(VT_RAMSESNODE, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_LOGICNODE) &&
           verifier.VerifyTable(logicnode()) &&
           VerifyField<uint64_t>(verifier, VT_RAMSESNODE) &&
           verifier.EndTable();
  }
};

struct RamsesNodeBindingBuilder {
  typedef RamsesNodeBinding Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_logicnode(flatbuffers::Offset<rlogic_serialization::LogicNode> logicnode) {
    fbb_.AddOffset(RamsesNodeBinding::VT_LOGICNODE, logicnode);
  }
  void add_ramsesNode(uint64_t ramsesNode) {
    fbb_.AddElement<uint64_t>(RamsesNodeBinding::VT_RAMSESNODE, ramsesNode, 0);
  }
  explicit RamsesNodeBindingBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  RamsesNodeBindingBuilder &operator=(const RamsesNodeBindingBuilder &);
  flatbuffers::Offset<RamsesNodeBinding> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<RamsesNodeBinding>(end);
    return o;
  }
};

inline flatbuffers::Offset<RamsesNodeBinding> CreateRamsesNodeBinding(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<rlogic_serialization::LogicNode> logicnode = 0,
    uint64_t ramsesNode = 0) {
  RamsesNodeBindingBuilder builder_(_fbb);
  builder_.add_ramsesNode(ramsesNode);
  builder_.add_logicnode(logicnode);
  return builder_.Finish();
}

struct RamsesNodeBinding::Traits {
  using type = RamsesNodeBinding;
  static auto constexpr Create = CreateRamsesNodeBinding;
};

inline const rlogic_serialization::RamsesNodeBinding *GetRamsesNodeBinding(const void *buf) {
  return flatbuffers::GetRoot<rlogic_serialization::RamsesNodeBinding>(buf);
}

inline const rlogic_serialization::RamsesNodeBinding *GetSizePrefixedRamsesNodeBinding(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<rlogic_serialization::RamsesNodeBinding>(buf);
}

inline bool VerifyRamsesNodeBindingBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<rlogic_serialization::RamsesNodeBinding>(nullptr);
}

inline bool VerifySizePrefixedRamsesNodeBindingBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<rlogic_serialization::RamsesNodeBinding>(nullptr);
}

inline void FinishRamsesNodeBindingBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<rlogic_serialization::RamsesNodeBinding> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedRamsesNodeBindingBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<rlogic_serialization::RamsesNodeBinding> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace rlogic_serialization

#endif  // FLATBUFFERS_GENERATED_RAMSESNODEBINDING_RLOGIC_SERIALIZATION_H_
