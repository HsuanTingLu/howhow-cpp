#
# HowHowCpp example usage
#
#   Copyright 2019 Hsuan-Ting Lu
#
#   Licensed under the Apache License, Version 2.0 (the "License");
#   you may not use this file except in compliance with the License.
#   You may obtain a copy of the License at
#
#       http://www.apache.org/licenses/LICENSE-2.0
#
#   Unless required by applicable law or agreed to in writing, software
#   distributed under the License is distributed on an "AS IS" BASIS,
#   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#   See the License for the specific language governing permissions and
#   limitations under the License.
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

