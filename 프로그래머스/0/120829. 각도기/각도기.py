def solution(angle):
    if 0 < angle < 90:
        a = 1
    elif angle == 90:
        a = 2
    elif 90 < angle < 180:
        a = 3
    elif angle == 180:
        a = 4    
         
    answer = a
    return answer