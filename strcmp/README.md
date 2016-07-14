## The difference of strcmp function in C and PHP

0. Run it yourself
  `make test`

1. Explanation
  - `aaa` and `aac`
  - `aaa` and `aaac`
  - `aaa` and `aaaccc`
  - `aaa` and `aabc`
  - `aaa` and `aaac`
  - `你好啊` and `你啊好`
    * `你` => e4bda0
    * `好` => e5a5bd
    * `啊` => e5958a
    > see ord.php or ord.c

2. More examples
