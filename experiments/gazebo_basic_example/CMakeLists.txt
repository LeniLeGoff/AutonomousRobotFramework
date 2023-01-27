add_executable(gazebo_basic_example main.cpp)
target_link_libraries(gazebo_basic_example ${GAZEBO_LIBRARIES})
target_include_directories(gazebo_basic_example PUBLIC ${GAZEBO_INCLUDE_DIRS})
