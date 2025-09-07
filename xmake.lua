set_project("openJuice")
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

target("stdlib")
set_kind("library")
add_files(
    -- Macros
    "include/*.hpp",

    -- Standard library directories
    "stdlib/*.cppm",
    "stdlib/algorithm/*.cppm",
    "stdlib/collections/*.cppm",
    "stdlib/core/*.cppm",
    "stdlib/fmt/*.cppm",
    "stdlib/fs/*.cppm",
    "stdlib/futures/*.cppm",
    "stdlib/io/*.cppm",
    "stdlib/iterator/*.cppm",
    "stdlib/math/*.cppm",
    "stdlib/mem/*.cppm",
    "stdlib/net/*.cppm",
    "stdlib/os/*.cppm",
    "stdlib/os/linux/*.cppm",
    "stdlib/os/linux/arpa/*.cppm",
    "stdlib/os/linux/asm-generic/*.cppm",
    "stdlib/os/linux/net/*.cppm",
    "stdlib/os/linux/netinet/*.cppm",
    "stdlib/os/linux/sys/*.cppm",
    "stdlib/os/linux/sys/platform/*.cppm",
    "stdlib/os/unix/*.cppm",
    "stdlib/os/unix/arpa/*.cppm",
    "stdlib/os/unix/net/*.cppm",
    "stdlib/os/unix/netinet/*.cppm",
    "stdlib/os/unix/sys/*.cppm",
    "stdlib/os/win32/*.cppm",
    "stdlib/random/*.cppm",
    "stdlib/ranges/*.cppm",
    "stdlib/sync/*.cppm",
    "stdlib/sys/*.cppm",
    "stdlib/text/*.cppm",
    "stdlib/text/string/*.cppm",
    "stdlib/thread/*.cppm",
    "stdlib/time/*.cppm",
    "stdlib/util/*.cppm",
)

