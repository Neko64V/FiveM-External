#pragma once
#include "../../../Utils/Memory/Memory.h"
#include "../Game/GameSDK.h"
#include "../offset.h"

class CPed
{
public:
    uintptr_t ptr;
    uintptr_t player_info;
    uintptr_t current_weapon;

    float m_fArmor;
    float m_fHealth;
    float m_fMaxHealth;
    Vector3 m_pVecPosition;
    Vector3 BoneList[9]{};
    Matrix m_pBoneMatrix;

    bool get_player(uintptr_t& address);
    uintptr_t get_weapon();

    bool IsPlayer();
    bool IsDead();

    bool Update();
    void UpdateBones();
};