## [[2852] NBA 농구](https://www.acmicpc.net/problem/2852)
동혁이는 NBA 농구 경기를 즐겨 본다. 

동혁이는 골이 들어갈 때 마다 골이 들어간 시간과 팀을 적는 이상한 취미를 가지고 있다.

농구 경기는 정확히 48분동안 진행된다. 

각 팀이 몇 분동안 이기고 있었는지 출력하는 프로그램을 작성하시오.

## 입력
첫째 줄에 골이 들어간 횟수 N(1<=N<=100)이 주어진다. 

둘째 줄부터 N개의 줄에 득점 정보가 주어진다. 

득점 정보는 득점한 팀의 번호와 득점한 시간으로 이루어져 있다. 

팀 번호는 1 또는 2이다. 득점한 시간은 MM:SS(분:초) 형식이며, 분과 초가 한자리 일 경우 첫째자리가 0이다. 

분은 0보다 크거나 같고, 47보다 작거나 같으며, 초는 0보다 크거나 같고, 59보다 작거나 같다. 

득점 시간이 겹치는 경우는 없다.


## 출력
첫째 줄에 1번 팀이 이기고 있던 시간, 둘째 줄에 2번 팀이 이기고 있던 시간을 출력한다. 

시간은 입력과 같은 형식(MM:SS)으로 출력한다.

***

### 풀이 코드

- [@JongHyunJung](https://github.com/almond0115/Algorithm-CodingTest/blob/main/BackJoon/DFS%2CBFS/2852/jjh.cpp)

### 모범 답안

- [String to Int Number Formatting & Range Slicing](https://github.com/almond0115/Algorithm-CodingTest/blob/main/BackJoon/DFS%2CBFS/2852/solution_1.cpp)

***

### 참고 자료

* [C++에서 문자열 형식의 숫자 다루기](https://almond0115.tistory.com/entry/isdigit-stoi-함수-활용법)