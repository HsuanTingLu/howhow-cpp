#
# Copyright (C) 2019  Hsuan-Ting Lu
#
# CMake configs
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope tha it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <https://www.gnu.org/licenses/>.
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
