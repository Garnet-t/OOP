# Указываем минимальную версию CMake, необходимую для этого проекта
cmake_minimum_required(VERSION 3.10)

# Определяем имя проекта
project(Lab1)

# Устанавливаем стандарт C++
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Добавляем исходные файлы
add_executable(lab1 lab1.cpp)
