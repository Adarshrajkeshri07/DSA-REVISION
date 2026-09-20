/*
====================================================
                 TWO SUM - LOGIC
====================================================

Goal:
2 numbers ka sum target ke equal hona chahiye.

Logic:
1. Har element ko traverse karo.
2. Required number nikalo:
      required = target - current
3. Check karo required number map me already hai ya nahi.
4. Agar hai -> pair mil gaya.
5. Agar nahi -> current number ko map me store karo.

Example:
a = [2,7,9,11,13], target = 20

current = 11
required = 20 - 11 = 9

9 map me hai -> 9 + 11 = 20

Time: O(n) average
Space: O(n)


====================================================
                 THREE SUM - LOGIC
====================================================

Goal:
3 numbers ka sum 0 hona chahiye.

Logic:
1. Array ko sort karo.
2. Ek number ko fix karo -> i
3. Baaki 2 numbers ke liye:
      j = i + 1
      k = n - 1
4. Sum calculate karo:
      sum = a[i] + a[j] + a[k]

5. Agar sum == 0:
      answer store karo
      j++
      k--

6. Agar sum < 0:
      j++        // sum badhana hai

7. Agar sum > 0:
      k--        // sum kam karna hai

8. Duplicate answers avoid karne ke liye:
      i par duplicate skip
      aur sum milne ke baad j/k ke duplicates skip.

Time: O(n²)
Space: O(1) extra (answer ko chhodkar)


====================================================
                  FOUR SUM - LOGIC
====================================================

Goal:
4 numbers ka sum target ke equal hona chahiye.

Logic:
1. Array ko sort karo.
2. 2 numbers fix karo:
      i
      j
3. Baaki 2 numbers ke liye:
      k = j + 1
      l = n - 1

4. Sum calculate karo:
      sum = a[i] + a[j] + a[k] + a[l]

5. Agar sum == target:
      answer store karo
      k++
      l--

6. Agar sum < target:
      k++        // sum badhana hai

7. Agar sum > target:
      l--        // sum kam karna hai

8. Duplicate answers avoid karo:
      i duplicate skip
      j duplicate skip
      k/l ke duplicates bhi skip.

Time: O(n³)
Space: O(1) extra (answer ko chhodkar)


====================================================
                 MAIN DIFFERENCE
====================================================

Two Sum:
2 numbers
→ Hash Map
→ O(n)

Three Sum:
1 number fix + 2 pointers
→ O(n²)

Four Sum:
2 numbers fix + 2 pointers
→ O(n³)

Pattern:
2 Sum  → HashMap
3 Sum  → 1 Loop + 2 Pointers
4 Sum  → 2 Loops + 2 Pointers

IMPORTANT:
3Sum aur 4Sum me sorting zaroori hai,
kyunki two-pointer technique sorted array par
properly kaam karti hai.
====================================================
*/