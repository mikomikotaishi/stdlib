file(GLOB_RECURSE ALLOC_MODULES *.cppm)
add_library(stdlib_alloc)
target_sources(stdlib_alloc
    PUBLIC
    FILE_SET CXX_MODULES FILES
    ${ALLOC_MODULES}
)

configure_cpp_module_target(stdlib_alloc)

target_link_libraries(stdlib_alloc PUBLIC stdlib_core)

target_include_directories(stdlib_alloc 
    PUBLIC 
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../../include>
)

if(STDLIB_NO_STD)
    target_compile_definitions(stdlib_alloc PRIVATE STDLIB_NO_STD)
endif()

if(STDLIB_NO_ALLOC)
    target_compile_definitions(stdlib_alloc PRIVATE STDLIB_NO_ALLOC)
endif()

if(STDLIB_IMPLICIT_USING_CORE)
    target_compile_definitions(stdlib_alloc INTERFACE STDLIB_IMPLICIT_USING_CORE)
endif()

if(STDLIB_ENABLE_COMPAT_NAMES)
    target_compile_definitions(stdlib_alloc PRIVATE STDLIB_ENABLE_COMPAT_NAMES)
endif()

set_target_properties(stdlib_alloc PROPERTIES 
    CXX_STANDARD 23 
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF 
    CXX_MODULE_DYNDEP OFF
)

if(STDLIB_USE_RESERVED_STD_IDENTIFIERS)
    target_compile_definitions(stdlib_alloc PRIVATE 
        STDLIB_NO_RESERVED_STD_MODULE
        STDLIB_NO_RESERVED_STD_NAMESPACE
    )
    target_compile_options(stdlib_alloc PRIVATE 
        -Wno-reserved-module-identifier
    )
endif()
