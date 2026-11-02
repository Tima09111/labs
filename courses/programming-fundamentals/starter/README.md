# `ember` — starter skeleton (Lab 1)

Copy this folder to a repository of your own, `git init`, and start from **M1** of
[Lab 01](../lab-01-a-box-of-bytes.md). It builds and runs as-is.

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Debug
cmake --build build
./build/ember
```

## Why a skeleton exists

Lab 1 is about **bytes and types**. It is not about `while` loops, splitting a
string into words, or `std::setw` — you meet those properly in Labs 4, 5 and 7.
So the parts that need them are given to you, fully written and commented. You
read those. You write the four small things that *are* Lab 1.

## Given — read it, don't rewrite it

| File | What it does |
|---|---|
| `CMakeLists.txt` | C++17, `-Wall -Wextra -Werror`, ASan + UBSan on Debug |
| `src/main.cpp` | the prompt: read a line, split it into words, call your functions |
| `src/memory.hpp` | `Byte`, `MEM_SIZE`, `struct Memory` — the box |
| `src/dump.hpp` | the two declarations |
| `src/dump.cpp` → `dump()` | the hex dump loop |

## Yours — four `TODO(lab-01)` markers

```bash
grep -rn "TODO(lab-01)" src/
```

| # | Where | The job |
|---|---|---|
| 1 | `memory.cpp` → `mem_get` | return the byte, or 0 if the address is outside the box |
| 2 | `memory.cpp` → `mem_set` | write the byte, or return `false` if the address is outside |
| 3 | `dump.cpp` → the ASCII gutter | print the character when the byte is printable |
| 4 | `dump.cpp` → `show_byte` | one byte, four views |

When all four are done:

```txt
ember> set 0 65
ember> set 1 66
ember> get 0
65  0x41  0b01000001  'A'
ember> dump
0000  41 42 00 00 00 00 00 00 00 00 00 00 00 00 00 00  |AB..............|
```

That is M2 and M3 of Lab 1. M4 (the three deliberate breakages) is in the lab.

Until you implement `mem_set`, `set` accepts everything and stores nothing, and
`get` prints `show_byte: not implemented yet`. That is the starting state, not a
bug.

## Later labs

You keep this repository for all eight labs. Every lab adds one `else if` branch
to the dispatcher in `main.cpp` and one or two new files next to these.

---

## Українською

Скопіюйте цю теку у свій репозиторій — вона вже збирається й запускається.

Lab 1 — про **байти й типи**, а не про цикли, розбір рядка на слова чи
форматування виводу (це Labs 4, 5, 7). Тому все, що потребує ще не пройденого,
вам **дано** — з коментарями, щоб читати. Ви пишете чотири маленькі речі, які й
є Lab 1: `mem_get`, `mem_set`, ASCII-колонку в дампі та `show_byte`.

Знайти свою роботу: `grep -rn "TODO(lab-01)" src/`.

Якщо C++ бачите вперше — спочатку
[C++ за годину](../cpp-survival-kit.notes.md), потім
[інструменти й git](../setup.notes.md).
## Звіт Lab 01 (Основна стежка) basic

### 1. Таблиця sizeof
- `sizeof(Byte)`: 1 байт
- `sizeof(Memory)`: 4096 байт

### 2. Вивід dump / get з термінала
```text
ember> dump
0000  00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00  ................
ember> set 0 65
ember> get 0
65 0x41 0b01000001 'A'

Чотири досліди (спостереження)
Переповнення байта через inc Оскільки один байт вміщує числа лише від 0 до 255, то якщо туди записати 255 і виконати команду збільшення (inc), значення не стане 256. Воно «загортається» (wrap around) і просто скидається назад у 0.

Особливість дійсних чисел (0.1 + 0.2 != 0.3): Через те, як комп'ютер зберігає дроби у двійковій системі (стандарт IEEE-754), точний десятковий дріб не завжди можна записати ідеально. Через це виникає крихітна похибка в розрахунках.

Як працюють рядки в пам'яті: Якщо записати підряд байти з кодами символів (наприклад, 65 та 66, тобто 'A' і 'B'), а потім поставити нуль (0), то програма сприймає це як кінець рядка і в ASCII-колонці показує готовий текст.

Навіщо потрібні фігурні дужки {} у пам'яті: Якщо в memory.hpp для масиву Byte data[MEM_SIZE]{} забрати ці дужки, то при запуск програми пам'ять не занулюватиметься. У дампі замість акуратних нулів буде випадкове «сміття», яке залишилося в оперативці комп'ютера.



# Lab 02 - Ember Emulator (Basic track)



Лабораторна робота №2: реалізація базового процесора, арифметико-логічного пристрою (ALU) та консольних команд для емулятора `ember`.



## 1. Функції ALU (`alu.cpp`)

У файлі `alu.cpp` реалізовано всі базові операції над 8-бітними числами (`uint8_t`) з оновленням прапорців **Z** (Zero), **N** (Negative) та **C** (Carry):

**Арифметика та бітові операції:** `ADD`, `SUB`, `AND`, `OR`, `XOR`, `NOT`, `SHL`, `SHR`, `INC`, `DEC`.


## 2. Консольні команди (`main.cpp`)

`reg <a|b> <0..255>` — запис значення у регістр A або B.
`regs` — виведення поточного стану регістрів та прапорців у форматі: `PC A B Z N C`.
`step` — виконання однієї інструкції з пам'яті за адресою `PC`.


## 3. Реалізовані інструкції з ISA.uk.md

У межах базового треку реалізовано та перевірено обробку таких інструкцій:

`NOP` (`0x00`) — порожня операція.
`HALT` (`0x01`) — зупинка виконання програми.
`ADD` (`0x10`) — додавання вмісту регістрів A та B.


## 4. Приклад трасування програми (Trace)



**Тестові команди:**

```text

reg a 10

reg b 20

set 0 16   # Запис опкоду ADD (0x10) за адресою 0
```
