// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_SHUTDOWN_MBTOOL_DAEMON_V3_H_
#define FLATBUFFERS_GENERATED_SHUTDOWN_MBTOOL_DAEMON_V3_H_

#include "flatbuffers/flatbuffers.h"


namespace mbtool {
namespace daemon {
namespace v3 {

struct ShutdownRequest;
struct ShutdownResponse;

enum ShutdownType {
  ShutdownType_INIT = 0,
  ShutdownType_DIRECT = 1,
  ShutdownType_MIN = ShutdownType_INIT,
  ShutdownType_MAX = ShutdownType_DIRECT
};

inline const char **EnumNamesShutdownType() {
  static const char *names[] = { "INIT", "DIRECT", nullptr };
  return names;
}

inline const char *EnumNameShutdownType(ShutdownType e) { return EnumNamesShutdownType()[static_cast<int>(e)]; }

struct ShutdownRequest FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_TYPE = 4
  };
  ShutdownType type() const { return static_cast<ShutdownType>(GetField<int16_t>(VT_TYPE, 0)); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int16_t>(verifier, VT_TYPE) &&
           verifier.EndTable();
  }
};

struct ShutdownRequestBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_type(ShutdownType type) { fbb_.AddElement<int16_t>(ShutdownRequest::VT_TYPE, static_cast<int16_t>(type), 0); }
  ShutdownRequestBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  ShutdownRequestBuilder &operator=(const ShutdownRequestBuilder &);
  flatbuffers::Offset<ShutdownRequest> Finish() {
    auto o = flatbuffers::Offset<ShutdownRequest>(fbb_.EndTable(start_, 1));
    return o;
  }
};

inline flatbuffers::Offset<ShutdownRequest> CreateShutdownRequest(flatbuffers::FlatBufferBuilder &_fbb,
   ShutdownType type = ShutdownType_INIT) {
  ShutdownRequestBuilder builder_(_fbb);
  builder_.add_type(type);
  return builder_.Finish();
}

struct ShutdownResponse FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_SUCCESS = 4
  };
  bool success() const { return GetField<uint8_t>(VT_SUCCESS, 0) != 0; }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_SUCCESS) &&
           verifier.EndTable();
  }
};

struct ShutdownResponseBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_success(bool success) { fbb_.AddElement<uint8_t>(ShutdownResponse::VT_SUCCESS, static_cast<uint8_t>(success), 0); }
  ShutdownResponseBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  ShutdownResponseBuilder &operator=(const ShutdownResponseBuilder &);
  flatbuffers::Offset<ShutdownResponse> Finish() {
    auto o = flatbuffers::Offset<ShutdownResponse>(fbb_.EndTable(start_, 1));
    return o;
  }
};

inline flatbuffers::Offset<ShutdownResponse> CreateShutdownResponse(flatbuffers::FlatBufferBuilder &_fbb,
   bool success = false) {
  ShutdownResponseBuilder builder_(_fbb);
  builder_.add_success(success);
  return builder_.Finish();
}

}  // namespace v3
}  // namespace daemon
}  // namespace mbtool

#endif  // FLATBUFFERS_GENERATED_SHUTDOWN_MBTOOL_DAEMON_V3_H_
