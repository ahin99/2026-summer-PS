# 231. Power of Two
자료구조 공부를 안했더니 파이썬 문제 submit 형태도 잘 이해 못 했었는데... 이제 좀 이해함

- c로 따지면 main()는 따로 주어져 있고, 문제에 해당하는 함수만 내가 submit 하는 것.
    - 따라서 n = int(input()) 같은 거 하면 X
    - 이미 인자로 주어져 있으므로.

- 반복문 사용 시 "무한 루프" 주의!

# 509. Fibonacci Number
class Solution:
    def fib(self, n: int) -> int:

- 위 코드의 class와 인자 self에 대한 이해 필요
- fib() 내에서 자기 자신을 호출할 때, 왜 fib()가 아니라 self.fib()로 해야 하는가?

# 342. Power of Four
경우 나눌 때 꼼꼼히 확인
