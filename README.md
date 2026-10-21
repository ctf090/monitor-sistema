<div align="center">

# 🖥️ monitor-sistema

**Monitor de sistema para Linux, feito em C++ puro**

![C++](https://img.shields.io/badge/C++-0D8BE8?style=for-the-badge&logo=cplusplus&logoColor=white)
![Linux](https://img.shields.io/badge/Linux-3FA535?style=for-the-badge&logo=linux&logoColor=white)
![Status](https://img.shields.io/badge/status-em%20desenvolvimento-F06400?style=for-the-badge)

</div>

---

## 🌊 O que é

Um projeto de monitoramento de sistema que lê os dados direto do `/proc` do Linux, sem bibliotecas externas.

## 🍃 O que já funciona

- 💧 Mostra a **RAM total** da máquina em GiB
- 🔄 Atualiza a tela sozinho a cada 2 segundos

## 🚀 Como rodar

```bash
g++ munitor-do-sistema.cpp -o monitor
./monitor
```

Para sair, aperte `Ctrl+C`.

## 🗺️ Próximos passos

- [ ] Memória disponível e em uso
- [ ] Uso de CPU
- [ ] Lista de processos
- [ ] Temperatura

---

<div align="center">feito por <a href="https://github.com/ctf090">ctf090</a></div>
