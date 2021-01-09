#
# CMake configs
#
#  Copyright 2019 Hsuan-Ting Lu
#
#  Licensed under the Apache License, Version 2.0 (the "License");
#  you may not use this file except in compliance with the License.
#  You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
#  Unless required by applicable law or agreed to in writing, software
#  distributed under the License is distributed on an "AS IS" BASIS,
#  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#  See the License for the specific language governing permissions and
#  limitations under the License.
#

cmake_minimum_required(VERSION 3.12)
cmake_policy(SET CMP0076 NEW)

project(howhowcpp LANGUAGES CXX)

add_library(howhow SHARED)
target_include_directories(howhow
    PUBLIC
        ${PROJECT_SOURCE_DIR}
)
target_sources(howhow
    PUBLIC
        howhow.hpp
    PRIVATE
        howhow.cpp
)
target_compile_features(howhow
    PUBLIC
        cxx_std_11
)
set_target_properties(howhow PROPERTIES
    CXX_EXTENSIONS OFF
)
target_compile_options(howhow
    PRIVATE
        -Wall
        -Wextra
        -pedantic
        -Werror
)


add_subdirectory(examples EXCLUDE_FROM_ALL)


include(GNUInstallDirs)
install(TARGETS howhow
    DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
install(
    FILES howhow.hpp
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)
