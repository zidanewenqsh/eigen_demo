cmake_minimum_required(VERSION 3.10)  # 指定CMake的最小版本需求
project(eigen_demo)

# 设置C++标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 如果你已经将Eigen的路径添加到了默认的包含目录，以下这行可能不是必需的
# 只有当Eigen库不在标准路径下时，你需要手动添加包含目录
include_directories("D:\\MySoft\\PCL 1.9.1\\3rdParty\\Eigen\\eigen3")  # 替换为你Eigen库的实际路径

# 添加可执行文件
add_executable(${PROJECT_NAME} src/main.cpp)

# 可选：定义宏或编译选项
add_definitions(-DMY_DEFINITION)
