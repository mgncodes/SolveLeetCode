def findMaxForm(strs, m, n):
    cntl = []
    for i in strs:
        cntl.append([i.count('1'), i.count('0')])
    dp = []
    for i in range(n + 1):
        dp.append([0] * (m + 1))
    for i in cntl:
        for j in range(n, i[0] - 1, -1):
            for k in range(m, i[1] - 1, -1):
                dp[j][k] = max(dp[j][k], (dp[j - i[0]][k - i[1]] + 1))
    return(dp[n][m])

strs = list(map(str, input().split()))
    m = int(input())
    n = int(input())
    print(findMaxForm(strs, m, n))