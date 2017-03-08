/*
// Copyright (c) 2017 Intel Corporation
//
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
*/

#ifndef COMMON_UTILS_HWCEVENT_H_
#define COMMON_UTILS_HWCEVENT_H_

namespace hwcomposer {

class HWCEvent {
 public:
  HWCEvent();
  virtual ~HWCEvent();

  bool Signal();
  bool Wait();

  bool ShouldWait();

  int get_fd() const {
    return fd_;
  }

 private:
  int fd_;
};

}  // namespace hwcomposer

#endif  // COMMON_UTILS_HWCEVENT_H_