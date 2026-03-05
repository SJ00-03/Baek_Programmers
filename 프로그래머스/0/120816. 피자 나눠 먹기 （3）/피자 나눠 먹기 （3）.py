def solution(slice, n):
    if n % slice == 0:
        pizzas = n // slice
    else:
        pizzas = n // slice + 1
        
    answer = pizzas
    return answer