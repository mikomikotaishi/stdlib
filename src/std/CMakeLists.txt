file(GLOB_RECURSE STD_MODULES *.cppm)
# Name the library stdlib_std and not std, to ensure it does not conflict with the real ISO C++ std module
add_library(stdlib_std)
target_sources(stdlib_std
    PUBLIC
    FILE_SET CXX_MODULES FILES
    ${STD_MODULES}
)

configure_cpp_module_target(stdlib_std)

target_link_libraries(stdlib_std PUBLIC stdlib_alloc)

target_include_directories(stdlib_std 
    PUBLIC 
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../../include>
)

if(STDLIB_NO_STD)
    target_compile_definitions(stdlib_std PRIVATE STDLIB_NO_STD)
endif()

if(STDLIB_NO_ALLOC)
    target_compile_definitions(stdlib_std PRIVATE STDLIB_NO_ALLOC)
endif()

if(STDLIB_IMPLICIT_USING_CORE)
    target_compile_definitions(stdlib_std INTERFACE STDLIB_IMPLICIT_USING_CORE)
endif()

if(STDLIB_ENABLE_COMPAT_NAMES)
    target_compile_definitions(stdlib_std PRIVATE STDLIB_ENABLE_COMPAT_NAMES)
endif()

if(STDLIB_EXPERIMENTAL_STD)
    target_compile_definitions(stdlib_std PRIVATE STDLIB_EXPERIMENTAL_STD)
endif()

set_target_properties(stdlib_std PROPERTIES 
    CXX_STANDARD 23 
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF 
    CXX_MODULE_DYNDEP OFF
)

if(STDLIB_USE_RESERVED_STD_IDENTIFIERS)
    target_compile_definitions(stdlib_std PRIVATE 
        STDLIB_NO_RESERVED_STD_MODULE
        STDLIB_NO_RESERVED_STD_NAMESPACE
    )
    target_compile_options(stdlib_std PRIVATE 
        -Wno-reserved-module-identifier
    )
endif()
