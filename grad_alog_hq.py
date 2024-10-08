def getRank(A , B , i , j):
    i = 0 
    j = len(A) - 1
    mid = (i+j)//2
    ans = 0 
    while i <= j :
        mid = (i+j)//2
        if(A[mid][0] == B[0][0]):
            if A[mid][1] <= B[0][1] : 
                ans = mid
                i = mid + 1
            else : j = mid - 1 
        else :
            j = mid - 1 
    return ans      


def solve(A,B,i, j , R):  
        print("solve called")
        if j >= len(B):
            return R 
        gr = 0
        while i < len(A) and A[i] <= B[j]:
            i += 1
        if(i>0): 
            gr = getRank(A,[B[0]] , i , len(A))
            print(gr)
        R.append(i+gr)
        
        return solve(A,B , i, j + 1 , R)



bluePoints = [(1, 5), (2, 3), (3, 7), (4, 1), (5, 9), (6, 8), (7, 2), (8, 6), (9, 4)]
greenPoints = [(0, 0), (1, 2), (2, 4), (3, 1), (4, 3), (5, 5), (6, 0), (7, 2), (8, 4)]

R = [] 
print(solve(bluePoints , greenPoints , 0 , 0 , R))