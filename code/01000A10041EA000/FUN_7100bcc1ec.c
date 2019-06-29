
/* WARNING: Removing unreachable block (ram,0x007100bce258) */
/* WARNING: Removing unreachable block (ram,0x007100bcdff0) */
/* WARNING: Removing unreachable block (ram,0x007100bcdd7c) */
/* WARNING: Removing unreachable block (ram,0x007100bcdb10) */
/* WARNING: Removing unreachable block (ram,0x007100bcd8a4) */
/* WARNING: Removing unreachable block (ram,0x007100bcd630) */
/* WARNING: Removing unreachable block (ram,0x007100bcd3bc) */
/* WARNING: Removing unreachable block (ram,0x007100bcd144) */
/* WARNING: Removing unreachable block (ram,0x007100bcced0) */
/* WARNING: Removing unreachable block (ram,0x007100bccc4c) */
/* WARNING: Removing unreachable block (ram,0x007100bcc9b8) */
/* WARNING: Removing unreachable block (ram,0x007100bcc754) */
/* WARNING: Removing unreachable block (ram,0x007100bcc4f8) */
/* WARNING: Removing unreachable block (ram,0x007100bcc2d0) */
/* WARNING: Removing unreachable block (ram,0x007100bcc3c4) */
/* WARNING: Removing unreachable block (ram,0x007100bcc628) */
/* WARNING: Removing unreachable block (ram,0x007100bcc884) */
/* WARNING: Removing unreachable block (ram,0x007100bccaf4) */
/* WARNING: Removing unreachable block (ram,0x007100bccd98) */
/* WARNING: Removing unreachable block (ram,0x007100bcd008) */
/* WARNING: Removing unreachable block (ram,0x007100bcd280) */
/* WARNING: Removing unreachable block (ram,0x007100bcd4f8) */
/* WARNING: Removing unreachable block (ram,0x007100bcd768) */
/* WARNING: Removing unreachable block (ram,0x007100bcd9dc) */
/* WARNING: Removing unreachable block (ram,0x007100bcdc44) */
/* WARNING: Removing unreachable block (ram,0x007100bcdeb8) */
/* WARNING: Removing unreachable block (ram,0x007100bce124) */
/* WARNING: Removing unreachable block (ram,0x007100bce38c) */
/* WARNING: Removing unreachable block (ram,0x007100bce4c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100bcc1ec(void)

{
  undefined4 uVar1;
  longlong in_tpidr_el0;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  DAT_71032f5f78 = 0xbf0852f03f82be63;
  FUN_7100adca68(&DAT_71032f5f80,"Frame Duration");
  FUN_710000019c(thunk_FUN_7100adc6f8,&DAT_71032f5f80,&PTR_LOOP_710199f000);
  FUN_7100bc9600(&DAT_71032f58f8);
  FUN_710000019c(FUN_7100bc9788,&DAT_71032f58f8,&PTR_LOOP_710199f000);
  DAT_71032f5a28 = "bStaticMenuBackground:Display";
  _DAT_71032f5a20 = 1;
  DAT_71032f5a18 = &PTR_FUN_71019a6a78;
  etMemContextS();
  uVar1 = *(undefined4 *)(in_tpidr_el0 + 0x24);
  etMemContextS();
  *(undefined4 *)(in_tpidr_el0 + 0x24) = 0x66;
  if (DAT_71032f4a10 == (longlong *)0x0) {
    DAT_71032f4a10 = (longlong *)operator_new(0x128);
    *(undefined *)(DAT_71032f4a10 + 1) = 0;
    DAT_71032f4a10[0x23] = 0;
    DAT_71032f4a10[0x24] = 0;
    DAT_71032f4a10[0x22] = 0;
    *DAT_71032f4a10 = 0x7102071868;
  }
  (**(code **)(*DAT_71032f4a10 + 0x10))(DAT_71032f4a10,&DAT_71032f5a18);
  etMemContextS();
  *(undefined4 *)(in_tpidr_el0 + 0x24) = uVar1;
  lVar2 = in_tpidr_el0;
  FUN_710000019c(FUN_7100081d5c,&DAT_71032f5a18,&PTR_LOOP_710199f000);
  DAT_71032f5a40 = "iSize W:Display";
  DAT_71032f5a38 = 0x500;
  DAT_71032f5a30 = &PTR_FUN_71019a6a78;
  etMemContextS();
  uVar1 = *(undefined4 *)(in_tpidr_el0 + 0x24);
  etMemContextS();
  plVar4 = DAT_71032f4a10;
  *(undefined4 *)(lVar2 + 0x24) = 0x66;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x128);
    *(undefined *)(plVar4 + 1) = 0;
    plVar4[0x23] = 0;
    plVar4[0x24] = 0;
    plVar4[0x22] = 0;
    *plVar4 = 0x7102071868;
    DAT_71032f4a10 = plVar4;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4,&DAT_71032f5a30);
  etMemContextS();
  *(undefined4 *)(lVar2 + 0x24) = uVar1;
  lVar3 = lVar2;
  FUN_710000019c(FUN_7100081d5c,&DAT_71032f5a30,&PTR_LOOP_710199f000);
  DAT_71032f5a58 = "iSize H:Display";
  DAT_71032f5a50 = 0x2d0;
  DAT_71032f5a48 = &PTR_FUN_71019a6a78;
  etMemContextS();
  uVar1 = *(undefined4 *)(lVar2 + 0x24);
  etMemContextS();
  plVar4 = DAT_71032f4a10;
  *(undefined4 *)(lVar3 + 0x24) = 0x66;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x128);
    *(undefined *)(plVar4 + 1) = 0;
    plVar4[0x23] = 0;
    plVar4[0x24] = 0;
    plVar4[0x22] = 0;
    *plVar4 = 0x7102071868;
    DAT_71032f4a10 = plVar4;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4,&DAT_71032f5a48);
  etMemContextS();
  *(undefined4 *)(lVar3 + 0x24) = uVar1;
  lVar2 = lVar3;
  FUN_710000019c(FUN_7100081d5c,&DAT_71032f5a48,&PTR_LOOP_710199f000);
  DAT_71032f5a70 = "iLocation X:Display";
  DAT_71032f5a68 = 0;
  DAT_71032f5a60 = &PTR_FUN_71019a6a78;
  etMemContextS();
  uVar1 = *(undefined4 *)(lVar3 + 0x24);
  etMemContextS();
  plVar4 = DAT_71032f4a10;
  *(undefined4 *)(lVar2 + 0x24) = 0x66;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x128);
    *(undefined *)(plVar4 + 1) = 0;
    plVar4[0x23] = 0;
    plVar4[0x24] = 0;
    plVar4[0x22] = 0;
    *plVar4 = 0x7102071868;
    DAT_71032f4a10 = plVar4;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4,&DAT_71032f5a60);
  etMemContextS();
  *(undefined4 *)(lVar2 + 0x24) = uVar1;
  lVar3 = lVar2;
  FUN_710000019c(FUN_7100081d5c,&DAT_71032f5a60,&PTR_LOOP_710199f000);
  DAT_71032f5a88 = "iLocation Y:Display";
  DAT_71032f5a80 = 0;
  DAT_71032f5a78 = &PTR_FUN_71019a6a78;
  etMemContextS();
  uVar1 = *(undefined4 *)(lVar2 + 0x24);
  etMemContextS();
  plVar4 = DAT_71032f4a10;
  *(undefined4 *)(lVar3 + 0x24) = 0x66;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x128);
    *(undefined *)(plVar4 + 1) = 0;
    plVar4[0x23] = 0;
    plVar4[0x24] = 0;
    plVar4[0x22] = 0;
    *plVar4 = 0x7102071868;
    DAT_71032f4a10 = plVar4;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4,&DAT_71032f5a78);
  etMemContextS();
  *(undefined4 *)(lVar3 + 0x24) = uVar1;
  lVar2 = lVar3;
  FUN_710000019c(FUN_7100081d5c,&DAT_71032f5a78,&PTR_LOOP_710199f000);
  DAT_71032f5aa0 = "bFull Screen:Display";
  DAT_71032f5a98 = 0;
  DAT_71032f5a90 = &PTR_FUN_71019a6a78;
  etMemContextS();
  uVar1 = *(undefined4 *)(lVar3 + 0x24);
  etMemContextS();
  plVar4 = DAT_71032f4a10;
  *(undefined4 *)(lVar2 + 0x24) = 0x66;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x128);
    *(undefined *)(plVar4 + 1) = 0;
    plVar4[0x23] = 0;
    plVar4[0x24] = 0;
    plVar4[0x22] = 0;
    *plVar4 = 0x7102071868;
    DAT_71032f4a10 = plVar4;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4,&DAT_71032f5a90);
  etMemContextS();
  *(undefined4 *)(lVar2 + 0x24) = uVar1;
  lVar3 = lVar2;
  FUN_710000019c(FUN_7100081d5c,&DAT_71032f5a90,&PTR_LOOP_710199f000);
  DAT_71032f5ab8 = "bBorderless:Display";
  DAT_71032f5ab0 = 0;
  DAT_71032f5aa8 = &PTR_FUN_71019a6a78;
  etMemContextS();
  uVar1 = *(undefined4 *)(lVar2 + 0x24);
  etMemContextS();
  plVar4 = DAT_71032f4a10;
  *(undefined4 *)(lVar3 + 0x24) = 0x66;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x128);
    *(undefined *)(plVar4 + 1) = 0;
    plVar4[0x23] = 0;
    plVar4[0x24] = 0;
    plVar4[0x22] = 0;
    *plVar4 = 0x7102071868;
    DAT_71032f4a10 = plVar4;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4,&DAT_71032f5aa8);
  etMemContextS();
  *(undefined4 *)(lVar3 + 0x24) = uVar1;
  lVar2 = lVar3;
  FUN_710000019c(FUN_7100081d5c,&DAT_71032f5aa8,&PTR_LOOP_710199f000);
  DAT_71032f5ad0 = "fGamma:Display";
  DAT_71032f5ac8 = 0x3f800000;
  DAT_71032f5ac0 = &PTR_FUN_71019c2638;
  etMemContextS();
  uVar1 = *(undefined4 *)(lVar3 + 0x24);
  etMemContextS();
  *(undefined4 *)(lVar2 + 0x24) = 0x66;
  if (DAT_7103256e50 == (longlong *)0x0) {
    DAT_7103256e50 = (longlong *)operator_new(0x128);
    *(undefined *)(DAT_7103256e50 + 1) = 0;
    DAT_7103256e50[0x23] = 0;
    DAT_7103256e50[0x24] = 0;
    DAT_7103256e50[0x22] = 0;
    *DAT_7103256e50 = 0x7101a50788;
  }
  (**(code **)(*DAT_7103256e50 + 0x10))(DAT_7103256e50,&DAT_71032f5ac0);
  etMemContextS();
  *(undefined4 *)(lVar2 + 0x24) = uVar1;
  DAT_71032f5ac0 = &PTR_FUN_71019c25d8;
  lVar3 = lVar2;
  FUN_7100ad5af0(&DAT_71032f5ac0);
  FUN_710000019c(FUN_7100216fe0,&DAT_71032f5ac0,&PTR_LOOP_710199f000);
  DAT_71032f5af0 = "bUseDeviceDebug:Display";
  DAT_71032f5ae8 = 0;
  DAT_71032f5ae0 = &PTR_FUN_71019a6a78;
  etMemContextS();
  uVar1 = *(undefined4 *)(lVar2 + 0x24);
  etMemContextS();
  plVar4 = DAT_71032f4a10;
  *(undefined4 *)(lVar3 + 0x24) = 0x66;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x128);
    *(undefined *)(plVar4 + 1) = 0;
    plVar4[0x23] = 0;
    plVar4[0x24] = 0;
    plVar4[0x22] = 0;
    *plVar4 = 0x7102071868;
    DAT_71032f4a10 = plVar4;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4,&DAT_71032f5ae0);
  etMemContextS();
  *(undefined4 *)(lVar3 + 0x24) = uVar1;
  lVar2 = lVar3;
  FUN_710000019c(FUN_7100081d5c,&DAT_71032f5ae0,&PTR_LOOP_710199f000);
  DAT_71032f5b08 = "bBreakOnValidationError:Display";
  DAT_71032f5b00 = 1;
  DAT_71032f5af8 = &PTR_FUN_71019a6a78;
  etMemContextS();
  uVar1 = *(undefined4 *)(lVar3 + 0x24);
  etMemContextS();
  plVar4 = DAT_71032f4a10;
  *(undefined4 *)(lVar2 + 0x24) = 0x66;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x128);
    *(undefined *)(plVar4 + 1) = 0;
    plVar4[0x23] = 0;
    plVar4[0x24] = 0;
    plVar4[0x22] = 0;
    *plVar4 = 0x7102071868;
    DAT_71032f4a10 = plVar4;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4,&DAT_71032f5af8);
  etMemContextS();
  *(undefined4 *)(lVar2 + 0x24) = uVar1;
  lVar3 = lVar2;
  FUN_710000019c(FUN_7100081d5c,&DAT_71032f5af8,&PTR_LOOP_710199f000);
  DAT_71032f5b20 = "bBreakOnValidationWarning:Display";
  DAT_71032f5b18 = 0;
  DAT_71032f5b10 = &PTR_FUN_71019a6a78;
  etMemContextS();
  uVar1 = *(undefined4 *)(lVar2 + 0x24);
  etMemContextS();
  plVar4 = DAT_71032f4a10;
  *(undefined4 *)(lVar3 + 0x24) = 0x66;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x128);
    *(undefined *)(plVar4 + 1) = 0;
    plVar4[0x23] = 0;
    plVar4[0x24] = 0;
    plVar4[0x22] = 0;
    *plVar4 = 0x7102071868;
    DAT_71032f4a10 = plVar4;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4,&DAT_71032f5b10);
  etMemContextS();
  *(undefined4 *)(lVar3 + 0x24) = uVar1;
  lVar2 = lVar3;
  FUN_710000019c(FUN_7100081d5c,&DAT_71032f5b10,&PTR_LOOP_710199f000);
  DAT_71032f5b38 = "bValidateRenderTargets:Display";
  DAT_71032f5b30 = 1;
  DAT_71032f5b28 = &PTR_FUN_71019a6a78;
  etMemContextS();
  uVar1 = *(undefined4 *)(lVar3 + 0x24);
  etMemContextS();
  plVar4 = DAT_71032f4a10;
  *(undefined4 *)(lVar2 + 0x24) = 0x66;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x128);
    *(undefined *)(plVar4 + 1) = 0;
    plVar4[0x23] = 0;
    plVar4[0x24] = 0;
    plVar4[0x22] = 0;
    *plVar4 = 0x7102071868;
    DAT_71032f4a10 = plVar4;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4,&DAT_71032f5b28);
  etMemContextS();
  *(undefined4 *)(lVar2 + 0x24) = uVar1;
  lVar3 = lVar2;
  FUN_710000019c(FUN_7100081d5c,&DAT_71032f5b28,&PTR_LOOP_710199f000);
  DAT_71032f5b50 = "bAssertOnShaderCompileAtRuntime:Display";
  DAT_71032f5b48 = 1;
  DAT_71032f5b40 = &PTR_FUN_71019a6a78;
  etMemContextS();
  uVar1 = *(undefined4 *)(lVar2 + 0x24);
  etMemContextS();
  plVar4 = DAT_71032f4a10;
  *(undefined4 *)(lVar3 + 0x24) = 0x66;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x128);
    *(undefined *)(plVar4 + 1) = 0;
    plVar4[0x23] = 0;
    plVar4[0x24] = 0;
    plVar4[0x22] = 0;
    *plVar4 = 0x7102071868;
    DAT_71032f4a10 = plVar4;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4,&DAT_71032f5b40);
  etMemContextS();
  *(undefined4 *)(lVar3 + 0x24) = uVar1;
  lVar2 = lVar3;
  FUN_710000019c(FUN_7100081d5c,&DAT_71032f5b40,&PTR_LOOP_710199f000);
  DAT_71032f5b68 = "f1stPersonFarDepthRange:Display";
  DAT_71032f5b60 = 0x3c23d70a;
  DAT_71032f5b58 = &PTR_FUN_71019a6a78;
  etMemContextS();
  uVar1 = *(undefined4 *)(lVar3 + 0x24);
  etMemContextS();
  plVar4 = DAT_71032f4a10;
  *(undefined4 *)(lVar2 + 0x24) = 0x66;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x128);
    *(undefined *)(plVar4 + 1) = 0;
    plVar4[0x23] = 0;
    plVar4[0x24] = 0;
    plVar4[0x22] = 0;
    *plVar4 = 0x7102071868;
    DAT_71032f4a10 = plVar4;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4,&DAT_71032f5b58);
  etMemContextS();
  *(undefined4 *)(lVar2 + 0x24) = uVar1;
  lVar3 = lVar2;
  FUN_710000019c(FUN_7100081d5c,&DAT_71032f5b58,&PTR_LOOP_710199f000);
  DAT_71032f5b80 = "f1stPersonFarDepthRangeControlDriven:Display";
  DAT_71032f5b78 = 0x3dcccccd;
  DAT_71032f5b70 = &PTR_FUN_71019a6a78;
  etMemContextS();
  uVar1 = *(undefined4 *)(lVar2 + 0x24);
  etMemContextS();
  plVar4 = DAT_71032f4a10;
  *(undefined4 *)(lVar3 + 0x24) = 0x66;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x128);
    *(undefined *)(plVar4 + 1) = 0;
    plVar4[0x23] = 0;
    plVar4[0x24] = 0;
    plVar4[0x22] = 0;
    *plVar4 = 0x7102071868;
    DAT_71032f4a10 = plVar4;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4,&DAT_71032f5b70);
  etMemContextS();
  *(undefined4 *)(lVar3 + 0x24) = uVar1;
  lVar2 = lVar3;
  FUN_710000019c(FUN_7100081d5c,&DAT_71032f5b70,&PTR_LOOP_710199f000);
  DAT_71032f5b98 = "fLowestDynamicWidthRatio:Display";
  DAT_71032f5b90 = 0x3f333333;
  DAT_71032f5b88 = &PTR_FUN_71019a6a78;
  etMemContextS();
  uVar1 = *(undefined4 *)(lVar3 + 0x24);
  etMemContextS();
  plVar4 = DAT_71032f4a10;
  *(undefined4 *)(lVar2 + 0x24) = 0x66;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x128);
    *(undefined *)(plVar4 + 1) = 0;
    plVar4[0x23] = 0;
    plVar4[0x24] = 0;
    plVar4[0x22] = 0;
    *plVar4 = 0x7102071868;
    DAT_71032f4a10 = plVar4;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4,&DAT_71032f5b88);
  etMemContextS();
  *(undefined4 *)(lVar2 + 0x24) = uVar1;
  lVar3 = lVar2;
  FUN_710000019c(FUN_7100081d5c,&DAT_71032f5b88,&PTR_LOOP_710199f000);
  DAT_71032f5bb0 = "fLowestDynamicHeightRatio:Display";
  DAT_71032f5ba8 = 0x3f800000;
  DAT_71032f5ba0 = &PTR_FUN_71019a6a78;
  etMemContextS();
  uVar1 = *(undefined4 *)(lVar2 + 0x24);
  etMemContextS();
  plVar4 = DAT_71032f4a10;
  *(undefined4 *)(lVar3 + 0x24) = 0x66;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x128);
    *(undefined *)(plVar4 + 1) = 0;
    plVar4[0x23] = 0;
    plVar4[0x24] = 0;
    plVar4[0x22] = 0;
    *plVar4 = 0x7102071868;
    DAT_71032f4a10 = plVar4;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4,&DAT_71032f5ba0);
  etMemContextS();
  *(undefined4 *)(lVar3 + 0x24) = uVar1;
  lVar2 = lVar3;
  FUN_710000019c(FUN_7100081d5c,&DAT_71032f5ba0,&PTR_LOOP_710199f000);
  DAT_71032f5bc8 = "fRatioIncreasePerSeconds:Display";
  DAT_71032f5bc0 = 0x3cf5c28f;
  DAT_71032f5bb8 = &PTR_FUN_71019a6a78;
  etMemContextS();
  uVar1 = *(undefined4 *)(lVar3 + 0x24);
  etMemContextS();
  plVar4 = DAT_71032f4a10;
  *(undefined4 *)(lVar2 + 0x24) = 0x66;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x128);
    *(undefined *)(plVar4 + 1) = 0;
    plVar4[0x23] = 0;
    plVar4[0x24] = 0;
    plVar4[0x22] = 0;
    *plVar4 = 0x7102071868;
    DAT_71032f4a10 = plVar4;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4,&DAT_71032f5bb8);
  etMemContextS();
  *(undefined4 *)(lVar2 + 0x24) = uVar1;
  lVar3 = lVar2;
  FUN_710000019c(FUN_7100081d5c,&DAT_71032f5bb8,&PTR_LOOP_710199f000);
  DAT_71032f5be0 = "fRatioDecreasePerSeconds:Display";
  DAT_71032f5bd8 = 0x3d8f5c29;
  DAT_71032f5bd0 = &PTR_FUN_71019a6a78;
  etMemContextS();
  uVar1 = *(undefined4 *)(lVar2 + 0x24);
  etMemContextS();
  plVar4 = DAT_71032f4a10;
  *(undefined4 *)(lVar3 + 0x24) = 0x66;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x128);
    *(undefined *)(plVar4 + 1) = 0;
    plVar4[0x23] = 0;
    plVar4[0x24] = 0;
    plVar4[0x22] = 0;
    *plVar4 = 0x7102071868;
    DAT_71032f4a10 = plVar4;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4,&DAT_71032f5bd0);
  etMemContextS();
  *(undefined4 *)(lVar3 + 0x24) = uVar1;
  lVar2 = lVar3;
  FUN_710000019c(FUN_7100081d5c,&DAT_71032f5bd0,&PTR_LOOP_710199f000);
  DAT_71032f5bf8 = "uiResolutionChangeInterval:Display";
  DAT_71032f5bf0 = 5;
  DAT_71032f5be8 = &PTR_FUN_71019a6a78;
  etMemContextS();
  uVar1 = *(undefined4 *)(lVar3 + 0x24);
  etMemContextS();
  plVar4 = DAT_71032f4a10;
  *(undefined4 *)(lVar2 + 0x24) = 0x66;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x128);
    *(undefined *)(plVar4 + 1) = 0;
    plVar4[0x23] = 0;
    plVar4[0x24] = 0;
    plVar4[0x22] = 0;
    *plVar4 = 0x7102071868;
    DAT_71032f4a10 = plVar4;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4,&DAT_71032f5be8);
  etMemContextS();
  *(undefined4 *)(lVar2 + 0x24) = uVar1;
  lVar3 = lVar2;
  FUN_710000019c(FUN_7100081d5c,&DAT_71032f5be8,&PTR_LOOP_710199f000);
  DAT_71032f5c10 = "fDecreaseDRMilliseconds:Display";
  DAT_71032f5c08 = 0x42000000;
  DAT_71032f5c00 = &PTR_FUN_71019a6a78;
  etMemContextS();
  uVar1 = *(undefined4 *)(lVar2 + 0x24);
  etMemContextS();
  plVar4 = DAT_71032f4a10;
  *(undefined4 *)(lVar3 + 0x24) = 0x66;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x128);
    *(undefined *)(plVar4 + 1) = 0;
    plVar4[0x23] = 0;
    plVar4[0x24] = 0;
    plVar4[0x22] = 0;
    *plVar4 = 0x7102071868;
    DAT_71032f4a10 = plVar4;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4,&DAT_71032f5c00);
  etMemContextS();
  *(undefined4 *)(lVar3 + 0x24) = uVar1;
  lVar2 = lVar3;
  FUN_710000019c(FUN_7100081d5c,&DAT_71032f5c00,&PTR_LOOP_710199f000);
  DAT_71032f5c28 = "fIncreaseDRMilliseconds:Display";
  DAT_71032f5c20 = 0x41f00000;
  DAT_71032f5c18 = &PTR_FUN_71019a6a78;
  etMemContextS();
  uVar1 = *(undefined4 *)(lVar3 + 0x24);
  etMemContextS();
  plVar4 = DAT_71032f4a10;
  *(undefined4 *)(lVar2 + 0x24) = 0x66;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x128);
    *(undefined *)(plVar4 + 1) = 0;
    plVar4[0x23] = 0;
    plVar4[0x24] = 0;
    plVar4[0x22] = 0;
    *plVar4 = 0x7102071868;
    DAT_71032f4a10 = plVar4;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4,&DAT_71032f5c18);
  etMemContextS();
  *(undefined4 *)(lVar2 + 0x24) = uVar1;
  lVar3 = lVar2;
  FUN_710000019c(FUN_7100081d5c,&DAT_71032f5c18,&PTR_LOOP_710199f000);
  DAT_71032f5c40 = "fDRClampOffset:Display";
  DAT_71032f5c38 = 0x3b03126f;
  DAT_71032f5c30 = &PTR_FUN_71019a6a78;
  etMemContextS();
  uVar1 = *(undefined4 *)(lVar2 + 0x24);
  etMemContextS();
  plVar4 = DAT_71032f4a10;
  *(undefined4 *)(lVar3 + 0x24) = 0x66;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x128);
    *(undefined *)(plVar4 + 1) = 0;
    plVar4[0x23] = 0;
    plVar4[0x24] = 0;
    plVar4[0x22] = 0;
    *plVar4 = 0x7102071868;
    DAT_71032f4a10 = plVar4;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4,&DAT_71032f5c30);
  etMemContextS();
  *(undefined4 *)(lVar3 + 0x24) = uVar1;
  lVar2 = lVar3;
  FUN_710000019c(FUN_7100081d5c,&DAT_71032f5c30,&PTR_LOOP_710199f000);
  DAT_71032f5c58 = "fDRClampOffsetNeo:Display";
  DAT_71032f5c50 = 0x3a03126f;
  DAT_71032f5c48 = &PTR_FUN_71019a6a78;
  etMemContextS();
  uVar1 = *(undefined4 *)(lVar3 + 0x24);
  etMemContextS();
  plVar4 = DAT_71032f4a10;
  *(undefined4 *)(lVar2 + 0x24) = 0x66;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x128);
    *(undefined *)(plVar4 + 1) = 0;
    plVar4[0x23] = 0;
    plVar4[0x24] = 0;
    plVar4[0x22] = 0;
    *plVar4 = 0x7102071868;
    DAT_71032f4a10 = plVar4;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4,&DAT_71032f5c48);
  etMemContextS();
  *(undefined4 *)(lVar2 + 0x24) = uVar1;
  lVar3 = lVar2;
  FUN_710000019c(FUN_7100081d5c,&DAT_71032f5c48,&PTR_LOOP_710199f000);
  DAT_71032f5c70 = "fLowPowerResolutionWidthRatio:Display";
  DAT_71032f5c68 = 0x3f400000;
  DAT_71032f5c60 = &PTR_FUN_71019a6a78;
  etMemContextS();
  uVar1 = *(undefined4 *)(lVar2 + 0x24);
  etMemContextS();
  plVar4 = DAT_71032f4a10;
  *(undefined4 *)(lVar3 + 0x24) = 0x66;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x128);
    *(undefined *)(plVar4 + 1) = 0;
    plVar4[0x23] = 0;
    plVar4[0x24] = 0;
    plVar4[0x22] = 0;
    *plVar4 = 0x7102071868;
    DAT_71032f4a10 = plVar4;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4,&DAT_71032f5c60);
  etMemContextS();
  *(undefined4 *)(lVar3 + 0x24) = uVar1;
  lVar2 = lVar3;
  FUN_710000019c(FUN_7100081d5c,&DAT_71032f5c60,&PTR_LOOP_710199f000);
  DAT_71032f5c88 = "fLowPowerResolutionHeightRatio:Display";
  DAT_71032f5c80 = 0x3f400000;
  DAT_71032f5c78 = &PTR_FUN_71019a6a78;
  etMemContextS();
  uVar1 = *(undefined4 *)(lVar3 + 0x24);
  etMemContextS();
  plVar4 = DAT_71032f4a10;
  *(undefined4 *)(lVar2 + 0x24) = 0x66;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x128);
    *(undefined *)(plVar4 + 1) = 0;
    plVar4[0x23] = 0;
    plVar4[0x24] = 0;
    plVar4[0x22] = 0;
    *plVar4 = 0x7102071868;
    DAT_71032f4a10 = plVar4;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4,&DAT_71032f5c78);
  etMemContextS();
  *(undefined4 *)(lVar2 + 0x24) = uVar1;
  lVar3 = lVar2;
  FUN_710000019c(FUN_7100081d5c,&DAT_71032f5c78,&PTR_LOOP_710199f000);
  DAT_71032f5ca0 = "uLowPowerShadowMode:Display";
  DAT_71032f5c98 = 1;
  DAT_71032f5c90 = &PTR_FUN_71019a6a78;
  etMemContextS();
  uVar1 = *(undefined4 *)(lVar2 + 0x24);
  etMemContextS();
  plVar4 = DAT_71032f4a10;
  *(undefined4 *)(lVar3 + 0x24) = 0x66;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x128);
    *(undefined *)(plVar4 + 1) = 0;
    plVar4[0x23] = 0;
    plVar4[0x24] = 0;
    plVar4[0x22] = 0;
    *plVar4 = 0x7102071868;
    DAT_71032f4a10 = plVar4;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4,&DAT_71032f5c90);
  etMemContextS();
  *(undefined4 *)(lVar3 + 0x24) = uVar1;
  lVar2 = lVar3;
  FUN_710000019c(FUN_7100081d5c,&DAT_71032f5c90,&PTR_LOOP_710199f000);
  DAT_71032f5cb8 = "uHighPowerShadowMode:Display";
  DAT_71032f5cb0 = 3;
  DAT_71032f5ca8 = &PTR_FUN_71019a6a78;
  etMemContextS();
  uVar1 = *(undefined4 *)(lVar3 + 0x24);
  etMemContextS();
  plVar4 = DAT_71032f4a10;
  *(undefined4 *)(lVar2 + 0x24) = 0x66;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x128);
    *(undefined *)(plVar4 + 1) = 0;
    plVar4[0x23] = 0;
    plVar4[0x24] = 0;
    plVar4[0x22] = 0;
    *plVar4 = 0x7102071868;
    DAT_71032f4a10 = plVar4;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4,&DAT_71032f5ca8);
  etMemContextS();
  *(undefined4 *)(lVar2 + 0x24) = uVar1;
  lVar3 = lVar2;
  FUN_710000019c(FUN_7100081d5c,&DAT_71032f5ca8,&PTR_LOOP_710199f000);
  DAT_71032f5cd0 = "iVSyncPresentInterval:Display";
  DAT_71032f5cc8 = 2;
  DAT_71032f5cc0 = &PTR_FUN_71019a6a78;
  etMemContextS();
  uVar1 = *(undefined4 *)(lVar2 + 0x24);
  etMemContextS();
  plVar4 = DAT_71032f4a10;
  *(undefined4 *)(lVar3 + 0x24) = 0x66;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x128);
    *(undefined *)(plVar4 + 1) = 0;
    plVar4[0x23] = 0;
    plVar4[0x24] = 0;
    plVar4[0x22] = 0;
    *plVar4 = 0x7102071868;
    DAT_71032f4a10 = plVar4;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4,&DAT_71032f5cc0);
  etMemContextS();
  *(undefined4 *)(lVar3 + 0x24) = uVar1;
  FUN_710000019c(FUN_7100081d5c,&DAT_71032f5cc0,&PTR_LOOP_710199f000);
  return;
}

