// Ex15_queues.cpp : Queue data structure.
//

#include <iostream>
#include <queue>


std::queue <int> balls;

int main()
{
    std::cout << "Add 3 items to the queue:\n";
    balls.push(10);
    balls.push(11);
    balls.push(12);
    std::cout << '\n';
    
    while(!balls.empty()) {
        std::cout << "Get current queue head: " << balls.front() << '\n';
        std::cout << "Current queue size is: " << balls.size() << '\n';
        std::cout << "Pop one item from the queue. "<< '\n';
        balls.pop();
    }
    



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
