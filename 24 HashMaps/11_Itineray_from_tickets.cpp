#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <limits.h>
#include <string>
using namespace std;
// ✦ Question         :
// ✦ Question Link    :
// ✦ Approach         :
// ✦ Time Complexity  :
// ✦ Space Complexity :
// ✦ Dry Run
//  chennai->bengluru
//  mumbai->delhi
//  goa->chennai
//  delhi->goa
// Imp point is to find the start point
//  start point is the one which is not present in the destination of any ticket

void printItinerary(unordered_map<string, string> &tickets)
{
    unordered_set<string> to;
    for (pair<string, string> p : tickets)
    {
        to.insert(p.second); // collect all destinations
    }
    string start = ""; // from ke ander he par destination nahi hoga
    for (pair<string, string> p : tickets)
    {
        if (to.find(p.first) == to.end()) // if the source is not in the destinations
        {
            start = p.first; // this is the starting point
        }
    }
    cout << start << " -> ";         // print the current point
    while (tickets.count(start) > 0) // while there are tickets from the start point
    {
        cout << tickets[start] << " -> ";
        start = tickets[start];
    }
}
int main()
{

    unordered_map<string, string> tickets;
    tickets["Chennai"] = "Bengaluru";
    tickets["Mumbai"] = "Delhi";
    tickets["Goa"] = "Chennai";
    tickets["Delhi"] = "Goa";
    printItinerary(tickets);
    cout << "END" << endl; // to indicate the end of the itinerary
    return 0;
}