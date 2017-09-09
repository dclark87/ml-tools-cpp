// Tests the linkedlist.cpp implementation.

#include "cpptools/linkedlist.h"

#include "gtest/gtest.h"

class LinkedListTest : public ::testing::Test {
  protected:
    virtual void SetUp() {
    }

    virtual void TearDown() {
    }

    cpptools::LinkedList<int> ll_int();
};

TEST_F(LinkedListTest,DefaultConstructor) {
    EXPECT_EQ(0, 0);
}