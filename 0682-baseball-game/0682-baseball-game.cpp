class Solution {
public:
    int calPoints(vector<string>& operations) {

        stack<int> s;

        for (auto a : operations) {
            if (a != "+" && a != "D" && a != "C") {
                s.push(stoi(a));
            } else if (a == "+") {
                int top1 = s.top();
                s.pop();
                int top2 = s.top();
                s.push(top1);
                s.push(top1 + top2);
            }
        
        else if (a == "D") {
            s.push(s.top() * 2);
        }
        else {
            s.pop();
        }
    }

    
    

    int sum = 0;

    while (!s.empty()) {
        sum += s.top();
        s.pop();
    }

    return sum;
}
}
;