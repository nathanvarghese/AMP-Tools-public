// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include <Eigen/Dense>

// using namespace std;
// using namespace amp;
// // Function to create a mirror image of robot coordinates

// vector<Eigen::Vector2d> mirrorImage(Obstacle2D Robot) {
//     vector<Eigen::Vector2d> InverseRobot;
//     for (i=0; i<Robot.size(); i++)
//     {
//         InverseRobot.verticesCCW()[i] = -Robot.verticesCCW()[i];
//         cout<<"Inverted Robot Vertices" <<InverseRobot.verticesCCW()[i]<<endl;
//         return InverseRobot.verticesCCW();
//     }
// }


// // vector<Eigen::Vector2d> GetCood(const Obstacle2D& Robot, const) 
// // // {
// //     // Create a vector of pairs to hold robot coordinates

// //     // Apply mirror image transformation
// //     mirrorImage(Robot);

// //     // Print the mirrored Robot vector
// //     cout << "\nMirror Image of Robot Coordinates:" << endl;
// //     for (size_t i = 0; i < Robot.size(); ++i) {
// //         cout << "Robot vertices " << i + 1 << ": (" << Robot[i].first << ", " << Robot[i].second << ")" << endl;
// //     }

// //     return Robot;
// // }



// // Function to calculate the C-space
// std::vector<Eigen::Matrix<double, 2, 1>> CalculateCSpace(const std::vector<std::pair<int, int>>& Obstacle, const std::vector<std::pair<int, int>>& Robot) {
//     std::vector<Eigen::Matrix<double, 2, 1>> CObstaclemember;

//     // Convert robot vertices to Eigen vectors
//     std::vector<Eigen::Matrix<double, 2, 1>> robotVertices;
//     for (const auto& rob_vertex : Robot) {
//         Eigen::Matrix<double, 2, 1> rob_point;
//         rob_point << rob_vertex.first, rob_vertex.second;
//         robotVertices.push_back(rob_point);
//     }

//     // Iterate through the obstacle vertices
//     for (const auto& obs_vertex : Obstacle) {
//         Eigen::Matrix<double, 2, 1> obs_point;
//         obs_point << obs_vertex.first, obs_vertex.second;

//         // Iterate through the robot vertices
//         for (const auto& rob_point : robotVertices) {
//             // Calculate the C-space point as the sum of obstacle and robot points
//             Eigen::Matrix<double, 2, 1> c_space_point = obs_point + rob_point;

//             // Add the calculated C-space point to the result
//             CObstaclemember.push_back(c_space_point);
//         }
//     }

//     return CObstaclemember;
// }





























// // vector<Eigen::Vector2d> CalculateCSpace(const vector<pair<int, int>>& Robot, const vector<pair<int, int>>& Robot)
// // {}






// // class HW4::Obstacle2D MyCObstacle()
// // {
// //     cout<< "Minkowski Difference here";

// // }

// // int inv_robot(const Robot& inputRobot) {
// //     Robot invertedRobot;
    
// //     // Invert the x and y coordinates of each vertex
// //     invertedRobot.A.x = -inputRobot.A.x;
// //     invertedRobot.A.y = -inputRobot.A.y;

// //     invertedRobot.B.x = -inputRobot.B.x;
// //     invertedRobot.B.y = -inputRobot.B.y;
    
// //     invertedRobot.C.x = -inputRobot.C.x;
// //     invertedRobot.C.y = -inputRobot.C.y;

// //     return invertedRobot;
// //     cout<<  invertedRobot.A.x<< endl;
// // }






// // Obstacle2D inverseRobot()
// // {}

// // Obstacle2D MyCObstacle()
// // {}


// // Obstacle2D CalculateCspace(Obstacle2D obstacle, Obtacle2D obstacle)
// // {}