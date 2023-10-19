// #include "MyBugAlgorithm.h"
// #include "cmath"

// using namespace std;
// // Implement your methods in the `.cpp` file, for example:
// amp::Path2D MyBugAlgorithm::plan(const amp::Problem2D& problem) {

//     // Your algorithm solves the problem and generates a path. Here is a hard-coded to path for now...
//     // heading=0;
//     // x=5;
//     // y=4;
//     // problem.
//     //amp::Path2D path;
//     path.waypoints.push_back(problem.q_init);
//     // path.waypoints.push_back(Eigen::Vector2d(1.0, 5.0));
//     // path.waypoints.push_back(Eigen::Vector2d(3.0, 9.0));
//     step = 0.1;
//     goal = problem.q_goal;
//     path.waypoints.push_back(problem.q_goal);

//     return path;
// }

// void MyBugAlgorithm::MoveForward() 
//  {
//     x += step*std::cos(heading);
//     y += step*std::sin(heading);
//     path.waypoints.push_back(Eigen::Vector2d(x,y));
//     FindHeadingToGoal();
    
//  }

// void MyBugAlgorithm::FindHeadingToGoal()
// {
//     heading=tan((goal(1)-y)/(goal(0)-x));
//     cout << "Heading: " << heading << std::endl;
// }

// // vector<vector<double, double>> MyBugAlgorithm::obs_cood(const amp::Problem2D& problem) const
// // {
// //     vector<amp::Obstacle2D> obs = problem.obstacles;
    

// // Collision Checker algorithm
// // Make a function for collision checking >> input the Obstacles of HW2
// // Construct a for loop for making the indivisual vectors of the Obstacles
// // Check whether point is on the left or right of all the vectors




// bool CollisionChecker(const amp::Obstacle2D& Obstacle)
// {
//     int n;
//     vector<Eigen::Vector2d> x;
//     vector<Eigen::Vector2d> coordinates;
//     coordinates = (3,5);

//     n = length(Obstacle.verticesCCW());



//     // Getting the indivisual vectors of the obstacle
//     for (int i=1; i<=n; i++){
        
//         x(i) = Obstacle.verticesCCW(i)-Obstacle.verticesCCW(i+1);
//         cout<<"The value of vector x is: "<<x(i);
//     }

//     for (int i=1; i<=n; i++){

//         //if (coordinates.x > x(i) || coordinates.y > x(i))
//             return true;
//         else    
//             return false;
//     }

// }


// // }

// //  void MyBugAlgorithm::mline()
// //  {
//     // At time t=0, check the distance from start to end
//     // set the mline for the bug
// //     mline = sqrt(pow(x2 - x, 2) + pow(y2 - y, 2));
// //     std::cout << "Distance between the points is" << mline << endl;
// //  } 

// //  void MyBugAlgorithm::FollowObstacle()
// //  {

// //  }

// // void Bug1(Point start, Point goal, vector<vector<int>>& grid)
// // {



// // }