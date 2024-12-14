cmake_minimum_required(VERSION 3.10)

project(FigureProject)

# мой стандарт C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# директория с заголовочными файлами
include_directories(include)

# исполняемый файл (будет собираться только main)
add_executable(main
    src/main.cpp
    src/figure.cpp
)
