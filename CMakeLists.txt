#cmake_minimum_required(VERSION 3.22)
#project(C__11Pro)
#
#set(CMAKE_CXX_STANDARD 11)
#
#add_executable(C__11Pro src/main.cpp)


cmake_minimum_required(VERSION 3.15)
project(MyHomework)

set(CMAKE_CXX_STANDARD 11)

# 设置可执行文件的输出目录
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

# 遍历src目录下的所有.cpp文件，每个文件都生成一个可执行文件
file(GLOB SOURCE_FILES "src/*.cpp")

foreach(SOURCE_FILE ${SOURCE_FILES})
    # 获取文件名（不包含路径和扩展名）
    get_filename_component(EXECUTABLE_NAME ${SOURCE_FILE} NAME_WE)

    # 生成可执行文件
    add_executable(${EXECUTABLE_NAME} ${SOURCE_FILE})

    # 设置可执行文件依赖的头文件目录
    target_include_directories(${EXECUTABLE_NAME} PRIVATE include)

    # 设置可执行文件依赖的其他库（如果有的话）
    # target_link_libraries(${EXECUTABLE_NAME} ...)
endforeach()
