
void FUN_7100adf0fc(undefined4 *puParm1,undefined4 *puParm2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *puParm1 = 0x500;
  *puParm2 = 0x2d0;
  lVar3 = FUN_7100adbf84();
  switch(*(undefined4 *)(lVar3 + 0x18)) {
  case 0:
    break;
  case 1:
    uVar4 = GetOperationMode();
    uVar4 = uVar4 & 0xffffffff;
    if ((int)uVar4 == 1) {
LAB_7100adf1c8:
      *puParm1 = 0x780;
      *puParm2 = 0x438;
      return;
    }
    if ((int)uVar4 != 0) {
      pcVar5 = "Unknown operation mode: %i";
LAB_7100adf1f4:
      FUN_71009f6b6c(pcVar5,uVar4);
      return;
    }
    break;
  case 2:
    uVar4 = GetPerformanceMode();
    uVar4 = uVar4 & 0xffffffff;
    if ((int)uVar4 == 1) goto LAB_7100adf1c8;
    if ((int)uVar4 != 0) {
      pcVar5 = "Unknown performance mode: %i";
      goto LAB_7100adf1f4;
    }
    break;
  case 3:
    iVar1 = GetOperationMode();
    iVar2 = GetPerformanceMode();
    uVar6 = 0x780;
    if (iVar1 != 1 || iVar2 != 1) {
      uVar6 = 0x500;
    }
    uVar7 = 0x438;
    if (iVar1 != 1 || iVar2 != 1) {
      uVar7 = 0x2d0;
    }
    *puParm1 = uVar6;
    *puParm2 = uVar7;
    return;
  default:
    return;
  }
  *puParm1 = 0x500;
  *puParm2 = 0x2d0;
  return;
}

