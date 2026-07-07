# 2523. Closest Prime Numbers in Range
class Solution:
    def closestPrimes(self, left: int, right: int) -> list[int]:
        # 1. 에라토스테네스의 체로 right 이하의 모든 소수 판별 배열 만들기
        is_prime = [True] * (right + 1)
        is_prime[0] = is_prime[1] = False  # 0과 1은 소수가 아님
        
        # right의 제곱근까지만 확인하면 됨
        for i in range(2, int(right**0.5) + 1):
            if is_prime[i]:
                # i가 소수라면, i의 배수들은 전부 소수가 아님(False) 처리
                for j in range(i * i, right + 1, i):
                    is_prime[j] = False
        
        # 2. left 이상 right 이하의 소수들만 리스트에 담기
        primes = [i for i in range(left, right + 1) if is_prime[i]]
        
        # 소수가 2개 미만이면 [-1, -1] 반환
        if len(primes) < 2:
            return [-1, -1]
        
        # 3. 인접한 소수들 간의 최소 차이(Minimum Difference) 찾기
        min_diff = float('inf')  # 초기 최솟값은 무한대로 설정
        ans = [-1, -1]
        
        for i in range(len(primes) - 1):
            diff = primes[i+1] - primes[i]
            if diff < min_diff:
                min_diff = diff
                ans = [primes[i], primes[i+1]]
                
                # 조기 종료 꿀팁: 두 소수의 차이가 1(즉 2와 3)이거나 2(쌍둥이 소수)라면
                # 이보다 더 작은 차이는 존재할 수 없으므로 즉시 반환하여 시간 절약
                if min_diff <= 2:
                    return ans
                    
        return ans
