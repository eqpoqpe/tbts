RBRS
```
    wait [0] [1] [2] [3] [4] [5] [6]
          first find min value -> [3]
      cmp [0]-[1] [2]-[4] [5]-[6]
          [0] and [1] are same value,
          saved one value to keeps cmp
   wait  [0] [4] [2] [5] [6]
   wait  [0] [4] [5] [2] [6]
          ___________ ______
          left         right
   wait  [0] [4] [5]
          ___________
          find the min value -> [4]
     cmp  [0]-[5] [2]-[6]
          _______ _______
  result  [5] [0] [2] [6]
          ______________
          NO_FULL
  result  [3] [4] [5] [0] [1] [2] [6]
```
0.2 Author: Ryan Martin


```
Equity  - Two In One
Minimum - Left Right
Maximum - None None
Event   - Dynamic Select And Found Minimum
```
