file(GLOB_RECURSE STDX_MODULES *.cppm)
add_library(stdlib_stdx)
target_sources(stdlib_stdx
    PUBLIC
    FILE_SET CXX_MODULES FILES
    ${STDX_MODULES}
)

configure_cpp_module_target(stdlib_stdx)

target_link_libraries(stdlib_stdx PUBLIC stdlib_std)

target_include_directories(stdlib_stdx 
    PUBLIC 
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../../include>
)

if(STDLIB_NO_STD)
    target_compile_definitions(stdlib_stdx PRIVATE STDLIB_NO_STD)
endif()

if(STDLIB_NO_ALLOC)
    target_compile_definitions(stdlib_stdx PRIVATE STDLIB_NO_ALLOC)
endif()

if(STDLIB_IMPLICIT_USING_CORE)
    target_compile_definitions(stdlib_stdx INTERFACE STDLIB_IMPLICIT_USING_CORE)
endif()

if(STDLIB_EXTENSIONS)
    target_compile_definitions(stdlib_stdx PRIVATE STDLIB_EXTENSIONS)
endif()

if(STDLIB_EXTENSIONS_COMPILE_COMPILER_LIBRARY)
    target_compile_definitions(stdlib_stdx PRIVATE STDLIB_EXTENSIONS_COMPILE_COMPILER_LIBRARY)
endif()

set_target_properties(stdlib_stdx PROPERTIES 
    CXX_STANDARD 23 
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF 
    CXX_MODULE_DYNDEP OFF
)

if(STDLIB_USE_RESERVED_STD_IDENTIFIERS)
    target_compile_definitions(stdlib_stdx PRIVATE 
        STDLIB_NO_RESERVED_STD_MODULE
        STDLIB_NO_RESERVED_STD_NAMESPACE
    )
    target_compile_options(stdlib_stdx PRIVATE 
        -Wno-reserved-module-identifier
    )
endif()
