/*
 * Copyright (C) 2019  Hsuan-Ting Lu
 *
 * Example of HowHowCpp usage
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope tha it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */

#include <chrono>
#include <iostream>
#include <string>

#include "howhow.hpp"
int main() {
    // direct call without arguments
    std::cout << howhow::talk() << std::endl;

    // calls with designated random seed
    std::cout << howhow::talk(0) << std::endl;
    std::cout
        << howhow::talk(
               std::chrono::system_clock::now().time_since_epoch().count())
        << std::endl;

    // store sentence in string
    std::string howhow_quote = howhow::talk();
}
