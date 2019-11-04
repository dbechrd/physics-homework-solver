#include <iostream>

using namespace std;

void solve_timeV()
{
    double time;
    double Vi;
    cout << "Initial Verical Velocity(m/s): ";
    cin >> Vi;
    time = Vi / 9.81;
    cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
    cout << "   Time to apex: " << time << " seconds" << endl;
    cout << "     Total time: " << time * 2 << " seconds" << endl;
    cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl << endl;
}

void solve_timeH()
{
    double time;
    double Vi;
    double distance;
    cout << "Horizontal Velocity(m/s): ";
    cin >> Vi;
    cout << "Horizontal Distance(m): ";
    cin >> distance;
    time = distance / Vi;
    cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
    cout << "   Time to apex: " << time << " seconds" << endl;
    cout << "     Total time: " << time * 2 << " seconds" << endl;
    cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl << endl;
}

void solve_height()
{
    double deltaY;
    double Vi;
    double time;
    cout << "Initial Verical Velocity(m/s): ";
    cin >> Vi;
    cout << "Time to apex(s): ";
    cin >> time;
    deltaY = (Vi * time) + ((0.5)*(-9.81)*(time*time));
    cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
    cout << "   Height: " << deltaY << " meters" << endl;
    cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl << endl;
}

void solve_distance()
{
    double deltaX;
    double Vel;
    double time;
    cout << "Horizontal Velocity(m/s): ";
    cin >> Vel;
    cout << "Total time(s): ";
    cin >> time;
    deltaX = Vel * time;
    cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
    cout << "   Horizontal Distance: " << deltaX << " meters" << endl;
    cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl << endl;
}

void solve_velocityI()
{
    double Vf;
    double Vi;
    double time;
    cout << "Initial Verical Velocity(m/s): ";
    cin >> Vi;
    cout << "Time to apex(s): ";
    cin >> time;
    Vf = Vi + (-9.81 * time);
    cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
    cout << "   Final Vertical Velocity: " << Vf << " meters" << endl;
    cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl << endl;
}

void solve_velocityF()
{
    double Vf;
    double Vi;
    double time;
    cout << "Initial Verical Velocity(m/s): ";
    cin >> Vi;
    cout << "Time to apex(s): ";
    cin >> time;
    Vf = Vi + (-9.81 * time);
    cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
    cout << "   Final Vertical Velocity: " << Vf << " meters" << endl;
    cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl << endl;
}

int main()
{
    bool quit = false;
    while (quit == false)
    {
        int choice;
        cout << "   Dan's Physics Problem Solver   " << endl;
        cout << "----------------------------------" << endl;
        cout << "| 1 -> Solve for verical time    |" << endl;
        cout << "| 2 -> Solve for horizontal time |" << endl;
        cout << "| 3 -> Solve for height          |" << endl;
        cout << "| 4 -> Solve for distance        |" << endl;
        cout << "| 5 -> Solve for initial velocity|" << endl;
        cout << "| 5 -> Solve for final velocity  |" << endl;
        cout << "| 0 -> Quit                      |" << endl;
        cout << "----------------------------------" << endl;
        cout << "> ";
        cin >> choice;
        switch (choice)
        {
            case 0:
                quit = true;
                break;
            case 1:
                solve_timeV();
                break;
            case 2:
                solve_timeH();
                break;
            case 3:
                solve_height();
                break;
            case 4:
                solve_distance();
                break;
            case 5:
                solve_velocityI();
                break;
            case 6:
                solve_velocityF();
                break;
        }
    }

    return 0;
}
