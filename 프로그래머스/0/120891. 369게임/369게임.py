def solution(order):
    order = str(order)
    a = order.count('3')
    b = order.count('6')
    c = order.count('9')
    sum = a + b + c
    answer = sum
    return answer