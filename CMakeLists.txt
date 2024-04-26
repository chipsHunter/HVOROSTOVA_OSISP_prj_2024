cmake_minimum_required(VERSION 3.27)
project(course)

set(CMAKE_CXX_STANDARD 17)
find_package(SFML 2.6.1 COMPONENTS graphics audio)
add_executable(course main.cpp
        state_managment/state_stack/StateStack.cpp
        state_managment/state_stack/StateStack.h
        state_managment/state/State.cpp
        state_managment/state/State.h
        state_managment/StatesEnum.h
        resource_managment/TextureHolder/ResourceHolder.cpp
        resource_managment/TextureHolder/ResourceHolder.h
        resource_managment/Textures.h
        resource_managment/Fonts.h)
target_link_libraries(course sfml-graphics)