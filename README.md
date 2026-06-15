# 2026 여름 알고리즘 문제풀이 개요

## 주차별 학습 내용 
- 일단 임시로 정함. 나중에 수정 가능.

1. 재귀, 백트래킹
2. 정렬, 투포인터, 이분탐색, 분할정복
3. 정수론 - GCD, LCD, 소인수분해, 에라토스테네스의 체, 유클리드 호제법
4. 그리디 + 자료구조 - 스택, 큐
5. 트리 - 이진트리, 이진 탐색 트리, 우선순위 큐, 힙
6. 그래프 - DFS, BFS
7. 그래프 - 다익스트라, 플로이드
8. 최소 스패닝 트리, 동적계획법


## 커밋 구조

- 주차별 폴더 안에 주차별 README
    - 주차별 개념 정리
    - 문제 목록
    - 개인별 제출 현황

| 문제 | 난이도 | 링크 |
|--------|--------|--------|
| Two Sum | Easy | [링크](https://leetcode.com/problems/two-sum/) |
| Valid Parentheses | Easy | [링크](https://leetcode.com/problems/valid-parentheses/) |

| 문제 | ahin | friend |
|--------|------|--------|
| Two Sum | ✅ | ✅ |
| Valid Parentheses | ✅ | ✅ |
| Group Anagrams | ❌ | ✅ |


- 개인별 폴더
    - 문제 풀이한 코드 (문제별로 하나씩)
    - 배운 점 노트 (.md 파일로 1장)

[폴더 구조]
```
main/
README.md
    week01/
    ├─ README.md                # 주차 개념 정리
    ├─ ahin/
    │  ├─ two-sum.py
    │  ├─ valid-parentheses.py
    │  └─ note.md              # 개인 학습 노트
    │
    └─ friend/
    ├─ two-sum.cpp
    ├─ valid-parentheses.cpp
    └─ note.md

    week02/
    ├─ README.md
    ├─ ahin/
    │  └─ note.md
    └─ friend/
    └─ note.md

    .
    .
    .
```


## 커밋 방법

- 깃 초기 연결 방법
    1. git clone 레포이름.git → 현재 만들어져 있는 레포를 복제한다. 앞으로 이 디렉토리에서 작업.
    2. git remote -v → 지금 어떤 레포랑 연결되어 있는지 확인. 2026-summer-PS 와 연결되면 정상.
    3. git remote add origin 레포주소(링크).git → 연결 안 되어 있으면 레포 연결.


- 깃 push 방법
    1. git remote -v → 지금 어떤 레포랑 연결되어 있는지 확인. 
    2. git add . → 파일 추가
    3. git commit -m “ “ → 커밋
    4. git push -u origin main → 첫 푸시일때. 이후는 git push만.

- commit 규칙
    - 문제 풀었을 때
        - (이름)/wk(주차) solve (문제이름) → 예 : ahin/wk01 solve valid-parentheses
    - 노트 생성/노트에 배운점 추가했을 때
        - (이름)/wk(주차) add note
        - (이름)/wk(주차) update note





