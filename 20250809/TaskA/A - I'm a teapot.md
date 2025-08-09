---
title: A - I'm a teapot
source: https://atcoder.jp/contests/abc418/tasks/abc418_a
published: 2025-08-09
created: 2025-08-09
description: AtCoder is a programming contest site for anyone from beginners to experts. We hold weekly programming contests online.
tags:
  - clippings
---
A - I'm a teapot

---

Time Limit: 2 sec / Memory Limit: 1024 MiB

配点: $100$ 点

### 問題文

> 高橋君はティーポットです。  
> 高橋君はティーポットなので、紅茶なら喜んで受け入れますが、それ以外の液体を入れようとすると拒否してしまいます。  
> 高橋君に $S$ という名前の液体を入れることが出来るか判定してください。

英小文字からなる長さ $N$ の文字列 $S$ が与えられます。  
$S$ が `tea` で終わる文字列であるかどうかを判定してください。

### 制約

- $1 \leq N \leq 20$
- $N$ は整数
- $S$ は英小文字からなる長さ $N$ の文字列

---

### 入力

入力は以下の形式で標準入力から与えられる。

```
NN
SS
```

### 出力

$S$ が `tea` で終わる文字列であれば `Yes` を、そうでなければ `No` を出力せよ。

---

### 入力例 1

```
8
greentea
```

### 出力例 1

```
Yes
```

`greentea` は `tea` で終わる文字列です。

---

### 入力例 2

```
6
coffee
```

### 出力例 2

```
No
```

`coffee` は `tea` で終わる文字列ではありません。

---

### 入力例 3

```
3
tea
```

### 出力例 3

```
Yes
```

---

### 入力例 4

```
1
t
```

### 出力例 4

```
No
```

Score: $100$ points

### Problem Statement

> Takahashi is a teapot.  
> Since he is a teapot, he will gladly accept tea, but will refuse any other liquid.  
> Determine whether you can pour a liquid named $S$ into him.

You are given a string $S$ of length $N$ consisting of lowercase English letters.  
Determine whether $S$ is a string that ends with `tea`.

### Constraints

- $1 \leq N \leq 20$
- $N$ is an integer.
- $S$ is a string of length $N$ consisting of lowercase English letters.

---

### Input

The input is given from Standard Input in the following format:

```
NN
SS
```

### Output

If $S$ is a string that ends with `tea`, print `Yes`; otherwise, print `No`.

---

### Sample Input 1

```
8
greentea
```

### Sample Output 1

```
Yes
```

`greentea` is a string that ends with `tea`.

---

### Sample Input 2

```
6
coffee
```

### Sample Output 2

```
No
```

`coffee` is not a string that ends with `tea`.

---

### Sample Input 3

```
3
tea
```

### Sample Output 3

```
Yes
```

---

### Sample Input 4

```
1
t
```

### Sample Output 4

```
No
```

---

---

---

2025-08-09 (Sat)  
21:41:36 +08:00