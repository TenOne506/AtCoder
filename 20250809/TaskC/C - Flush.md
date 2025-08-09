---
title: C - Flush
source: https://atcoder.jp/contests/abc418/tasks/abc418_c
published: 2025-08-09
created: 2025-08-09
description: AtCoder is a programming contest site for anyone from beginners to experts. We hold weekly programming contests online.
tags:
  - clippings
---
C - Flush

---

Time Limit: 2 sec / Memory Limit: 1024 MiB

配点: $350$ 点

### 問題文

ポーカーテーブルの上に $N$ 種類のフレーバーのティーバッグが置かれています。フレーバーには $1$ から $N$ までの番号が付けられており、フレーバー $i$ ($1 \leq i \leq N$) のティーバッグは $A_i$ 個あります。

あなたはこれらのティーバッグを使ったゲームに参加します。ゲームには $1$ 以上 $A_1 + \dots + A_N$ 以下の **難易度** が設定されており，難易度 $b$ のゲームは以下の流れで行われます。

1. あなたは整数 $x$ を宣言する。このとき、 $b \leq x \leq A_1 + \dots + A_N$ を満たす必要がある。
2. ディーラーはポーカーテーブルの上にあるティーバッグの中からちょうど $x$ 個を選び、あなたに渡す。
3. あなたは渡された $x$ 個のティーバッグのフレーバーを確認し、その中から $b$ 個のティーバッグを選ぶ。
4. あなたが選んだ $b$ 個のティーバッグがすべて同じフレーバーであれば、あなたは勝利する。そうでなければ、あなたは敗北する。

ディーラーはあなたが敗北するように最善を尽くすものとします。

$Q$ 個の質問が与えられるので、それぞれに答えてください。 $j$ 番目の質問は以下の通りです。

- 難易度 $B_j$ のゲームに勝利するためにはじめに宣言する必要がある整数 $x$ の最小値を答えよ。勝利が不可能であれば、代わりに $-1$ と答えよ。

### 制約

- $1 \leq N \leq 3 \times 10^5$
- $1 \leq Q \leq 3 \times 10^5$
- $1 \leq A_i \leq 10^6$ ($1 \leq i \leq N$)
- $1 \leq B_j \leq \min(10^6, A_1 + \dots + A_N)$ ($1 \leq j \leq Q$)
- 入力される値は全て整数である。

---

### 入力

入力は以下の形式で標準入力から与えられる。

```
NN QQ
A1A_1 ⋯\cdots ANA_N
B1B_1
⋮\vdots
BQB_Q
```

### 出力

$Q$ 行出力せよ。

$j$ 行目 ($1 \leq j \leq Q$) には、 $j$ 番目のクエリに対する答えを出力せよ。

---

### 入力例 1

```
4 5
4 1 8 4
1
8
5
2
10
```

### 出力例 1

```
1
17
14
5
-1
```

$1$ 番目のクエリにおいて、 $x=1$ を宣言すれば、ディーラーがどの $1$ 個のティーバッグを選んで渡しても、その中から適切に $1$ 個を選ぶことで勝利条件を満たすことが可能です。 $1$ より小さい整数を $x$ として宣言することはできないので、答えは $1$ です。

$2$ 番目のクエリにおいて、 $x=17$ を宣言すれば、ディーラーがどの $17$ 個のティーバッグを選んで渡しても、その中から適切に $8$ 個を選ぶことで勝利条件を満たすことが可能です。 逆に $x < 17$ のとき、ディーラーはあなたを敗北させるようにティーバッグを選んで渡すことが可能です。したがって、答えは $17$ です。

$3$ 番目のクエリにおいて、 $x=14$ を宣言すれば、ディーラーがどの $14$ 個のティーバッグを選んで渡しても、その中から適切に $5$ 個を選ぶことで勝利条件を満たすことが可能です。 逆に $x < 14$ のとき、ディーラーはあなたを敗北させるようにティーバッグを選んで渡すことが可能です。したがって、答えは $14$ です。

