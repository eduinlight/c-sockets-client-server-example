cmake_minimum_required(VERSION 3.22.3)

project(acm VERSION 1.0)

configure_file(./src/config.h.in ./src/config.h)

# specify the C++ standard c++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

file(GLOB SOURCES CONFIGURE_DEPENDS src/**/*.c)
add_executable(${PROJECT_NAME} src/main.c ${SOURCES})

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_BINARY_DIR})

# update submodules
# find_package(Git QUIET)
# if(GIT_FOUND AND EXISTS "${PROJECT_SOURCE_DIR}/.git")
# # Update submodules as needed
#     option(GIT_SUBMODULE "Check submodules during build" ON)
#     if(GIT_SUBMODULE)
#         message(STATUS "Submodule update")
#         execute_process(COMMAND ${GIT_EXECUTABLE} submodule update --init --recursive
#                         WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
#                         RESULT_VARIABLE GIT_SUBMOD_RESULT)
#         if(NOT GIT_SUBMOD_RESULT EQUAL "0")
#             message(FATAL_ERROR "git submodule update --init --recursive failed with ${GIT_SUBMOD_RESULT}, please checkout submodules")
#         endif()
#     endif()
# endif()
#
# if(NOT EXISTS "${PROJECT_SOURCE_DIR}/extern/fmt/CMakeLists.txt")
#     message(FATAL_ERROR "The submodules were not downloaded! GIT_SUBMODULE was turned off or failed. Please update submodules and try again.")
# endif()

#fmt
# add_subdirectory(extern/fmt)
# target_include_directories(${PROJECT_NAME} PUBLIC extern/fmt/include)
# target_link_directories(${PROJECT_NAME} PRIVATE extern/fmt)
# target_link_libraries(${PROJECT_NAME} fmt)
