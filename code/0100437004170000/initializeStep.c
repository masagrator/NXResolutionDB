
/* WARNING: Could not reconcile some variable overlaps */
/* keen::GameFramework::initializeStep(keen::GameFrameworkSystem*, unsigned long, bool) */

ulonglong initializeStep(GameFrameworkSystem *param_1,ulong param_2,bool param_3)

{
  longlong lVar1;
  FilePath *this;
  uint uVar2;
  bool bVar3;
  GraphicsApi GVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  MemoryLayoutDefinition *pMVar8;
  MemorySystem *pMVar9;
  longlong lVar10;
  GraphicsFrame *pGVar11;
  GraphicsRenderPass *pGVar12;
  ulonglong uVar13;
  SystemInformation *pSVar14;
  GraphicsSystem *pGVar15;
  void *__src;
  char *extraout_x1;
  char *extraout_x1_00;
  char *extraout_x1_01;
  FileSystem *extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  char *extraout_x1_15;
  undefined8 extraout_x1_16;
  char *pcVar16;
  int iVar17;
  undefined8 *puVar18;
  GameFrameworkSystem *pGVar19;
  undefined *puVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  uint *puVar23;
  GameFrameworkParameters *pGVar24;
  int *this_00;
  FileSystem *pFVar25;
  MemoryAllocator *pMVar26;
  file *this_01;
  FileCommandQueue *pFVar27;
  int iVar28;
  undefined4 local_5a80 [2];
  undefined8 local_5a78;
  undefined8 uStack23152;
  undefined8 local_5a68;
  undefined8 local_5a60;
  undefined8 uStack23128;
  undefined8 local_5a50;
  char *local_5a48;
  undefined8 local_5a40;
  undefined8 local_5a38;
  undefined8 local_5a30;
  undefined8 local_5a28;
  undefined8 local_5a20;
  undefined8 local_5a18;
  longlong local_5a10;
  char *local_5a08;
  undefined4 local_5a00;
  undefined4 local_59fc;
  undefined4 uStack23032;
  undefined4 local_59f4;
  undefined4 local_59f0;
  undefined4 uStack23020;
  undefined4 uStack23016;
  undefined4 uStack23012;
  undefined8 local_59e0;
  undefined8 local_59d8;
  undefined8 local_59d0;
  undefined8 local_59c8;
  undefined8 local_59c0;
  undefined4 local_59b8;
  undefined4 uStack22964;
  undefined4 uStack22960;
  undefined4 uStack22956;
  undefined8 local_59a8;
  char *local_59a0;
  undefined8 local_5998;
  ulonglong local_5948;
  undefined8 uStack22848;
  undefined8 local_5938;
  undefined8 local_1a38;
  undefined8 *local_1a30;
  undefined8 local_1a28;
  undefined8 local_1a20 [2];
  undefined8 local_1a10;
  undefined8 local_1a08;
  undefined local_1920 [6336];
  
  switch(param_2) {
  case 0:
    initialize();
    break;
  case 2:
    this_00 = (int *)(param_1 + 0x10);
    if (0 < *this_00) {
      iVar28 = 0;
      do {
        uVar13 = isStringEqual(*(char **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar28 * 8),
                               "-username");
        if ((uVar13 & 1) == 0) {
          iVar17 = iVar28 + 1;
        }
        else {
          iVar17 = (int)((longlong)iVar28 + 1);
          if (iVar17 < *this_00) {
            *(undefined8 *)(param_1 + 0x40) =
                 *(undefined8 *)(*(longlong *)(param_1 + 0x18) + ((longlong)iVar28 + 1) * 8);
            eraseParameters((CommandLineParameters *)this_00,iVar28,2);
            iVar17 = iVar28;
          }
        }
        iVar28 = iVar17;
      } while (iVar28 < *this_00);
    }
    plVar6 = (longlong *)getGameApplication();
    (**(code **)(*plVar6 + 0x10))(plVar6,this_00,param_1);
    break;
  case 3:
    initializeTimer();
    break;
  case 4:
    pMVar8 = (MemoryLayoutDefinition *)getMemoryLayoutDefinition();
    pMVar9 = (MemorySystem *)createMemorySystem(pMVar8);
    *(MemorySystem **)(param_1 + 0x238) = pMVar9;
    if (pMVar9 != (MemorySystem *)0x0) {
      lVar10 = lockMemoryBlock(pMVar9,1);
      if (lVar10 != 0) {
        local_5a50 = (undefined8 *)((ulonglong)local_5a50 & 0xffffffff00000000);
        uVar13 = create((TlsfAllocator *)(param_1 + 0x290),(MemoryBlock)lVar10,extraout_x1,0xb6321a)
        ;
        if ((uVar13 & 1) != 0) {
          copyString((char *)(param_1 + 0x270),0x20,"GameFramework");
          *(undefined4 *)(param_1 + 800) = 0;
          create((char *)(param_1 + 0x248));
          *(longlong *)(param_1 + 0x2e0) = lVar10;
          *(char **)(param_1 + 0x2e8) = extraout_x1;
          *(undefined8 *)(param_1 + 0x2f0) = 0;
          *(undefined8 *)(param_1 + 0x2f8) = 0;
          *(undefined8 *)(param_1 + 0x300) = 0;
          *(undefined8 *)(param_1 + 0x308) = 0;
          *(undefined8 *)(param_1 + 0x310) = 0;
          *(undefined8 *)(param_1 + 0x318) = 0;
        }
      }
      *(GameFrameworkSystem **)(param_1 + 0x660) = param_1 + 0x240;
      lVar10 = lockMemoryBlock(*(MemorySystem **)(param_1 + 0x238),2);
      if (lVar10 != 0) {
        local_5a50 = (undefined8 *)((ulonglong)local_5a50 & 0xffffffff00000000);
        uVar13 = create((TlsfAllocator *)(param_1 + 0x378),(MemoryBlock)lVar10,extraout_x1_00,
                        0xbc8dac);
        if ((uVar13 & 1) != 0) {
          copyString((char *)(param_1 + 0x358),0x20,"Application");
          *(undefined4 *)(param_1 + 0x408) = 0;
          create((char *)(param_1 + 0x330));
          *(longlong *)(param_1 + 0x3c8) = lVar10;
          *(char **)(param_1 + 0x3d0) = extraout_x1_00;
          *(undefined8 *)(param_1 + 0x3d8) = 0;
          *(undefined8 *)(param_1 + 0x3e0) = 0;
          *(undefined8 *)(param_1 + 1000) = 0;
          *(undefined8 *)(param_1 + 0x3f0) = 0;
          *(undefined8 *)(param_1 + 0x3f8) = 0;
          *(undefined8 *)(param_1 + 0x400) = 0;
        }
      }
      *(GameFrameworkSystem **)(param_1 + 0x668) = param_1 + 0x328;
      lVar10 = lockMemoryBlock(*(MemorySystem **)(param_1 + 0x238),3);
      if (lVar10 == 0) {
        pGVar19 = (GameFrameworkSystem *)0x0;
      }
      else {
        local_5a50 = (undefined8 *)((ulonglong)local_5a50 & 0xffffffff00000000);
        uVar13 = create((TlsfAllocator *)(param_1 + 0x460),(MemoryBlock)lVar10,extraout_x1_01,
                        0xbc8dc6);
        if ((uVar13 & 1) != 0) {
          copyString((char *)(param_1 + 0x440),0x20,"ResourceInit");
          *(undefined4 *)(param_1 + 0x4f0) = 0;
          create((char *)(param_1 + 0x418));
          *(longlong *)(param_1 + 0x4b0) = lVar10;
          *(char **)(param_1 + 0x4b8) = extraout_x1_01;
          *(undefined8 *)(param_1 + 0x4c0) = 0;
          *(undefined8 *)(param_1 + 0x4c8) = 0;
          *(undefined8 *)(param_1 + 0x4d0) = 0;
          *(undefined8 *)(param_1 + 0x4d8) = 0;
          *(undefined8 *)(param_1 + 0x4e0) = 0;
          *(undefined8 *)(param_1 + 0x4e8) = 0;
        }
        pGVar19 = param_1 + 0x410;
      }
      *(GameFrameworkSystem **)(param_1 + 0x670) = pGVar19;
      lVar10 = lockMemoryBlock(*(MemorySystem **)(param_1 + 0x238),4);
      if (lVar10 == 0) {
        pGVar19 = (GameFrameworkSystem *)0x0;
      }
      else {
        local_5a50 = (undefined8 *)((ulonglong)local_5a50 & 0xffffffff00000000);
        uVar13 = create((TlsfAllocator *)(param_1 + 0x548),(MemoryBlock)lVar10,extraout_x1_15,
                        0xbc8de1);
        if ((uVar13 & 1) != 0) {
          copyString((char *)(param_1 + 0x528),0x20,"ResourceData");
          *(undefined4 *)(param_1 + 0x5d8) = 0;
          create((char *)(param_1 + 0x500));
          *(longlong *)(param_1 + 0x598) = lVar10;
          *(char **)(param_1 + 0x5a0) = extraout_x1_15;
          *(undefined8 *)(param_1 + 0x5a8) = 0;
          *(undefined8 *)(param_1 + 0x5b0) = 0;
          *(undefined8 *)(param_1 + 0x5b8) = 0;
          *(undefined8 *)(param_1 + 0x5c0) = 0;
          *(undefined8 *)(param_1 + 0x5c8) = 0;
          *(undefined8 *)(param_1 + 0x5d0) = 0;
        }
        pGVar19 = param_1 + 0x4f8;
      }
      *(GameFrameworkSystem **)(param_1 + 0x678) = pGVar19;
      local_5a50 = (undefined8 *)((ulonglong)local_5a50._4_4_ << 0x20);
      (**(code **)(**(longlong **)(param_1 + 0x660) + 0x10))
                (*(longlong **)(param_1 + 0x660),*(undefined8 *)(param_1 + 0xa0),0x10,&local_5a50,
                 "FrameAllocator");
      create((int)param_1 + 0x5e0);
      initializeTlsAllocator();
      return 1;
    }
    uVar5 = 3;
    goto LAB_71000b2bbc;
  case 5:
    initialize();
    break;
  case 6:
    memset(param_1 + 0x680,0,0x230);
    *(undefined4 *)(param_1 + 0x784) = *(undefined4 *)(param_1 + 0x84);
    break;
  case 9:
    initializeBase(param_1,(GameFrameworkParameters *)(ulonglong)param_2);
    break;
  case 0xb:
    *(MemoryAllocator **)(param_1 + 0xb8) = *(MemoryAllocator **)(param_1 + 0x660);
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0x900);
    createFileSystem(*(MemoryAllocator **)(param_1 + 0x660),(FileSystemParameters *)(param_1 + 0xb8)
                    );
    *(FileSystem **)(param_1 + 0x8f8) = extraout_x1_02;
    mountLinkedResources(extraout_x1_02,"/rom");
    mountAliasPath(*(FileSystem **)(param_1 + 0x8f8),"/shader","/rom");
    *(undefined8 *)(param_1 + 0x1a90) = extraout_x1_03;
    pcVar16 = (char *)getCompletePath((FilePath *)(param_1 + 0x1640));
    if ((pcVar16 == (char *)0x0) || (*pcVar16 == '\0')) {
      uVar7 = 0;
    }
    else {
      pFVar25 = *(FileSystem **)(param_1 + 0x8f8);
      pcVar16 = (char *)getCompletePath((FilePath *)(param_1 + 0x1640));
      mountNativePath(pFVar25,"/cache",pcVar16);
      uVar7 = extraout_x1_04;
    }
    *(undefined8 *)(param_1 + 0x1ac0) = uVar7;
    local_5a50 = (undefined8 *)CONCAT44(local_5a50._4_4_,1);
    local_5a40 = 0;
    local_5a38 = 0;
    local_5a30 = 0;
    local_5a48 = (char *)0x1;
    createCommandQueue(*(FileSystem **)(param_1 + 0x8f8),(FileCommandQueueParameters *)&local_5a50);
    *(undefined8 *)(param_1 + 0x1cc0) = extraout_x1_12;
    return 1;
  case 0x12:
    this = (FilePath *)(param_1 + 0x11f8);
    setCompletePath(this,"rom:/",true);
    pcVar16 = (char *)getCompletePath(this);
    if (pcVar16 == (char *)0x0) {
      return 1;
    }
    if (*pcVar16 == '\0') {
      return 1;
    }
    pFVar25 = *(FileSystem **)(param_1 + 0x8f8);
    pcVar16 = (char *)getDirectoryWithPrefix(this);
    uVar13 = mountNativePath(pFVar25,"/app",pcVar16);
    if ((uVar13 & 0xff) == 0) {
      *(undefined8 *)(param_1 + 0x1a88) = extraout_x1_05;
      return 1;
    }
    goto LAB_71000b2984;
  case 0x13:
    if ((param_3 & 1U) == 0) {
      uVar13 = getNextFinishedCommand
                         ((FileCommandResult *)&local_5a50,*(FileCommandQueue **)(param_1 + 0x1cc0),
                          0);
      if ((uVar13 & 1) == 0) {
        return 0;
      }
      puVar18 = (undefined8 *)(param_1 + 0x1aa8);
      do {
        if (local_5a50._4_1_ == '\0') {
          if ((undefined8 *)local_5a48 == puVar18) {
            *(undefined8 *)(param_1 + 0x1ab0) = local_5a20;
            *puVar18 = local_5a28;
            startMountMemory(*(FileCommandQueue **)(param_1 + 0x1cc0),"/ksp","shaderpackage",
                             (ConstMemoryBlock)*(undefined8 *)(param_1 + 0x1aa8),
                             (UserData)*(undefined8 *)(param_1 + 0x1ab0));
          }
          else {
            if ((GameFrameworkSystem *)local_5a48 == param_1 + 0x1aa0) {
              *(undefined8 *)(param_1 + 0x1aa0) = local_5a38;
              mountZipFile(*(FileSystem **)(param_1 + 0x8f8),"/shader","/ksp/shaderpackage");
              *(undefined8 *)(param_1 + 0x1a98) = extraout_x1_16;
              return 1;
            }
          }
        }
        else {
          if ((undefined8 *)local_5a48 == puVar18) {
            return 1;
          }
          *(undefined4 *)(param_1 + 0x230) = 9;
          startTransition((StateTreeInstance *)(param_1 + 0x8b0),4);
        }
        uVar13 = getNextFinishedCommand
                           ((FileCommandResult *)&local_5a50,
                            *(FileCommandQueue **)(param_1 + 0x1cc0),0);
      } while ((uVar13 & 1) != 0);
      return 0;
    }
    GVar4 = getApi(*(GraphicsSystem **)(param_1 + 0x908));
    if (GVar4 != 0) {
      if (GVar4 != 5) {
        local_5a40 = getBuildProjectName();
        local_5a28 = getShaderFileExtension(GVar4);
        local_5a30 = 0;
        local_5a50 = (undefined8 *)CONCAT44(local_5a50._4_4_,0x14);
        local_5a38 = CONCAT44(local_5a38._4_4_,0x14);
        local_5a48 = (char *)0x0;
        local_5a18 = 0;
        local_5a10 = 0;
        local_5a20 = 0;
        formatStringArguments
                  ((char *)&local_1a38,0x80,"%s.%s.ksp",(FormatStringArgument *)&local_5a50,2);
        FilePath((FilePath *)&local_5a50);
        pcVar16 = *(char **)(param_1 + 0x70);
        if (pcVar16 == (char *)0x0) {
          pcVar16 = "/app/shader_package";
        }
        setCompletePath((FilePath *)&local_5a50,pcVar16,true);
        setFileNameWithExtension((FilePath *)&local_5a50,(char *)&local_1a38);
        this_01 = *(file **)(param_1 + 0x1cc0);
        pFVar27 = *(FileCommandQueue **)(param_1 + 0x660);
        pMVar26 = (MemoryAllocator *)getCompletePath((FilePath *)&local_5a50);
        startLoadFile(this_01,pFVar27,pMVar26,(char *)(param_1 + 0x1aa8),0);
        return 0;
      }
      return 1;
    }
    return 1;
  case 0x14:
    if (*(char **)(param_1 + 0x58) == (char *)0x0) {
      pcVar16 = "/app/gamebuild";
      if (*(char **)(param_1 + 0x68) != (char *)0x0) {
        pcVar16 = *(char **)(param_1 + 0x68);
      }
      uVar13 = mountAliasPath(*(FileSystem **)(param_1 + 0x8f8),"/gamebuild_path",pcVar16);
      uVar7 = extraout_x1_13;
    }
    else {
      copyString((char *)&local_5a50,0x104,*(char **)(param_1 + 0x58));
      uVar13 = mountNativePath(*(FileSystem **)(param_1 + 0x8f8),"/gamebuild_path",
                               (char *)&local_5a50);
      uVar7 = extraout_x1_06;
    }
    if ((uVar13 & 0xff) == 0) {
      *(undefined8 *)(param_1 + 0x1c88) = uVar7;
      uVar13 = mountAliasPath(*(FileSystem **)(param_1 + 0x8f8),"/content","/gamebuild");
      if ((uVar13 & 0xff) == 0) {
        *(undefined8 *)(param_1 + 0x1c90) = extraout_x1_14;
        return 1;
      }
    }
LAB_71000b2984:
    uVar5 = 9;
    goto LAB_71000b2bbc;
  case 0x15:
    if (*(longlong *)(param_1 + 0x60) == 0) {
      bVar3 = *(longlong *)(param_1 + 0x50) != 0;
    }
    else {
      bVar3 = true;
    }
    if ((param_3 & 1U) == 0) {
      uVar13 = getNextFinishedCommand
                         ((FileCommandResult *)&local_1a38,*(FileCommandQueue **)(param_1 + 0x1cc0),
                          0);
      if ((uVar13 & 1) == 0) {
        return 0;
      }
      puVar18 = (undefined8 *)(param_1 + 0x1cb0);
      do {
        if (local_1a38._4_1_ == '\0') {
          if (bVar3 == true) {
            if (local_1a30 == (undefined8 *)(param_1 + 0x1c98)) {
              *(undefined8 *)(param_1 + 0x1c98) = local_1a20[0];
              uStack23152 = *(undefined8 *)(param_1 + 0x50);
              local_5a78 = 0;
              local_5a80[0] = 0x14;
              local_5a68 = 0;
              local_5a60 = 0;
              uStack23128 = 0;
              formatStringArguments
                        ((char *)&local_5a50,0x104,"/gamebuild_path/%s_small.kfc_data",
                         (FormatStringArgument *)local_5a80,1);
              startLoadFile(*(file **)(param_1 + 0x1cc0),*(FileCommandQueue **)(param_1 + 0x660),
                            (MemoryAllocator *)&local_5a50,(char *)puVar18,0);
            }
            else {
              if (local_1a30 == puVar18) {
                *(undefined8 *)(param_1 + 0x1cb8) = local_1a08;
                *puVar18 = local_1a10;
                uStack23152 = *(undefined8 *)(param_1 + 0x50);
                local_5a78 = 0;
                local_5a80[0] = 0x14;
                local_5a60 = 0;
                uStack23128 = 0;
                local_5a68 = 0;
                formatStringArguments
                          ((char *)&local_5a50,0x104,"%s_small.kfc_data",
                           (FormatStringArgument *)local_5a80,1);
                startMountMemory(*(FileCommandQueue **)(param_1 + 0x1cc0),"/gamebuild_path",
                                 (char *)&local_5a50,
                                 (ConstMemoryBlock)*(undefined8 *)(param_1 + 0x1cb0),
                                 (UserData)*(undefined8 *)(param_1 + 0x1cb8));
              }
              else {
                if (local_1a30 == (undefined8 *)(param_1 + 0x1ca8)) {
                  *(undefined8 *)(param_1 + 0x1ca8) = local_1a20[0];
                  uStack23152 = *(undefined8 *)(param_1 + 0x50);
                  local_5a78 = 0;
                  local_5a80[0] = 0x14;
                  local_5a68 = 0;
                  local_5a60 = 0;
                  uStack23128 = 0;
                  formatStringArguments
                            ((char *)&local_5a50,0x104,"/gamebuild_path/%s_small",
                             (FormatStringArgument *)local_5a80,1);
                  startMountKfc(*(file **)(param_1 + 0x1cc0),(FileCommandQueue *)0x7100b63252,
                                (char *)&local_5a50,(char *)(param_1 + 0x1ca0),0);
                }
                else {
                  if (local_1a30 == (undefined8 *)(param_1 + 0x1ca0)) {
                    *(undefined8 *)(param_1 + 0x1ca0) = local_1a20[0];
                    return 1;
                  }
                }
              }
            }
          }
          else {
            if ((bVar3 == true) || (bVar3 == false)) {
              *(undefined8 *)(param_1 + 0x1c98) = local_1a20[0];
              return 1;
            }
          }
        }
        else {
          if (local_1a30 != puVar18) {
            *(undefined4 *)(param_1 + 0x230) = 9;
            startTransition((StateTreeInstance *)(param_1 + 0x8b0),4);
          }
        }
        uVar13 = getNextFinishedCommand
                           ((FileCommandResult *)&local_1a38,
                            *(FileCommandQueue **)(param_1 + 0x1cc0),0);
        if ((uVar13 & 1) == 0) {
          return 0;
        }
      } while( true );
    }
    if (bVar3 == true) {
      FilePath((FilePath *)&local_5a50);
      createCombinedPath((FilePath *)&local_5a50,"/gamebuild_path",*(char **)(param_1 + 0x60),false)
      ;
      this_01 = *(file **)(param_1 + 0x1cc0);
      pcVar16 = (char *)getCompletePath((FilePath *)&local_5a50);
      startMountZipFile(this_01,(FileCommandQueue *)0x7100b63252,pcVar16,(char *)(param_1 + 0x1c98),
                        0);
      return 0;
    }
    if (bVar3 != true) {
      if (bVar3 != false) {
        return 0;
      }
      startMountAliasPath(*(file **)(param_1 + 0x1cc0),(FileCommandQueue *)0x7100b63252,
                          "/gamebuild_path",(char *)(param_1 + 0x1c98),0);
      return 0;
    }
    FilePath((FilePath *)&local_5a50);
    createCombinedPath((FilePath *)&local_5a50,"/gamebuild_path",*(char **)(param_1 + 0x50),false);
    this_01 = *(file **)(param_1 + 0x1cc0);
    pcVar16 = (char *)getCompletePath((FilePath *)&local_5a50);
    startMountKfc(this_01,(FileCommandQueue *)0x7100b63252,pcVar16,(char *)(param_1 + 0x1c98),0);
    return 0;
  case 0x17:
    local_5948 = 0x10000;
    uStack22848 = 0x20;
    local_5938 = 0x100;
    lVar10 = -0x80;
    do {
      lVar1 = lVar10 + 8;
      *(undefined8 *)((longlong)&local_59c8 + lVar10) = 0x700000007;
      *(undefined8 *)((longlong)&local_5948 + lVar10) = 0x700000007;
      lVar10 = lVar1;
    } while (lVar1 != 0);
    if (*(uint *)(param_1 + 0xb4) != 0xffffffff) {
      local_5948 = (ulonglong)*(uint *)(param_1 + 0xb4);
    }
    local_5a50 = (undefined8 *)0x2;
    local_5a48 = (char *)0x600000006;
    setNativeThreadAffinity(1);
    local_5a50 = (undefined8 *)CONCAT44(2,(undefined4)local_5a50);
    uVar2 = *(uint *)(param_1 + 0xb0);
    if (uVar2 < 2) {
      local_5a50 = (undefined8 *)CONCAT44(uVar2,uVar2);
    }
    uVar7 = createTaskSystem(*(MemoryAllocator **)(param_1 + 0x660),
                             (TaskSystemParameters *)&local_5a50);
    *(undefined8 *)(param_1 + 0x900) = uVar7;
    break;
  case 0x1b:
    GVar4 = *(GraphicsApi *)(param_1 + 0x784);
    *(GraphicsApi *)(param_1 + 0x84) = GVar4;
    if (GVar4 == 0xffffffff) {
      GVar4 = getDefaultApi();
      *(GraphicsApi *)(param_1 + 0x84) = GVar4;
      if (GVar4 == 0xffffffff) {
        GVar4 = getDefaultApi();
      }
    }
    local_1a38 = local_1a20;
    puVar20 = local_1920;
    lVar10 = 0x19c0;
    do {
      *(undefined8 *)(puVar20 + 0x8c) = 0;
      *(undefined8 *)(puVar20 + 0x94) = 0x100000000;
      lVar10 = lVar10 + -0x19c;
      puVar20[-0x100] = 0;
      puVar20[-0x80] = 0;
      *puVar20 = 0;
      *(undefined8 *)(puVar20 + 0x84) = 0;
      puVar20[0x80] = 0;
      puVar20 = puVar20 + 0x19c;
    } while (lVar10 != 0);
    local_1a30 = (undefined8 *)0x0;
    local_1a28 = 0x10;
    uVar13 = getGraphicsDisplays((Slice *)&local_1a38,GVar4);
    if ((local_1a30 != (undefined8 *)0x0) && ((uVar13 & 0xff) == 0)) {
      uVar13 = 0;
      puVar18 = &local_5a38;
      do {
        do {
          *puVar18 = 0;
          puVar18[1] = 0x100000000;
          puVar18[2] = 0;
          puVar18[3] = 0x100000000;
          puVar18[4] = 0;
          puVar18[5] = 0x100000000;
          puVar18[6] = 0;
          puVar18[7] = 0x100000000;
          puVar18 = puVar18 + 8;
        } while (puVar18 != &local_1a38);
        local_5a48 = (char *)0x0;
        local_5a40 = 0x400;
        local_5a50 = &local_5a38;
        getSupportedDisplayModes
                  ((Slice *)&local_5a50,GVar4,
                   (GraphicsDisplay *)((longlong)local_1a38 + uVar13 * 0x19c));
        uVar13 = uVar13 + 1;
        puVar18 = &local_5a38;
      } while (uVar13 < local_1a30);
    }
    break;
  case 0x1c:
    uVar5 = 1;
    if (param_1[0x21a] == (GameFrameworkSystem)0x0) {
      uVar5 = 2;
    }
    local_5a50 = (undefined8 *)CONCAT44(2,uVar5);
    uVar7 = createVrSystem(*(MemoryAllocator **)(param_1 + 0x660),(VrSystemParameters *)&local_5a50)
    ;
    *(undefined8 *)(param_1 + 0x11f0) = uVar7;
    return 1;
  case 0x1d:
    local_59c0 = 0x3f8000003fe38e39;
    local_59b8 = 0x3f800000;
    local_59d0 = 0;
    local_59c8 = 0;
    uStack23032 = 0;
    local_59f4 = 0;
    local_59f0 = 0;
    uStack23020 = 0;
    uStack23016 = 0;
    uStack23012 = 0;
    local_59e0 = 0x440000003d;
    local_5a10 = 0;
    local_5a08 = "keen-game";
    local_5a00 = 1;
    memset(&local_59a8,0,0x20);
    uStack22964 = 0;
    uStack22960 = 0;
    local_59d8 = CONCAT35(local_59d8._5_3_,0x100000001);
    local_1a38 = local_1a20;
    uStack23032 = (undefined4)*(undefined8 *)(param_1 + 0x8f8);
    local_59f4 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x8f8) >> 0x20);
    local_59f0 = (undefined4)*(undefined8 *)(param_1 + 0x11f0);
    uStack23020 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x11f0) >> 0x20);
    local_1a30 = (undefined8 *)0x0;
    uStack23016 = (undefined4)*(undefined8 *)(param_1 + 0x900);
    uStack23012 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x900) >> 0x20);
    local_1a28 = 0x10;
    getSupportedApis((Slice *)&local_1a38);
    puVar18 = local_1a38;
    if (local_1a30 == (undefined8 *)0x0) {
LAB_71000b26c8:
      if (puVar18 != (undefined8 *)((longlong)local_1a38 + (longlong)local_1a30 * 4)) {
        *(undefined4 *)((longlong)&local_5a50 + local_5a10 * 4) = *(undefined4 *)(param_1 + 0x84);
        local_5a10 = local_5a10 + 1;
      }
    }
    else {
      lVar10 = (longlong)local_1a30 << 2;
      puVar18 = local_1a38;
      do {
        if (*(int *)puVar18 == *(int *)(param_1 + 0x84)) goto LAB_71000b26c8;
        puVar18 = (undefined8 *)((longlong)puVar18 + 4);
        lVar10 = lVar10 + -4;
      } while (lVar10 != 0);
    }
    if (local_1a30 != (undefined8 *)0x0) {
      iVar28 = *(int *)(param_1 + 0x84);
      puVar18 = local_1a38;
      puVar22 = local_1a30;
      do {
        if (*(int *)puVar18 != iVar28) {
          *(int *)((longlong)&local_5a50 + local_5a10 * 4) = *(int *)puVar18;
          local_5a10 = local_5a10 + 1;
        }
        puVar22 = (undefined8 *)((longlong)puVar22 + -1);
        puVar18 = (undefined8 *)((longlong)puVar18 + 4);
      } while (puVar22 != (undefined8 *)0x0);
    }
    if (local_5a10 == 0) {
      uVar5 = getDefaultApi();
      *(undefined4 *)((longlong)&local_5a50 + local_5a10 * 4) = uVar5;
      local_5a10 = local_5a10 + 1;
    }
    local_59e0 = *(undefined8 *)(param_1 + 0x88);
    local_59a8 = lockMemoryBlock(*(MemorySystem **)(param_1 + 0x238),5);
    local_5998 = lockMemoryBlock(*(MemorySystem **)(param_1 + 0x238),6);
    uVar7 = 0x2d000000500;
    if (param_1[8] != (GameFrameworkSystem)0x0) {
      uVar7 = 0x43800000780;
    }
    uStack22964 = (undefined4)uVar7;
    uStack22960 = (undefined4)((ulonglong)uVar7 >> 0x20);
    local_5a08 = *(char **)(param_1 + 0x30);
    local_5a00 = 1;
    local_59d8 = CONCAT44(CONCAT31(local_59d8._5_3_,param_1[0xa8]),*(undefined4 *)(param_1 + 0xac));
    pGVar15 = (GraphicsSystem *)
              createGraphicsSystem
                        (*(MemoryAllocator **)(param_1 + 0x660),
                         (GraphicsSystemParameters *)&local_5a50);
    *(GraphicsSystem **)(param_1 + 0x908) = pGVar15;
    if (pGVar15 != (GraphicsSystem *)0x0) {
      __src = (void *)getDeviceInfo(pGVar15);
      memcpy(param_1 + 0xac8,__src,0x2fc);
      if (*(TaskSystem **)(param_1 + 0x900) != (TaskSystem *)0x0) {
        uVar7 = createCpuSkinningBuffer
                          (*(MemoryAllocator **)(param_1 + 0x660),*(TaskSystem **)(param_1 + 0x900),
                           (ulong)*(undefined8 *)(param_1 + 0x98));
        *(undefined8 *)(param_1 + 0xdc8) = uVar7;
        return 1;
      }
      *(undefined8 *)(param_1 + 0xdc8) = 0;
      return 1;
    }
    uVar5 = 2;
    goto LAB_71000b2bbc;
  case 0x1e:
    uVar13 = getBackBufferSize(*(GraphicsSystem **)(param_1 + 0x908));
    return (ulonglong)(uVar13 >> 0x20 != 0 && (int)uVar13 != 0);
  case 0x22:
    create((ImmediateRenderer *)(param_1 + 0xdd0),*(GraphicsSystem **)(param_1 + 0x908));
    break;
  case 0x25:
    if (param_1[0x128] != (GameFrameworkSystem)0x0) {
      memcpy(&local_5a50,param_1 + 0x130,0x40);
      local_5a10 = lockMemoryBlock(*(MemorySystem **)(param_1 + 0x238),7);
      uVar7 = createSoundSystem(*(MemoryAllocator **)(param_1 + 0x660),
                                (InitializationParameters *)&local_5a50);
      *(undefined8 *)(param_1 + 0x1c18) = uVar7;
      *(undefined4 *)(param_1 + 0x1c20) = 0xbf800000;
      param_1[0x1c24] = (GameFrameworkSystem)0x0;
      return 1;
    }
    break;
  case 0x27:
    local_5a50 = (undefined8 *)((ulonglong)local_5a50 & 0xffffffffffffff00);
    pcVar16 = *(char **)(param_1 + 0x40);
    if (pcVar16 == (char *)0x0) {
      uVar13 = getMainUserName((char *)&local_5a50,0x100);
      if ((uVar13 & 0xff) != 0) {
        pcVar16 = "NoName";
        goto LAB_71000b227c;
      }
    }
    else {
LAB_71000b227c:
      copyUtf8String((char *)&local_5a50,0x100,pcVar16);
    }
    pMVar26 = *(MemoryAllocator **)(param_1 + 0x660);
    memcpy(&local_1a38,&local_5a50,0x100);
    uVar7 = createUserSystem(pMVar26,(int)register0x00000008 - 0x1a38);
    *(undefined8 *)(param_1 + 0x1c28) = uVar7;
    break;
  case 0x28:
    if (param_1[0x109] == (GameFrameworkSystem)0x0) {
      return 1;
    }
    local_5a50 = *(undefined8 **)(param_1 + 0x110);
    local_5a48 = (char *)getBuildProjectName();
    local_5a40 = *(undefined8 *)(param_1 + 0x120);
    local_5a30 = *(undefined8 *)(param_1 + 0x8f8);
    local_5a28 = *(undefined8 *)(param_1 + 0x900);
    local_5a38 = *(undefined8 *)(param_1 + 0x1c28);
    puVar18 = *(undefined8 **)(param_1 + 0x118);
    if ((puVar18 != (undefined8 *)0x0) &&
       (*(GameFrameworkSystem *)puVar18 != (GameFrameworkSystem)0x0)) {
      local_5a48 = (char *)puVar18;
    }
    lVar10 = createSaveDataSystem
                       (*(MemoryAllocator **)(param_1 + 0x660),
                        (SaveDataSystemParameters *)&local_5a50);
    *(longlong *)(param_1 + 0x1c30) = lVar10;
    if (lVar10 != 0) {
      return 1;
    }
    uVar5 = 4;
    goto LAB_71000b2bbc;
  case 0x2b:
    local_5a48 = "/content";
    local_5a40 = 0x400;
    local_5a50 = *(undefined8 **)(param_1 + 0x8f8);
    uVar13 = createContentSystem(*(MemoryAllocator **)(param_1 + 0x660),
                                 (ContentSystemParameters *)&local_5a50);
    if ((uVar13 & 0xff) == 0) {
      *(undefined8 *)(param_1 + 0x1c38) = extraout_x1_07;
      return 1;
    }
    goto LAB_71000b23a4;
  case 0x2c:
    local_5a28 = 0;
    local_5a20 = 24000;
    local_5a08 = (char *)0x2800;
    local_5a50 = (undefined8 *)0x0;
    local_5a48 = (char *)0x0;
    local_5a18 = 0x80;
    local_5a10 = 0x20;
    local_5a40 = *(undefined8 *)(param_1 + 0x670);
    local_5a38 = *(undefined8 *)(param_1 + 0x678);
    local_5a30 = *(undefined8 *)(param_1 + 0x1c38);
    uVar13 = createResourceSystem
                       (*(MemoryAllocator **)(param_1 + 0x660),
                        (ResourceSystemParameters *)&local_5a50);
    if ((uVar13 & 0xff) == 0) {
      *(undefined8 *)(param_1 + 0x1c40) = extraout_x1_08;
      return 1;
    }
