#include "Solution.h"
#include <iostream>
#include <string>
#include <typeinfo>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>

using namespace std;


int main(int argc, char** argv)
{
    Solution* test_solution = new Solution();
    vector<int> v{10,2,11,3,6};
    test_solution->largestNumber(v); //最大数
    // test_solution->nthUglyNumber(10); //第10个丑数

    // vector<int> answers = {0, 0, 1, 1, 1};
    // int res = test_solution->numRabbits(answers);

    // cout << res << endl;

    //走钢丝代码测试
        // deque<int> min_num1 = {10, 1, 2, 5};
        // int res1 = test_solution->findMinTime(min_num1);
        // cout << res1 << endl;
        // deque<int> min_num2 = {10, 1, 2, 7, 5}; //2 + 1 + 10 + 2 + 2 + 1 + 5 = 23
        // int res2 = test_solution->findMinTime(min_num2);
        // cout << "namespace test" << endl;

    // }
    
    // vector<int> tree{5,4,3,2,1};
    // test_solution->myVerify(tree, 0, 4);


    // testMKAverage();    //周赛test

    return 0;
}