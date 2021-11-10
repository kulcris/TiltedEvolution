#include <Structs/AnimationGraphDescriptorManager.h>
#include <Structs/Skyrim/AnimationGraphDescriptor_BHR_Master.h>

enum Variables
{
    kPitch = 0,
    kTurnDelta = 1,
    kiSyncIdleLocomotion = 2,
    kdefaultBlend = 3,
    kbHeadTracking = 4,
    kDirection = 5,
    kfMinSpeed = 6,
    kSpeed = 7,
    kTargetSpeed = 8,
    kTurnMin = 9,
    kMaxAcc = 10,
    kMaxDec = 11,
    kPitchDeltaDampedGain = 12,
    kTargetSpeedThresholdMax = 13,
    kTargetSpeedThresholdMin = 14,
    kDrag = 15,
    kTargetSpeedMaxScale = 16,
    kTurnDeltaDamped = 17,
    kPitchDeltaDamped = 18,
    kTurnDeltaDampedGain = 19,
    kMinSpeed = 20,
    kMaxSpeed = 21,
    kPathAngleThreshold = 22,
    kTargetSpeedDamped = 23,
    kMaxSpeedDamped = 24,
    kbAnimationDriven = 25,
    kbVoiceReady = 26,
    kiInjured = 27,
    kInjured = 28,
    kbWantCastVoice = 29,
    kInjuredScale = 30,
    kInjuredScaleCurrent = 31,
    kMaxSpeedCurrent = 32,
    kIsAttackReady = 33,
    kIsShouting = 34,
    kiCombat = 35,
    kLookAtHeadingMaxAngle = 36,
    kIsIdle = 37,
    kisMoving = 38,
    kbSpeedSynced = 39,
    kiSyncTurnState = 40,
    kiDirectionForward = 41,
    kIsOnGround = 42,
    kbAllowRotation = 43,
    km_errorOut = 44,
    km_worldFromModelFeedbackGain = 45,
    kFlightPitchBlend = 46,
    kTargetLocation = 47,
    kiState = 48,
    kiState_DragonDefault = 49,
    kiState_DragonFlying = 50,
    kiState_DragonHovering = 51,
    kbLookAtTarget = 52,
    kbCanLookAtTarget = 53,
    kTweenEntryDirection = 54,
    kFlightHitInjuredSpeedMin = 55,
    kFlightHitInjuredDecGain = 56,
    km_rearMinAnkleHeightMS = 57,
    km_rearMaxAnkleHeightMS = 58,
    km_frontMinAnkleHeightMS = 59,
    km_frontMaxAnkleHeightMS = 60,
    km_frontFootRaisedAnkleHeightMS = 61,
    km_frontFootPlantedAnkleHeightMS = 62,
    km_rearFootRaisedAnkleHeightMS = 63,
    km_rearFootPlantedAnkleHeightMS = 64,
    kbEquipOk = 65,
    kLipBigAah = 66,
    kLipDST = 67,
    kLipEee = 68,
    kLipFV = 69,
    kLipK = 70,
    kLipL = 71,
    kLipR = 72,
    kLipTh = 73,
    kPhonemeBlend = 74,
    kInvPhonemeBlend = 75,
    kIsBusy = 76,
    kcamerafromx = 77,
    kcamerafromy = 78,
    kcamerafromz = 79,
    kLipAcc = 80,
    kLipBigAahDamped = 81,
    kLipDSTDamped = 82,
    kLipEeeDamped = 83,
    kLipFVDamped = 84,
    kLipKDamped = 85,
    kLipLDamped = 86,
    kLipRDamped = 87,
    kLipThDamped = 88,
    kiState_DragonPerching = 89,
    kbIsSynced = 90,
    kPitchDelta = 91,
    kMovementDirection = 92,
    kIsFeathering = 93,
    kIsFlapping = 94,
    kIsGliding = 95,
    kTweenPosition = 96,
    kTweenRotation = 97,
    kDistToGoal = 98,
    kTweenSpeed = 99,
    kHasTweenSpeed = 100,
    kTweenSpeedMin = 101,
    kTweenSpeedDamped = 102,
    kIsTurningLeft = 103,
    kIsTurningRight = 104,
    kIsMovingBackward = 105,
    kIsMovingForward = 106,
    kPathAngle = 107,
    kBSLookAtModifier_m_onGain_Combat = 108,
    kBSLookAtModifier_m_offGain_Combat = 109,
    kBSLookAtModifier_m_onGain_Default = 110,
    kBSLookAtModifier_m_offGain_Default = 111,
    kBSLookAtModifier_m_onGain = 112,
    kBSLookAtModifier_m_offGain = 113,
    kBSLookAtModifier_CanLookOutsideLimit = 114,
    kTurnDeltaScale = 115,
    kPickNewIdleTimer = 116,
    kPickNewIdleTime = 117,
    kBSLookAtModifier_m_onGain_Shouting = 118,
    kBSLookAtModifier_m_offGain_Shouting = 119,
    kTimeStep = 120,
    kMoveDirZ = 121,
    kFlightPitchBlendGain = 122,
    km_raycastDistanceDown = 123,
    km_raycastDistanceUp = 124,
    km_errorOutTranslation = 125,
    km_alignWithGroundRotation = 126,
    kbFullyMotionDriven = 127,
    kDirectionDamped = 128,
    kbNoFootIK = 129,
    kbFootIK = 130,
    km_ankeOrientationGain = 131,
    km_alignWorldFromModelGain = 132,
    km_rearMaxAnkleAngleDegrees = 133,
    km_useAlignWithGroundRotation = 134,
    kIsTrailer = 135,
    kLookAtOutOfRange = 136,
    kTurnDeltaTarget = 137,
    kPitchDeltaTarget = 138,
    kFlightPitchBlendTarget = 139,
    kbFlightKillGrabAction = 140,
    kbAllowFlightKillGrabTween = 141,
    kbAllowFlightGrabTweenDefault = 142,
    kiGetUpType = 143,
    kTweenEntryDirectionPrev = 144,
    kTweenEntryDirectionFlightKillGrab = 145,
    kConstraintOffset = 146,
    kTweenEntryDirectionCur = 147,
    kbTweenUpdate = 148,
    kLipGain = 149,
    kPhonemeBlendTarget = 150,
    kbDisableInterp = 151,
    kfPhonemeDefaultWeight = 152,
};

