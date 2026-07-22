# 📝 C Notes

Moje stručné poznámky k programovaciemu jazyku C.

---

# 📖 Introduction

- Programovací jazyk **C** vytvoril **Dennis Ritchie** v roku **1972** v Bell Labs.
- Patrí medzi najpoužívanejšie programovacie jazyky.
- Je základom mnohých ďalších jazykov, napríklad **C++**, **C#**, **Java**, **JavaScript**, **PHP** alebo **Python** boli jeho syntaxou ovplyvnené.
- Používa sa na vývoj:
  - operačných systémov,
  - ovládačov zariadení,
  - vstavaných systémov (mikrokontroléry),
  - aplikácií a knižníc.

💡 C je nízkoúrovňovejší jazyk ako napríklad Python, takže programátor má väčšiu kontrolu nad pamäťou a fungovaním programu.

---

# 🚀 Get Started

Na písanie programov v jazyku C potrebujeme:

- editor zdrojového kódu (Visual Studio Code),
- kompilátor (GCC),
- terminál na spúšťanie programu.

Základný postup:

1. Napísať program (`.c`)
2. Skompilovať ho
3. Spustiť výsledný program

Príklad:

```bash
gcc main.c -o program
./program
```

---

# ✍️ Syntax

Každý program v jazyku C začína funkciou:

```c
int main() {


    return 0;
}
```

Najčastejšie používané knižnice:

```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
```

Nezabudnúť:

- každý príkaz končí bodkočiarkou `;`
- blok kódu je medzi `{ }`
- C rozlišuje veľké a malé písmená (`Main` ≠ `main`)

---
