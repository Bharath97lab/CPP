file(GLOB_RECURSE LIB_HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/include/*.h")
file(GLOB_RECURSE LIB_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")

add_library(
    lib STATIC ${LIB_SOURCES} ${LIB_HEADERS}
)
target_include_directories(lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)