LAB_71000b23a4:
    iVar28 = 0;
    goto LAB_71000b2bc8;
  case 0x2d:
    if ((param_3 & 1U) != 0) {
      getResourceTypeDescriptions();
      *(undefined8 *)(param_1 + 0x1c60) = local_5a40;
      *(char **)(param_1 + 0x1c58) = local_5a48;
      *(undefined8 **)(param_1 + 0x1c50) = local_5a50;
    }
    uVar13 = *(ulonglong *)(param_1 + 0x1c58);
    *(undefined8 *)(param_1 + 0x1c68) = 0;
    if (uVar13 != 0) {
      uVar21 = 0;
      do {
        puVar23 = (uint *)(*(longlong *)(param_1 + 0x1c50) +
                          *(longlong *)(param_1 + 0x1c60) * uVar21);
        lVar10 = *(longlong *)(puVar23 + 2);
        if (lVar10 != 0) {
          registerGenericResourceType
                    (*(ResourceSystem **)(param_1 + 0x1c40),*puVar23,*(uint *)(lVar10 + 0x10),false,
                     *(char **)(lVar10 + 8));
          uVar21 = *(ulonglong *)(param_1 + 0x1c68);
          uVar13 = *(ulonglong *)(param_1 + 0x1c58);
        }
        uVar21 = uVar21 + 1;
        *(ulonglong *)(param_1 + 0x1c68) = uVar21;
      } while (uVar21 < uVar13);
      return 1;
    }
    break;
  case 0x2e:
    if ((param_3 & 1U) != 0) {
      uStack23152 = *(undefined8 *)(param_1 + 0x48);
      local_5a78 = 0;
      local_5a80[0] = 0x14;
      local_5a68 = 0;
      local_5a60 = 0;
      uStack23128 = 0;
      formatStringArguments
                ((char *)&local_5a50,0x104,"/gamebuild/%s",(FormatStringArgument *)local_5a80,1);
      uVar13 = startLoadPackage(*(ResourceSystem **)(param_1 + 0x1c40),(char *)&local_5a50);
      if ((uVar13 & 0xff) != 0) {
        return 1;
      }
      *(undefined8 *)(param_1 + 0x1c48) = extraout_x1_09;
    }
    updateResourceSystem(*(ResourceSystem **)(param_1 + 0x1c40));
    uVar13 = finishLoadPackage(*(ResourceSystem **)(param_1 + 0x1c40),
                               *(ResourcePackage **)(param_1 + 0x1c48),0);
    if ((uVar13 & 0xff) != 0) {
      if (((uint)uVar13 & 0xff) == 0x2a) {
        return 0;
      }
      *(ResourcePackage **)(param_1 + 0x1c48) = (ResourcePackage *)0x0;
    }
    break;
  case 0x30:
    *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_1 + 0x1c28);
    if (*(int *)(param_1 + 0x180) != -1) {
      puVar23 = (uint *)(param_1 + 0x1b8);
      pcVar16 = (char *)getBuildVersionString();
      uVar13 = readUint32FromDecimalString(puVar23,pcVar16);
      if ((uVar13 & 0xff) != 0) {
        pcVar16 = (char *)getBuildVersionString();
        uVar13 = readUint32FromHexadecimalString(puVar23,pcVar16);
        if ((uVar13 & 0xff) != 0) {
          *puVar23 = 0;
        }
      }
    }
    lVar10 = createOnlineSystem(*(MemoryAllocator **)(param_1 + 0x660),
                                (OnlineSystemCreationParameters *)(param_1 + 0x180));
    *(longlong *)(param_1 + 0x1c70) = lVar10;
    if (lVar10 != 0) {
      return 1;
    }
    goto LAB_71000b2568;
  case 0x31:
    *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_1 + 0x1c28);
    *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(param_1 + 0x900);
    uVar13 = createAchievementSystem
                       (*(MemoryAllocator **)(param_1 + 0x668),
                        (AchievementSystemParameters *)(param_1 + 0x1c0));
    if ((uVar13 & 0xff) == 0) {
      *(undefined8 *)(param_1 + 0x1c78) = extraout_x1_10;
      return 1;
    }
    goto LAB_71000b2568;
  case 0x32:
    memset(&local_5a50,0,0x20);
    local_5a50 = *(undefined8 **)(param_1 + 0x660);
    local_5a48 = *(char **)(param_1 + 0x1c28);
    local_5a40 = *(undefined8 *)(param_1 + 0x8f8);
    local_5a38 = CONCAT44(local_5a38._4_4_,1);
    uVar13 = createCommerceSystem
                       ((MemoryAllocator *)local_5a50,
                        (CommerceSystemCreationParameters *)&local_5a50);
    if ((uVar13 & 0xff) == 0) {
      *(undefined8 *)(param_1 + 0x1c80) = extraout_x1_11;
      return 1;
    }
