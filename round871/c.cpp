#include <bits/stdc++.h>

using namespace std;
const int maxi = 2e6;
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        map<string, int> skillCounts;
        skillCounts["01"] = maxi;
        skillCounts["10"] = maxi;
        skillCounts["11"] = maxi;

        for (int i = 0; i < n; i++) {
            int m;
            string skills;
            cin >> m >> skills;
            if(skills == "11"){
                skillCounts["11"] = min(skillCounts["11"], m);
            }
            if(skills == "01"){
                skillCounts["01"] = min(skillCounts["01"], m);
            }
            if(skills == "10"){
                skillCounts["10"] = min(skillCounts["10"], m);
            }
        }

        if ((skillCounts["01"] == maxi || skillCounts["10"] == maxi) && skillCounts["11"] == maxi) {
            cout << -1 << endl;
        } else {
            int totalTime = skillCounts["01"] + skillCounts["10"];
            totalTime = min(totalTime, skillCounts["11"]);
            cout << totalTime << endl;
        }
    }
}
