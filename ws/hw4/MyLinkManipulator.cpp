// #include <MyLinkManipulator.h>
// #include <iostream>

// using namespace amp;
// using namespace std;


// MyLinkManipulator::MyLinkManipulator(std::vector<double>& link_lengths) : LinkManipulator2D(link_lengths) {
//     //link lengths
//     m_link_lengths = {0.5, 1.0, 0.5};
    
//     //joint angles (radians)
//     ManipulatorState default_config = {M_PI / 6, M_PI / 3, 7 * M_PI / 4};
//     m_joint_angles = default_config;

//     // Calculate the joint locations iteratively based on the current joint angles
//     for (int i = 0; i <= 2; ++i) {
//         x += m_link_lengths[i] * cos(state[i]);
//         y += m_link_lengths[i] * sin(state[i]);
//         cout<< "x,y :"<< x << y << endl;
//     }

//         Eigen::Vector2d link_manipulator = Eigen::Vector2d(x, y);

//         return link_manipulator;
//     } 

// // Eigen::Vector2d MyLinkManipulator::getJointLocation(const ManipulatorState& state, uint32_t joint_index) const {
// //     if (joint_index < nLinks()) {
// //         double x = 0.0;
// //         double y = 0.0;
        
// //         // Calculate the joint locations iteratively based on the current joint angles
// //         for (uint32_t i = 0; i <= joint_index; ++i) {
// //             x += m_link_lengths[i] * std::cos(state[i]);
// //             y += m_link_lengths[i] * std::sin(state[i]);
// //         }

// //         return Eigen::Vector2d(x, y);
// //     } 
// // }

// // MyLinkManipulator::MyLinkManipulator() : LinkManipulator2D() {
// //     //link lengths
// //     m_link_lengths = {0.5, 1.0, 0.5};

// //     //joint angles (radians)
// //     ManipulatorState default_config = {M_PI / 6, M_PI / 3, 7 * M_PI / 4};
// //     m_joint_angles = default_config;
// // }

// // MyLinkManipulator::MyLinkManipulator(const Eigen::Vector2d& base_location, const std::vector<double>& link_lengths)
// //     : LinkManipulator2D(base_location, link_lengths) {
// //     // Default joint angles (radians)
// //     ManipulatorState default_config = {M_PI / 6, M_PI / 3, 7 * M_PI / 4};
// //     m_joint_angles = default_config;
// // }


// // ManipulatorState MyLinkManipulator::getConfigurationFromIK(const Eigen::Vector2d& end_effector_location) const {
// //     // Initialize joint angles with zeros
// //     ManipulatorState joint_angles(nLinks(), 0.0);


// //     ManipulatorState target_config = {M_PI / 6, M_PI / 3, 7 * M_PI / 4};
    
// //     // Print the IK solution
// //     std::cout << "IK Solution: ";
// //     for (double angle : target_config) {
// //         std::cout << angle << " ";
// //     }
// //     std::cout << std::endl;

// //     return target_config;
// // }

// // Eigen::Vector2d MyLinkManipulator::getEndEffectorLocation(const ManipulatorState& state) const {
// //     // Calculate the end effector location based on the current joint angles
// //     Eigen::Vector2d end_effector_loc(0.0, 0.0);

// //     for (uint32_t i = 0; i < nLinks(); ++i) {
// //         end_effector_loc[0] += m_link_lengths[i] * std::cos(state[i]);
// //         end_effector_loc[1] += m_link_lengths[i] * std::sin(state[i]);
// //     }

// //     return end_effector_loc;
// // }
