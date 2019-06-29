
/* CRender::setGameRenderer(bool) */

void __thiscall setGameRenderer(CRender *this,bool param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  char *pcVar7;
  uint uVar8;
  undefined8 uVar9;
  igObject *piVar10;
  code *pcVar11;
  longlong local_90;
  undefined4 local_88;
  longlong local_80;
  undefined4 local_78;
  longlong local_70;
  undefined4 local_68;
  longlong local_60;
  undefined4 local_58;
  undefined8 local_50;
  uint *local_48;
  uint *local_38;
  
  setRenderer((CRenderBase_CRender_ *)this,0);
  if (g_bCmdLineInitialized == '\0') {
    return;
  }
  if (((_Instance == (CZoneInfoSystem *)0x0) || (lVar5 = getCurrentZoneInfo(_Instance), lVar5 == 0))
     || (*(char *)(lVar5 + 0x178) == '\0')) {
    if (this[0x221] == (CRender)0x0) {
      if ((this[0x220] == (CRender)0x0) || (((param_1 ^ 1U) & 1) != 0)) {
        local_80 = 0;
        igStringRef((igStringRef *)&local_70,"standard_renderer");
        setString((igName *)&local_80,(igStringRef *)&local_70);
        if (local_70 != 0) {
          release((igStringPoolItem *)(local_70 + -0x10));
        }
        local_90 = 0;
        igStringRef((igStringRef *)&local_70,"platformScene_nx");
        setString((igName *)&local_90,(igStringRef *)&local_70);
        if (local_70 != 0) {
          release((igStringPoolItem *)(local_70 + -0x10));
        }
        igStringRef((igStringRef *)&local_70,(igStringRef *)&local_80);
        local_68 = local_78;
        igStringRef((igStringRef *)&local_60,(igStringRef *)&local_90);
        local_50 = 0;
        local_58 = local_88;
        igHandle((igHandle *)&local_48,(igHandleName *)&local_70);
        local_38 = local_48;
        if ((local_48 != (uint *)0x0) &&
           (igAtomicIncrement32((int *)local_48), local_48 != (uint *)0x0)) {
          uVar3 = igAtomicDecrement32((int *)local_48);
          uVar8 = 2;
          if ((uVar3 & 0x90000000) != 0) {
            uVar8 = 3;
          }
          assertReleaseRefcount((uint)local_48,uVar8);
          if ((uVar3 & 0xffff) == uVar8) {
            releaseInternal((igHandle *)&local_48);
          }
          local_48 = (uint *)0x0;
        }
        if (local_60 != 0) {
          release((igStringPoolItem *)(local_60 + -0x10));
        }
        local_60 = 0;
        if (local_70 != 0) {
          release((igStringPoolItem *)(local_70 + -0x10));
        }
        local_70 = 0;
        if (local_90 != 0) {
          release((igStringPoolItem *)(local_90 + -0x10));
        }
        if (local_80 != 0) {
          release((igStringPoolItem *)(local_80 + -0x10));
        }
        if (local_38 == (uint *)0x0) {
          piVar10 = (igObject *)0x0;
        }
        else {
          if ((*local_38 >> 0x1c & 1) == 0) {
            if ((*local_38 >> 0x1d & 1) != 0) {
              piVar10 = (igObject *)getObjectAlias((igHandle *)&local_38);
              goto LAB_710010be7c;
            }
          }
          else {
            internalizeRedirect((igHandle *)&local_38);
          }
          piVar10 = *(igObject **)(local_38 + 10);
        }
LAB_710010be7c:
        igObject_Ref(piVar10);
        iVar4 = GetPerformanceMode();
        if (iVar4 == 1) {
          uVar9 = 0x2d000000500;
        }
        else {
          uVar9 = 0x1e000000356;
        }
        *(undefined8 *)(piVar10 + 0x40) = uVar9;
        setRenderPasses((CRenderBase_CRender_ *)this,"default",0);
        igObject_Release(piVar10);
        puVar2 = local_38;
        if (local_38 != (uint *)0x0) {
          uVar3 = igAtomicDecrement32((int *)local_38);
          uVar8 = 2;
          if ((uVar3 & 0x90000000) != 0) {
            uVar8 = 3;
          }
          assertReleaseRefcount((uint)puVar2,uVar8);
          if ((uVar3 & 0xffff) == uVar8) {
            releaseInternal((igHandle *)&local_38);
          }
          local_38 = (uint *)0x0;
        }
        goto LAB_710010bf08;
      }
      lVar5 = getInstance();
      pcVar7 = "splitscreen_horizontal";
      if (*(char *)(lVar5 + 0x142) == '\0') {
        pcVar7 = "splitscreen";
      }
    }
    else {
      pcVar7 = "splitscreen";
    }
    setRenderPasses((CRenderBase_CRender_ *)this,pcVar7,0);
    bVar1 = true;
  }
  else {
    local_80 = 0;
    igStringRef((igStringRef *)&local_70,"standard_reflections_renderer");
    setString((igName *)&local_80,(igStringRef *)&local_70);
    if (local_70 != 0) {
      release((igStringPoolItem *)(local_70 + -0x10));
    }
    local_90 = 0;
    igStringRef((igStringRef *)&local_70,"platformScene_nx");
    setString((igName *)&local_90,(igStringRef *)&local_70);
    if (local_70 != 0) {
      release((igStringPoolItem *)(local_70 + -0x10));
    }
    igStringRef((igStringRef *)&local_70,(igStringRef *)&local_80);
    local_68 = local_78;
    igStringRef((igStringRef *)&local_60,(igStringRef *)&local_90);
    local_50 = 0;
    local_58 = local_88;
    igHandle((igHandle *)&local_48,(igHandleName *)&local_70);
    local_38 = local_48;
    if ((local_48 != (uint *)0x0) && (igAtomicIncrement32((int *)local_48), local_48 != (uint *)0x0)
       ) {
      uVar3 = igAtomicDecrement32((int *)local_48);
      uVar8 = 2;
      if ((uVar3 & 0x90000000) != 0) {
        uVar8 = 3;
      }
      assertReleaseRefcount((uint)local_48,uVar8);
      if ((uVar3 & 0xffff) == uVar8) {
        releaseInternal((igHandle *)&local_48);
      }
      local_48 = (uint *)0x0;
    }
    if (local_60 != 0) {
      release((igStringPoolItem *)(local_60 + -0x10));
    }
    local_60 = 0;
    if (local_70 != 0) {
      release((igStringPoolItem *)(local_70 + -0x10));
    }
    local_70 = 0;
    if (local_90 != 0) {
      release((igStringPoolItem *)(local_90 + -0x10));
    }
    if (local_80 != 0) {
      release((igStringPoolItem *)(local_80 + -0x10));
    }
    if (local_38 == (uint *)0x0) {
      piVar10 = (igObject *)0x0;
    }
    else {
      if ((*local_38 >> 0x1c & 1) == 0) {
        if ((*local_38 >> 0x1d & 1) != 0) {
          piVar10 = (igObject *)getObjectAlias((igHandle *)&local_38);
          goto LAB_710010bbe8;
        }
      }
      else {
        internalizeRedirect((igHandle *)&local_38);
      }
      piVar10 = *(igObject **)(local_38 + 10);
    }
LAB_710010bbe8:
    igObject_Ref(piVar10);
    iVar4 = GetPerformanceMode();
    if (iVar4 == 1) {
      uVar9 = 0x16800000280;
    }
    else {
      uVar9 = 0xb400000140;
    }
    *(undefined8 *)(piVar10 + 0x40) = uVar9;
    igObject_Release(piVar10);
    puVar2 = local_38;
    if (local_38 != (uint *)0x0) {
      uVar3 = igAtomicDecrement32((int *)local_38);
      uVar8 = 2;
      if ((uVar3 & 0x90000000) != 0) {
        uVar8 = 3;
      }
      assertReleaseRefcount((uint)puVar2,uVar8);
      if ((uVar3 & 0xffff) == uVar8) {
        releaseInternal((igHandle *)&local_38);
      }
      local_38 = (uint *)0x0;
    }
    local_80 = 0;
    igStringRef((igStringRef *)&local_70,"standard_renderer");
    setString((igName *)&local_80,(igStringRef *)&local_70);
    if (local_70 != 0) {
      release((igStringPoolItem *)(local_70 + -0x10));
    }
    local_90 = 0;
    igStringRef((igStringRef *)&local_70,"platformScene_nx");
    setString((igName *)&local_90,(igStringRef *)&local_70);
    if (local_70 != 0) {
      release((igStringPoolItem *)(local_70 + -0x10));
    }
    igStringRef((igStringRef *)&local_70,(igStringRef *)&local_80);
    local_68 = local_78;
    igStringRef((igStringRef *)&local_60,(igStringRef *)&local_90);
    local_50 = 0;
    local_58 = local_88;
    igHandle((igHandle *)&local_48,(igHandleName *)&local_70);
    local_38 = local_48;
    if ((local_48 != (uint *)0x0) &&
       (igAtomicIncrement32((int *)local_48), puVar2 = local_48, local_48 != (uint *)0x0)) {
      uVar3 = igAtomicDecrement32((int *)local_48);
      uVar8 = 2;
      if ((uVar3 & 0x90000000) != 0) {
        uVar8 = 3;
      }
      assertReleaseRefcount((uint)puVar2,uVar8);
      if ((uVar3 & 0xffff) == uVar8) {
        releaseInternal((igHandle *)&local_48);
      }
      local_48 = (uint *)0x0;
    }
    if (local_60 != 0) {
      release((igStringPoolItem *)(local_60 + -0x10));
    }
    local_60 = 0;
    if (local_70 != 0) {
      release((igStringPoolItem *)(local_70 + -0x10));
    }
    local_70 = 0;
    if (local_90 != 0) {
      release((igStringPoolItem *)(local_90 + -0x10));
    }
    if (local_80 != 0) {
      release((igStringPoolItem *)(local_80 + -0x10));
    }
    if (local_38 == (uint *)0x0) {
      piVar10 = (igObject *)0x0;
    }
    else {
      if ((*local_38 >> 0x1c & 1) == 0) {
        if ((*local_38 >> 0x1d & 1) != 0) {
          piVar10 = (igObject *)getObjectAlias((igHandle *)&local_38);
          goto LAB_710010bdd4;
        }
      }
      else {
        internalizeRedirect((igHandle *)&local_38);
      }
      piVar10 = *(igObject **)(local_38 + 10);
    }
LAB_710010bdd4:
    igObject_Ref(piVar10);
    iVar4 = GetPerformanceMode();
    if (iVar4 == 1) {
      uVar9 = 0x2d000000500;
    }
    else {
      uVar9 = 0x1e000000356;
    }
    *(undefined8 *)(piVar10 + 0x40) = uVar9;
    igObject_Release(piVar10);
    puVar2 = local_38;
    if (local_38 != (uint *)0x0) {
      uVar3 = igAtomicDecrement32((int *)local_38);
      uVar8 = 2;
      if ((uVar3 & 0x90000000) != 0) {
        uVar8 = 3;
      }
      assertReleaseRefcount((uint)puVar2,uVar8);
      if ((uVar3 & 0xffff) == uVar8) {
        releaseInternal((igHandle *)&local_38);
      }
      local_38 = (uint *)0x0;
    }
    setRenderPasses((CRenderBase_CRender_ *)this,"standard_reflections",0);
LAB_710010bf08:
    bVar1 = false;
  }
  if (_Instance != 0) {
    if (bVar1) {
      openSplitscreenSplitterUi();
    }
    else {
      closeSplitscreenSplitterUi();
    }
  }
  plVar6 = _instance;
  pcVar11 = *(code **)(*_instance + 0x1a0);
  igStringRef((igStringRef *)&local_70,"maxFurShells",(igStringPool *)0x0);
  _maxFurShellsConstant = (*pcVar11)(plVar6,&local_70);
  if (local_70 != 0) {
    release((igStringPoolItem *)(local_70 + -0x10));
  }
  plVar6 = (longlong *)(**(code **)(*plVar6 + 0xb0))(plVar6);
  (**(code **)(*plVar6 + 0x1b0))(plVar6,_maxFurShellsConstant,7);
  return;
}

