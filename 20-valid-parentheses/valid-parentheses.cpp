class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (int i = 0; i < s.size(); i++) {
            char curr = s[i];
            if (isOpening(curr)) {
                st.push(curr);
            } else {
                if (st.size() == 0) {
                    return false;
                } else {
                    char open = st.top();
                    st.pop();
                    if (!isMatching(open, curr)) return false;
                }
            }
        }
        return st.empty();
    }

    bool isOpening(char ch) {
        return (ch == '[' || ch == '{' || ch == '(');
    }
    
    bool isMatching(char open, char close) {
        return ((open == '[' && close == ']') || (open == '{' && close == '}') || (open == '(' && close == ')'));
    }
};
