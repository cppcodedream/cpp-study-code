cmake_minimum_required(VERSION 3.26)
project(cpp-study-code)

set(CMAKE_CXX_STANDARD 11)

# 递归遍历指定目录下的cpp文件
function(add_recursive_cpp_files DIRECTORY)
    file(GLOB_RECURSE SOURCE_FILES "${DIRECTORY}/*.cpp")
    foreach (A_CPP_FILE ${SOURCE_FILES})
        get_filename_component(EXECUTABLE_NAME ${A_CPP_FILE} NAME_WE)
        add_executable(${EXECUTABLE_NAME} ${A_CPP_FILE})
        set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/bin)
        set_target_properties(${EXECUTABLE_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${EXECUTABLE_OUTPUT_PATH})
    endforeach (A_CPP_FILE ${SOURCE_FILES})
endfunction()

# 在指定目录下递归添加cpp文件
add_recursive_cpp_files(${CMAKE_CURRENT_SOURCE_DIR})
