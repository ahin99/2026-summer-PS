# 125. Valid Palindrome
한동안 파이썬으로 자료구조 공부하다가 c++로 푼 게 오랜만이라.. 

- 문자열 길이 -> s.length() 나 s.size()
- string 쓸때는 #include <string>
- 문자열 인덱싱 -> 파이썬이랑 같게 생각

₩₩₩
string s = "abc";

cout << s[0]; // a
cout << s[1]; // b
cout << s[2]; // c
₩₩₩

- cctype 라이브러리의 기능
    - isalnum('a') -> 문자가 알파벳인지 숫자인지 boolean으로 검사
    - tolower('A') -> 대문자를 소문자로 변환