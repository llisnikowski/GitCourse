cmake_minimum_required(VERSION 3.10)

project(GitCourse)

file(GLOB SRCS
    "src/*cpp"
)

add_executable(${CMAKE_PROJECT_NAME}
    ${SRCS}
)

add_subdirectory(library/spdlog)
target_link_libraries(${CMAKE_PROJECT_NAME} PUBLIC spdlog)