/*
 * Copyright 2016 Xamarin Inc.
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

// EXPERIMENTAL EXPERIMENTAL EXPERIMENTAL EXPERIMENTAL
// DO NOT USE -- FOR INTERNAL TESTING ONLY

#ifndef sk_xml_DEFINED
#define sk_xml_DEFINED

#include "sk_types.h"

SK_C_PLUS_PLUS_BEGIN_GUARD

SK_C_API sk_xmlstreamwriter_t* sk_xmlstreamwriter_new(sk_wstream_t* stream);
SK_C_API void sk_xmlstreamwriter_delete(sk_xmlstreamwriter_t* writer);

SK_C_PLUS_PLUS_END_GUARD

#endif
