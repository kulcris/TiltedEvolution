#include <Structs/AnimationGraphDescriptorManager.h>
#include <Structs/Skyrim/AnimationGraphDescriptor_VampireLordBehavior.h>

enum Variables
{
    kiSyncTurnState = 0,
    kTurnDelta = 1,
    kDirection = 2,
    kSpeed = 3,
    kbAnimationDriven = 4,
    kbIsSynced = 5,
    kIsRecoiling = 6,
    kIsStaggering = 7,
    kSpeedStartVar = 8,
    kTurnDeltaDamped = 9,
    kTurnMin = 10,
    kIsAttackReady = 11,
    kSpeedDamped = 12,
    kIsAttacking = 13,
    kbAllowRotation = 14,
    kFootIKEnable = 15,
    kbHeadTrackingOff = 16,
    kstaggerMagnitude = 17,
    kbEquipOk = 18,
    kiState = 19,
    kiState_VampireLordDefault = 20,
    kSampledSpeed = 21,
    kiSyncIdleLocomotion = 22,
    kTimeDelta = 23,
    kbHeadTracking = 24,
    kTargetLocation = 25,
    kcamerafromx = 26,
    kcamerafromy = 27,
    kcamerafromz = 28,
    kiGetUpType = 29,
    kPitch = 30,
    kiAttackState = 31,
    kiState_VampireLordSprint = 32,
    kIsSprinting = 33,
    kiSyncSprintState = 34,
    kbVoiceReady = 35,
    kbWantCastVoice = 36,
    kSpeedSampled = 37,
    kFootIKDisable = 38,
    kbInJumpState = 39,
    kVelocityZ = 40,
    kiIsInSneak = 41,
    kbFailMoveStart = 42,
    kBeginCastVoice = 43,
    kbNoStagger = 44,
    kbDelayMoveStart = 45,
    kisHowling = 46,
    kIsNPC = 47,
    kisLevitating = 48,
    kbWantCastLeft = 49,
    kbWantCastRight = 50,
    kbMLh_Ready = 51,
    kbMRh_Ready = 52,
    kCastBlendDamped = 53,
    kCastBlend = 54,
    kNotCasting = 55,
    kstaggerDirection = 56,
    kAimHeadingMax = 57,
    kAimPitchMax = 58,
    kBowAimOffsetHeading = 59,
    kBowAimOffsetPitch = 60,
    kAimGainOn = 61,
    kAimGainOff = 62,
    kbAimActive = 63,
    kAimHeadingCurrent = 64,
    kAimPitchCurrent = 65,
    kIsCastingLeft = 66,
    kIsCastingRight = 67,
    kiSyncMT_Idle = 68,
    kiCamera_Sync = 69,
    kIsPlayer = 70,
    kBatSprintDirection = 71,
    kDeathSpeed = 72,
    kDeathSpeedDamped = 73,
};

AnimationGraphDescriptor_VampireLordBehavior::AnimationGraphDescriptor_VampireLordBehavior(AnimationGraphDescriptorManager& aManager)
{
    uint64_t key = 16269673692629748097;
    
    AnimationGraphDescriptorManager::Builder s_builder(aManager, key,
        AnimationGraphDescriptor(
        {kbEquipOk,
            kbAnimationDriven,
            kIsAttackReady,
            kbAllowRotation,
            kIsRecoiling,
            kIsStaggering,
            kIsAttacking,
            kbHeadTracking,
            kbMRh_Ready,
            kbInJumpState,
            kIsCastingRight,
            kbWantCastRight,
            kbVoiceReady,
            kisLevitating,
            kIsSprinting,
            kNotCasting,
            kbWantCastLeft,
            kbMLh_Ready,
            kIsCastingLeft,
            kbDelayMoveStart,
            },
        {kSpeed,
            kTurnDelta,
            kDirection,
            kSpeedSampled,
            kCastBlend,
            kPitch,
            kTurnDeltaDamped,
            kCastBlendDamped,
            kSampledSpeed,
            kVelocityZ,
            },
        {kiSyncIdleLocomotion,
            kiSyncTurnState,
            kiSyncSprintState,
            kiState,
            }));
}
