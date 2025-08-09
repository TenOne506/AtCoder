---
title: D - XNOR Operation
source: https://atcoder.jp/contests/abc418/tasks/abc418_d
published: 2025-08-09
created: 2025-08-09
description: AtCoder is a programming contest site for anyone from beginners to experts. We hold weekly programming contests online.
tags:
  - clippings
---
D - XNOR Operation

---

Time Limit: 2 sec / Memory Limit: 1024 MiB

配点: $425$ 点

### 問題文

> この問題は G 問題の部分問題です。

`0` と `1` からなる空でない文字列 $S$ が次の条件を満たす時、 $S$ を美しい文字列と呼びます。

- (条件) 次の一連の操作を $S$ の長さが $1$ になるまで行い、 $S$ に残った唯一の文字を `1` にすることができる。
	1. $1 \leq i \leq |S| - 1$ を満たす整数 $i$ を自由に選ぶ。
	2. 整数 $x$ を次のように定義する。
		- $S_i =$ `0` かつ $S_{i+1}=$ `0` である場合、 $x = 1$ とする。
		- $S_i =$ `0` かつ $S_{i+1}=$ `1` である場合、 $x = 0$ とする。
		- $S_i =$ `1` かつ $S_{i+1}=$ `0` である場合、 $x = 0$ とする。
		- $S_i =$ `1` かつ $S_{i+1}=$ `1` である場合、 $x = 1$ とする。
	3. $S_i$ と $S_{i+1}$ を取り除き、それらがあった場所に $x$ を数字とみなしたものを $1$ 個挿入する。  
		例えば $S=$ `10101` に対して $i=2$ を選んで操作を行った場合、操作後の文字列は `1001` になる。

`0` と `1` からなる長さ $N$ の文字列 $T$ があります。  
$T$ の部分文字列である美しい文字列の個数を求めてください。ただし、 $2$ つの部分文字列が文字列として同じでも、取り出す位置が異なるならば別々に数えます。

部分文字列とは $S$ の **部分文字列** とは、 $S$ の先頭から $0$ 文字以上、末尾から $0$ 文字以上削除して得られる文字列のことをいいます。  
例えば、 `10` は `101` の部分文字列ですが、 `11` は `101` の部分文字列ではありません。

### 制約

- $1 \leq N \leq 2 \times 10^5$
- $N$ は整数
- $T$ は `0` と `1` からなる長さ $N$ の文字列

---

### 入力

入力は以下の形式で標準入力から与えられる。

```
NN
TT
```

### 出力

$T$ の部分文字列である美しい文字列の個数を出力せよ。

---

### 入力例 1

```
3
110
```

### 出力例 1

```
3
```

$T$ の $1$ 文字目から $2$ 文字目までを取り出してできる文字列 `11` は美しい文字列です。なぜならば、 $i=1$ として操作を行うと、操作後の文字列は `1` になるからです。  
$T$ の部分文字列である美しい文字列は次の $3$ 個です。

- $T$ の $1$ 文字目を取り出してできる文字列 `1`
- $T$ の $2$ 文字目を取り出してできる文字列 `1`
- $T$ の $1$ 文字目から $2$ 文字目までを取り出してできる文字列 `11`

---

### 入力例 2

```
4
0000
```

### 出力例 2

```
4
```

---

### 入力例 3

```
30
011011100101110111100010011010
```

### 出力例 3

```
225
```

Score: $425$ points

### Problem Statement

> This problem is a subproblem of Problem G.

A non-empty string $S$ consisting of `0` and `1` is called a beautiful string when it satisfies the following condition:

- (Condition) You can perform the following sequence of operations until the length of $S$ becomes $1$ and make the only character remaining in $S$ be `1`.
	1. Choose any integer $i$ satisfying $1 \leq i \leq |S| - 1$.
	2. Define an integer $x$ as follows:
		- If $S_i =$ `0` and $S_{i+1} =$ `0`, let $x = 1$.
		- If $S_i =$ `0` and $S_{i+1} =$ `1`, let $x = 0$.
		- If $S_i =$ `1` and $S_{i+1} =$ `0`, let $x = 0$.
		- If $S_i =$ `1` and $S_{i+1} =$ `1`, let $x = 1$.
	3. Remove $S_i$ and $S_{i+1}$, and insert the digit corresponding to $x$ in their place.  
		For example, if $S=$ `10101` and you choose $i=2$, the string after the operation is `1001`.

You are given a string $T$ of length $N$ consisting of `0` and `1`.  
Find the number of beautiful strings that are substrings of $T$. Even if two substrings are identical as strings, count them separately if they are taken from different positions.

What are substrings?A **substring** of $S$ is a string obtained by deleting zero or more characters from the beginning and zero or more characters from the end of $S$.  
For example, `10` is a substring of `101`, but `11` is not a substring of `101`.

### Constraints

- $1 \leq N \leq 2 \times 10^5$
- $N$ is an integer.
- $T$ is a string of length $N$ consisting of `0` and `1`.

---

### Input

The input is given from Standard Input in the following format:

```
NN
TT
```

### Output

Print the number of beautiful strings that are substrings of $T$.

---

### Sample Input 1

```
3
110
```

### Sample Output 1

```
3
```

The string `11` obtained by taking the 1st through 2nd characters of $T$ is a beautiful string, because if you choose $i=1$ and perform the operation, the string becomes `1`. The beautiful strings that are substrings of $T$ are the following three strings:

- The string `1` obtained by taking the 1st character of $T$.
- The string `1` obtained by taking the 2nd character of $T$.
- The string `11` obtained by taking the 1st through 2nd characters of $T$.

---

### Sample Input 2

```
4
0000
```

### Sample Output 2

```
4
```

---

### Sample Input 3

```
30
011011100101110111100010011010
```

### Sample Output 3

```
225
```

---

---

---

2025-08-09 (Sat)  
21:48:56 +08:00