set_project("stdlibx")
set_version("0.0.1")

add_rules("mode.release", "mode.debug")
set_languages("c++23")

-- Forcing Clang temporarily, will probably change this later
set_toolchains("llvm")

set_warnings("all")
-- set_warnings("all", "error")

if is_mode("debug") then 
    set_symbols("debug")
    set_optimize("none")
else 
    set_symbols("hidden")
    set_optimize("fastest")
    set_strip("all")
end

set_policy("build.sanitizer.address", true)
set_policy("build.c++.modules", true)

target("stdlibx")
set_kind("shared")
-- set_kind("static")
add_includedirs("include")
add_files(
    -- Standard library directories
    "src/**/*.cppm"
)

