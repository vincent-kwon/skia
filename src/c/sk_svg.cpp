/*
 * Copyright 2016 Xamarin Inc.
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#include "SkSVGCanvas.h"

#include "sk_svg.h"

#include "sk_types_priv.h"

//////////////////////////////////////////////////////////////////////////////////////////////////

sk_canvas_t* sk_svgcanvas_create(const sk_rect_t* bounds, sk_xmlwriter_t* writer)
{
    return ToCanvas(SkSVGCanvas::Make(AsRect(*bounds), AsXMLWriter(writer)).release());
}
