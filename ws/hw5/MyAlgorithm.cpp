// #include "iostream"
// #include "MyAlgorithm.h"

// Point::Point(double _x, double _y) : x(_x), y(_y) {}

// double CalculateAttractivePotential(const Point& q, const Point& q_goal) {
//     // Using a quadratic potential function
//     double att_potential = zeta * ((q.x - goal.x) + (q.y - goal.y));
//     return att_potential;
// }


// double CalculateRepulsivePotential(const Point& q, const Point& obstacle, double obstacle_radius) {
//     // Implement the repulsive potential calculation
//     double distance = sqrt((q.x - obstacle.x) * (q.x - obstacle.x) + (q.y - obstacle.y) * (q.y - obstacle.y));

//     if (distance < obstacle_radius) {
//         return INFINITY; // Representing an obstacle at a very close distance
//     }

//     return 0.5 * (1.0 / (distance - obstacle_radius) - 1.0 / obstacle_radius);
// }


// double CalculateTotalPotential(const Point& q, const Point& q_goal, const Point obstacles[], int num_obstacles, double obstacle_radius) {
//      double total_potential = CalculateAttractivePotential(q, q_goal);

//     for (int i = 0; i < num_obstacles; i++) {
//         total_potential += CalculateRepulsivePotential(q, obstacles[i], obstacle_radius);
//     }

//     return total_potential;
// }

// Point GradientDescent(const Point& q_start, const Point& q_goal, const Point obstacles[], int num_obstacles, double obstacle_radius, double epsilon, double step_size) {
//     // Implement the gradient descent algorithm
//     Point current_position = start;

//     while (true) {
//         double current_potential = CalculateTotalPotential(current_position, q_goal, obstacles, num_obstacles, obstacle_radius);

//         if (current_potential < epsilon) {
//             break;  // Reached the goal within the given epsilon radius
//         }

//         double gradient_x = 0.0;
//         double gradient_y = 0.0;

//         // Calculate gradient using finite differences
//         for (int i = 0; i < num_obstacles; i++) {
//             double dx = current_position.x - obstacles[i].x;
//             double dy = current_position.y - obstacles[i].y;
//             double distance = sqrt(dx * dx + dy * dy);
//             double repulsive_potential = CalculateRepulsivePotential(current_position, obstacles[i], obstacle_radius);
//             gradient_x += repulsive_potential * (dx / distance);
//             gradient_y += repulsive_potential * (dy / distance);
//         }

//         gradient_x += (current_position.x - q_goal.x);
//         gradient_y += (current_position.y - q_goal.y);

//         // Update the current position using fixed step size
//         current_position.x -= step_size * gradient_x;
//         current_position.y -= step_size * gradient_y;
//     }

//     return current_position;
// }

// void MyAlgorithm::MoveForward() 
//  {
//     x += step*std::cos(heading);
//     y += step*std::sin(heading);
//     path.waypoints.push_back(Eigen::Vector2d(x,y));
//     FindHeadingToGoal();
//  }

// void MyAlgorithm::FindHeadingToGoal()
// {
//     heading=tan((goal(1)-y)/(goal(0)-x));
//     cout << "Heading: " << heading << endl;
// }
