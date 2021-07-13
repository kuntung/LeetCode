#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class ThroneInheritance {
public:
    ThroneInheritance(string kingName) {
        mp[kingName]++;
        InheritanceOrder.push_back(kingName);
    }
    
    void birth(string parentName, string childName) {
        mp[parentName]++;
        auto findPos = find(InheritanceOrder.begin(), InheritanceOrder.end(), parentName);
        if(findPos != InheritanceOrder.end())
        {
            InheritanceOrder.insert(findPos, childName);
        }
        else{
            InheritanceOrder.push_back(childName);
        }
        
    }
    
    void death(string name) { 
        auto findDeath = find(InheritanceOrder.begin(), InheritanceOrder.end(), name);
        if(findDeath != InheritanceOrder.end())
        {
            InheritanceOrder.erase(findDeath);
        }
    }
    
    vector<string> getInheritanceOrder() {
        return InheritanceOrder;
    }
private:
    vector<string> InheritanceOrder;
    unordered_map<string, int> mp; // 记录孩子个数
};

template<typename T>
void printVec(const vector<T>& vec)
{
    // 只对支持输出流重载的数据类型T
    for(auto& item: vec)
    {
        cout << item << " ";
    }
    cout << endl;
}
void test()
{
    string kingName = "king";
    string parentName = "king";
    string childName = "peter";
    string childName2 = "korol";
    string deathName = "peter";
    ThroneInheritance* obj = new ThroneInheritance(kingName);
    obj->birth(parentName,childName);
    obj->birth(parentName,childName2);
    obj->death(deathName);
    vector<string> param_3 = obj->getInheritanceOrder();

    printVec(param_3);
}

int main()
{
    test();

    return 0;
}