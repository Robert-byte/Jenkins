#include "gtest/gtest.h"
#include "../src/lib.hpp"

TEST(library, Add) {
	for (std::size_t i = 0; i < 10; ++i) {
		ASSERT_EQ(lib::Add(i, i * 2), i * 3);
	}
}

//TEST(library, Fail) {
//	for (std::size_t i = 0; i < 10; ++i) {
//		ASSERT_EQ(lib::Add(i, i * 2), i * 4);
//	}
//}
