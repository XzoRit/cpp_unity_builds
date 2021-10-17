#include <lib/add.hpp>

#include <lib/anon_ns.hpp>

namespace anon_ns
{
int add_impl(int a, int b)
{
    return a + b;
}
} // namespace anon_ns
namespace xzr
{
namespace lib
{
inline namespace v1
{
int add(int a, int b)
{
    return anon_ns::add_impl(a, b);
}
} // namespace v1
} // namespace lib
} // namespace xzr
