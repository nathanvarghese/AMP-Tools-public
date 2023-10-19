#pragma once
#include "iostream"
#include "AMPCore.h"
#include "hw/HW5.h"
#include "MyAlgorithm.h"

using namespace std;
using namespace amp;

int main() {
    // Define the problem parameters
    
    Problem2D problem = HW5::getWorkspace1();
    Eigen::Vector2d start = problem.q_start;
    Eigen::Vector2d goal = problem.q_goal;
    Eigen::Vector2d current_position = start;

    // Point obstacles[] = { Point(4, 1), Point(7, -1) };
    // int num_obstacles = 2;
    // double obstacle_radius = 0.5;

    double epsilon = 0.25;
    double step_size = 0.1;

    // Call the Gradient Descent Planning Algorithm
    Eigen::Vector2d final_position = GradientDescent(start, goal, obstacles, num_obstacles, obstacle_radius, epsilon, step_size);

    // cout << "Final position: (" << final_position.x << ", " << final_position.y << ")" << endl;

    return 0;
}