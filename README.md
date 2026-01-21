# MIN to MAX Array Operations

## 📌 Problem Statement
You are given an array `A` of size `N`.

Let `M` be the **minimum value** present in the array initially.

In one operation:
- You can choose any index `i` (1 ≤ i ≤ N)
- Choose an integer `X` (1 ≤ X ≤ 100)
- Set `A[i] = X`

Your task is to determine the **minimum number of operations** required to make `M` the **maximum value** in the array.

---

## 🧠 Key Insight
To make the minimum value `M` the maximum value:
- All elements **greater than `M` must be changed to `M`**
- Elements already equal to `M` do not need any operation

👉 Therefore, the answer is simply the **count of elements greater than `M`**

---

## 🧮 Algorithm
1. Find the minimum element `M` in the array
2. Count how many elements are greater than `M`
3. That count is the minimum number of operations

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(N)`
- **Space Complexity:** `O(1)`
