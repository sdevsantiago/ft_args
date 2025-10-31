<div align="center">

  <!-- Project badge -->
  <a href=".">
    <img src=".github/README/PROJECT BADGE">
  </a>

  <!-- Project name -->
  <h1>PROJECT NAME</h1>

  <!-- Short description -->
  <p>SHORT DESCRIPTION</p>

  <!-- Info badges -->
  <!-- <img src="https://img.shields.io/badge/Score-0%2F100-red?style=for-the-badge&labelColor=black" alt="Score"> -->
  <!-- <img src="https://img.shields.io/badge/Score-100%2F100-brightgreen?style=for-the-badge&labelColor=black" alt="Score"> -->
  <!-- <img src="https://img.shields.io/badge/Score-125%2F100-brightgreen?style=for-the-badge&labelColor=black" alt="Score"> -->
  <img src="https://img.shields.io/badge/Language-C-blue?style=for-the-badge&labelColor=black" alt="Language">
  <br>
  <img src="https://img.shields.io/github/last-commit/sdevsantiago/REPOSITORY?display_timestamp=committer&style=for-the-badge&labelColor=black" alt="Last commit">
  <br>
  <img src="https://github.com/sdevsantiago/REPOSITORY/actions/workflows/norminette.yml/badge.svg">
  <img src="https://github.com/sdevsantiago/REPOSITORY/actions/workflows/makefile.yml/badge.svg">

</div>

---

## ℹ️ About Project

> PROJECT PURPOSE

DETAILED INFO

For detailed info, refer to this project [subject](docs/en.subject.pdf).

## 🚀 Getting Started

### Prerequisites

- GCC compiler
- Make utility
- Unix-like system (Linux, macOS, WSL)

### Install prerequisites

- APT

  ```bash
  sudo apt install build-essential
  ```

- Pacman

  ```bash
  sudo pacman -Sy base-devel
  ```

## 🔧 Build

1. **Clone the repository:**
    ```bash
    git clone https://github.com/sdevsantiago/REPOSITORY.git
    cd REPOSITORY
    ```

2. **Compile the project:**
    ```bash
    make        # Full compilation
    ```

3. **Clean build files:**
    ```bash
    make clean  # Remove object files
    ```

#### Available Make Targets

| Command | Description |
|---------|-------------|
| `make` | Compiles all |
| `make all` | Same as `make` |
| `make clean` | Remove object files (*.o) |
| `make fclean` | Remove object files and binaries |
| `make re` | Clean and rebuild everything |

## 👨‍💻 Usage

### Basic Usage

INSTRUCTIONS

## 📏 Norminette

The code strictly complies with 42's **Norminette v4**:

```bash
norminette *.c *.h
```

More info in the official [Norminette](https://github.com/42school/norminette) repository.

## 🙇‍♂️ Special thanks

- [lrcouto](https://github.com/lrcouto) and [ayogun](https://github.com/ayogun) for creating and publishing, respectively, the [42-project-badges](https://github.com/ayogun/42-project-badges) repository.
- [gcamerli](https://github.com/gcamerli) for creating the [42unlicense](https://github.com/gcamerli/42unlicense) repository.

## ⚖️ License

<div align="center">

<a href="./LICENSE">
<img src="https://img.shields.io/badge/License-42_Unlicense-red?style=for-the-badge&labelColor=black">
</a>

</div>

**This work is published under the terms of [42 Unlicense](LICENSE).** This means you are free to use, modify, and share this software.
