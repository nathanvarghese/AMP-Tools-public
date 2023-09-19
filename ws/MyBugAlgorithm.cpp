#include "MyBugAlgorithm.h"

// Implement your methods in the `.cpp` file, for example:
amp::Path2D MyBugAlgorithm::plan(const amp::Problem2D& problem) {

    // Your algorithm solves the problem and generates a path. Here is a hard-coded to path for now...
    heading=0;
    x=5;
    y=4;

    //amp::Path2D path;
    // path.waypoints.push_back(problem.q_init);
    // path.waypoints.push_back(Eigen::Vector2d(1.0, 5.0));
    // path.waypoints.push_back(Eigen::Vector2d(3.0, 9.0));
    // path.waypoints.push_back(problem.q_goal);

    
    for (int i=0; i < 10; ++i)
    {
        movefwd();




    }


    return path;
}
 void MyBugAlgorithm::movefwd() 
 {
    x += std::cos(heading);
    y += std::sin(heading);
    path.waypoints.push_back(Eigen::Vector2d(x,y));
    



 }