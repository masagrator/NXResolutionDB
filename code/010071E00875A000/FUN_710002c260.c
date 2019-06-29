
undefined8 FUN_710002c260(void)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = GetOperationMode();
  uVar1 = 0x2d000000500;
  if (iVar2 != 0) {
    uVar1 = 0x43800000780;
  }
  return uVar1;
}

