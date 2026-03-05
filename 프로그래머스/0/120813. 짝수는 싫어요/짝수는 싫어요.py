def solution(n):
    odd_number = []
    for i in range(1, n+1):
        if(i % 2 != 0):
            odd_number.append(i)
    answer = odd_number
    return answer