// -*- C++ -*-

// Copyright 2006 Deutsches Forschungszentrum fuer Kuenstliche Intelligenz
// or its licensors, as applicable.
//
// You may not use this file except under the terms of the accompanying license.
//
// Licensed under the Apache License, Version 2.0 (the "License"); you
// may not use this file except in compliance with the License. You may
// obtain a copy of the License at http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// Project: iulib -- image understanding library
// File:
// Purpose:
// Responsible: tmb
// Reviewer:
// Primary Repository:
// Web Sites: www.iupr.org, www.dfki.de

/// \file colib.h
/// \brief Main include file for the colib library.
/// Includes most other files in colib.

#ifndef h_iupr_
#define h_iupr_

#include "colib/checks.h"
#include "classifier.h"
//#include "clib.h" // not used for now
#include "coords.h"
#include "env.h"
#include "hash.h"
#include "heap.h"
//#include "iarith.h" // Conflicts with vec2.h
#include "misc.h"
#include "colib/narray.h"
#include "colib/narray-ops.h"
#include "colib/narray-util.h"
#include "nbest.h"
#include "nustring.h"
#include "objlist.h"
#include "quicksort.h"
#include "rowarrays.h"
#include "smartptr.h"
#include "strbuf.h"
#include "iustring.h"
#include "vec2.h"
#include "deprecation.h"
#include "debugf.h"
#ifdef WIN32
#include "compat.h"
#endif


#endif
