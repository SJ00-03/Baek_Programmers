def solution(n, numlist):
    multiple = []
    for i in range(0, len(numlist)):
        if(numlist[i] % n == 0):
            multiple.append(numlist[i])
    answer = multiple
    return answer