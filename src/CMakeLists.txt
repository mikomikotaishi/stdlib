add_subdirectory(core)

if(NOT STDLIB_NO_ALLOC)
    add_subdirectory(alloc)
endif()

if(NOT STDLIB_NO_STD)
    add_subdirectory(std)
endif()

if(NOT STDLIB_NO_STDX)
    add_subdirectory(stdx)
endif()

target_link_libraries(stdlib INTERFACE stdlib_core)

if(NOT STDLIB_NO_ALLOC)
    target_link_libraries(stdlib INTERFACE stdlib_alloc)
endif()

if(NOT STDLIB_NO_STD)
    target_link_libraries(stdlib INTERFACE stdlib_std)
endif()

if(STDLIB_EXTENSIONS)
    target_link_libraries(stdlib INTERFACE stdlib_stdx)
endif()