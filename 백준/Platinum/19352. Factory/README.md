# [Platinum I] Factory - 19352 

[문제 링크](https://www.acmicpc.net/problem/19352) 

### 성능 요약

메모리: 2048 KB, 시간: 92 ms

### 분류

수학, 기하학, 휴리스틱, 삼분 탐색, 경사 하강법

### 제출 일자

2026년 3월 17일 01:18:40

### 문제 설명

<p>"ASD Inc." is a worldwide quadcopter manufacturer. They have recently decided to build a new factory, which will make a brand new line of quadcopters. However, the company has not yet decided where to build it.</p>

<p>The factory should be placed in such location that the cost of delivering produced quadcopters to stores is minimal possible. There are $n$ stores that are interested in selling the new model. The produced quadcopters will deliver themselves to the stores, each one flying straight from the factory to its selected store. If the Euclidean distance between the factory and some store equals $x$, then the monthly cost of delivery is exactly $x$ bitcoins.</p>

<p>The factory can be built anywhere, even if there is some store in this point (in that case, delivery is costless). Given the coordinates of the stores find the optimal place to build the factory.</p>

### 입력 

 <p>The first line of input contains the number of test cases $z$ ($1 \leq z \leq 10$). The descriptions of the test cases follow.</p>

<p>The first line of each test case contains the number of stores $n$ ($2 \leq n \leq 1000$).</p>

<p>Each of the next $n$ lines contains two integers $x, y$ ($-10^6 \leq x, y \leq 10^6$) denoting coordinates of the stores.</p>

<p>You may assume that no two stores occupy the same spot.</p>

### 출력 

 <p>For each test case, output two numbers denoting the coordinates of a point which minimizes sum of distances to the stores. If there are multiple such points, output any one of them.</p>

<p>If the cost of the optimal solution is $x$, then solution with cost $y$ will be considered correct if $|\frac{y-x}{x}| < 10^{-6}$.</p>

