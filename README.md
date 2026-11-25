# Project Euler · C++

**An evolving C++17 workspace for mathematical algorithms and problem solving.**

[Source index](#source-index) · [Build workflow](#build-workflow) · [Python companion](https://github.com/jovanydb/project_euler_py)

This repository contains draft implementations for [Project Euler](https://projecteuler.net/) challenges. The focus is on translating mathematical ideas into clear C++ and exploring algorithmic efficiency.

> **Status: work in progress.** Source files may require corrections before they compile or produce the intended result. In particular, the current Problem 1 draft has syntax issues and does not invoke its solver from `main()`.

## Source index

| File | Problem | State |
| --- | --- | --- |
| [problem_1.cpp](problem_1.cpp) | Multiples of 3 or 5 | Draft; requires correction |
| [problem_14.cpp](problem_14.cpp) | Longest Collatz sequence | Implementation draft; validate before use |

## Build workflow

Clone the repository:

```bash
git clone https://github.com/jovanydb/project_euler_cpp.git
cd project_euler_cpp
```

Use a C++17-capable compiler such as GCC, Clang, or MSVC. Once a draft compiles, build one file at a time. For GCC or Clang:

```bash
g++ -std=c++17 -O2 -Wall -Wextra -pedantic problem_1.cpp -o problem_1
./problem_1
```

On Windows with GCC, run the generated `problem_1.exe`. These are build instructions, not a claim that the current drafts pass compilation.

## Solution review checklist

1. Confirm the mathematical objective and boundary conditions.
2. Compile with warnings enabled and resolve errors.
3. Ensure `main()` invokes the intended solver.
4. Check small cases against an independent reference.
5. Document the approach, time complexity, and integer-range assumptions.

## Next milestones

Complete and validate the existing drafts, add concise mathematical explanations, and introduce a repeatable build workflow as the collection grows. Keep each problem independently understandable.
