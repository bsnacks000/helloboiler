#define BOOST_TEST_MODULE test_hello  
#include <boost/test/unit_test.hpp> 
#include <helloboiler/hello.hpp>

#include <string>

using namespace boost; 
using namespace boost::unit_test;

BOOST_AUTO_TEST_SUITE(HelloTestSuite)

struct TestFixture
{
     TestFixture() {}
     ~TestFixture() {}
};

BOOST_FIXTURE_TEST_CASE(MyTest, TestFixture)
{
     Hello h;
     BOOST_CHECK_EQUAL(h.say_hello(), "oh hai");

}

// More test cases

BOOST_AUTO_TEST_SUITE_END()

// More test suites