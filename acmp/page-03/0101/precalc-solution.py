p = [[1],
     [4, 0],
     [9, 0, 0],
     [16, 20, 0, 0],
     [25, 92, 48, 2, 0],
     [36, 260, 424, 112, 0, 0],
     [49, 580, 1976, 1754, 248, 0, 0],
     [64, 1120, 6616, 13074, 7320, 728, 0, 0],
     [81, 1960, 17852, 63400, 82758, 34344, 3588, 72, 0],
     [100, 3192, 41544, 234014, 562384, 541324, 188440, 20084, 488, 4]]
n, k = map(int, input().split(' '))
print(p[n-1][k-1])
