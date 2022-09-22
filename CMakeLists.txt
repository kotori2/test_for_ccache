cmake_minimum_required(VERSION 3.5)
project(test CXX)

include(CheckIncludeFileCXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if (MSVC)
  add_compile_definitions(NOMINMAX)
  SET(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} /utf-8")
  SET(CMAKE_C_FLAGS  "${CMAKE_C_FLAGS} /utf-8")
endif()

add_executable(${PROJECT_NAME}
        main.cc
)

find_package(nlohmann_json CONFIG REQUIRED)

target_link_libraries(${PROJECT_NAME}
        PRIVATE
        nlohmann_json::nlohmann_json)
