
undefined8 UndefinedFunction_71007d2c70(longlong *plParm1,int iParm2,int iParm3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  bool bVar10;
  
  iVar1 = *(int *)((longlong)plParm1 + 0x6c);
  lVar7 = FUN_7100916e30();
  iVar2 = *(int *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar7 + 0x4c) * 0x88 + 100);
  iVar6 = (**(code **)(*plParm1 + 0xa0))(plParm1);
  if (iVar6 == iParm2) {
    iVar6 = (**(code **)(*plParm1 + 0xa8))(plParm1);
    bVar5 = iVar6 != iParm3;
  }
  else {
    bVar5 = true;
  }
  fVar3 = (float)iParm3 / (float)iParm2 + -0.56250000;
  fVar4 = -fVar3;
  if (0.00000000 <= fVar3) {
    fVar4 = fVar3;
  }
  if (fVar4 <= 0.00000100 && (bool)(iVar1 != iVar2 | bVar5)) {
    plVar9 = (longlong *)FUN_71007e1e70();
    (**(code **)(*plVar9 + 0x4f0))();
    iVar6 = iParm2;
    if (0x77f < iParm2) {
      iVar6 = 0x780;
    }
    *(int *)(plParm1 + 0xc) = iVar6;
    iVar6 = iParm3;
    if (0x437 < iParm3) {
      iVar6 = 0x438;
    }
    *(int *)((longlong)plParm1 + 100) = iVar6;
    lVar7 = FUN_7100916e30();
    *(undefined4 *)((longlong)plParm1 + 0x6c) =
         *(undefined4 *)
          (*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar7 + 0x4c) * 0x88 + 100);
    if ((iParm2 == 0x500) && (iParm3 == 0x2d0)) {
      bVar10 = false;
    }
    else {
      bVar10 = iParm2 != 0x780 || iParm3 != 0x438;
    }
    *(bool *)((longlong)plParm1 + 0x69) = bVar10;
    DataMemoryBarrier(2,3);
    *(bool *)(plParm1 + 0xd) = bVar5;
    *(bool *)(plParm1 + 0xe) = iVar1 != iVar2;
    FUN_71009c38b0();
    FUN_71009c3800();
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  return uVar8;
}

