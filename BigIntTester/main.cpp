#include <iostream>
#include "gtest/gtest.h"
#include "../BigInt_v2/BigInt.h"
#include "include_test.h"
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
