# Semester 1
A structured record of my progression through Semester 1 of the BCA program, moving from basic procedural syntax in C to modular, multi-file software architecture.

---

## Table of Contents

- [Repository Structure](#repository-structure)
- [Prerequisites](#prerequisites)
- [Projects](#projects)
  - [Project 1: Arithmetic Calculator](#project-1-arithmetic-calculator)
  - [Project 2: Number Property Analyzer](#project-2-number-property-analyzer)
- [Version Control Protocol](#version-control-protocol)

---

## Repository Structure

```text
BCA-Sem.1-C/
├── Basics/
│   ├── Calculator.c
│   └── Number_Properties/
│       ├── main.c
│       ├── number_utils.c
│       └── number_utils.h
├── .gitignore
└── README.md
```

---

## Prerequisites

- A C compiler such as **GCC** (GNU Compiler Collection)
- A terminal or command-line interface

Verify your installation:

```bash
gcc --version
```

---

## Projects

### Project 1: Arithmetic Calculator

| Attribute | Details |
|-----------|---------|
| **Location** | `Basics/Calculator.c` |
| **Architecture** | Single-file, procedural |
| **Concepts** | `switch` control flow, floating-point I/O |

**Description**

A single-file procedural program that performs the four basic arithmetic operations: addition (`+`), subtraction (`-`), multiplication (`*`), and division (`/`). Operator selection is handled with a `switch` statement. All operands use double-precision floating-point types (`%lf`) to prevent data truncation.

**Compilation**

From the repository root:

```bash
gcc Basics/Calculator.c -o calculator
```

**Execution**

```bash
./calculator        # macOS / Linux
calculator.exe      # Windows
```

---

### Project 2: Number Property Analyzer

| Attribute | Details |
|-----------|---------|
| **Location** | `Basics/Number_Properties/` |
| **Architecture** | Modular, multi-file |
| **Concepts** | Header files, separation of concerns, algorithmic efficiency |

**Description**

A modular application that separates standard I/O from mathematical logic:

| File | Responsibility |
|------|----------------|
| `main.c` | User interaction and standard input/output |
| `number_utils.c` | Implementation of the number-property logic |
| `number_utils.h` | Function declarations (public interface) |

The analyzer evaluates whether a given number is:

- **Armstrong number**
- **Palindrome**
- **Prime number**

**Algorithmic Constraints**

- **Prime validation** runs in strictly **O(√n)** time complexity.
- **No `<math.h>` dependency.** Custom integer power functions replace library calls such as `pow()`, avoiding floating-point precision errors.

**Compilation**

Execute from inside the `Number_Properties` directory:

```bash
cd Basics/Number_Properties
gcc main.c number_utils.c -o number_analyzer
```

**Execution**

```bash
./number_analyzer        # macOS / Linux
number_analyzer.exe      # Windows
```

---

## Version Control Protocol

This repository follows a **strict source-only state**, enforced by a blacklist-style `.gitignore`.

**Excluded from version control:**

| Artifact Type | Patterns |
|---------------|----------|
| Object files | `*.o`, `*.obj` |
| Windows executables | `*.exe` |
| macOS / Linux executables | Extensionless binary outputs |

**Implication:** Compiled build artifacts and binary executables are never committed. After cloning, compile each project locally using the commands listed above.
