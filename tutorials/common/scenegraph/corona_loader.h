// Copyright 2009-2021 Intel Corporation
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "scenegraph.h"

namespace embree
{
  namespace SceneGraph
  {
    Ref<SceneGraph::Node> loadCorona(const FileName& fileName, const AffineSpace3fa& space = one);
  }
}
