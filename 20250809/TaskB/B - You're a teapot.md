---
title: B - You're a teapot
source: https://atcoder.jp/contests/abc418/tasks/abc418_b
published: 2025-08-09
created: 2025-08-09
description: AtCoder is a programming contest site for anyone from beginners to experts. We hold weekly programming contests online.
tags:
  - clippings
---
B - You're a teapot

---

Time Limit: 2 sec / Memory Limit: 1024 MiB

配点: $200$ 点

### 問題文

> I begin with T and end with T, and I am full of T. What am I?

文字列 $t$ について、 **充填率** を以下のように定義します。

- $t$ の先頭と末尾の文字がともに `t` であり、かつ $|t| \geq 3$ である場合: $t$ に含まれる `t` の個数を $x$ とすると、 $t$ の充填率は $\displaystyle\frac{x-2}{|t|-2}$ である。ここで、 $|t|$ は $t$ の長さを表す。
- そうでない場合: $t$ の充填率は $0$ である。

文字列 $S$ が与えられます。 $S$ の部分文字列の充填率としてありうる最大値を求めてください。

部分文字列とは $S$ の **部分文字列** とは、 $S$ の先頭から $0$ 文字以上、末尾から $0$ 文字以上削除して得られる文字列のことをいいます。 例えば、 `ab`, `bc`, `bcd` は `abcd` の部分文字列ですが、 `ac`, `dc`, `e` は `abcd` の部分文字列ではありません。

### 制約

- $1 \leq |S| \leq 100$
- $S$ は英小文字からなる文字列。

---

### 入力

入力は以下の形式で標準入力から与えられる。

```
SS
```

### 出力

$S$ の部分文字列の充填率としてありうる最大値を出力せよ。

出力された値と真の値との絶対誤差が $10^{-9}$ 以下のとき、正答と判定される。

---

### 入力例 1

```
attitude
```

### 出力例 1

```
0.50000000000000000
```

`ttit` は $S$ の部分文字列であり、その充填率は $\displaystyle\frac{3-2}{4-2} = \frac{1}{2}$ です。

充填率が $\frac{1}{2}$ より高い部分文字列は存在しないので、答えは $\frac{1}{2}$ です。

---

### 入力例 2

```
ottottott
```

### 出力例 2

```
0.66666666666666667
```

`ttottott` は $S$ の部分文字列であり、その充填率は $\displaystyle\frac{6-2}{8-2} = \frac{2}{3}$ です。

充填率が $\frac{2}{3}$ より高い部分文字列は存在しないので、答えは $\frac{2}{3}$ です。

---

### 入力例 3

```
coffeecup
```

### 出力例 3

```
0.00000000000000000
```

`ff` は $S$ の部分文字列であり、その充填率は $0$ です。

充填率が $0$ より高い部分文字列は存在しないので、答えは $0$ です。

Score: $200$ points

### Problem Statement

> I begin with T and end with T, and I am full of T. What am I?

For a string $t$, define the **filling rate** as follows:

- If the first and last characters of $t$ are both `t` and $|t| \geq 3$: Let $x$ be the number of `t` in $t$. Then the filling rate of $t$ is $\displaystyle\frac{x-2}{|t|-2}$, where $|t|$ denotes the length of $t$.
- Otherwise: the filling rate of $t$ is $0$.

You are given a string $S$. Find the maximum possible filling rate of a substring of $S$.

What is a substring?A **substring** of $S$ is a string obtained by removing zero or more characters from the beginning and the end of $S$. For example, `ab`, `bc`, and `bcd` are substrings of `abcd`, while `ac`, `dc`, and `e` are not substrings of `abcd`.

### Constraints

- $1 \leq |S| \leq 100$
- $S$ is a string consisting of lowercase English letters.

---

### Input

The input is given from Standard Input in the following format:

```
SS
```

### Output

Print the maximum possible filling rate of a substring of $S$.

Your output will be judged as correct when the absolute error from the true value is at most $10^{-9}$.

---

### Sample Input 1

```
attitude
```

### Sample Output 1

```
0.50000000000000000
```

`ttit` is a substring of $S$, and its filling rate is $\displaystyle\frac{3-2}{4-2} = \frac{1}{2}$.

There is no substring with a filling rate greater than $\frac{1}{2}$, so the answer is $\frac{1}{2}$.

---

### Sample Input 2

```
ottottott
```

### Sample Output 2

```
0.66666666666666667
```

`ttottott` is a substring of $S$, and its filling rate is $\displaystyle\frac{6-2}{8-2} = \frac{2}{3}$.

There is no substring with a filling rate greater than $\frac{2}{3}$, so the answer is $\frac{2}{3}$.

---

### Sample Input 3

```
coffeecup
```

### Sample Output 3

```
0.00000000000000000
```

`ff` is a substring of $S$, and its filling rate is $0$.

There is no substring with a filling rate greater than $0$, so the answer is $0$.

---

---

---

2025-08-09 (Sat)  
21:47:04 +08:00