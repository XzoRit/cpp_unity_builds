#include <lib/mul.hpp>

#include <numeric>
#include <vector>

namespace
{
int add_impl(int a, int b)
{
    std::vector<int> ints(a, b);
    return std::accumulate(ints.cbegin(), ints.cend(), 0);
}
} // namespace
namespace xzr
{
namespace lib
{
inline namespace v1
{
int mul(int a, int b)
{
    return add_impl(a, b);
}
} // namespace v1
} // namespace lib
} // namespace xzr
