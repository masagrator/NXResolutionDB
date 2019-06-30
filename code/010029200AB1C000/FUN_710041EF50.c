
void FUN_710041ef50(longlong *plParm1)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint local_14;
  
  uVar2 = TryPopNotificationMessage(&local_14);
  if (((uVar2 & 1) != 0) && (local_14 == 0x1e)) {
    iVar1 = GetOperationMode();
    if (iVar1 == 0) {
      (**(code **)(*plParm1 + 0x90))(plParm1,0x500,0x2d0);
      uVar3 = 2;
    }
    else {
      (**(code **)(*plParm1 + 0x90))(plParm1,0x780,0x438);
      uVar3 = 1;
    }
    FUN_710041be60(plParm1,uVar3);
  }
  return;
}

