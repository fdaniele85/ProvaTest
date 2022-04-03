#define BOOST_TEST_MODULE FiniteSetTest
#include <catch2/catch_test_macros.hpp>

#include "FiniteSet.hpp"

TEST_CASE( "FiniteSet", "[FiniteSet]" ) {
    dferone::FiniteSet fs(10);
    REQUIRE_FALSE(fs.contains(3));
    fs.add(4);
    REQUIRE(fs.contains(4));
}
