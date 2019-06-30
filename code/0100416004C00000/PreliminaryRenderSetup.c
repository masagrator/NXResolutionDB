
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* idRenderSystemLocal::PreliminaryRenderSetup() */

void PreliminaryRenderSetup(void)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  void *pvVar4;
  bool bVar5;
  uint uVar6;
  longlong *in_x0;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined *puVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined8 *this;
  longlong *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar21;
  undefined auVar20 [32];
  undefined in_z8 [32];
  undefined auVar22 [32];
  undefined in_z9 [32];
  undefined in_z10 [32];
  undefined auStack17432 [64];
  undefined8 local_43d8 [3];
  void *local_43c0;
  undefined8 local_43b8;
  undefined8 local_43b0;
  undefined8 local_43a8;
  undefined8 local_43a0;
  longlong local_4398;
  undefined auStack17296 [64];
  idImageOpts aiStack17232 [4096];
  undefined8 local_350;
  ulonglong local_348;
  ulonglong local_340;
  undefined8 local_338;
  undefined2 local_330;
  undefined8 local_32e;
  undefined8 local_324;
  undefined4 local_31c;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  ulonglong local_2f8;
  undefined2 local_2f0;
  undefined local_2ec;
  undefined2 local_2eb;
  undefined4 local_2e8;
  undefined8 local_2e0;
  ulonglong local_2d8;
  ulonglong local_2d0;
  undefined8 local_2c8;
  undefined2 local_2c0;
  undefined8 local_2be;
  undefined8 local_2b4;
  undefined4 local_2ac;
  undefined4 uStack680;
  undefined4 local_2a4;
  undefined4 uStack672;
  undefined8 local_29c;
  undefined8 local_294;
  undefined4 local_28c;
  ulonglong local_288;
  undefined2 local_280;
  uint3 local_27c;
  undefined4 local_278;
  undefined8 local_270;
  ulonglong local_268;
  ulonglong local_260;
  undefined8 local_258;
  undefined2 local_250;
  undefined8 local_24e;
  undefined8 local_244;
  undefined4 local_23c;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  ulonglong local_218;
  undefined2 local_210;
  undefined2 local_20c;
  undefined local_20a;
  undefined4 local_208;
  undefined8 local_200;
  ulonglong local_1f8;
  ulonglong local_1f0;
  undefined8 local_1e8;
  undefined2 local_1e0;
  undefined8 local_1de;
  undefined4 local_1d4;
  undefined4 uStack464;
  undefined4 local_1cc;
  undefined4 uStack456;
  undefined4 local_1c4;
  undefined4 uStack448;
  undefined8 local_1bc;
  undefined8 local_1b4;
  undefined4 local_1ac;
  ulonglong local_1a8;
  undefined2 local_1a0;
  undefined2 local_19c;
  undefined local_19a;
  undefined4 local_198;
  undefined8 local_190;
  ulonglong local_188;
  ulonglong local_180;
  undefined8 local_178;
  undefined2 local_170;
  undefined8 local_16e;
  undefined8 local_164;
  undefined4 local_15c;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  ulonglong local_138;
  undefined2 local_130;
  undefined2 local_12c;
  undefined local_12a;
  undefined4 local_128;
  undefined8 local_120;
  ulonglong local_118;
  ulonglong local_110;
  undefined8 local_108;
  undefined2 local_100;
  undefined8 local_fe;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined2 local_c0;
  undefined2 local_bc;
  undefined local_ba;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack168;
  undefined8 local_a0;
  undefined8 uStack152;
  undefined8 uStack144;
  undefined8 uStack136;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 uStack104;
  
  local_80 = SUB328(in_z10,0);
  local_70 = SUB328(in_z9,0);
  uStack104 = SUB328(in_z8,0);
  InitDevice();
  if (DAT_71085aaad0 < 2) {
    _videoSettings = *(undefined8 *)(&DAT_7105b9a5e0 + (longlong)(int)DAT_71085aaad0 * 8);
  }
  else {
    _videoSettings = 0x2d000000500;
  }
  InitDisplay();
  Init();
  InitTextureDescriptorPool();
  InitSamplerPool();
  preliminaryRenderSetupFinished = 1;
  DAT_71087ab128 = 0x8000;
  DAT_71087ab178 = 0x8000;
  (*pfncpp_nvnCommandBufferInitialize)(0x71087ab180,nvnDevice);
  Allocate((NvnPoolInfo *)&DAT_71083193a0,0x87ab110,(uint)DAT_71087ab128,4,0);
  DAT_71087ab170 =
       (**(code **)(*memorySystem + 0x10))
                 (memorySystem,
                                    
                  "G:\\zion_ninswitch\\code\\build\\bam\\Zion\\nx\\shippingretail\\intermediate\\batchcpp/../../../../../../../engine/renderer/RenderContext_NVN_NX.cpp(116) : TAG_NVN"
                  ,DAT_71087ab178,200,0,0x10,0);
  (*pfncpp_nvnSyncInitialize)(0x71087ab130,nvnDevice);
  DAT_71087ab220 = 1;
  errCmds = &errorCommandBuffer;
  uVar7 = (**(code **)(*(longlong *)cvarSystem + 0x68))
                    (cvarSystem,"r_nxProgramTextureCompression",0);
  if ((uVar7 & 1) != 0) {
    InitializeDCCCopyBuffers();
  }
  local_d8 = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_2f8 = 0x41500000;
  local_c0 = 0;
  local_bc = 0;
  local_c8 = 0x41500000;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0x1400000000;
  local_324 = 1;
  local_ba = 0;
  local_100 = 0;
  local_b8 = 0x4a;
  local_ec = 0;
  local_fe = 0;
  local_f4 = 1;
  uVar6 = (**(code **)(*in_x0 + 0x1e0))();
  local_118 = local_118 & 0xffffffff | (ulonglong)uVar6 << 0x20;
  uVar6 = (**(code **)(*in_x0 + 0x1e8))();
  local_110 = local_110 & 0xffffffff00000000 | (ulonglong)uVar6;
  local_108 = CONCAT44(1,(undefined4)local_108);
  local_e8 = 0x100000000;
  local_78 = ScratchImage(globalImages,(idImageOpts *)"_frontColor");
  local_148 = 0;
  local_150 = 0;
  local_140 = 0;
  local_130 = 0;
  local_12c = 0;
  local_12a = 0;
  local_178 = 0;
  local_180 = 0;
  local_188 = 0;
  local_190 = 0;
  local_170 = 0;
  local_128 = 0x4a;
  local_15c = 0;
  local_16e = 0;
  local_164 = local_324;
  local_138 = local_2f8;
  uVar6 = (**(code **)(*in_x0 + 0x1e0))();
  local_188 = local_188 & 0xffffffff | (ulonglong)uVar6 << 0x20;
  uVar6 = (**(code **)(*in_x0 + 0x1e8))();
  local_180 = local_180 & 0xffffffff00000000 | (ulonglong)uVar6;
  local_178 = CONCAT44(1,(undefined4)local_178);
  local_158 = 0x100000000;
  local_190 = CONCAT44(3,(undefined4)local_190);
  lVar8 = ScratchImage(globalImages,(idImageOpts *)"_specularBuffer");
  local_1b4 = 0;
  local_1bc = 0;
  local_1ac = 0;
  local_1c4 = 0;
  uStack448 = 0;
  local_1a0 = 0;
  local_19c = 0;
  local_19a = 0;
  local_1e8 = 0;
  local_1f0 = 0;
  local_1f8 = 0;
  local_1e0 = 0;
  local_198 = 0x4a;
  local_1d4 = 0;
  uStack464 = 0;
  local_1cc = 0;
  uStack456 = 5;
  local_1de = 0;
  local_200 = 0x1a00000000;
  local_1a8 = local_2f8;
  uVar6 = (**(code **)(*(longlong *)renderSystem + 0x1e0))(renderSystem);
  local_1f8 = local_1f8 & 0xffffffff | (ulonglong)uVar6 << 0x20;
  uVar6 = (**(code **)(*(longlong *)renderSystem + 0x1e8))(renderSystem);
  uVar18 = 0x100000001;
  local_1f0 = local_1f0 & 0xffffffff00000000 | (ulonglong)uVar6;
  local_1d4 = 1;
  uStack456 = 1;
  local_1c4 = 1;
  local_1a8 = local_1a8 & 0xffffffff00000000;
  lVar9 = ScratchImage(globalImages,(idImageOpts *)"_motionVector");
  local_228 = 0;
  local_230 = 0;
  local_220 = 0;
  local_210 = 0;
  local_258 = 0;
  local_260 = 0;
  local_268 = 0;
  local_250 = 0;
  local_270 = 0x1a00000000;
  local_20c = 0;
  local_20a = 0;
  local_208 = 0x4a;
  local_23c = 0;
  local_24e = 0;
  local_244 = local_324;
  local_218 = local_2f8;
  uVar6 = (**(code **)(*in_x0 + 0x1e0))();
  local_268 = local_268 & 0xffffffff | (ulonglong)uVar6 << 0x20;
  uVar6 = (**(code **)(*in_x0 + 0x1e8))();
  local_260 = local_260 & 0xffffffff00000000 | (ulonglong)uVar6;
  local_258 = CONCAT44(1,(undefined4)local_258);
  local_238 = uVar18;
  lVar10 = ScratchImage(globalImages,(idImageOpts *)"_frontNormal");
  local_294 = 0;
  local_29c = 0;
  local_28c = 0;
  auVar20 = ZEXT832(2);
  local_2a4 = 0;
  uStack672 = 0;
  local_280 = 0;
  local_27c = 0;
  local_2c8 = 0;
  local_2d0 = 0;
  local_2d8 = 0;
  local_2ac = 0;
  uStack680 = 5;
  local_2c0 = 0;
  local_278 = 0x4a;
  local_2be = 0;
  local_2b4 = 2;
  local_2e0 = 0xd00000000;
  local_288 = local_2f8;
  uVar6 = (**(code **)(*(longlong *)renderSystem + 0x1e0))(renderSystem);
  local_2d8 = local_2d8 & 0xffffffff | (ulonglong)uVar6 << 0x20;
  uVar6 = (**(code **)(*(longlong *)renderSystem + 0x1e8))(renderSystem);
  local_2c8 = CONCAT44(1,(undefined4)local_2c8);
  uStack680 = (undefined4)uVar18;
  local_2a4 = (undefined4)((ulonglong)uVar18 >> 0x20);
  local_2d0 = local_2d0 & 0xffffffff00000000 | (ulonglong)uVar6;
  local_288 = local_288 & 0xffffffff00000000;
  local_27c = local_27c & 0xff;
  lVar11 = ScratchImage(globalImages,(idImageOpts *)"_viewDepth");
  local_308 = 0;
  local_310 = 0;
  local_300 = 0;
  local_2f0 = 0;
  local_2eb = 0;
  local_338 = 0;
  local_340 = 0;
  local_2e8 = 0x4a;
  local_348 = 0;
  local_330 = 0;
  local_31c = 0;
  local_32e = 0;
  local_350 = 0x300000000;
  uVar6 = (**(code **)(*in_x0 + 0x1e0))();
  local_348 = local_348 & 0xffffffff | (ulonglong)uVar6 << 0x20;
  uVar6 = (**(code **)(*in_x0 + 0x1e8))();
  auVar22 = ZEXT832(0xffffffffffffffff);
  lVar16 = lVar9;
  if (lVar9 == 0) {
    lVar16 = lVar11;
  }
  bVar5 = local_78 != 0;
  local_340 = local_340 & 0xffffffff00000000 | (ulonglong)uVar6;
  local_338 = CONCAT44(1,(undefined4)local_338);
  uVar7 = 0;
  local_318 = 0x100000001;
  lVar1 = local_78;
  if (!bVar5) {
    lVar1 = lVar11;
  }
  local_2ec = 1;
  this = &DAT_71087ab018;
  do {
    puVar13 = globalImages;
    va((va *)aiStack17232,"_backColor%d",uVar7 & 0xffffffff);
    lVar12 = ScratchImage(puVar13,aiStack17232);
    in_x0[uVar7 + 0xa6a] = *(longlong *)(lVar12 + 0xe8);
    puVar13 = (undefined *)
              (**(code **)(*memorySystem + 0x10))
                        (memorySystem,
                                                  
                         "G:\\zion_ninswitch\\code\\engine\\renderer/../../shared/idlib/Heap.h(92) : tag"
                         ,0xa8,0x41,0,0x10,0xffffffff);
    *(longlong *)(puVar13 + 4) = SUB328(auVar22,0);
    *(undefined8 *)(puVar13 + 0x20) = 0;
    *(undefined8 *)(puVar13 + 0x28) = 0;
    *(undefined8 *)(puVar13 + 0x10) = 0;
    *(undefined8 *)(puVar13 + 0x18) = 0;
    memset(puVar13 + 0x50,0,0x58);
    *(undefined **)(this + -2) = puVar13;
    lVar14 = lVar12;
    if (lVar12 == 0) {
      lVar14 = lVar11;
    }
    *puVar13 = 1;
    *(undefined4 *)(puVar13 + 4) = *(undefined4 *)(lVar14 + 0x60);
    uVar3 = *(undefined4 *)(lVar14 + 100);
    *(undefined8 *)(puVar13 + 0x40) = 0;
    *(undefined8 *)(puVar13 + 0x48) = 0;
    *(undefined8 *)(puVar13 + 0x30) = 0;
    *(undefined8 *)(puVar13 + 0x38) = 0;
    *(undefined8 *)(puVar13 + 0x20) = 0;
    *(undefined8 *)(puVar13 + 0x28) = 0;
    *(longlong *)(puVar13 + 0x10) = lVar12;
    *(undefined8 *)(puVar13 + 0x18) = 0;
    *(undefined4 *)(puVar13 + 8) = uVar3;
    *(longlong *)(puVar13 + 0x50) = lVar11;
    *(longlong *)(puVar13 + 0x58) = lVar11;
    if (lVar12 != 0) {
      *(undefined8 *)(puVar13 + 0x60) = *(undefined8 *)(lVar12 + 0xe8);
    }
    if (lVar11 != 0) {
      *(undefined8 *)(puVar13 + 0xa0) = *(undefined8 *)(lVar11 + 0xe8);
    }
    puVar13 = (undefined *)
              (**(code **)(*memorySystem + 0x10))
                        (memorySystem,
                                                  
                         "G:\\zion_ninswitch\\code\\engine\\renderer/../../shared/idlib/Heap.h(92) : tag"
                         ,0xa8,0x41,0,0x10,0xffffffff);
    *(longlong *)(puVar13 + 4) = SUB328(auVar22,0);
    *(undefined8 *)(puVar13 + 0x20) = 0;
    *(undefined8 *)(puVar13 + 0x28) = 0;
    *(undefined8 *)(puVar13 + 0x10) = 0;
    *(undefined8 *)(puVar13 + 0x18) = 0;
    memset(puVar13 + 0x50,0,0x58);
    *(undefined **)(this + -1) = puVar13;
    *puVar13 = 1;
    *(undefined4 *)(puVar13 + 4) = *(undefined4 *)(lVar11 + 0x60);
    uVar3 = *(undefined4 *)(lVar11 + 100);
    *(undefined8 *)(puVar13 + 0x40) = 0;
    *(undefined8 *)(puVar13 + 0x48) = 0;
    *(undefined8 *)(puVar13 + 0x30) = 0;
    *(undefined8 *)(puVar13 + 0x38) = 0;
    *(undefined8 *)(puVar13 + 0x20) = 0;
    *(undefined8 *)(puVar13 + 0x28) = 0;
    *(undefined4 *)(puVar13 + 8) = uVar3;
    *(undefined8 *)(puVar13 + 0x10) = 0;
    *(undefined8 *)(puVar13 + 0x18) = 0;
    *(longlong *)(puVar13 + 0x50) = lVar11;
    *(longlong *)(puVar13 + 0x58) = lVar11;
    if (lVar11 != 0) {
      *(undefined8 *)(puVar13 + 0xa0) = *(undefined8 *)(lVar11 + 0xe8);
    }
    puVar13 = (undefined *)
              (**(code **)(*memorySystem + 0x10))
                        (memorySystem,
                                                  
                         "G:\\zion_ninswitch\\code\\engine\\renderer/../../shared/idlib/Heap.h(92) : tag"
                         ,0xa8,0x41,0,0x10,0xffffffff);
    *(longlong *)(puVar13 + 4) = SUB328(auVar22,0);
    *(undefined8 *)(puVar13 + 0x20) = 0;
    *(undefined8 *)(puVar13 + 0x28) = 0;
    *(undefined8 *)(puVar13 + 0x10) = 0;
    *(undefined8 *)(puVar13 + 0x18) = 0;
    memset(puVar13 + 0x50,0,0x58);
    *(undefined **)this = puVar13;
    *puVar13 = 1;
    *(undefined4 *)(puVar13 + 4) = *(undefined4 *)(lVar16 + 0x60);
    uVar3 = *(undefined4 *)(lVar16 + 100);
    *(undefined8 *)(puVar13 + 0x40) = 0;
    *(undefined8 *)(puVar13 + 0x48) = 0;
    *(undefined8 *)(puVar13 + 0x30) = 0;
    *(undefined8 *)(puVar13 + 0x38) = 0;
    *(undefined8 *)(puVar13 + 0x20) = 0;
    *(undefined8 *)(puVar13 + 0x28) = 0;
    *(undefined4 *)(puVar13 + 8) = uVar3;
    *(longlong *)(puVar13 + 0x50) = lVar11;
    *(longlong *)(puVar13 + 0x58) = lVar11;
    *(longlong *)(puVar13 + 0x10) = lVar9;
    *(undefined8 *)(puVar13 + 0x18) = 0;
    if (lVar9 != 0) {
      *(undefined8 *)(puVar13 + 0x60) = *(undefined8 *)(lVar9 + 0xe8);
    }
    if (lVar11 != 0) {
      *(undefined8 *)(puVar13 + 0xa0) = *(undefined8 *)(lVar11 + 0xe8);
    }
    puVar13 = (undefined *)
              (**(code **)(*memorySystem + 0x10))
                        (memorySystem,
                                                  
                         "G:\\zion_ninswitch\\code\\engine\\renderer/../../shared/idlib/Heap.h(92) : tag"
                         ,0xa8,0x41,0,0x10,0xffffffff);
    *(longlong *)(puVar13 + 4) = SUB328(auVar22,0);
    *(undefined8 *)(puVar13 + 0x20) = 0;
    *(undefined8 *)(puVar13 + 0x28) = 0;
    *(undefined8 *)(puVar13 + 0x10) = 0;
    *(undefined8 *)(puVar13 + 0x18) = 0;
    memset(puVar13 + 0x50,0,0x58);
    *(undefined **)(this + 1) = puVar13;
    *puVar13 = 1;
    *(undefined4 *)(puVar13 + 4) = *(undefined4 *)(lVar1 + 0x60);
    uVar3 = *(undefined4 *)(lVar1 + 100);
    *(undefined8 *)(puVar13 + 0x40) = 0;
    *(undefined8 *)(puVar13 + 0x48) = 0;
    *(undefined8 *)(puVar13 + 0x30) = 0;
    *(undefined8 *)(puVar13 + 0x38) = 0;
    *(undefined8 *)(puVar13 + 0x20) = 0;
    *(undefined8 *)(puVar13 + 0x28) = 0;
    *(undefined4 *)(puVar13 + 8) = uVar3;
    *(longlong *)(puVar13 + 0x50) = lVar11;
    *(longlong *)(puVar13 + 0x58) = lVar11;
    *(longlong *)(puVar13 + 0x10) = local_78;
    *(undefined8 *)(puVar13 + 0x18) = 0;
    if (local_78 != 0) {
      *(undefined8 *)(puVar13 + 0x60) = *(undefined8 *)(local_78 + 0xe8);
    }
    if (lVar11 != 0) {
      *(undefined8 *)(puVar13 + 0xa0) = *(undefined8 *)(lVar11 + 0xe8);
    }
    puVar13 = (undefined *)
              (**(code **)(*memorySystem + 0x10))
                        (memorySystem,
                                                  
                         "G:\\zion_ninswitch\\code\\engine\\renderer/../../shared/idlib/Heap.h(92) : tag"
                         ,0xa8,0x41,0,0x10,0xffffffff);
    plVar15 = (longlong *)(puVar13 + 0x10);
    *plVar15 = 0;
    plVar17 = (longlong *)(puVar13 + 0x18);
    *plVar17 = 0;
    *(longlong *)(puVar13 + 4) = SUB328(auVar22,0);
    *(undefined8 *)(puVar13 + 0x20) = 0;
    *(undefined8 *)(puVar13 + 0x28) = 0;
    memset(puVar13 + 0x50,0,0x58);
    *(undefined **)(this + 2) = puVar13;
    *puVar13 = 1;
    *(undefined4 *)(puVar13 + 4) = *(undefined4 *)(lVar1 + 0x60);
    uVar3 = *(undefined4 *)(lVar1 + 100);
    *plVar15 = local_78;
    *(undefined8 *)(puVar13 + 0x40) = 0;
    *(undefined8 *)(puVar13 + 0x48) = 0;
    *(undefined8 *)(puVar13 + 0x30) = 0;
    *(undefined8 *)(puVar13 + 0x38) = 0;
    *(undefined4 *)(puVar13 + 8) = uVar3;
    *(undefined8 *)(puVar13 + 0x20) = 0;
    *(undefined8 *)(puVar13 + 0x28) = 0;
    *plVar17 = 0;
    *(longlong *)(puVar13 + 0x50) = lVar11;
    *(longlong *)(puVar13 + 0x58) = lVar11;
    if (local_78 != 0) {
      *(undefined8 *)(puVar13 + 0x60) = *(undefined8 *)(local_78 + 0xe8);
    }
    if (lVar11 != 0) {
      *(undefined8 *)(puVar13 + 0xa0) = *(undefined8 *)(lVar11 + 0xe8);
    }
    plVar2 = plVar15;
    if (local_78 != 0) {
      plVar2 = plVar17;
    }
    *plVar2 = lVar10;
    lVar14 = *(longlong *)(puVar13 + 0x10);
    *(undefined8 *)(puVar13 + (ulonglong)bVar5 * 8 + 0x60) = *(undefined8 *)(lVar10 + 0xe8);
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      if (*plVar17 == 0) {
        lVar14 = 1;
        plVar15 = plVar17;
      }
      else {
        lVar14 = 2;
        plVar15 = (longlong *)(puVar13 + 0x20);
      }
    }
    uVar7 = uVar7 + 1;
    this = this + 5;
    *plVar15 = lVar8;
    *(undefined8 *)(puVar13 + lVar14 * 8 + 0x60) = *(undefined8 *)(lVar8 + 0xe8);
  } while (uVar7 != 2);
  renderDestNative = DAT_71087ab008;
  renderDestDepth = DAT_71087ab020;
  renderDestDepthMotion = DAT_71087ab018;
  renderDestColor = DAT_71087ab020;
  currentFrame = 0;
  renderDestLightGBuffer = DAT_71087ab028;
  (*pfncpp_nvnWindowBuilderSetDefaults)(auStack17296);
  (*pfncpp_nvnWindowBuilderSetDevice)(auStack17296,nvnDevice);
  (*pfncpp_nvnWindowBuilderSetNativeWindow)(auStack17296,in_x0[0xa9e]);
  (*pfncpp_nvnWindowBuilderSetTextures)(auStack17296,2,in_x0 + 0xa6a);
  uVar7 = (*pfncpp_nvnWindowInitialize)(in_x0 + 0xa6c,auStack17296);
  if ((uVar7 & 0xff) != 0) {
    (*pfncpp_nvnSyncInitialize)(in_x0 + 0xaa0,nvnDevice);
    local_43b8 = 0;
    local_43b0 = 0;
    local_43a8 = 0;
    local_43d8[0] = Load((char *)&resourceList,true,true);
    local_43c0 = (void *)(**(code **)(*memorySystem + 0x10))
                                   (memorySystem,
                                                                        
                                    "G:\\zion_ninswitch\\code\\engine\\renderer/../../shared/idlib/Heap.h(110) : tag"
                                    ,0x10000,0x41,0,0x10,0xffffffff);
    memset(local_43c0,0,0x10000);
    local_43a0 = (**(code **)(*memorySystem + 0x10))
                           (memorySystem,
                                                        
                            "G:\\zion_ninswitch\\code\\engine\\renderer/../../shared/idlib/Heap.h(92) : tag"
                            ,0x30,0x41,0,0x10,0xffffffff);
    local_4398 = (**(code **)(*memorySystem + 0x10))
                           (memorySystem,
                                                        
                            "G:\\zion_ninswitch\\code\\engine\\renderer/../../shared/idlib/Heap.h(110) : tag"
                            ,0x40000,0x41,0,0x10,0xffffffff);
    Allocate((NvnPoolInfo *)&DAT_71083193a0,(int)register0x00000008 - 0x43b8,0x10000,0x10,0);
    (*pfncpp_nvnBufferBuilderSetDefaults)(auStack17432);
    (*pfncpp_nvnBufferBuilderSetDevice)(auStack17432,nvnDevice);
    (*pfncpp_nvnBufferBuilderSetStorage)(auStack17432,local_43a8,local_43b0,0x10000);
    uVar18 = local_43a0;
    uVar7 = (*pfncpp_nvnBufferInitialize)(local_43a0,auStack17432);
    if ((uVar7 & 0xff) != 0) {
      lVar9 = (*pfncpp_nvnBufferGetAddress)(uVar18);
      lVar10 = (*pfncpp_nvnBufferMap)(uVar18);
      pvVar4 = local_43c0;
      lVar16 = 0;
      lVar8 = local_4398;
      do {
        lVar11 = lVar10 + lVar16;
        plVar15 = (longlong *)((longlong)pvVar4 + lVar16);
        lVar1 = lVar9 + lVar16;
        lVar16 = lVar16 + 0x10;
        *plVar15 = lVar11;
        plVar15[1] = lVar1;
        (*pfncpp_nvnSyncInitialize)(lVar8,nvnDevice);
        _uVar19 = SUB3216(auVar20,0);
        lVar8 = lVar8 + 0x40;
      } while (lVar16 != 0x10000);
      (**(code **)(*memorySystem + 0x50))(memorySystem,0);
      memcpy(&wrapperContext,local_43d8,0x48);
      DAT_71087fb6f8 =
           (undefined8 *)
           (**(code **)(*memorySystem + 0x10))
                     (memorySystem,
                                            
                      "G:\\zion_ninswitch\\code\\engine\\renderer\\jobs\\render/../../../framework/../../shared/idlib/Heap.h(92) : tag"
                      ,0x58,0x41,0,0x10,0xffffffff);
                    /* WARNING: Ignoring partial resolution of indirect */
      uVar18 = 0;
      uVar18 = 0;
      uVar18 = 0x8000000000000000;
      *(undefined *)(DAT_71087fb6f8 + 9) = 0;
      uVar21 = SUB168(_uVar19 >> 0x40,0);
      DAT_71087fb6f8[8] = uVar21;
      uVar19 = SUB168(_uVar19,0);
      DAT_71087fb6f8[7] = uVar19;
      DAT_71087fb6f8[6] = uVar21;
      DAT_71087fb6f8[5] = uVar19;
      DAT_71087fb6f8[4] = uVar21;
      DAT_71087fb6f8[3] = uVar19;
      DAT_71087fb6f8[2] = uVar21;
      DAT_71087fb6f8[1] = uVar19;
      *(undefined4 *)(DAT_71087fb6f8 + 10) = 0;
      *DAT_71087fb6f8 = 0x8000000000000000;
      AllocBufferObject(DAT_71087fb6f8,0,0x400000,0);
      DAT_71087fb700 = 0;
      DAT_71087fb708 =
           (undefined8 *)
           (**(code **)(*memorySystem + 0x10))
                     (memorySystem,
                                            
                      "G:\\zion_ninswitch\\code\\engine\\renderer\\jobs\\render/../../../framework/../../shared/idlib/Heap.h(92) : tag"
                      ,0x58,0x41,0,0x10,0xffffffff);
                    /* WARNING: Ignoring partial resolution of indirect */
      uVar19 = 0;
      uVar19 = 0;
      *(undefined *)(DAT_71087fb708 + 9) = 0;
      *(undefined4 *)(DAT_71087fb708 + 10) = 0;
      *DAT_71087fb708 = uVar18;
      uStack168 = SUB168(_uVar19 >> 0x40,0);
      DAT_71087fb708[8] = uStack168;
      local_b0 = SUB168(_uVar19,0);
      DAT_71087fb708[7] = local_b0;
      DAT_71087fb708[6] = uStack168;
      DAT_71087fb708[5] = local_b0;
      DAT_71087fb708[4] = uStack168;
      DAT_71087fb708[3] = local_b0;
      DAT_71087fb708[2] = uStack168;
      DAT_71087fb708[1] = local_b0;
      local_a0 = local_b0;
      uStack152 = uStack168;
      uStack144 = local_b0;
      uStack136 = uStack168;
      AllocBufferObject(DAT_71087fb708,(int)register0x00000008 + -0xb0,0x30,1);
      (**(code **)(*memorySystem + 0x58))(memorySystem,0);
      (*pfncpp_nvnSyncInitialize)(0x71087fb5f8,nvnDevice);
      (*pfncpp_nvnSyncInitialize)(0x71087fb638,nvnDevice);
      (*pfncpp_nvnSyncInitialize)(0x71087fb678,nvnDevice);
      (*pfncpp_nvnSyncInitialize)(0x71087fb6b8,nvnDevice);
      this = (undefined8 *)
             (**(code **)(*memorySystem + 0x10))
                       (memorySystem,
                                                
                        "G:\\zion_ninswitch\\code\\engine\\renderer/../../shared/idlib/Heap.h(92) : tag"
                        ,0x60,0x41,0,0x10,0xffffffff);
      idSysThread((idSysThread *)this);
      *this = 0x710680f0f0;
      renderSubmitThread = this;
      StartThread((char *)this,0x5daeee9,0xfffffffa,4);
      return;
    }
                    /* WARNING: Subroutine does not return */
    Error("Failed to initialize occlusion query buffer.");
  }
                    /* WARNING: Subroutine does not return */
  Error("Failed to initialize game window");
}

