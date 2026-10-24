# SISTEMA DE ABERTURA DE PORTA

**Projeto 02**  
**Autor:** Iury Moreira Lopes 
**Linkedin:** https://linkedIn.com/in/iury-moreira-lopes-3b06073b6
**Data:** 24/10/2026  

Este é um programa desenvolvido em linguagem C que simula um sistema de controle de acesso para um laboratório. Ele valida a identidade do usuário através do ID do crachá e verifica as condições de segurança térmica do ambiente antes de liberar a entrada.

## Tecnologias Utilizadas

* **Linguagem C** (Padrão C99/C11)
* **Biblioteca `<windows.h>`** (Utilizada para configurar o suporte a caracteres UTF-8 no console do Windows)

## Como Funciona o Sistema

O programa solicita três informações principais ao usuário:
1. **Nome completo** do operador.
2. **ID do Crachá** (Apenas o ID `1024` tem permissão de acesso).
3. **Temperatura atual do laboratório** (O acesso é bloqueado se a temperatura for igual ou superior a `35.5°C`).

### Regras de Negócio:
* **Acesso Liberado:** Ocorre apenas se o ID for exatamente `1024` **e** a temperatura ambiente estiver estritamente abaixo de `35.0°C`.
* **Acesso Negado:** Ocorre se o ID estiver incorreto ou se a temperatura ultrapassar os limites de segurança estabelecidos.

## Como Executar o Projeto

Para compilar e rodar este programa na sua máquina, certifique-se de ter um compilador C (como o GCC) instalado.

1. Abra o terminal na pasta do projeto.
2. Compile o código com o comando:
   ```bash
   gcc main.c -o sistema_seguranca
   ```
3. Execute o programa:
   * No Windows:
     ```bash
     .\sistema_seguranca.exe
     ```
   * No Linux/Mac (caso adapte a biblioteca Windows):
     ```bash
     ./sistema_seguranca
     ```

   <img width="1340" height="1508" alt="printf01" src="https://github.com/user-attachments/assets/eaf27b20-720b-4e09-8d2e-4ac67929c121" />


---
*Nota: Este projeto foi desenvolvido para fins educacionais e de estudo da lógica de programação estruturada e livre de inteligencia artificial.*
