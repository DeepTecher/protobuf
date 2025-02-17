// Protocol Buffers - Google's data interchange format
// Copyright 2023 Google LLC.  All rights reserved.
// https://developers.google.com/protocol-buffers/
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//     * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//     * Neither the name of Google LLC nor the names of its
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef UPB_MINI_DESCRIPTOR_BUILD_ENUM_H_
#define UPB_MINI_DESCRIPTOR_BUILD_ENUM_H_

#include "upb/upb/base/status.h"
#include "upb/upb/mem/arena.h"
#include "upb/upb/mini_table/enum.h"

// Must be last.
#include "upb/upb/port/def.inc"

#ifdef __cplusplus
extern "C" {
#endif

// Builds a upb_MiniTableEnum from an enum MiniDescriptor.  The MiniDescriptor
// must be for an enum, not a message.
UPB_API upb_MiniTableEnum* upb_MiniDescriptor_BuildEnum(const char* data,
                                                        size_t len,
                                                        upb_Arena* arena,
                                                        upb_Status* status);

// TODO(b/289057707): Deprecated name; update callers.
UPB_API_INLINE upb_MiniTableEnum* upb_MiniTableEnum_Build(const char* data,
                                                          size_t len,
                                                          upb_Arena* arena,
                                                          upb_Status* status) {
  return upb_MiniDescriptor_BuildEnum(data, len, arena, status);
}

#ifdef __cplusplus
} /* extern "C" */
#endif

#include "upb/upb/port/undef.inc"

#endif  // UPB_MINI_DESCRIPTOR_BUILD_ENUM_H_
