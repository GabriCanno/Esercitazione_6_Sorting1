#pragma once

#include <iostream>
#include <vector>

#include <gtest/gtest.h>
#include "SortingAlgorithm.hpp"

namespace SortLibrary {
     
TEST(TestSorting, TestBubbleSort)
{
    std::vector<int> v = {4,56,77,65,3,24,51,7,88,9,11,23,14,34,5};
    BubbleSort<int>(v);
    std::vector<int> sortedV = {3,4,5,7,9,11,14,23,24,34,51,56,65,77,88};
    EXPECT_EQ(v, sortedV);
}

TEST(TestSorting, TestHeapSort)
{
    std::vector<int> v = {4,56,77,65,3,24,51,7,88,9,11,23,14,34,5};
    myHeap<int>(v);
    std::vector<int> sortedV = {3,4,5,7,9,11,14,23,24,34,51,56,65,77,88};
    EXPECT_EQ(v, sortedV);
}


}