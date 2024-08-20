#include <gtest/gtest.h>
#include <core/entry.hh>

namespace {
    int dummy() { return 0; }
}

TEST(CoreTests, Dummy) {
    EXPECT_EQ(dummy(), 0);
}
