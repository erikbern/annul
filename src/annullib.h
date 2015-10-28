// Copyright (c) 2013 Spotify AB
//
// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License. You may obtain a copy of
// the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations under
// the License.

#ifndef ANNULLIB_H
#define ANNULLIB_H

#include <stdio.h>
#include <string>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __MINGW32__
#include "mman.h"
#include <windows.h>
#else
#include <sys/mman.h>
#endif

#include <string.h>
#include <math.h>
#include <vector>
#include <algorithm>
#include <queue>
#include <limits>

#include "kissrandom.h"
#include "lmdb/libraries/liblmdb/lmdb.h"

typedef float T;
typedef int S;

class AnnulIndex {
 private:
  Kiss64Random _random;
 public:
  AnnulIndex(int f) {};
  ~AnnulIndex() {};
  void add_item(S item, const T* w) {};
  void build(int q) {};
  bool save(const char* filename) {};
  void reinitialize() {};
  void unload() {};
  bool load(const char* filename) {};
  T get_distance(S i, S j) {};
  void get_nns_by_item(S item, size_t n, size_t search_k, std::vector<S>* result, std::vector<T>* distances) {};
  void get_nns_by_vector(const T* w, size_t n, size_t search_k, std::vector<S>* result, std::vector<T>* distances) {};
  S get_n_items() {};
  void verbose(bool v) {};
  void get_item(S item, std::vector<T>* v) {};
};

#endif
// vim: tabstop=2 shiftwidth=2