AnimationGraphDescriptor_BHR_Master::AnimationGraphDescriptor_BHR_Master(AnimationGraphDescriptorManager& aManager)
{
    uint64_t key = 18331100224015734760;
    
    AnimationGraphDescriptorManager::Builder s_builder(aManager, key,
        AnimationGraphDescriptor(
            // Bools
            {kbAnimationDriven,
            kbVoiceReady,
            kbWantCastVoice,
            kIsAttackReady,
            kIsShouting,
            kisMoving,
            kbSpeedSynced,
            kIsOnGround,
            kbLookAtTarget,
            kbCanLookAtTarget,
            kbEquipOk,
            kIsBusy,
            kbIsSynced,
            kIsFlapping,
            kIsGliding,
            kHasTweenSpeed,
            kIsTurningLeft,
            kIsTurningRight,
            kIsMovingForward,
            kBSLookAtModifier_CanLookOutsideLimit,
            kMoveDirZ,
            kbFullyMotionDriven,
            kbNoFootIK,
            kbFootIK,
            kLookAtOutOfRange,},
            // Floats
            {kPitch,
            kTurnDelta,
            kDirection,
            kSpeed,
            kTargetSpeed,
            kTurnDeltaDamped,
            kPitchDeltaDamped,
            kTargetSpeedDamped,
            kMaxSpeedDamped,
            kLookAtHeadingMaxAngle,
            km_errorOut,
            kFlightPitchBlend,
            kTweenEntryDirection,
            kLipBigAah,
            kLipDST,
            kLipEee,
            kLipFV,
            kPitchDelta,
            kDistToGoal,
            kPathAngle,
            kBSLookAtModifier_m_onGain,
            kBSLookAtModifier_m_offGain,
            kTimeStep, // Probably shouldn't sync this
            kDirectionDamped,
            kTurnDeltaTarget,
            kPitchDeltaTarget,
            kFlightPitchBlendTarget,},
            // Integers
            {kiSyncIdleLocomotion,
            kiSyncTurnState,
            kiState}));
}
