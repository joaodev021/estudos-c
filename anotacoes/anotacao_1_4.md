```markdown
**Constantes Simbólicas em C**

- **Má Prática com "Números Mágicos":** É considerado ruim usar números como 300 e 20 diretamente no código, pois isso dificulta a manutenção e a compreensão do programa por outras pessoas.
  
- **Uso de `#define`:** A solução é substituir esses números por **constantes simbólicas** usando a diretiva `#define`. Isso ajuda a dar nomes mais descritivos aos valores e facilita futuras alterações. A sintaxe é:

  ```
  #define NOME valor
  ```

- **Exemplo:**
  ```c
  #define LOWER 0
  #define UPPER 300
  #define STEP 20
  ```
  Agora, `LOWER`, `UPPER` e `STEP` podem ser usados no código em vez de números como 0, 300 e 20. Isso facilita a compreensão e modificação do programa.
  
- **Diferença entre Variáveis e Constantes:** Ao contrário das variáveis, as constantes simbólicas não precisam ser declaradas e seus nomes geralmente são escritos em letras **maiúsculas** para serem facilmente reconhecidos.

- **Melhorias no Código:** Usar constantes simbólicas torna o código mais claro e padronizado, além de ser mais fácil de ajustar, se necessário.

Exemplo de uso:

```c
for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
```

---
