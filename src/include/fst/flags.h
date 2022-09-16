// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// See www.openfst.org for extensive documentation on this weighted
// finite-state transducer library.
//
// Google-style flag handling declarations and inline definitions.

#ifndef FST_LIB_FLAGS_H_
#define FST_LIB_FLAGS_H_

#include <gflags/gflags.h>

#define SET_FLAGS(usage, argc, argv, rmflags)         \
    google::ParseCommandLineFlags(argc, argv, true);

inline void ShowUsage(bool long_usage = true) {}

#endif  // FST_LIB_FLAGS_H_
