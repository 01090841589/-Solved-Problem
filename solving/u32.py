T =
for test_case in range(1, T+1):
    KNM = [1, 10, 9]
    M = [1, 2, 3, 4, 5, 6, 7, 8, 9]
    locate = 0
    cnt = 0
    M.append(KNM[1])
    M.insert(0,0)
    for i in range(KNM[2]+1):
        locate += KNM[0]
        for j in range(len(M)-1,-1,-1):
            if locate >= M[j]:
                locate = M[j]
                break
        if M[j] == KNM[1]:
            print('#{0} {1}'.format(test_case,cnt))
            break
        elif cnt == j:
            if cnt != len(M):
                print('#{0} 0'.format(test_case))
                break
        else :
            cnt += 1
        if i == KNM[2]:
            print('#{0} 0'.format(test_case))