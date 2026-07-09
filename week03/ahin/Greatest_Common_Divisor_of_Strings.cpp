class Solution {
private:
    // b가 a를 반복해서 완전히 구성할 수 있는지 확인
    bool isDivided(string a, string b) {
        // b가 더 길거나, 길이가 정확히 나누어떨어지지 않으면 불가능
        if (b.size() > a.size() || a.size() % b.size() != 0) {
            return false;
        }

        int start = 0;

        while (start < a.size()) {
            if (a.substr(start, b.size()) != b) {
                return false;
            }

            start += b.size();
        }

        return true;
    }

public:
    string gcdOfStrings(string str1, string str2) {
        vector<string> result;

        // str2를 완전히 나눌 수 있는 문자열들을 구한다
        for (int i = 1; i <= str2.size(); i++) {
            string x = str2.substr(0, i);

            if (isDivided(str2, x)) {
                result.push_back(x);
            }
        }

        // 가장 긴 문자열부터 str1도 나눌 수 있는지 확인
        for (int i = static_cast<int>(result.size()) - 1; i >= 0; i--) {
            if (isDivided(str1, result[i])) {
                return result[i];
            }
        }

        return "";
    }
};