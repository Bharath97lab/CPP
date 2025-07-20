# AppProject/CMakeLists.txt

add_executable(app main.cpp)

# Link with the LibraryFiles static library
target_link_libraries(app PRIVATE lib)
