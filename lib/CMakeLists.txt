set(
  inc_dir
  ${CMAKE_CURRENT_SOURCE_DIR}
)

set(
  src_dir
  ${inc_dir}/lib
)

add_library(
  lib
)

target_sources(
  lib
  PRIVATE
  "${src_dir}/add.cpp"
  "${src_dir}/add.hpp"
  "${src_dir}/anon_ns.hpp"
  "${src_dir}/mul.cpp"
  "${src_dir}/mul.hpp"
)

target_include_directories(
  lib
  PUBLIC
    ${inc_dir}
)

set_target_properties(
  lib
  PROPERTIES
    UNITY_BUILD "ON"
    UNITY_BUILD_UNIQUE_ID "THIS_LIB_UNITY_ID"
)

add_library(
  lib::lib
  ALIAS
  lib
)

add_executable(
  lib_test
)

target_sources(
  lib_test
  PRIVATE
  "${src_dir}/add.test.cpp"
  "${src_dir}/mul.test.cpp"
  "${src_dir}/main.test.cpp"
)

target_link_libraries(
  lib_test
  PRIVATE
    lib::lib
    Boost::unit_test_framework
)

add_test(
  NAME
    lib::test
  COMMAND
    lib_test
    "--color_output=false"
)
