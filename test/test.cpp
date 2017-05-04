#define BOOST_TEST_MODULE SqrTests
#include <boost/test/unit_test.hpp>

#include "sqr.h"
#include "plus.h"
#include "blabla.h"

BOOST_AUTO_TEST_CASE(NowPassTest)
{
  BOOST_CHECK_EQUAL(4, sqr(2));
}

BOOST_AUTO_TEST_CASE(PassTest)
{
  BOOST_CHECK_EQUAL(4, sqr(2));
}

BOOST_AUTO_TEST_CASE(PlusTest)
{
	BOOST_CHECK_EQUAL(5, plus(2,3));
}

BOOST_AUTO_TEST_CASE(BlablaTest) {
	blabla b(15);


	BOOST_CHECK_EQUAL(15, b.getX());

}
