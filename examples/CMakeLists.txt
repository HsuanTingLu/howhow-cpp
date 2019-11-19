#
# Copyright (C) 2019  Hsuan-Ting Lu
#
# HowHowCpp example usage
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

add_executable(example EXCLUDE_FROM_ALL example.cpp)

target_include_directories(example
    PRIVATE
        ${PROJECT_SOURCE_DIR}
)

target_compile_features(example
    PRIVATE
        cxx_std_11
)
set_target_properties(example PROPERTIES
    CXX_EXTENSIONS OFF
)

target_compile_options(example
    PRIVATE
        -Wall
        -Wextra
        -pedantic
        -Werror
)

target_link_libraries(example PRIVATE howhow)

