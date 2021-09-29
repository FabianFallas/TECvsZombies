cmake_minimum_required(VERSION 3.14)
project(CEvsEstudiantes)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -lcurl")
set(SOURCE_FILES main.cpp)

find_package(Qt5Widgets REQUIRED)
find_package( Qt5Core REQUIRED )
find_package( Qt5Gui REQUIRED )
find_package(Qt5Sql REQUIRED)

add_executable(CEvsEstudiantes main.cpp grafica/Game.cpp grafica/Game.h grafica/Bullet.cpp grafica/Bullet.h grafica/TorresPopUp.cpp grafica/TorresPopUp.h grafica/Zombie.cpp grafica/Zombie.h grafica/Cuadro.cpp grafica/Cuadro.h path/A_star.cpp path/Nodo.cpp path/Nodo.h path/lista.cpp path/lista.h path/Backtracking.cpp path/Backtracking.h grafica/Menu.cpp grafica/Menu.h genetico/Estudiantes.cpp genetico/Estudiantes.h genetico/GenericNode.h genetico/GenericLinkedList.h genetico/GA.cpp genetico/GA.h genetico/RNG.h genetico/RNG.cpp genetico/Gladiator.cpp genetico/Gladiator.h)

target_link_libraries(CEvsEstudiantes Qt5::Widgets Qt5::Core Qt5::Gui Qt5::Sql )

target_link_libraries(CEvsEstudiantes curl)
qt5_use_modules( CEvsEstudiantes Core Widgets Gui )