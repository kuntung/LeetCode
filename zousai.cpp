#include <vector>
#include <algorithm>
#include <iostream>
#include <numeric>
#include <functional>

using namespace std;

class MKAverage {
public:
    MKAverage(int m, int k):_m(m), _k(k), _avRes(0) {
        vec.clear();
    }
    
    void addElement(int num) {
        if(vec.empty()) vec.push_back(num);
        else{
            auto pos = lower_bound(vec.begin(), vec.end(), num);
            vec.insert(pos, num);
        }
    }
    
    int calculateMKAverage() {
        if(vec.size() < _m) return -1;
        // vector<int> temp(vec);
        // vec.clear();
        vec.assign(vec.begin()+_k, vec.begin() + _m -_k);
        for(int i = _k; i < _m - _k; ++i)
        {
            _avRes += vec[i];
        }
        return _avRes/(_m - 2*_k);
    }
private:
    vector<int> vec;
    int _avRes;
    int _m;
    int _k;
};

void test(){
    vector<int> testV{1,2,3,4,6};
    cout << "testV.size() before assign:" << testV.size() << endl; //5
    for(int i: testV)
    {
        cout << i << ", "; //1,2,3,4,6
    }
    // testV.assign(testV.begin(), testV.end() - 1); //赋值1,2,3,4 √
    testV.assign(testV.begin() + 1, testV.end() - 1); //赋值2,3,4 √
    // testV.assign(testV.begin(), testV.begin() + 2); //赋值1,2
    cout << "testV.size() after assign:" << testV.size() << endl; //2
    for(int i: testV)
    {
        cout << i << ", "; //1,2
    }
    
}

void testMKAverage()
{
    MKAverage obj(3, 1); 
    obj.addElement(3);        // 当前元素为 [3]
    obj.addElement(1);        // 当前元素为 [3,1]
    obj.calculateMKAverage(); // 返回 -1 ，因为 m = 3 ，但数据流中只有 2 个元素
    obj.addElement(10);       // 当前元素为 [3,1,10]
    obj.calculateMKAverage(); // 最后 3 个元素为 [3,1,10]
                            // 删除最小以及最大的 1 个元素后，容器为 [3]
                            // [3] 的平均值等于 3/1 = 3 ，故返回 3
    obj.addElement(5);        // 当前元素为 [3,1,10,5]
    obj.addElement(5);        // 当前元素为 [3,1,10,5,5]
    obj.addElement(5);        // 当前元素为 [3,1,10,5,5,5]
    obj.calculateMKAverage(); // 最后 3 个元素为 [5,5,5]d
                            // 删除最小以及最大的 1 个元素后，容器为 [5]
                            // [5] 的平均值等于 5/1 = 5 ，故返回 5
}

int main()
{
    // test();
    testMKAverage();
    
    return 0;
}