project(astxx)
cmake_minimum_required(VERSION 2.8)
include_directories(./include)
aux_source_directory(./src SRC_DIR)
add_library(${PROJECT_NAME} SHARED ${SRC_DIR})

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)
target_link_libraries(${PROJECT_NAME} boost_system Threads::Threads)
install (TARGETS astxx DESTINATION lib)
install (
    DIRECTORY ${CMAKE_SOURCE_DIR}/include/
    DESTINATION include
    FILES_MATCHING PATTERN "*.h*")
    

# add_executable(manager examples/manager.cpp)
# target_link_libraries(manager astxx)

# add_executable(queue-event-test examples/queue-event-test.cpp)
# target_link_libraries(queue-event-test astxx)
    