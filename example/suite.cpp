//
// Copyright (c) 2019 Kris Jusiak (kris at jusiak dot net)
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//
#include <boost/ut.hpp>

namespace ut = boost::ut;

using ut::operator""_test;

// clang-format off
ut::suite _ {
  "test suite"_test = [] {
    using namespace ut;
    "should be equal"_test = [] { expect(42_i == 42); };
    "should not be equal "_test = [] { expect(1_i != 2); };
  }
};
// clang-format on

int main() {}