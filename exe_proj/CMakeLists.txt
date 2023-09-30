set(target exe_proj)

# compile target
add_executable(${target}
  src/main.cpp
)

# linker
target_link_libraries(${target}
  lib_proj
)

# additional include directories
target_include_directories(${target}
  PRIVATE
    ../lib_proj/include
)

# output directory (binary)
install(TARGETS ${target}
  RUNTIME DESTINATION bin
)