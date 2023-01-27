#include <iostream>
#include <gazebo/gazebo.hh>
#include <gazebo/common/common.hh>
#include <gazebo/physics/physics.hh>

int main(int argc, char** argv){
    // Initialize gazebo.
     gazebo::setupServer(argc, argv);

     // Load a world
     gazebo::physics::WorldPtr world = gazebo::loadWorld("worlds/empty.world");

     // This is your custom main loop. In this example the main loop is just a
     // for loop with 2 iterations.
     for (unsigned int i = 0; i < 2; ++i)
     {
       // Run simulation for 100 steps.
       gazebo::runWorld(world, 100);
     }

     // Close everything.
     gazebo::shutdown();
}
