# Abstract data types in C

Academic UTFPR exercise on separating interfaces from implementations for structures related to orders, dates and events.

## Structure

- `pedido.h`: types and operation signatures.
- `pedido.c`: implementation.
- `main.c`: terminal interaction.

## Compile

With GCC or a compatible C compiler:

```bash
gcc -Wall -Wextra main.c pedido.c -o exercicio
```

## Scope and limitations

This repository is a learning record, not a ready-to-use application. Input handling and pointer management need review before execution. Files under bin/ and obj/ are old build artifacts; use the source as the reference.
