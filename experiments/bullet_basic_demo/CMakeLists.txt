

add_executable(bullet_basic_demo basic_example.cpp main.cpp)
target_include_directories(bullet_basic_demo PUBLIC
    ${BULLET_INCLUDE_DIRS})
target_link_libraries(bullet_basic_demo ${BULLET_LIBRARIES})

add_executable(bullet_basic_demo_gui basic_example.cpp main_gui.cpp
    ../../modules/bullet3/examples/Utils/b3Clock.cpp
    ../../modules/bullet3/examples/ExampleBrowser/OpenGLGuiHelper.cpp
    ../../modules/bullet3/examples/ExampleBrowser/CollisionShape2TriangleMesh.cpp)
target_include_directories(bullet_basic_demo_gui PUBLIC
    ${BULLET_INCLUDE_DIRS})
target_link_libraries(bullet_basic_demo_gui ${BULLET_LIBRARIES} BulletRobotics BulletDynamics BulletCollision LinearMath OpenGLWindow Bullet3Common)
