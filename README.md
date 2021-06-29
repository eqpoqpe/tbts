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
0.1 Author: Ryan Martin


```
    ready [0] [1] [2] [3] [4] [5] [6]
          first find min value -> [3]
      cmp [0]-[1] [2]-[4] [5]-[6]
          [0] and [1] are same value,
          saved one value to keeps cmp
   ready  [0] [4] [2] [5] [6]
   ready  [0] [4] [5] [2] [6]
          ___________ ______
          left         right
   ready  [0] [4] [5]
          ___________
          find the min value -> [4]
     cmp  [0]-[5] [2]-[6]
          _______ _______
  result  [5] [0] [2] [6]
          ______________
          NO_FULL
  finaly  [3] [4] [5] [0] [1] [2] [6]
```

0.2 Author: Ryan Martin


```
Equity  - Two In One
Minimum - Left Right
Maximum - None None
Event   - Dynamic Select And Found Minimum
```
