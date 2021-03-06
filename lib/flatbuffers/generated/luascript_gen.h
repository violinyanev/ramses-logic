// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_LUASCRIPT_RLOGIC_SERIALIZATION_H_
#define FLATBUFFERS_GENERATED_LUASCRIPT_RLOGIC_SERIALIZATION_H_

#include "flatbuffers/flatbuffers.h"

#include "logicnode_gen.h"
#include "property_gen.h"

namespace rlogic_serialization {

struct LuaScript;
struct LuaScriptBuilder;

struct LuaScript FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef LuaScriptBuilder Builder;
  struct Traits;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_LOGICNODE = 4,
    VT_FILENAME = 6,
    VT_SOURCE = 8,
    VT_BYTECODE = 10
  };
  const rlogic_serialization::LogicNode *logicnode() const {
    return GetPointer<const rlogic_serialization::LogicNode *>(VT_LOGICNODE);
  }
  const flatbuffers::String *filename() const {
    return GetPointer<const flatbuffers::String *>(VT_FILENAME);
  }
  const flatbuffers::String *source() const {
    return GetPointer<const flatbuffers::String *>(VT_SOURCE);
  }
  const flatbuffers::Vector<uint8_t> *bytecode() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_BYTECODE);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_LOGICNODE) &&
           verifier.VerifyTable(logicnode()) &&
           VerifyOffset(verifier, VT_FILENAME) &&
           verifier.VerifyString(filename()) &&
           VerifyOffset(verifier, VT_SOURCE) &&
           verifier.VerifyString(source()) &&
           VerifyOffset(verifier, VT_BYTECODE) &&
           verifier.VerifyVector(bytecode()) &&
           verifier.EndTable();
  }
};

struct LuaScriptBuilder {
  typedef LuaScript Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_logicnode(flatbuffers::Offset<rlogic_serialization::LogicNode> logicnode) {
    fbb_.AddOffset(LuaScript::VT_LOGICNODE, logicnode);
  }
  void add_filename(flatbuffers::Offset<flatbuffers::String> filename) {
    fbb_.AddOffset(LuaScript::VT_FILENAME, filename);
  }
  void add_source(flatbuffers::Offset<flatbuffers::String> source) {
    fbb_.AddOffset(LuaScript::VT_SOURCE, source);
  }
  void add_bytecode(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> bytecode) {
    fbb_.AddOffset(LuaScript::VT_BYTECODE, bytecode);
  }
  explicit LuaScriptBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  LuaScriptBuilder &operator=(const LuaScriptBuilder &);
  flatbuffers::Offset<LuaScript> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<LuaScript>(end);
    return o;
  }
};

inline flatbuffers::Offset<LuaScript> CreateLuaScript(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<rlogic_serialization::LogicNode> logicnode = 0,
    flatbuffers::Offset<flatbuffers::String> filename = 0,
    flatbuffers::Offset<flatbuffers::String> source = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> bytecode = 0) {
  LuaScriptBuilder builder_(_fbb);
  builder_.add_bytecode(bytecode);
  builder_.add_source(source);
  builder_.add_filename(filename);
  builder_.add_logicnode(logicnode);
  return builder_.Finish();
}

struct LuaScript::Traits {
  using type = LuaScript;
  static auto constexpr Create = CreateLuaScript;
};

inline flatbuffers::Offset<LuaScript> CreateLuaScriptDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<rlogic_serialization::LogicNode> logicnode = 0,
    const char *filename = nullptr,
    const char *source = nullptr,
    const std::vector<uint8_t> *bytecode = nullptr) {
  auto filename__ = filename ? _fbb.CreateString(filename) : 0;
  auto source__ = source ? _fbb.CreateString(source) : 0;
  auto bytecode__ = bytecode ? _fbb.CreateVector<uint8_t>(*bytecode) : 0;
  return rlogic_serialization::CreateLuaScript(
      _fbb,
      logicnode,
      filename__,
      source__,
      bytecode__);
}

inline const rlogic_serialization::LuaScript *GetLuaScript(const void *buf) {
  return flatbuffers::GetRoot<rlogic_serialization::LuaScript>(buf);
}

inline const rlogic_serialization::LuaScript *GetSizePrefixedLuaScript(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<rlogic_serialization::LuaScript>(buf);
}

inline bool VerifyLuaScriptBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<rlogic_serialization::LuaScript>(nullptr);
}

inline bool VerifySizePrefixedLuaScriptBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<rlogic_serialization::LuaScript>(nullptr);
}

inline void FinishLuaScriptBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<rlogic_serialization::LuaScript> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedLuaScriptBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<rlogic_serialization::LuaScript> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace rlogic_serialization

#endif  // FLATBUFFERS_GENERATED_LUASCRIPT_RLOGIC_SERIALIZATION_H_