LAB_71000b2568:
    uVar5 = 6;
LAB_71000b2bbc:
    *(undefined4 *)(param_1 + 0x230) = uVar5;
    iVar28 = 4;
LAB_71000b2bc8:
    startTransition((StateTreeInstance *)(param_1 + 0x8b0),iVar28);
    return 0;
  case 0x36:
    pGVar11 = (GraphicsFrame *)beginFrame(*(GraphicsSystem **)(param_1 + 0x908));
    local_59fc = 0;
    uStack23032 = 0;
    uStack23020 = 0;
    uStack23016 = 0;
    local_5a38 = 0;
    local_5a30 = 0;
    local_59f4 = 0;
    uStack23012 = 0;
    local_5a08 = (char *)0x3f800000;
    local_59a8 = (ulonglong)local_59a8._4_4_ << 0x20;
    local_59d8 = 0;
    local_59d0 = 0;
    local_5a28 = 0;
    local_5a20 = 0;
    local_5a18 = 0;
    local_5a10 = 0;
    local_59c8 = 0;
    local_59c0 = 0;
    local_59b8 = 0;
    uStack22964 = 0;
    uStack22960 = 0;
    uStack22956 = 0;
    local_5a50 = (undefined8 *)getBackBufferRenderTarget(*(GraphicsSystem **)(param_1 + 0x908));
    local_5a00 = 2;
    local_5a48 = (char *)0x0;
    local_5a40 = 0x3f80000000000000;
    local_59f0 = 1;
    local_59e0 = 0;
    local_59a0 = "MainRenderPass";
    pGVar12 = (GraphicsRenderPass *)
              createRenderPass(pGVar11,(GraphicsRenderPassParameters *)&local_5a50);
    submitRenderPass(pGVar12);
    endFrame(pGVar11);
    return 1;
  case 0x37:
    memcpy(&local_5a50,param_1 + 0x1e8,0x28);
    local_5a50 = *(undefined8 **)(param_1 + 0x1c28);
    local_5a40 = 0x1000;
    local_5a38 = 0x2d000000500;
    if (param_1[8] != (GameFrameworkSystem)0x0) {
      local_5a38 = 0x43800000780;
    }
    uVar7 = createInputSystem(*(MemoryAllocator **)(param_1 + 0x660),
                              (InputSystemCreationParameters *)&local_5a50);
    *(undefined8 *)(param_1 + 0x1cd0) = uVar7;
    break;
  case 0x38:
    if ((param_1[0x28] != (GameFrameworkSystem)0x0) &&
       (uVar13 = addPlayer(*(UserSystem **)(param_1 + 0x1c28)), (uVar13 & 0xff) == 0)) {
      *(int *)(param_1 + 0x1cc8) = (int)(uVar13 >> 0x20);
    }
    break;
  case 0x39:
    local_5a50 = (undefined8 *)((ulonglong)local_5a50 & 0xffffffff00000000);
    pSVar14 = (SystemInformation *)
              (**(code **)(**(longlong **)(param_1 + 0x660) + 0x10))
                        (*(longlong **)(param_1 + 0x660),0x708,8,&local_5a50,"new:SystemInformation"
                        );
    *(SystemInformation **)(param_1 + 0x1ce0) = pSVar14;
    fillSystemInformation(pSVar14,param_1);
    break;
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
    pGVar24 = (GameFrameworkParameters *)(ulonglong)param_2 + -0x3a;
    if (pGVar24 < *(GameFrameworkParameters **)(param_1 + 0x20)) {
      plVar6 = (longlong *)getGameApplication();
                    /* WARNING: Could not recover jumptable at 0x0071000b1a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (**(code **)(*plVar6 + 0x18))(plVar6,pGVar24,(ulonglong)((uint)param_3 & 1));
      return uVar7;
    }
    break;
  case 0x3e:
    startTransition((StateTreeInstance *)(param_1 + 0x8b0),0);
    *(undefined4 *)(param_1 + 0x1cdc) = 1;
  }
  return 1;
}

