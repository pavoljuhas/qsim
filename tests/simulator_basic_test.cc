// Copyright 2019 Google LLC. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "simulator_test.h"

#include "gtest/gtest.h"

#include "../lib/parfor.h"
#include "../lib/simulator_basic.h"

namespace qsim {

TEST(SimulatorBasicTest, ApplyGate1) {
  TestApplyGate1<SimulatorBasic<ParallelFor, double>>();
}

TEST(SimulatorBasicTest, ApplyGate2) {
  TestApplyGate2<SimulatorBasic<ParallelFor, double>>();
}

TEST(SimulatorBasicTest, ApplyGate3) {
  TestApplyGate3<SimulatorBasic<ParallelFor, double>>();
}

TEST(SimulatorBasicTest, ApplyGate5) {
  TestApplyGate5<SimulatorBasic<ParallelFor, double>>();
}

}  // namespace qsim

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
