/** \file trees_test.cc
 * Unit tests for the cpptools trees data structures.
 *
 * Copyright 2018 Daniel Clark
 */
#include <algorithm>
#include <vector>

#include "gtest/gtest.h"

#include "cpptools/trees.h"


class BinarySearchTreeTest : public ::testing::Test {
  protected:
    virtual void SetUp() {
    }

    virtual void TearDown() {
    }
};

TEST_F(BinarySearchTreeTest, SimpleConstructors) {
  int i = 1;
  cpptools::BinarySearchTree<int> bst_l{i};
  EXPECT_EQ(bst_l.data(), i);
  cpptools::BinarySearchTree<int> bst_r{std::move(i)};
  EXPECT_EQ(bst_r.data(), i);
}

TEST_F(BinarySearchTreeTest, CopyConstructor) {
  cpptools::BinarySearchTree<int> bst{1};
  cpptools::BinarySearchTree<int> copy{bst};
  EXPECT_EQ(bst.data(), copy.data());
  EXPECT_EQ(bst.left(), copy.left());
  EXPECT_EQ(bst.right(), copy.right());
}
