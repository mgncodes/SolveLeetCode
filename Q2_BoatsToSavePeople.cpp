<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int boats = 0, s = 0;
        sort(people.begin(), people.end());
        int mini = 0, maxi = people.size() - 1;
        while(mini <= maxi) {
            boats++;
            if(people[mini] + people[maxi] <= limit) ++mini;
            --maxi;
        }
        return boats;
    }
};
=======
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int boats = 0, s = 0;
        sort(people.begin(), people.end());
        int mini = 0, maxi = people.size() - 1;
        while(mini <= maxi) {
            boats++;
            if(people[mini] + people[maxi] <= limit) ++mini;
            --maxi;
        }
        return boats;
    }
};
>>>>>>> 7b46b4989fa044280c5be226ac3f2dd1484c9aaa
