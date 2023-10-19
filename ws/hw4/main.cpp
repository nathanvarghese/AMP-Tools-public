// This includes all of the necessary header files in the toolbox
#include "AMPCore.h"

// Include the correct homework header
#include "hw/HW4.h"

// Include the header of the shared class
#include "HelpfulClass.h"
#include "MyCObstacle.h"
#include "MyLinkManipulator.h"
//#include "LinkManipulator.h"

using namespace amp;
using namespace std; 

int main(int argc, char** argv) 
{
    // /* Include this line to have different randomized environments every time you run your code (NOTE: this has no affect on grade()) */
    // RNG::seed(RNG::randiUnbounded());

    // Obstacle2D Obstacle = HW4::getEx1TriangleObstacle(); //gets me the values of the triangle
    // Obstacle2D Robot = HW4::getEx1TriangleObstacle(); //gets me the values of the triangle
    // // Visualizer::makeFigure(amp::Obstacle2D Obstacle);



    // //Question 2(a)
    // void makeFigure(const LinkManipulator2D& link_manipulator, const ManipulatorState& state);


    // // Grade method
    // HWx::grade();
    // amp::HW4::grade<MyLinkManipulator>(constructor, "nathan.varghese@colorado.edu", argc, argv);
    // return 0;
}

























    //     Turning Obstacle and Robot into pairs type data type by iteration
    //     for (const auto& vertex : Obstacle.verticesCCW()) {
    //     int x = static_cast<int>(vertex(0));
    //     int y = static_cast<int>(vertex(1));
    //     Robot.push_back(make_pair(x, y));
    // }

    // for (const auto& vertex : Obstacle.verticesCCW()) {
    //     int x = static_cast<int>(vertex(0));
    //     int y = static_cast<int>(vertex(1));
    //     Obstacle.push_back(make_pair(x, y));
    // }

   // GetCood();
 // Robot.verticesCCW().[0]
 
 //[0]

    // // Print the Robot vector
    // for (size_t i = 0; i < Robot.size(); ++i) {
    //     cout << "Robot vertices " << i + 1 << ": (" << Robot[i].first << ", " << Robot[i].second << ")" << endl;
    // }

    
    
    // vector<pair<int, int>> Robot = Obstacle.verticesCCW();
    //  cout<< "Robot vertices :"<< 1 << "\n" << Robot.verticesCCW()[0] << endl;

    // vector<pair<int, int>> Robot = Obstacle.verticesCCW();

    // // Access and print the first pair in Robot
    // cout << "Robot vertices :" << 1 << "\n" << Robot[0].first << ", " << Robot[0].second << endl;


    // Works!!
    //  for (int i=0; i<Robot.verticesCCW().size(); i++)
    // {
    //     cout<< "Robot vertices :"<< i << "\n" << Robot.verticesCCW()[i] << endl;
    // }    

    // for (int i=0; i<Obstacle.verticesCCW().size(); i++)
    // {
    //     cout<< "Obstacle vertices :"<< i << "\n" << Obstacle.verticesCCW()[i] << endl;
    // }    

    //cout<< "Obstacle vertices (0,1):"<< Obstacle.verticesCCW()[0].first << endl;
    
    // @Skeleton
    // MyCObstacle MyObs ; //MyCObstacles is my self made class, MyObs has CalculateCSpace function and CObstaclemember, MyObs is an object
    // MyObs.CalculateCSpace(Obstacle,Robot);  
    // Visualizer::makeFigure(MyObs.CObstaclemember); // CObstaclemember hold vector value of C Space

