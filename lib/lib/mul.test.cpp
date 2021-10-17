#include <lib/mul.hpp>

#include <boost/test/unit_test.hpp>

namespace
{
using xzr::lib::mul;

BOOST_AUTO_TEST_SUITE(lib_tests)

BOOST_AUTO_TEST_CASE(lib_mul)
{
    BOOST_TEST(mul(2, 3) == 6);
}

BOOST_AUTO_TEST_SUITE_END()
} // namespace
