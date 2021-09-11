
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

std::vector<double> solutionFun(double a, double b, double c) {

    double  delta, solution1, solution2;

    delta = b * b - 4 * a * c;

    if (delta > 0) {
        solution1 = (-b + sqrt(delta)) / (2 * a);
        solution2 = (-b - sqrt(delta)) / (2 * a);

        cout << "There are 2 solutions." << endl;
        cout << "The solutions are:" << solution1 << " and " << solution2 << endl;
        return { solution1, solution2 };
    }

    else if (delta == 0) {
        solution1 = (-b) / (2 * a);
        cout << "There is 1 solution." << endl;
        cout << "The solution is:";
        return { solution1 };
    }

    else {
        cout << "There is no solution.";
        return {};
    }

}

int main() {

    double a, b, c;

    cout << "Please enter the values of a, b, and c respectively:";
    cin >> a >> b >> c;

    auto result = solutionFun(a, b, c);

    for (auto scalar : result)
    {
        // Do something with a component, or don't return anything from the function : )
    }

    return 0;
}