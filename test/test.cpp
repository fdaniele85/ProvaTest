#define BOOST_TEST_MODULE FiniteSetTest
#include <boost/test/unit_test.hpp>

#include "FiniteSet.hpp"

BOOST_AUTO_TEST_CASE(NowPassTest)
{
  dferone::FiniteSet fs(10);
  BOOST_CHECK_EQUAL(fs.contains(3), false);
}
