
void FUN_71003495f8(longlong lParm1)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  
  iVar1 = 0x438;
  if (DAT_71023f9ad8 != '\0') {
    iVar1 = 0x2d0;
  }
  iVar4 = 0x780;
  if (DAT_71023f9ad8 != '\0') {
    iVar4 = 0x500;
  }
  if (*(uint *)(lParm1 + 0x35a0) != 0) {
    puVar2 = (undefined *)((ulonglong)*(uint *)(lParm1 + 0x35a0) * 0x38);
    piVar3 = *(int **)(lParm1 + 0x3590);
    do {
      if (*piVar3 == -0x478dfc89) {
        if ((puVar2 != (undefined *)0x0) && (piVar3[2] == 0)) {
          piVar3[0xc] = iVar4;
        }
        break;
      }
      piVar3 = piVar3 + 0xe;
      puVar2 = &DAT_ffffffffffffffc8 + (longlong)puVar2;
    } while (puVar2 != (undefined *)0x0);
    if (*(uint *)(lParm1 + 0x35a0) != 0) {
      puVar2 = (undefined *)((ulonglong)*(uint *)(lParm1 + 0x35a0) * 0x38);
      piVar3 = *(int **)(lParm1 + 0x3590);
      do {
        if (*piVar3 == -0x794955c6) {
          if ((puVar2 != (undefined *)0x0) && (piVar3[2] == 0)) {
            piVar3[0xc] = iVar1;
          }
          break;
        }
        piVar3 = piVar3 + 0xe;
        puVar2 = &DAT_ffffffffffffffc8 + (longlong)puVar2;
      } while (puVar2 != (undefined *)0x0);
    }
  }
  fVar5 = 768.00000000;
  if (*(uint *)(lParm1 + 0x60f0) != 0) {
    puVar2 = (undefined *)((ulonglong)*(uint *)(lParm1 + 0x60f0) * 0x38);
    piVar3 = *(int **)(lParm1 + 0x60e0);
    do {
      if (*piVar3 == -0x2fcd8f1) {
        if ((puVar2 != (undefined *)0x0) && (piVar3[2] == 0)) {
          fVar5 = *(float *)(&DAT_71018b96b8 + (ulonglong)(piVar3[0xc] == 1) * 4);
        }
        break;
      }
      piVar3 = piVar3 + 0xe;
      puVar2 = &DAT_ffffffffffffffc8 + (longlong)puVar2;
    } while (puVar2 != (undefined *)0x0);
  }
  if (*(uint *)(lParm1 + 0x35a0) != 0) {
    piVar3 = *(int **)(lParm1 + 0x3590);
    puVar2 = (undefined *)((ulonglong)*(uint *)(lParm1 + 0x35a0) * 0x38);
    do {
      if (*piVar3 == 0x7886a28c) {
        if (puVar2 == (undefined *)0x0) {
          return;
        }
        if (piVar3[2] != 1) {
          return;
        }
        *(double *)(piVar3 + 0xc) = (double)((float)iVar1 / fVar5 + -1.00000000);
        return;
      }
      piVar3 = piVar3 + 0xe;
      puVar2 = &DAT_ffffffffffffffc8 + (longlong)puVar2;
    } while (puVar2 != (undefined *)0x0);
  }
  return;
}

