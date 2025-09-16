# Libft

Libft est le premier projet de l’école 42.  
Il consiste à recoder un ensemble de fonctions de la **libc** en C, afin de mieux comprendre leur fonctionnement interne et d’acquérir des bases solides en programmation bas niveau.

---

## 📖 Contenu

La librairie contient plusieurs catégories de fonctions :

### Fonctions de la libc
Reproduction des fonctions standards telles que :
- `memset`, `bzero`, `memcpy`, `memmove`, `strlcpy`, `strlcat`
- `toupper`, `tolower`, `isdigit`, `isalpha`, etc.
- `strlen`, `strchr`, `strrchr`, `strncmp`, `strnstr`

### Fonctions supplémentaires
Fonctions utilitaires demandées par le sujet :
- `ft_substr`, `ft_strjoin`, `ft_strtrim`
- `ft_split`, `ft_itoa`, `ft_strmapi`
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### Fonctions bonus (listes chaînées)
Implémentation d’une liste chaînée générique :
- `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`
- `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`
- `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

---

## 📂 Organisation

libft/

├── Makefile

├── libft.h

├── ft_*.c


- **libft.h** : contient toutes les déclarations des fonctions.  
- **Makefile** : compilation avec les règles classiques (`make`, `make clean`, `make fclean`, `make re`).

---

## ⚙️ Compilation

Pour compiler la librairie :  

make
---
Pour supprimer les fichiers objets :

make clean
---
Pour tout nettoyer (objets + librairie) :

make fclean
---
Pour recompiler à neuf :

make re
---
