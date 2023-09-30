set(target lib_proj)

# compile target
# SHARED='.dll', STATIC='.lib'
add_library(${target}
  src/public_module.cpp
  src/private_module.cpp
)

# language version
set(CMAKE_CXX_STANDARD 17)

# compile options
target_compile_options(${target} PUBLIC -Wall)

# additional include directories
target_include_directories(${target}
  PRIVATE
    include
)

# # linker
# target_link_directories(${target}
#   PRIVATE
#     hogehoge
# )
# target_link_libraries(${target}
#   PRIVATE
#     hogehoge(.lib/.a)
# )

# macro settings
target_compile_definitions(${target}
  PUBLIC 
    NO_WARN
    PI=3.1415926535
)

# # something depends on OS
# if(WIN32)
#   something
# else()
#   something
# endif()

# output directory (binary)
install(TARGETS ${target}
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION bin
  RUNTIME DESTINATION bin
)

# output directory (header)
install(DIRECTORY include
  DESTINATION include
)