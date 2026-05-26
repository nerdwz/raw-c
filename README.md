<div align="center">

```
888d888  8888b.  888  888  888         .d8888b 
888P"       "88b 888  888  888        d88P"    
888     .d888888 888  888  888 888888 888      
888     888  888 Y88b 888 d88P        Y88b.    
888     "Y888888  "Y8888888P"          "Y8888P 
```

**studies and experiments in C**
*college · personal projects · late night code*

![C](https://img.shields.io/badge/C-00599C?style=flat-square&logo=c&logoColor=white)
![Dev-C++](https://img.shields.io/badge/Dev--C++-004088?style=flat-square&logo=cplusplus&logoColor=white)
![GitHub Desktop](https://img.shields.io/badge/GitHub_Desktop-8034A9?style=flat-square&logo=github&logoColor=white)
![Windows](https://img.shields.io/badge/Windows-0078D6?style=flat-square&logo=windows&logoColor=white)

</div>

---

```c
#include <stdio.h>

typedef struct {
  char  *ide;
  char  *vcs;
  char  *os;
  char  *status;
} Workspace;

Workspace env = {
  .ide    = "Dev-C++",
  .vcs    = "Git + GitHub Desktop",
  .os     = "Windows",
  .status = "learning and building things 🚧",
};
```

---

<div align="center">

### Journey

*each completed topic is a milestone.*

</div>

<br>

```c
typedef struct {
  char *topic;
  char *items[];
} CurrentStudy;

CurrentStudy now = {
  .topic = "fundamentos",   // 📖 in progress
  .items = {
    "[x] variáveis e tipos de dados",
    "[x] operadores",
    "[x] if / else / switch",
    "[ ] for / while / do-while",
  },
};
```

---

<div align="center">

`MIT License`

</div>