$4$ 番目のクエリにおいて、 $x=5$ を宣言すれば、ディーラーがどの $5$ 個のティーバッグを選んで渡しても、その中から適切に $2$ 個を選ぶことで勝利条件を満たすことが可能です。 逆に $x < 5$ のとき、ディーラーはあなたを敗北させるようにティーバッグを選んで渡すことが可能です。したがって、答えは $5$ です。

$5$ 番目のクエリにおいて、どのように $x$ を宣言しても、ディーラーはあなたを敗北させるようにティーバッグを選んで渡すことが可能です。したがって、 $-1$ を出力します。

---

### 入力例 2

```
5 3
13 13 13 13 2
5
12
13
```

### 出力例 2

```
19
47
51
```

Score: $350$ points

### Problem Statement

On the poker table, there are tea bags of $N$ different flavors. The flavors are numbered from $1$ through $N$, and there are $A_i$ tea bags of flavor $i$ ($1 \leq i \leq N$).

You will play a game using these tea bags. The game has a parameter called **difficulty** between $1$ and $A_1 + \dots + A_N$, inclusive. A game of difficulty $b$ proceeds as follows:

1. You declare an integer $x$. Here, it must satisfy $b \leq x \leq A_1 + \dots + A_N$.
2. The dealer chooses exactly $x$ tea bags from among those on the table and gives them to you.
3. You check the flavors of the $x$ tea bags you received, and choose $b$ tea bags from them.
4. If all $b$ tea bags you chose are of the same flavor, you win. Otherwise, you lose.

The dealer will do their best to make you lose.

You are given $Q$ queries, so answer each of them. The $j$ -th query is as follows:

- For a game of difficulty $B_j$, report the minimum integer $x$ you must declare at the start to guarantee a win. If it is impossible to win, report $-1$ instead.

### Constraints

- $1 \leq N \leq 3 \times 10^5$
- $1 \leq Q \leq 3 \times 10^5$
- $1 \leq A_i \leq 10^6$ ($1 \leq i \leq N$)
- $1 \leq B_j \leq \min(10^6, A_1 + \dots + A_N)$ ($1 \leq j \leq Q$)
- All input values are integers.

---

### Input

The input is given from Standard Input in the following format:

```
NN QQ
A1A_1 ⋯\cdots ANA_N
B1B_1
⋮\vdots
BQB_Q
```

### Output

Print $Q$ lines.

The $j$ -th line ($1 \leq j \leq Q$) should contain the answer to the $j$ -th query.

---

### Sample Input 1

```
4 5
4 1 8 4
1
8
5
2
10
```

### Sample Output 1

```
1
17
14
5
-1
```

For the $1$ -st query, if you declare $x=1$, then no matter which $1$ bag the dealer chooses, you can satisfy the winning condition by choosing appropriate $1$ bag among them. Since you cannot choose an integer $x$ less than $1$, the answer is $1$.

For the $2$ -nd query, if you declare $x=17$, then no matter which $17$ bags the dealer chooses, you can satisfy the winning condition by choosing appropriate $8$ bags among them. Conversely, if $x < 17$, the dealer can choose bags to prevent your victory. Thus, the answer is $17$.

For the $3$ -rd query, if you declare $x=14$, then no matter which $14$ bags the dealer chooses, you can satisfy the winning condition by choosing appropriate $5$ bags among them. Conversely, if $x < 14$, the dealer can choose bags to prevent your victory. Thus, the answer is $14$.

For the $4$ -th query, if you declare $x=5$, then no matter which $5$ bags the dealer chooses, you can satisfy the winning condition by choosing appropriate $2$ bags among them. Conversely, if $x < 5$, the dealer can choose bags to prevent your victory. Thus, the answer is $5$.

For the $5$ -th query, no matter what $x$ you declare, the dealer can choose bags to prevent your victory. Thus, print $-1$.

---

### Sample Input 2

```
5 3
13 13 13 13 2
5
12
13
```

### Sample Output 2

```
19
47
51
```

---

---

---

2025-08-09 (Sat)  
21:48:37 +08:00