# TBT_SORT
```
 ________________________________________  index
|
|      cmp [0]-[1] [2]-[3] [4]-[5]
|   result [1] [0] [3] [2] [4] [5]
|      cmp [1]-[3]-[4] [0]-[2]-[5]
|          ___________ ___________
|           left        right
|          found min_value, at the first
|          l_min_value => [3]
|          r_min_value => [5]
|
|      cmp  [3]-[5]   [1]-[4] [0]-[2]
|          _________  _______________
|          MIN SPACE   UNKNOWN SPACE
|   result [5] [3]    [1] [4] [2] [0]
|                     _______________
|      cmp            [1]-[2] [4]-[0]
|   result            [2] [1] [4] [0]
|
|   result [5] [3]    [2] [1] [4] [0]

process
```
