
void FUN_7100015230(undefined8 uParm1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined4 uVar9;
  longlong local_40;
  longlong *local_38;
  uint local_24;
  
  thunk_FUN_71000114e0();
  if (DAT_71039b4e20 != '\0') {
    FUN_7100011870();
  }
  bVar3 = DAT_71039b4e30 != false;
  if (DAT_71039c7000 != '\0') {
    bVar3 = DAT_71039b4e30 == false;
    DAT_71039c7000 = '\0';
  }
  while (uVar5 = TryPopNotificationMessage(&local_24), (uVar5 & 1) != 0) {
    if (local_24 == 0x1e) {
      iVar4 = GetOperationMode();
      bVar3 = iVar4 == 1;
    }
    else {
      if (local_24 == 4) {
        FUN_7100013bb0();
        LeaveExitRequestHandlingSection();
      }
    }
  }
  if ((DAT_71030ec5f8 != 0) && (DAT_71030ec5f8 = DAT_71030ec5f8 + -1, DAT_71030ec5f8 == 0)) {
    iVar4 = GetOperationMode();
    bVar3 = iVar4 == 1;
    if (DAT_71030ec5f4 != '\0') {
      DAT_71030ec5f4 = '\0';
      goto LAB_710001531c;
    }
  }
  if (bVar3 == DAT_71039b4e30) {
    return;
  }
LAB_710001531c:
  puVar6 = (undefined8 *)FUN_7100261d90(uParm1);
  FUN_7100212f50(*puVar6);
  uVar7 = *(undefined8 *)(*(longlong *)(local_40 + 0x150) + 0x28);
  if (bVar3 == false) {
    DAT_71039b4e30 = bVar3;
    FUN_7100009d80(uVar7,0x500,0x2d0);
    plVar8 = (longlong *)FUN_71002dea60(local_40);
    *(undefined4 *)(*plVar8 + 0x3c) = 0x500;
    plVar8 = (longlong *)FUN_71002dea60(local_40);
    uVar9 = 0x2d0;
  }
  else {
    DAT_71039b4e30 = bVar3;
    FUN_7100009d80(uVar7,0x640,900);
    plVar8 = (longlong *)FUN_71002dea60(local_40);
    *(undefined4 *)(*plVar8 + 0x3c) = 0x640;
    plVar8 = (longlong *)FUN_71002dea60(local_40);
    uVar9 = 900;
  }
  *(undefined4 *)(*plVar8 + 0x38) = uVar9;
  FUN_71002e0860(local_40);
  if (local_40 != 0) {
    plVar8 = local_38 + 1;
    do {
      iVar4 = *(int *)plVar8;
      iVar2 = iVar4 + -1;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = iVar2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((iVar4 == 0 || iVar2 == 0) &&
       ((**(code **)(*local_38 + 0x30))(), local_38 != (longlong *)0x0)) {
      (**(code **)(*local_38 + 8))();
    }
  }
  return;
}

