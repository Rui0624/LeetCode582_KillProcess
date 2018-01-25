//
//  main.cpp
//  LeetCode582_KillProcess
//
//  Created by Rui on 1/24/18.
//  Copyright © 2018 Rui. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
class Solution {
public:
    vector<int> killProcess(vector<int>& pid, vector<int>& ppid, int kill) {
        queue<int> q{{kill}};
        vector<int> res;
        unordered_map<int, vector<int>> m;
        for(int i = 0; i < pid.size(); i++)
        {
            m[ppid[i]].push_back(pid[i]);
        }
        
        while(!q.empty())
        {
            int t = q.front();
            q.pop();
            res.push_back(t);
            for(int p : m[t])
            {
                q.push(p);
            }
        }
        
        return res;
    }
};
