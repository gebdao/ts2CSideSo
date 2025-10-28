#include "gxdheader.h"

MAIN mMAIN;

DWORD WINAPI THREAD_FOR_GET_USER_NUM(LPVOID lpThreadParameter)
{
    int i;
    int v3;
    int tWorldUser = 0;

    v3 = mMAIN.mWorldMax;
    for (i = mMAIN.mWorldMin; i <= v3; ++i)
    {
        mMAIN.mPresentPlayerNum[i] = mMAIN.GetWorldUser(mMAIN.mWorldIP[i], mMAIN.mWorldPort[i], &mMAIN.mMaxPlayerNum[i], &mMAIN.mGagePlayerNum[i]);
    }

    return 0;
}

#ifdef USE_PING
DWORD WINAPI THREAD_FOR_GET_PING(LPVOID Args)
{
    while ( TRUE )
    {
        mMYINFO.mPing = mNETWORK.PingToHost(mWorldIP[mWorldIndex], 5);
        Sleep(1000);
    }
}
#endif

MAIN::MAIN()
{
    mBGM.Init();
    mEngineIsStart = false;
}

void MAIN::Start()
{
    mUTIL.AdjustViewEnvironment1();
    mMainMode = 1;
    mSubMode = 0;
    mTicks = 0;
    for (int i = 0; i < 150; ++i)
        bIsClick[i] = 0;
    mBGM.Free();
}

BOOL MAIN::Init()
{
    mMainMode = 0;
    mSubMode = 0;
    mTicks = 0;
    for (int i = 0; i < 150; i++)
        bIsClick[i] = 0;
    mBGM.Init();

    return TRUE;
}

void MAIN::Free()
{
    mBGM.Free();
}

void MAIN::Logic(float dTime)
{
    switch (mMainMode)
    {
    case 1:
        Logic1( dTime );
        break;
    case 2:
        Logic2( dTime );
        break;
    case 3:
        Logic3( dTime );
        break;
    case 4:
        Logic4( dTime );
        break;
    case 5:
        Logic5( dTime );
        break;
    case 6:
        Logic6( dTime );
        mCInnerAuto.Update();
        break;
    case 7:
        Logic7( dTime );
        break;
    case 8:
        Logic8( dTime );
        break;
    default:
        break;
    }
}
void MAIN::Draw( float dTime )
{
    switch (mMainMode)
    {
    case 1:
        Draw1(dTime);
        break;
    case 2:
        Draw2(dTime);
        break;
    case 3:
        Draw3(dTime);
        break;
    case 4:
        Draw4(dTime);
        break;
    case 5:
        Draw5(dTime);
        break;
    case 6:
        Draw6(dTime);
        break;
    case 7:
        Draw7(dTime);
        break;
    case 8:
        Draw8(dTime);
        break;
    }
}

void MAIN::Logic1( float dTime )
{
    int i; 

    switch (mSubMode)
    {
    case 0:
        mPOINTER.Set(0);
        mEDITBOX.Set(0);
        #ifdef USE_PING
        CreateThread(0, 0, THREAD_FOR_GET_PING, 0, 0, 0);
        #endif
        for (i = 0; i < 150; ++i)
            bIsClick[i] = 0;
        mMainMode = 2;
        mSubMode = 0;
        mTicks = 0;
        break;
    }

    switch (mSubMode)
    {
    case 0:
        if (++mTicks >= 90)
        {
            mPOINTER.Set( 0 );
            mEDITBOX.Set( 0 );
            for (i = 0; i < 150; ++i)
                bIsClick[i] = 0;
            mSubMode = 1;
            mTicks = 0;
        }
        break;
    case 1:
        if (++mTicks >= 3)
        {
            mSubMode = 2;
            mTicks = 0;
        }
        break;
    case 2:
        if (++mTicks >= 3)
        {
            mSubMode = 3;
            mTicks = 0;
        }
        break;
    case 3:
        if (++mTicks >= 3)
        {
            mSubMode = 4;
            mTicks = 0;
        }
        break;
    case 4:
        if (++mTicks >= 3)
        {
            mSubMode = 5;
            mTicks = 0;
        }
        break;
    case 5:
        if (++mTicks >= 3)
        {
            mSubMode = 6;
            mTicks = 0;
        }
        break;
    case 6:
        if (++mTicks >= 3)
        {
            mSubMode = 7;
            mTicks = 0;
        }
        break;
    case 7:
        if (++mTicks >= 3)
        {
            mSubMode = 8;
            mTicks = 0;
        }
        break;
    case 8:
        if (++mTicks >= 3)
        {
            mSubMode = 9;
            mTicks = 0;
        }
        break;
    case 9:
        if (++mTicks >= 3)
        {
            mSubMode = 10;
            mTicks = 0;
        }
        break;
    case 10:
        if (++mTicks >= 3)
        {
            mSubMode = 11;
            mTicks = 0;
        }
        break;
    case 11:
        if (++mTicks >= 3)
        {
            mSubMode = 12;
            mTicks = 0;
        }
        break;
    case 12:
        if (++mTicks >= 3)
        {
            mSubMode = 13;
            mTicks = 0;
        }
        break;
    case 13:
        if (++mTicks >= 3)
        {
            mSubMode = 14;
            mTicks = 0;
        }
        break;
    case 14:
        if (++mTicks >= 3)
        {
            mSubMode = 15;
            mTicks = 0;
        }
        break;
    case 15:
        if (++mTicks >= 3)
        {
            mSubMode = 16;
            mTicks = 0;
        }
        break;
    case 16:
        if (++mTicks >= 3)
        {
            mSubMode = 17;
            mTicks = 0;
        }
        break;
    case 17:
        if (++mTicks >= 3)
        {
            mSubMode = 18;
            mTicks = 0;
        }
        break;
    case 18:
        if (++mTicks >= 3)
        {
            mSubMode = 19;
            mTicks = 0;
        }
        break;
    case 19:
        if (++mTicks >= 3)
        {
            mSubMode = 20;
            mTicks = 0;
        }
        break;
    case 20:
        if (++mTicks >= 3)
        {
            mSubMode = 21;
            mTicks = 0;
        }
        break;
    case 21:
        if (++mTicks >= 3)
        {
            mSubMode = 22;
            mTicks = 0;
        }
        break;
    case 22:
        if (++mTicks >= 3)
        {
            mSubMode = 23;
            mTicks = 0;
        }
        break;
    case 23:
        if (++mTicks >= 3)
        {
            mSubMode = 24;
            mTicks = 0;
        }
        break;
    case 24:
        if (++mTicks >= 3)
        {
            mSubMode = 25;
            mTicks = 0;
        }
        break;
    case 25:
        if (++mTicks >= 3)
        {
            mSubMode = 26;
            mTicks = 0;
        }
        break;
    case 26:
        if (++mTicks >= 3)
        {
            mSubMode = 27;
            mTicks = 0;
        }
        break;
    case 27:
        if (++mTicks >= 3)
        {
            mSubMode = 28;
            mTicks = 0;
        }
        break;
    case 28:
        if (++mTicks >= 3)
        {
            mSubMode = 29;
            mTicks = 0;
        }
        break;
    case 29:
        if (++mTicks >= 3)
        {
            mSubMode = 30;
            mTicks = 0;
        }
        break;
    case 30:
        if (++mTicks >= 3)
        {
            mSubMode = 31;
            mTicks = 0;
        }
        break;
    case 31:
        if (++mTicks >= 3)
        {
            mSubMode = 32;
            mTicks = 0;
        }
        break;
    case 32:
        if (++mTicks >= 3)
        {
            mSubMode = 33;
            mTicks = 0;
        }
        break;
    case 33:
        if (++mTicks >= 3)
        {
            mSubMode = 34;
            mTicks = 0;
        }
        break;
    case 34:
        if (++mTicks >= 0x5A)
        {
            mMainMode = 2;
            mSubMode = 0;
            mTicks = 0;
        }
        break;
    default:
        return;
    }
}

void MAIN::Logic2(float dTime)
{
    int i = 0;
    int tIndex = 0;

    if (!mSubMode && mTicks++ >= 30)
    {
        mUI.InitForEnterZone();
        mGDATA.mZONE.Free();
        mUTIL.AdjustViewEnvironment1();
        mPOINTER.Set(0);
        mEDITBOX.Set(0);
        for (i = 0; i < 150; i++)
        {
            bIsClick[i] = 0;
        }
        mBGM.Free();
        mBGM.LoadFromOGG("G03_GDATA\\D10_WORLDBGM\\Z000.BGM", 3, 1, 1);
        if (mGAMEOPTION.tIsBGM)
        {
            mBGM.Play(1, 100, 0);
        }
        mLoginBGNum = 2381;
        for (i = 0; i < 1000; i++)
        {
            strcpy(mWorldIP[i], "0.0.0.0");
            mWorldPort[i] = 11096;
            mPresentPlayerNum[i] = -1;
        }
        if (mMYINFO.mServerType)
        {

        }
        else
        {
            strcpy(mWorldIP[0], "127.0.0.1");//127.0.0.1 - 192.168.50.120///192.168.50.241
            mWorldPort[0] = 11096;
            mMaxPlayerNum[0] = 0;
            mGagePlayerNum[0] = 0;
            mPresentPlayerNum[0] = -1;
            mWorldMin = 0;
            mWorldMax = 0;
            mWorldIndex = -1;
            CreateThread(0, 0, THREAD_FOR_GET_USER_NUM, 0, 0, 0);
            mSubMode = 1;
            mTicks = 0;
        }
    }
}

void MAIN::Logic3(float dTime)
{
    int tResult;
    int tResult2;
    char* tStr;
    char mBuffer[1000];

    switch (mSubMode)
    {
    case 0:
        mPOINTER.Set(0);
        mEDITBOX.Set(0);
        for (int i = 0; i < 150; i++)
            bIsClick[i] = 0;
        mSubMode = 1;
        mTicks = 0;
        mEDITBOX.Set(1);
        SetWindowTextA(mEDITBOX.mDATA[0], "");
        SetWindowTextA(mEDITBOX.mDATA[1], "");
        return;

    case 2:
        memset(mMYINFO.uID, 0, MAX_USER_ID_LENGTH);
        memset(mMYINFO.uPassword, 0, MAX_USER_PASSWORD_LENGTH);
        GetWindowTextA(mEDITBOX.mDATA[0], mMYINFO.uID, MAX_USER_ID_LENGTH);
        GetWindowTextA(mEDITBOX.mDATA[1], mMYINFO.uPassword, MAX_USER_PASSWORD_LENGTH);
        mNETWORK.CONNECT_1(mWorldIP[mWorldIndex], mWorldPort[mWorldIndex], &tResult);
        switch (tResult)
        {
        case 0:
            TW_LOGIN_SEND(mMYINFO.uID, mMYINFO.uPassword, PROGRAM_LOGIN_VERSION, &tResult2);
            switch (tResult2)
            {
            case 0:
                mMainMode = 4;
                mSubMode = 0;
                mTicks = 0;
                return;
            case 1:
                tStr = mMESSAGE.Return(11);
                mMBOXUI.Set(2, tStr, "");
                mSubMode = 4;
                mTicks = 0;
                return;
            case 2:
                tStr = mMESSAGE.Return(13);
                mMBOXUI.Set(2, tStr, "");
                mSubMode = 4;
                mTicks = 0;
                return;
            case 3:
                tStr = mMESSAGE.Return(15);
                mMBOXUI.Set(2, tStr, "");
                mSubMode = 4;
                mTicks = 0;
                return;
            case 4:
                mMBOXUI.Set(2, "Invalid Login Data Detected!", "");
                mSubMode = 4;
                mTicks = 0;
                return;
            case 5: 
                tStr = mMESSAGE.Return(14);
                mMBOXUI.Set(2, tStr, "");
                mSubMode = 4;
                mTicks = 0;
                return;
            case 6: 
                mMBOXUI.Set(2, "The Server is full.", "");
                mSubMode = 4;
                mTicks = 0;
                return;
            case 7: 
                mMBOXUI.Set(2, "Network Error[#007]", "");
                mSubMode = 4;
                mTicks = 0;
                return;
            default:
                sprintf(mBuffer, "Unknown Error Occured -> Line: %d\n", tResult2);
                mMBOXUI.Set(2, mBuffer, "");
                mSubMode = 4;
                mTicks = 0;
                return;
            }
            return;
        case 1:
            tStr = mMESSAGE.Return(2);
            mMBOXUI.Set(2, tStr, "");
            mSubMode = 4;
            mTicks = 0;
            return;
        case 2:
            tStr = mMESSAGE.Return(3);
            mMBOXUI.Set(2, tStr, "");
            mSubMode = 4;
            mTicks = 0;
            return;
        case 3:
            tStr = mMESSAGE.Return(4);
            mMBOXUI.Set(2, tStr, "");
            mSubMode = 4;
            mTicks = 0;
            return;
        case 4:
            tStr = mMESSAGE.Return(5);
            mMBOXUI.Set(2, tStr, "");
            mSubMode = 4;
            mTicks = 0;
            return;
        default:
            tStr = mMESSAGE.Return(6);
            mMBOXUI.Set(2, tStr, "");
            mSubMode = 4;
            mTicks = 0;
            return;
        }
        return;
    }
}
void MAIN::Logic4(float dTime)
{
    char* tSTR;
    char tIP[16];
    int tPort;
    int tResult;
    int i = 0;
    int tPwIndex = 0;
    int tSelectBG = 0;

    if (mSubMode)
    {
        if (mSubMode == 1)
        {
            if (++mTicks % 30 || (TW_CLIENT_OK_FOR_LOGIN_SEND(&tResult), tResult != 101))
            {
                if (mSelectType == 1)
                {
                    if (mSelectAvtIndex != -1)
                    {
                        if (mActSort == 1)
                        {
                            mActFrame = dTime * 30.0f + mActFrame;
                            if (mActFrame >= (float)mGDATA.ReturnCharacterMotionFrameNum(mMYINFO.mSelectAvatarInfo[mSelectAvtIndex].aPreviousTribe, mMYINFO.mSelectAvatarInfo[mSelectAvtIndex].aGender, mActType, mActSort, 1, 0, 0, 1) )
                            {
                                mActFrame = mActFrame - (float)mGDATA.ReturnCharacterMotionFrameNum(mMYINFO.mSelectAvatarInfo[mSelectAvtIndex].aPreviousTribe,mMYINFO.mSelectAvatarInfo[mSelectAvtIndex].aGender,mActType, mActSort, 1, 0, 0, 1);
                            }
                        }
                        else if (mActSort == 3)
                        {
                            mActFrame = dTime * 30.0f + mActFrame;

                            if (mActFrame >= (float)mGDATA.ReturnCharacterMotionFrameNum( mMYINFO.mSelectAvatarInfo[mSelectAvtIndex].aPreviousTribe,mMYINFO.mSelectAvatarInfo[mSelectAvtIndex].aGender,mActType, mActSort, 1, 0, 0, 1) )
                            {
                                mActFrame = (float)(mGDATA.ReturnCharacterMotionFrameNum(mMYINFO.mSelectAvatarInfo[mSelectAvtIndex].aPreviousTribe, mMYINFO.mSelectAvatarInfo[mSelectAvtIndex].aGender,mActType,mActSort, 1 , 0 , 0 , 1) - 1);
                                if (mMYINFO.mMoveZoneState)
                                {
                                    mActType = 0;
                                    mActSort = 1;
                                    mActFrame = 0.0;
                                }
                                else
                                {
                                    memcpy(&mMYINFO.mAvatarInfo, &mMYINFO.mSelectAvatarInfo[mSelectAvtIndex], sizeof(AVATAR_INFO));
                                    mMYINFO.mMoveZoneState = 1;
                                    mMYINFO.mMoveZoneSort = 1;
                                    mMYINFO.mMoveZoneValue = 0;
                                    mMYINFO.mPreviousZoneNumber = 0;
                                    mMYINFO.mPresentZoneNumber = 0;
                                    mMYINFO.mNextZoneNumber = mMYINFO.mSelectAvatarInfo[mSelectAvtIndex].aLogoutInfo[0];
                                    memset(&mMYINFO.mAction, 0, sizeof(ACTION_INFO));
                                    mMYINFO.mAction.aType = 0;
                                    mMYINFO.mAction.aSort = 0;
                                    mMYINFO.mAction.aFrame = 0.0f;
                                    mMYINFO.mAction.aLocation[0] = mMYINFO.mSelectAvatarInfo[mSelectAvtIndex].aLogoutInfo[1];
                                    mMYINFO.mAction.aLocation[1] = mMYINFO.mSelectAvatarInfo[mSelectAvtIndex].aLogoutInfo[2];
                                    mMYINFO.mAction.aLocation[2] = mMYINFO.mSelectAvatarInfo[mSelectAvtIndex].aLogoutInfo[3];
                                    mMYINFO.mAction.aFront = (rand() % 360);
                                    mMYINFO.mAction.aTargetFront = mMYINFO.mAction.aFront;
                                    TW_DEMAND_ZONE_SERVER_INFO_1(mSelectAvtIndex, &tIP[0], &tPort, &mMYINFO.mNextZoneNumber, &tResult);
                                    switch (tResult)
                                    {
                                    case 0:
                                        //mUTIL.ChangeVirtualIPToRealIP(&tIP, tRealIP);
                                       // mNETWORK.CONNECT_2( tIP, tPort, &tResult );
                                        mNETWORK.CONNECT_2( mWorldIP[mWorldIndex], tPort, &tResult );
                                        switch (tResult)
                                        {
                                        case 0:
                                            mMainMode = 5;
                                            mSubMode = 0;
                                            mTicks = 0;
                                            break;
                                        case 1:
                                            mMBOXUI.Set( 2, mMESSAGE.Return(59), "");
                                            mSubMode = 2;
                                            mTicks = 0;
                                            break;
                                        case 2:
                                            mMBOXUI.Set( 2, mMESSAGE.Return(60), "");
                                            mSubMode = 2;
                                            mTicks = 0;
                                            break;
                                        case 3:
                                            mMBOXUI.Set( 1, mMESSAGE.Return(61), "");
                                            TW_FAIL_MOVE_ZONE_1_SEND(&tResult);
                                            if (!tResult)
                                            {
                                                mMYINFO.mMoveZoneState = 0;
                                                mActType = 0;
                                                mActSort = 1;
                                                mActFrame = 0.0f;
                                            }
                                            else
                                            {
                                                mMBOXUI.Set(2, mMESSAGE.Return(20), "");
                                                mSubMode = 2;
                                                mTicks = 0;
                                            }
                                            break;
                                        case 4:
                                            mMBOXUI.Set( 1, mMESSAGE.Return(62), "");
                                            TW_FAIL_MOVE_ZONE_1_SEND(&tResult);
                                            if (!tResult)
                                            {
                                                mMYINFO.mMoveZoneState = 0;
                                                mActType = 0;
                                                mActSort = 1;
                                                mActFrame = 0.0f;
                                            }
                                            else
                                            {
                                                mMBOXUI.Set(2, mMESSAGE.Return(20), "");
                                                mSubMode = 2;
                                                mTicks = 0;
                                            }
                                            break;
                                        case 5:
                                            mMBOXUI.Set( 1, mMESSAGE.Return(63), "");
                                            TW_FAIL_MOVE_ZONE_1_SEND(&tResult);
                                            if (!tResult)
                                            {
                                                mMYINFO.mMoveZoneState = 0;
                                                mActType = 0;
                                                mActSort = 1;
                                                mActFrame = 0.0f;
                                            }
                                            else
                                            {
                                                mMBOXUI.Set(2, mMESSAGE.Return(20), "");
                                                mSubMode = 2;
                                                mTicks = 0;
                                            }
                                            break;
                                        case 6:
                                            mMBOXUI.Set( 2, mMESSAGE.Return(64), "");
                                            mSubMode = 2;
                                            mTicks = 0;
                                            break;
                                        case 7:
                                            mMBOXUI.Set( 2, mMESSAGE.Return(65), "");
                                            mSubMode = 2;
                                            mTicks = 0;
                                            break;
                                        default:
                                            return;
                                        }
                                        break;
                                    case 1:
                                        mMBOXUI.Set( 1, mMESSAGE.Return(55), "");
                                        mMYINFO.mMoveZoneState = 0;
                                        mActType = 0;
                                        mActSort = 1;
                                        mActFrame = 0.0;
                                        break;
                                    case 2:
                                        mMBOXUI.Set( 2, mMESSAGE.Return(1347), "");
                                        mSubMode = 2;
                                        mTicks = 0;
                                        break;
                                    case 3:
                                        mMBOXUI.Set( 2, mMESSAGE.Return(1348), "");
                                        mSubMode = 2;
                                        mTicks = 0;
                                        break;
                                    case 4:
                                        mMBOXUI.Set( 2, mMESSAGE.Return(229), "");
                                        mSubMode = 2;
                                        mTicks = 0;
                                        break;
                                    case 101:
                                        mMBOXUI.Set( 2, mMESSAGE.Return(56), "");
                                        mSubMode = 2;
                                        mTicks = 0;
                                        break;
                                    case 102:
                                        mMBOXUI.Set( 2, mMESSAGE.Return(57), "");
                                        mSubMode = 2;
                                        mTicks = 0;
                                        break;
                                    default:
                                        return;
                                    }
                                }
                            }
                        }
                    }
                }
                else if (mSelectType == 2)
                {
                    mActFrame = dTime * 30.0 + mActFrame;

                    if (mActFrame >= (float)mGDATA.ReturnCharacterMotionFrameNum(mMYINFO.mCreateAvatarInfo.aTribe, mMYINFO.mCreateAvatarInfo.aGender, mActType, mActSort, 1, 0, 0, 1))
                    {
                        mActFrame = mActFrame - (float)mGDATA.ReturnCharacterMotionFrameNum( mMYINFO.mCreateAvatarInfo.aTribe,mMYINFO.mCreateAvatarInfo.aGender,mActType,mActSort, 1, 0, 0, 1);
                    }
                    if (bIsClick[12])
                    {
                        mActAngle[1] = mActAngle[1] + 3.0;
                    }
                    if (bIsClick[13])
                    {
                        mActAngle[1] = mActAngle[1] - 3.0;
                    }
                }
            }
            else
            {
                tSTR = mMESSAGE.Return(20);
                mMBOXUI.Set( 2, tSTR, "");
                mSubMode = 2;
                mTicks = 0;
            }
        }
    }
    else if (++mTicks >= 30)
    {
        mGXD.mCameraEye.x = 0.0f;
        mGXD.mCameraEye.y = 5.0f;
        mGXD.mCameraEye.z = -28.0f;
        mGXD.mCameraLook.x = 0.0f;
        mGXD.mCameraLook.y = 10.0f;
        mGXD.mCameraLook.z = 0.0f;
        TW2AddIn::mGXD.mCameraEye.x = 0.0f;
        TW2AddIn::mGXD.mCameraEye.y = 5.0f;
        TW2AddIn::mGXD.mCameraEye.z = -28.0f;
        TW2AddIn::mGXD.mCameraLook.x = 0.0f;
        TW2AddIn::mGXD.mCameraLook.y = 10.0f;
        TW2AddIn::mGXD.mCameraLook.z = 0.0f;
        mPOINTER.Set( 0 );
        mEDITBOX.Set( 0 );
        for (i = 0; i < 150; ++i)
        {
            bIsClick[i] = 0;
        }
        if (mMYINFO.mSecondLoginSort)
        {
            mSecondPasswordState = 1;
            mSelectState = 0;
            if (!strcmp(mMYINFO.mMousePassword, ""))
                mSecondPasswordType = 1;
            else
                mSecondPasswordType = 2;
            mSecondPasswordInputIndex = 0;
            mInputNum[0] = 0;
            mInputNum[1] = 0;
            mInputNum[2] = 0;
            strcpy(aInputText[0], "");
            strcpy(aInputText[1], "");
            strcpy(aInputText[2], "");
            for (i = 0; i < 10; ++i)
            {
                mSecondPasswordImage[i] = -1;
            }
            for( i = 0; i < 10; i++ )
            {
                while ( mSecondPasswordImage[tPwIndex] != -1 )
                {
                    tPwIndex = rand() % 10;
                }
                mSecondPasswordImage[tPwIndex] = i;
            }
            mSecondLoginTryNum = 0;
        }
        else
        {
            mSecondPasswordState = 0;
            for (i = 0; i < 3 && !strcmp(mMYINFO.mSelectAvatarInfo[i].aName, ""); ++i)
                ;
            if (i >= 3)
                mSelectState = 1;
        }
        mGiftType = 0;
        if (mMYINFO.mServerType)
        {
            if (mWorldIndex == 40)
                unk101[0] = 1;
            else
                unk101[0] = 7;
            unk101[1] = 1;
            unk101[2] = 2;
            unk101[3] = 3;
            unk101[4] = 4;
            unk101[5] = 5;
            unk101[6] = 6;
            unk101[7] = 7;
            unk101[8] = 8;
            unk101[9] = 9;
        }
        else
        {
            if (mWorldIndex == 40)
                unk101[0] = 3;
            else
                unk101[0] = 5;
            unk101[1] = 1;
            unk101[2] = 5;
            unk101[3] = 6;
            unk101[4] = 4;
            unk101[5] = 5;
            unk101[6] = 6;
            unk101[7] = 7;
            unk101[8] = 8;
            unk101[9] = 9;
        }
        bTransferState = 0;
        mTransferIndex = -1;
        mChangeNameWindowState = 0;
        bOpenWebStorageState = 0;
        uCurrentGiftPage = 0;
        tWebStorageSelectIndex = -1;
        bResetInputSecondPassword = 0;
        unk6 = 0;
        tSelectBG = rand() % 3;
        if (tSelectBG)
        {
            if (tSelectBG == 1)
            {
                mSelectBG = 2384;
            }
            else if (tSelectBG == 2)
            {
                mSelectBG = 2385;
            }
        }
        else
        {
            mSelectBG = 2383;
        }
        mSelectType = 1;
        mSelectAvtIndex = -1;
        tLoginWebMallState = 0;
        tLoginWebMallPage = 0;
        tLoginWebMallSelectIndex = -1;
        for (i = 0; i < 3; ++i)
        {
            if (strcmp(mMYINFO.mSelectAvatarInfo[i].aName, ""))
            {
                if (mSelectAvtIndex == -1)
                {
                    mSelectAvtIndex = i;
                }
                else if (mMYINFO.mSelectAvatarInfo[i].aLevel1 > mMYINFO.mSelectAvatarInfo[mSelectAvtIndex].aLevel1)
                {
                    mSelectAvtIndex = i;
                }
            }
        }
        mActType = 0;
        mActSort = 1;
        mActFrame = 0.0f;
        mActCoord[0] = 0.0f;
        mActCoord[1] = 0.0f;
        mActCoord[2] = 0.0f;
        mActAngle[0] = 0.0f;
        mActAngle[1] = 0.0f;
        mActAngle[2] = 0.0f;
        mSubMode = 1;
        mTicks = 0;
    }
}

void MAIN::Logic5(float dTime)
{
    char* tSTR;

    switch (mSubMode)
    {
    case 0:
        //if (mTicks++ >= 30)
        if (mTicks++ >= 0)
        {
            mUI.InitForEnterZone();
            mPOINTER.Set(0);
            mEDITBOX.Set(0);
            for (int i = 0; i < 150; i++)
                bIsClick[i] = 0;
            mBGM.Free();
            mLoadStep = 0;
            mLoadImg = mMYINFO.mNextZoneNumber - 1;
            mSubMode = 1;
            mTicks = 0;
        }
        return;

    case 1:
       //if (mTicks++ >= 10)
        if (mTicks++ >= 0)
        {
            mGDATA.mZONE.GetRealDataNumForSky(mMYINFO.mNextZoneNumber, mLoadStep);
            if (mLoadStep++ >= 20)
            {
                mSubMode = 2;
            }
            mTicks = 0;
        }
        return;

    case 2:
        //if (mTicks++ >= 30)
        if (mTicks++ >= 0)
        {
            mMYINFO.mPreviousZoneNumber = mMYINFO.mPresentZoneNumber;
            mMYINFO.mPresentZoneNumber = mMYINFO.mNextZoneNumber;
            if (mTRANSFER.T_REGISTER_AVATAR_SEND(mMYINFO.uID, mMYINFO.mAvatarInfo.aName, &mMYINFO.mAction))
            {
                mSubMode = 3;
            }
            else
            {
                tSTR = mMESSAGE.Return(67);
                mMBOXUI.Set(2, tSTR, "");
                mSubMode = 4;
            }
            mTicks = 0;
        }
        return;

    case 3:
        if (mTicks++ >= 5000)
        {
            tSTR = mMESSAGE.Return(68);
            mMBOXUI.Set(2, tSTR, "");
            mSubMode = 4;
            mTicks = 0;
        }
        return;
    default:
        break;
    }
}

void MAIN::Logic6(float dTime)
{
    int i, j, k;
    char* tstr;
    float tCamEye[3];
    float tCamLook[3];
    int tZoneNum = 0;
    int tWeaponSort = 0;

    switch (mSubMode)
    {
    case 0:
        mUTIL.AdjustViewEnvironment2();
        mPOINTER.Set(0);
        mEDITBOX.Set(0);
        for (i = 0; i < 150; i++)
            bIsClick[i] = 0;
        mSubMode = 1;
        mTicks = 0;
        return;

    case 1:
        if (++mTicks >= 5000)
        {
            tstr = mMESSAGE.Return(71);
            mMBOXUI.Set(2, tstr, "");
            mSubMode = 2;
            mTicks = 0;
        }
        return;
    case 2:
        return;
    case 3:
        tCamLook[1] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1] + 10.0;
        tCamEye[2] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2] + 50.0;
        tCamEye[1] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1] + 60.0;
        tCamEye[0] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0] + 50.0;
        mGXD.SetCameraPosition(tCamEye[0], tCamEye[1], tCamEye[2], mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0], tCamLook[1], mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2]);
        tCamLook[1] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1] + 10.0;
        tCamEye[2] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2] + 50.0;
        tCamEye[1] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1] + 60.0;
        tCamEye[0] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0] + 50.0;
        TW2AddIn::mGXD.SetCameraPosition(tCamEye[0], tCamEye[1], tCamEye[2], mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0], tCamLook[1], mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2]);
        mINPUT.mPostCameraLength = mUTIL.GetLengthXYZ(&mGXD.mCameraEye.x, &mGXD.mCameraLook.x);
        mSubMode = 4;
        mTicks = 0;
        mNPCUI.mPossibleGetCashInfo = 1;
        mNPCUI.mPossibleBuyCashItem = 0;
        return;

    default:
        if (!(++mTicks % 300))
        {
            if (!mTRANSFER.T_CLIENT_OK_FOR_ZONE_SEND(mMYINFO.mAvatarInfo.aTribe, mMYINFO.mPresentZoneNumber))
            {
                tstr = mMESSAGE.Return(70);
                mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                mMBOXUI.Set(2, "Abnormal Connection Detected. You are disconnected from the game.", "");
            }
            if (strcmp(mMYINFO.mAvatarInfo.aTeacher, "") || strcmp(mMYINFO.mAvatarInfo.aStudent, ""))
                mTRANSFER.T_TEACHER_STATE_SEND();
        }
        if (mMYINFO.mCheckSendActionPacket && mAPP[0].hPresentElapsedSeconds - mMYINFO.mSendActionPacketPostTime > 10.0)
        {
            mMYINFO.mCheckSendActionPacket = 0;
        }
        mAUTOUI.ProcessForAuto();
        mGDATA.mZONE.mWORLD.Update(15.0f, dTime);
        Logic6ForZone(dTime);
        mPLAY.mAVATAR_OBJECT[0].Update( 0, dTime);
        ProcessForCamera();

        for (j = 1; j < mPLAY.MAX_AVATAR_OBJECT; ++j)
        {
            if (mPLAY.mAVATAR_OBJECT[j].mCheckValidState)
            {
                if (mAPP[0].hPresentElapsedSeconds - mPLAY.mAVATAR_OBJECT[j].mLastActionUpdateTime <= 7.5)
                    mPLAY.mAVATAR_OBJECT[j].Update( j, dTime);
                else
                    mPLAY.mAVATAR_OBJECT[j].Free();
            }
        }
        for (i = 0; i < mPLAY.MAX_NPC_OBJECT; ++i)
        {
            if (mPLAY.mNPC_OBJECT[i].mCheckValidState)
                mPLAY.mNPC_OBJECT[i].A001( i, dTime);
        }
        for (i = 0; i < mPLAY.MAX_MONSTER_OBJECT; ++i)
        {
            if (mPLAY.mMONSTER_OBJECT[i].mCheckValidState)
            {
                if (mAPP[0].hPresentElapsedSeconds - mPLAY.mMONSTER_OBJECT[i].mMonsterUpdateTime <= 7.5)
                    mPLAY.mMONSTER_OBJECT[i].Update( i, dTime);
                else
                    mPLAY.mMONSTER_OBJECT[i].Free();
            }
        }
        for (i = 0; i < mPLAY.MAX_ITEM_OBJECT; ++i)
        {
            if (mPLAY.mITEM_OBJECT[i].mCheckValidState)
            {
                if (mAPP[0].hPresentElapsedSeconds - mPLAY.mITEM_OBJECT[i].mItemUpdateTime <= 7.5)
                    mPLAY.mITEM_OBJECT[i].Update( i, dTime);
                else
                    mPLAY.mITEM_OBJECT[i].Free();
            }
        }
        for (i = 0; i < mPLAY.MAX_EFFECT_OBJECT; ++i)
        {
            if (mPLAY.mEFFECT_OBJECT[i].mCheckValidState)
            {
                mPLAY.mEFFECT_OBJECT[i].Update(i, dTime);
            }
        }
        for (i = 0; i < mPLAY.MAX_PROXY_OBJECT; ++i)
        {
            if (mPLAY.mPROXY_OBJECT[i].mCheckValidState)
            {
                mPLAY.mPROXY_OBJECT[i].Update(dTime);
            }
        }
        if (mTicks % 30
            || mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort == 11
            || mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort == 12
            || mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort == 33
            || mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort == 34
            || mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort == 35
            || mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort == 36
            || mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort == 37
            || mUI.CheckActiveUIForItem())
        {
            goto LABEL_66;
        }
        if (CheckForInventory() && mMYINFO.mAvatarInfo.aAutoHuntState != 1)
        {
            ProcessForGetItem4();
        LABEL_66:
            switch (mMYINFO.mSelectObjSort)
            {
            case 1:
            case 2:
            case 3:
                for (i = 1; i < mPLAY.MAX_AVATAR_OBJECT
                    && (!mPLAY.mAVATAR_OBJECT[i].mCheckValidState
                        || !mPLAY.mAVATAR_OBJECT[i].mDATA.aVisibleState
                        || !mPLAY.CheckPossibleAvatarTarget(mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aSort)
                        || mPLAY.mAVATAR_OBJECT[i].mIndex != mMYINFO.mSelectObjIndex
                        || mPLAY.mAVATAR_OBJECT[i].mUniqueNumber != mMYINFO.mSelectObjUniqueNumber);
                    ++i)
                {
                    ;
                }
                if (i == mPLAY.MAX_AVATAR_OBJECT)
                {
                    mMYINFO.mSelectObjSort = 0;
                }
                break;
            case 4:
                if (mUTIL.GetLengthXYZ(mPLAY.mNPC_OBJECT[mMYINFO.mSelectObjIndex].mLocation, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation) > 500.0)
                {
                    mMYINFO.mSelectObjSort = 0;
                }
                break;
            case 5:
                for (i = 0;
                    i < mPLAY.MAX_MONSTER_OBJECT
                    && (!mPLAY.mMONSTER_OBJECT[i].mCheckValidState
                        || !mPLAY.CheckPossibleMonsterTarget(mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aSort)
                        || mPLAY.mMONSTER_OBJECT[i].mServerIndex != mMYINFO.mSelectObjIndex
                        || mPLAY.mMONSTER_OBJECT[i].mUniqueNumber != mMYINFO.mSelectObjUniqueNumber);
                    ++i)
                {
                    ;
                }
                if (i == mPLAY.MAX_MONSTER_OBJECT)
                {
                    mMYINFO.mSelectObjSort = 0;
                }
                break;
            case 7:
                if (mUTIL.GetLengthXYZ(mPLAY.mPROXY_OBJECT[mMYINFO.mSelectObjIndex].mDATA.tShopLocation, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation) > 500.0)
                {
                    mMYINFO.mSelectObjSort = 0;
                }
                break;
            default:
                break;
            }
           // mMYINFO.ProcessForQuestCall(mMYINFO);
            if (!(mTicks % 30))
            {
                tZoneNum = mZONEMOVEINFO.ReturnNextZone(mMYINFO.mPresentZoneNumber, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation);
                if (tZoneNum != -1 && !mMYINFO.mMoveZoneState)
                {
                    mMYINFO.mMoveZoneState = 1;
                    mMYINFO.mMoveZoneSort = 4;
                    mMYINFO.mMoveZoneValue = 0;
                    mMYINFO.mNextZoneNumber = tZoneNum;
                    memset(&mMYINFO.mAction, 0, sizeof(ACTION_INFO));
                    mMYINFO.mAction.aType = 0;
                    mMYINFO.mAction.aSort = 1;
                    mMYINFO.mAction.aFrame = 0.0;
                    mZONEMOVEINFO.SetStartCoord(tZoneNum, mMYINFO.mPresentZoneNumber, mMYINFO.mAction.aLocation);
                    mMYINFO.mAction.aFront = (rand() % 360);
                    mMYINFO.mAction.aTargetFront = mMYINFO.mAction.aFront;
                    mTRANSFER.T_DEMAND_ZONE_SERVER_INFO_2(mMYINFO.mMoveZoneSort, tZoneNum);
                }
            }
            if (mPLAY.CheckTrap(mMYINFO.mAvatarInfo.aTribe) && !mMYINFO.uUserSort)
            {
                for (i = 0; i < 5; ++i)
                {
                    if ((mMYINFO.mTrapPosition[i][0] != 0.0 || mMYINFO.mTrapPosition[i][1] != 0.0 || mMYINFO.mTrapPosition[i][2] != 0.0) && mUTIL.GetLengthXYZ(mMYINFO.mTrapPosition[i], mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation) < 100.0)
                    {
                        mMYINFO.mTrapPosition[i][0] = 0.0;
                        mMYINFO.mTrapPosition[i][1] = 0.0;
                        mMYINFO.mTrapPosition[i][2] = 0.0;
                        mTRANSFER.T_TRAP_CHECK_SEND(i, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation);
                    }
                }
            }
            mGAMENOTICE.ProcessForInsert();
        }
        return;
    }
}

void MAIN::Logic7( float dTime )
{

}

void MAIN::Logic8(float dTime)
{
    int tResult;
    int tResult2;
    char* tStr;
    char mBuffer[1000];

    switch (mSubMode)
    {
    case 0:
        mPOINTER.Set(0);
        mEDITBOX.Set(0);
        for (int i = 0; i < 150; i++)
            bIsClick[i] = 0;
        mSubMode = 1;
        mTicks = 0;
        mEDITBOX.Set(1);
        SetWindowTextA(mEDITBOX.mDATA[0], "");
        SetWindowTextA(mEDITBOX.mDATA[1], "");
        return;

    case 2:
        memset(mMYINFO.uID, 0, MAX_USER_ID_LENGTH);
        memset(mMYINFO.uPassword, 0, MAX_USER_PASSWORD_LENGTH);
        GetWindowTextA(mEDITBOX.mDATA[0], mMYINFO.uID, MAX_USER_ID_LENGTH);
        GetWindowTextA(mEDITBOX.mDATA[1], mMYINFO.uPassword, MAX_USER_PASSWORD_LENGTH);
        if (strcmp(mMYINFO.uID, "") == 0 || strcmp(mMYINFO.uPassword, "") == 0)
        {
            mMBOXUI.Set(2, "Username or password must not be empty!", "");
            mSubMode = 4;
            mTicks = 0;
            return;
        }
        mNETWORK.CONNECT_1(mWorldIP[0], mWorldPort[0], &tResult);
        switch (tResult)
        {
        case 0:
            TW_CREATE_ACCOUNT_SEND(mMYINFO.uID, mMYINFO.uPassword, &tResult2);
            switch (tResult2)
            {
            case 0:
                mMBOXUI.Set(2, "Welcome to Test Server (OBT) - Account Created Successfully!", "");
                mSubMode = 4;
                mTicks = 0;
                return;

            case 1:
                mMBOXUI.Set(2, "Account already exists!", "");
                mSubMode = 4;
                mTicks = 0;
                return;

            case 2:
                mMBOXUI.Set(2, "Username must not be empty!", "");
                mSubMode = 4;
                mTicks = 0;
                return;

            case 3:
                mMBOXUI.Set(2, "Password must not be empty!", "");
                mSubMode = 4;
                mTicks = 0;
                return;

            case 101:
            case 102:
                mMBOXUI.Set(2, "Account Create Failed!", "");
                mSubMode = 4;
                mTicks = 0;
                return;

            default:
                mMBOXUI.Set(2, "Unknown Error Occured.", "");
                mSubMode = 4;
                mTicks = 0;
                return;
            }
            break;

        case 1: 
            mMBOXUI.Set(2, "Connection Error[#001]", "");
            mSubMode = 4;
            mTicks = 0;
            return;

        case 2: 
            mMBOXUI.Set(2, "Connection Error[#002]", "");
            mSubMode = 4;
            mTicks = 0;
            return;

        case 3: 
            mMBOXUI.Set(2, "Connection Error[#003]", "");
            mSubMode = 4;
            mTicks = 0;
            return;

        case 4: 
            mMBOXUI.Set(2, "Connection Error[#004]", "");
            mSubMode = 4;
            mTicks = 0;
            return;
        }
        return;
    }
}


void MAIN::Draw1( float dTime )
{
    int tResult;
    int sX, sY;
    int tDataIndex;

    if (mGXD.ReadyForDrawing(&tResult))
    {
        TW2AddIn::mGXD.OnResetDevice();
        mGXD.BeginForDrawing(0);
        CopyMemory(&TW2AddIn::mGXD.mWorldMatrix, &mGXD.mWorldMatrix, sizeof(D3DXMATRIX));
        CopyMemory(&TW2AddIn::mGXD.mViewMatrix, &mGXD.mViewMatrix, sizeof(D3DXMATRIX));
        TW2AddIn::mGXD.mCameraForward.x = mGXD.mCameraForward.x;
        TW2AddIn::mGXD.mCameraForward.y = mGXD.mCameraForward.y;
        TW2AddIn::mGXD.mCameraForward.z = mGXD.mCameraForward.z;
        mGXD.mGraphicDevice->Clear(0, 0, 7, 0, 1.0f, 0);
        mGXD.mGraphicDevice->SetRenderState(D3DRS_ALPHAFUNC, D3DCMP_GREATER);
        mGXD.mGraphicDevice->SetRenderState(D3DRS_SRCBLEND, D3DBLEND_SRCALPHA);
        mGXD.mGraphicDevice->SetRenderState(D3DRS_DESTBLEND, D3DBLEND_INVSRCALPHA);
        if (TW2AddIn::mGXD.mPresentShaderProgramNumber)
        {
            TW2AddIn::mGXD.mPresentShaderProgramNumber = 0;
            TW2AddIn::mGXD.mGraphicDevice->SetVertexShader(0);
            TW2AddIn::mGXD.mGraphicDevice->SetPixelShader(0);
        }
        mGXD.BeginFor2D();

        if (mSubMode)
        {
            tDataIndex = mSubMode + 797;
            if (tDataIndex > 830)
                tDataIndex = 830;
            sX = mMYINFO.mScreenXSize / 2;
            sX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[tDataIndex]) / 2;
            sY = mMYINFO.mScreenYSize / 2;
            sY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[tDataIndex]) / 2;
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], sX, sY);
            mGXD.EndFor2D();
            mGXD.EndForDrawing();
        }
        else
        {
            mGXD.EndFor2D();
            mGXD.EndForDrawing();
        }

    }
    else if (tResult == 1)
    {
        TW2AddIn::mGXD.OnLostDevice();
    }
}
void MAIN::Draw2(float dTime)
{
    int sX, sY;
    int cX, cY;

    char mBuffer[1000];
    int i;
    int tResult;
    POINT mPoint;
    int tIdx;

    if (mGXD.ReadyForDrawing(&tResult))
    {
        TW2AddIn::mGXD.OnResetDevice();
        mGXD.BeginForDrawing(0);
        CopyMemory(&TW2AddIn::mGXD.mWorldMatrix, &mGXD.mWorldMatrix, sizeof(D3DXMATRIX));
        CopyMemory(&TW2AddIn::mGXD.mViewMatrix, &mGXD.mViewMatrix, sizeof(D3DXMATRIX));
        TW2AddIn::mGXD.mCameraForward.x = mGXD.mCameraForward.x;
        TW2AddIn::mGXD.mCameraForward.y = mGXD.mCameraForward.y;
        TW2AddIn::mGXD.mCameraForward.z = mGXD.mCameraForward.z;
        mGXD.mGraphicDevice->Clear(0, 0, 7, 0, 1.0f, 0);
        mGXD.mGraphicDevice->SetRenderState(D3DRS_ALPHAFUNC, D3DCMP_GREATER);
        mGXD.mGraphicDevice->SetRenderState(D3DRS_SRCBLEND, D3DBLEND_SRCALPHA);
        mGXD.mGraphicDevice->SetRenderState(D3DRS_DESTBLEND, D3DBLEND_INVSRCALPHA);
        if (TW2AddIn::mGXD.mPresentShaderProgramNumber)
        {
            TW2AddIn::mGXD.mPresentShaderProgramNumber = 0;
            TW2AddIn::mGXD.mGraphicDevice->SetVertexShader(0);
            TW2AddIn::mGXD.mGraphicDevice->SetPixelShader(0);
        }
        mGXD.BeginFor2D();

        if (mSubMode)
        {
            GetCursorPos(&mPoint);
            ScreenToClient(mAPP->hMainWindow, &mPoint);
            cX = mPoint.x;
            cY = mPoint.y;
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[mLoginBGNum], 0, 0, (float)(mMYINFO.mScreenXSize / mMYINFO.mScreenXPosSize), (float)(mMYINFO.mScreenYSize / mMYINFO.mScreenYPosSize));
            sX = mMYINFO.mScreenXSize / 2;
            sX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1785]) / 2;
            sY = mMYINFO.mScreenYSize / 2;
            sY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[1785]) / 2;
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[1785], sX, sY);

            if (mMYINFO.mServerType)
            {

            }
            else
            {
                for (i = mWorldMin; i <= mWorldMax; i++)
                {
                    tIdx = ReturnWorldNameImage(i);
                    sX = ReturnXCoord(i);
                    sY = ReturnYCoord(i);
                    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[tIdx], sX, sY, cX, cY) && mPresentPlayerNum[i] >= 0 && mPresentPlayerNum[i] < mMaxPlayerNum[i])
                    {
                        sX = ReturnXCoord(i);
                        sY = ReturnYCoord(i);
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[tIdx + 1], sX, sY);
                    }
                    else
                    {
                        sX = ReturnXCoord(i);
                        sY = ReturnYCoord(i);
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[tIdx], sX, sY);
                    }
                    DisplayWorldUserNumber(i, mPresentPlayerNum[i]);
                }
            }

            mMYINFO.AdjustScreenCoord(4, 891, 701, &sX, &sY);
            if (bIsClick[0])
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[6], sX, sY);
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4], sX, sY, cX, cY))
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[5], sX, sY);
            }
            else
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[4], sX, sY);
            }

            //// Register Account Button   KAPATTIM KAYIT OLMA LOGIN EKRANINDA
            //mMYINFO.AdjustScreenCoord(8, 905, 701, &sX, &sY);
            //if (bIsClick[1])
            //{
            //    GIMAGE2D::Display(&mGDATA.mUI_MAIN[10], sX, sY - 45);
            //}
            //else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[8], sX, sY - 45, cX, cY))
            //{
            //    GIMAGE2D::Display(&mGDATA.mUI_MAIN[9], sX, sY - 45);
            //}
            //else
            //{
            //    GIMAGE2D::Display(&mGDATA.mUI_MAIN[8], sX, sY - 45);
            //}
            //mUTIL.DrawFont2D("Create Account", sX - 10, sY - 60, 3);



            mUI.Draw();
            mGXD.EndFor2D();
            mGXD.EndForDrawing();
        }

        mGXD.EndFor2D();
        mGXD.EndForDrawing();
    }
    else
    {
        TW2AddIn::mGXD.OnLostDevice();
    }

}
void MAIN::Draw3(float dTime)
{
    int tResult;
    int mX;
    int mY;
    POINT mPoint;
    int tDrawX;
    int tDrawY;
    int uX;
    int uY;
    char tString[1000];
    int tStrLen = 0;
    int tCursorX;
    int tCursorY;
    float tScaleX;
    float tScaleY;

    if (mGXD.ReadyForDrawing(&tResult))
    {
        TW2AddIn::mGXD.OnResetDevice();
        mGXD.BeginForDrawing(0);
        CopyMemory(&TW2AddIn::mGXD.mWorldMatrix, &mGXD.mWorldMatrix, sizeof(D3DXMATRIX));
        CopyMemory(&TW2AddIn::mGXD.mViewMatrix, &mGXD.mViewMatrix, sizeof(D3DXMATRIX));
        TW2AddIn::mGXD.mCameraForward.x = mGXD.mCameraForward.x;
        TW2AddIn::mGXD.mCameraForward.y = mGXD.mCameraForward.y;
        TW2AddIn::mGXD.mCameraForward.z = mGXD.mCameraForward.z;
        mGXD.mGraphicDevice->SetRenderState(D3DRS_ALPHAFUNC, D3DCMP_GREATER);
        mGXD.mGraphicDevice->SetRenderState(D3DRS_SRCBLEND, D3DBLEND_SRCALPHA);
        mGXD.mGraphicDevice->SetRenderState(D3DRS_DESTBLEND, D3DBLEND_INVSRCALPHA);
        if (TW2AddIn::mGXD.mPresentShaderProgramNumber)
        {
            TW2AddIn::mGXD.mPresentShaderProgramNumber = 0;
            TW2AddIn::mGXD.mGraphicDevice->SetVertexShader(0);
            TW2AddIn::mGXD.mGraphicDevice->SetPixelShader(0);
        }
        mGXD.BeginFor2D();

        // Begin Draw
        if (mSubMode)
        {
            tScaleX = (float)(mMYINFO.mScreenXSize / mMYINFO.mScreenXPosSize);
            tScaleY = (float)(mMYINFO.mScreenYSize / mMYINFO.mScreenYPosSize);
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2381], 0, 0, tScaleX, tScaleY);
            GetCursorPos(&mPoint);
            ScreenToClient(mAPP->hMainWindow, &mPoint);
            mX = mPoint.x;
            mY = mPoint.y;
            uX = mMYINFO.mScreenXSize / 2;
            tDrawX = uX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[14]) / 2;
            uY = mMYINFO.mScreenYSize / 2;
            tDrawY = uY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[14]) / 2;
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[14], tDrawX, tDrawY);
            
            // Get Username
            GetWindowTextA(mEDITBOX.mDATA[0], tString, 1000);
            mUTIL.DrawFont2D(tString, tDrawX + 126, tDrawY + 60, 1);
            if (mEDITBOX.mDataIndex == 1)
            {
                tCursorY = tDrawY + 60;
                tStrLen = mUTIL.GetStringLength(tString);
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[43], tDrawX + tStrLen + 127, tCursorY);
            }
            // Get Password
            GetWindowTextA(mEDITBOX.mDATA[1], tString, 1000);
            tStrLen = strlen(tString);
            memset(tString, '*', tStrLen);
            mUTIL.DrawFont2D(tString, tDrawX + 126, tDrawY + 95, 1);
            if (mEDITBOX.mDataIndex == 2)
            {
                tCursorY = tDrawY + 95;
                tStrLen = mUTIL.GetStringLength(tString);
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[43], tDrawX + tStrLen + 127, tCursorY);
            }

            if (bIsClick[0])
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[10], tDrawX + 106, tDrawY + 126);
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[9], tDrawX + 106, tDrawY + 126, mX, mY) && mSubMode == 1)
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[9], tDrawX + 106, tDrawY + 126);
            }
            if (bIsClick[1])
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[13], tDrawX + 182, tDrawY + 126);
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[12], tDrawX + 182, tDrawY + 126, mX, mY) && mSubMode == 1)
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[12], tDrawX + 182, tDrawY + 126);
            }
            mUI.Draw();
            mGXD.EndFor2D();
            mGXD.EndForDrawing();
        }
        else
        {
            mGXD.EndFor2D();
            mGXD.EndForDrawing();
        }


        mGXD.EndFor2D();
        mGXD.EndForDrawing();


    }
    else if (tResult == 1)
    {
        TW2AddIn::mGXD.OnLostDevice();
    }
}

void MAIN::Draw4(float dTime)
{
    int tResult;
    POINT mPoint;
    int mX, mY;
    int sX, sY;
    int tX, tY;
    int i, j, k;
    char mBuffer[1000];
    char* tstr;
    ITEM_INFO* tITEM;
    int i2D;
    int iSort;
    int tIndex;


    if (mGXD.ReadyForDrawing(&tResult))
    {
        TW2AddIn::mGXD.OnResetDevice();
        mGXD.BeginForDrawing(0);
        CopyMemory(&TW2AddIn::mGXD.mWorldMatrix, &mGXD.mWorldMatrix, sizeof(D3DXMATRIX));
        CopyMemory(&TW2AddIn::mGXD.mViewMatrix, &mGXD.mViewMatrix, sizeof(D3DXMATRIX));
        TW2AddIn::mGXD.mCameraForward.x = mGXD.mCameraForward.x;
        TW2AddIn::mGXD.mCameraForward.y = mGXD.mCameraForward.y;
        TW2AddIn::mGXD.mCameraForward.z = mGXD.mCameraForward.z;
        mGXD.mGraphicDevice->Clear(0, 0, 7, 0, 1.0f, 0);
        mGXD.mGraphicDevice->SetRenderState(D3DRS_ALPHAFUNC, D3DCMP_GREATER);
        mGXD.mGraphicDevice->SetRenderState(D3DRS_SRCBLEND, D3DBLEND_SRCALPHA);
        mGXD.mGraphicDevice->SetRenderState(D3DRS_DESTBLEND, D3DBLEND_INVSRCALPHA);
        if (TW2AddIn::mGXD.mPresentShaderProgramNumber)
        {
            TW2AddIn::mGXD.mPresentShaderProgramNumber = 0;
            TW2AddIn::mGXD.mGraphicDevice->SetVertexShader(0);
            TW2AddIn::mGXD.mGraphicDevice->SetPixelShader(0);
        }
        TW2AddIn::mGXD.mLight.Type = D3DLIGHT_DIRECTIONAL;
        TW2AddIn::mGXD.mLight.Diffuse.r = 0.80000001;
        TW2AddIn::mGXD.mLight.Diffuse.g = 0.80000001;
        TW2AddIn::mGXD.mLight.Diffuse.b = 0.80000001;
        TW2AddIn::mGXD.mLight.Diffuse.a = 1.0;
        TW2AddIn::mGXD.mLight.Specular.r = 0.0;
        TW2AddIn::mGXD.mLight.Specular.g = 0.0;
        TW2AddIn::mGXD.mLight.Specular.b = 0.0;
        TW2AddIn::mGXD.mLight.Specular.a = 1.0;
        TW2AddIn::mGXD.mLight.Ambient.r = 0.80000001;
        TW2AddIn::mGXD.mLight.Ambient.g = 0.80000001;
        TW2AddIn::mGXD.mLight.Ambient.b = 0.80000001;
        TW2AddIn::mGXD.mLight.Ambient.a = 1.0;
        TW2AddIn::mGXD.mLight.Position.x = 0.0;
        TW2AddIn::mGXD.mLight.Position.y = 0.0;
        TW2AddIn::mGXD.mLight.Position.z = 0.0;
        TW2AddIn::mGXD.mLight.Direction.x = -1.0;
        TW2AddIn::mGXD.mLight.Direction.y = -1.0;
        TW2AddIn::mGXD.mLight.Direction.z = -1.0;
        D3DXVec3Normalize((D3DXVECTOR3*)&TW2AddIn::mGXD.mLight.Direction, (D3DXVECTOR3*)&TW2AddIn::mGXD.mLight.Direction);
        TW2AddIn::mGXD.mLight.Range = 0.0;
        TW2AddIn::mGXD.mLight.Falloff = 0.0;
        TW2AddIn::mGXD.mLight.Attenuation0 = 0.0;
        TW2AddIn::mGXD.mLight.Attenuation1 = 0.0;
        TW2AddIn::mGXD.mLight.Attenuation2 = 0.0;
        TW2AddIn::mGXD.mLight.Theta = 0.0;
        TW2AddIn::mGXD.mLight.Phi = 0.0;
        TW2AddIn::mGXD.mGraphicDevice->SetLight(0, &TW2AddIn::mGXD.mLight);
        mGXD.BeginFor2D();

        if (mSubMode)
        {
            float bX = mMYINFO.mScreenXSize / mMYINFO.mScreenXPosSize;
            float bY = mMYINFO.mScreenYSize / mMYINFO.mScreenYPosSize;
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[mSelectBG], 0, 0, bX, bY);
            mGXD.EndFor2D();

            if (mSelectType == 1)
            {
                if (mSelectAvtIndex != -1)
                {
                    DrawAvatarInfo( 1, 0, &mMYINFO.mSelectAvatarInfo[mSelectAvtIndex], mActType, mActSort, mActFrame, mActCoord, mActAngle);
                    DrawAvatarInfo( 2, 0, &mMYINFO.mSelectAvatarInfo[mSelectAvtIndex], mActType, mActSort, mActFrame, mActCoord, mActAngle);
                }
            }
            else if (mSelectType == 2)
            {
                DrawAvatarInfo( 1, 1, &mMYINFO.mCreateAvatarInfo, mActType, mActSort, mActFrame, mActCoord, mActAngle);
                DrawAvatarInfo( 2, 1, &mMYINFO.mCreateAvatarInfo, mActType, mActSort, mActFrame, mActCoord, mActAngle);
            }

            // Begin Main Draw
            mGXD.BeginFor2D();
            GetCursorPos(&mPoint);
            ScreenToClient(mAPP[0].hMainWindow, &mPoint);
            mX = mPoint.x;
            mY = mPoint.y;
            if (mSelectType == 1)
            {
                sX = mMYINFO.mScreenXSize - 194;
                sY = 19;
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2012], mMYINFO.mScreenXSize - 194, 19);
                for (i = 0; i < 3; ++i)
                {
                    if (strcmp(mMYINFO.mSelectAvatarInfo[i].aName, "") != 0)
                    {
                        if (mMYINFO.mSelectAvatarInfo[i].aLevel2 >= 1)
                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2729], sX, sY + 44 * i + 34);
                        else if (mMYINFO.mSelectAvatarInfo[i].aLevel1 >= 113)
                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2018], sX, sY + 44 * i + 34);
                        else
                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2013], sX, sY + 44 * i + 34);

                        if (i == mSelectAvtIndex)
                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[1657], sX + 25, sY + 44 * i + 50);

                        if (mMYINFO.mSelectAvatarInfo[i].aLevel2 >= 1)
                            sprintf(mBuffer, "%d", mMYINFO.mSelectAvatarInfo[i].aLevel2);
                        else if (mMYINFO.mSelectAvatarInfo[i].aLevel1 >= 113)
                            sprintf(mBuffer, "%d", mMYINFO.mSelectAvatarInfo[i].aLevel1 - 112);
                        else 
                            sprintf(mBuffer, "%d", mMYINFO.mSelectAvatarInfo[i].aLevel1);

                        tY = sY + 44 * i + 51;
                        tX = sX + 54;
                        mUTIL.DrawFont2D(mBuffer, tX - mUTIL.GetStringLength(mBuffer) / 2, tY, 1);

                        strcpy(mBuffer, mMYINFO.mSelectAvatarInfo[i].aName);
                        tY = sY + 44 * i + 51;
                        tX = sX + 118;
                        mUTIL.DrawFont2D(mBuffer, tX - mUTIL.GetStringLength(mBuffer) / 2, tY, 1);
                    }
                }

                if (mSelectAvtIndex != -1)
                {
                    sX = 15;
                    sY = 19;
                    if (mMYINFO.mSelectAvatarInfo[mSelectAvtIndex].aLevel2 >= 1)
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2727], sX, sY);
                    else if (mMYINFO.mSelectAvatarInfo[mSelectAvtIndex].aLevel1 >= 113)
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1044], sX, sY);
                    else
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[15], sX, sY);

                    strcpy(mBuffer, mMYINFO.mSelectAvatarInfo[mSelectAvtIndex].aName);
                    tX = sX + 119;
                    mUTIL.DrawFont2D(mBuffer, tX - mUTIL.GetStringLength(mBuffer) / 2, sY + 32, 1);

                    if (mMYINFO.mSelectAvatarInfo[mSelectAvtIndex].aLevel2 >= 1)
                        sprintf(mBuffer, "%d", mMYINFO.mSelectAvatarInfo[mSelectAvtIndex].aLevel2);
                    else if (mMYINFO.mSelectAvatarInfo[mSelectAvtIndex].aLevel1 >= 113)
                        sprintf(mBuffer, "%d", mMYINFO.mSelectAvatarInfo[mSelectAvtIndex].aLevel1 - 112);
                    else
                        sprintf(mBuffer, "%d", mMYINFO.mSelectAvatarInfo[mSelectAvtIndex].aLevel1);

                    tX = sX + 117;
                    mUTIL.DrawFont2D(mBuffer, tX - mUTIL.GetStringLength(mBuffer) / 2, sY + 53, 1);

                    sprintf(mBuffer, "%d", mMYINFO.mSelectAvatarInfo[mSelectAvtIndex].aKillOtherTribe);
                    tX = sX + 117;
                    mUTIL.DrawFont2D(mBuffer, tX - mUTIL.GetStringLength(mBuffer) / 2, sY + 72, 1);

                    sprintf(mBuffer, "%d", mMYINFO.mSelectAvatarInfo[mSelectAvtIndex].aLogoutInfo[4]);
                    tX = sX + 117;
                    mUTIL.DrawFont2D(mBuffer, tX - mUTIL.GetStringLength(mBuffer) / 2, sY + 91, 1);

                    sprintf(mBuffer, "%d", mMYINFO.mSelectAvatarInfo[mSelectAvtIndex].aLogoutInfo[5]);
                    tX = sX + 117;
                    mUTIL.DrawFont2D(mBuffer, tX - mUTIL.GetStringLength(mBuffer) / 2, sY + 110, 1);

                    sprintf(mBuffer, "%d", mMYINFO.mSelectAvatarInfo[mSelectAvtIndex].aSkillPoint);
                    tX = sX + 117;
                    mUTIL.DrawFont2D(mBuffer, tX - mUTIL.GetStringLength(mBuffer) / 2, sY + 129, 1);

                    strcpy(mBuffer, mMYINFO.mSelectAvatarInfo[mSelectAvtIndex].aGuildName);
                    tX = sX + 117;
                    mUTIL.DrawFont2D(mBuffer, tX - mUTIL.GetStringLength(mBuffer) / 2, sY + 148, 1);

                    sprintf(mBuffer, "%d", mMYINFO.mSelectAvatarInfo[mSelectAvtIndex].aEatLifePotion);
                    tX = sX + 117;
                    mUTIL.DrawFont2D(mBuffer, tX - mUTIL.GetStringLength(mBuffer) / 2, sY + 167, 1);

                    sprintf(mBuffer, "%d", mMYINFO.mSelectAvatarInfo[mSelectAvtIndex].aEatManaPotion);
                    tX = sX + 117;
                    mUTIL.DrawFont2D(mBuffer, tX - mUTIL.GetStringLength(mBuffer) / 2, sY + 186, 1);

                    sprintf(mBuffer, "%d", mMYINFO.mSelectAvatarInfo[mSelectAvtIndex].aEatStrengthPotion);
                    tX = sX + 117;
                    mUTIL.DrawFont2D(mBuffer, tX - mUTIL.GetStringLength(mBuffer) / 2, sY + 205, 1);

                    sprintf(mBuffer, "%d", mMYINFO.mSelectAvatarInfo[mSelectAvtIndex].aEatAgilityPotion);
                    tX = sX + 117;
                    mUTIL.DrawFont2D(mBuffer, tX - mUTIL.GetStringLength(mBuffer) / 2, sY + 224, 1);

                    sprintf(mBuffer, "%d", mMYINFO.mSelectAvatarInfo[mSelectAvtIndex].aEatElementAtkDefPotion / 1000);
                    tX = sX + 117;
                    mUTIL.DrawFont2D(mBuffer, tX - mUTIL.GetStringLength(mBuffer) / 2, sY + 243, 1);

                    sprintf(mBuffer, "%d", mMYINFO.mSelectAvatarInfo[mSelectAvtIndex].aEatElementAtkDefPotion % 1000);
                    tX = sX + 117;
                    mUTIL.DrawFont2D(mBuffer, tX - mUTIL.GetStringLength(mBuffer) / 2, sY + 262, 1);
                }

                sX = mMYINFO.mScreenXSize - 140;
                sY = mMYINFO.mScreenYSize - 301;
                if (bIsClick[0])
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[18], sX, sY);
                }
                else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[16], sX, sY, mX, mY))
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[17], sX, sY);
                }
                else
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[16], sX, sY);
                }

                if (bIsClick[1])
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[21], sX, sY + 37);
                }
                else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[19], sX, sY + 37, mX, mY))
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[20], sX, sY + 37);
                }
                else
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[19], sX, sY + 37);
                }

                if (bIsClick[2])
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[24], sX, sY + 74);
                }
                else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[22], sX, sY + 74, mX, mY))
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[23], sX, sY + 74);
                }
                else
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[22], sX, sY + 74);
                }

                if (bIsClick[3])
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[1814], sX, sY + 111);
                }
                else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1812], sX, sY + 111, mX, mY))
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[1813], sX, sY + 111);
                }
                else
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[1812], sX, sY + 111);
                }

                if (bIsClick[4])
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[1927], sX, sY + 148);
                }
                else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1925], sX, sY + 148, mX, mY))
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[1926], sX, sY + 148);
                }
                else
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[1925], sX, sY + 148);
                }

                if (bIsClick[5])
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[965], sX, sY + 185);
                }
                else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[963], sX, sY + 185, mX, mY))
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[964], sX, sY + 185);
                }
                else
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[963], sX, sY + 185);
                }

                if (bIsClick[6])
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[27], sX, sY + 222);
                }
                else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[25], sX, sY + 222, mX, mY))
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[26], sX, sY + 222);
                }
                else
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[25], sX, sY + 222);
                }

                if (mWorldIndex == 50 || mWorldIndex == 40)
                {
                    if (bIsClick[7])
                    {
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3088], sX, sY - 37);
                    }
                    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3086], sX, sY - 37, mX, mY))
                    {
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3087], sX, sY - 37);
                    }
                    else
                    {
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3086], sX, sY - 37);
                    }
                }

                if (mWorldIndex == 40)
                {
                    if (bIsClick[9])
                    {
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3194], 15, 404);
                    }
                    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3192], 15, 404, mX, mY))
                    {
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3193], 15, 404);
                    }
                    else
                    {
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3192], 15, 404);
                    }
                }

                if (bIsClick[85])
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[4118], 15, 368);
                }
                else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4116], 15, 368, mX, mY))
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[4117], 15, 368);
                }
                else
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[4116], 15, 368);
                }
            }
            else if (mSelectType == 2)
            {
                sX = mMYINFO.mScreenXSize - 335;
                sY = 73;
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[40], mMYINFO.mScreenXSize - 335, 73);
                GetWindowTextA(mEDITBOX.mDATA[2], mBuffer, 1000);
                mUTIL.DrawFont2D(mBuffer, sX + 127, 126, 1);

                if (mEDITBOX.mDataIndex == 3)
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[43], sX + mUTIL.GetStringLength(mBuffer) + 128, sY + 53);
                }

                if (mMYINFO.mCreateAvatarInfo.aTribe == 0)
                {
                    strcpy(mBuffer, mMESSAGE.Return(23));
                }
                else if (mMYINFO.mCreateAvatarInfo.aTribe == 1)
                {
                    strcpy(mBuffer, mMESSAGE.Return(24));
                }
                else if (mMYINFO.mCreateAvatarInfo.aTribe == 2)
                {
                    strcpy(mBuffer, mMESSAGE.Return(25));
                }

                tX = sX + 163;
                mUTIL.DrawFont2D(mBuffer, tX - mUTIL.GetStringLength(mBuffer) / 2, sY + 79, 1);

                if (mMYINFO.mCreateAvatarInfo.aGender)
                    tstr = mMESSAGE.Return(27);
                else
                    tstr = mMESSAGE.Return(26);

                strcpy(mBuffer, tstr);
                tX = sX + 163;
                mUTIL.DrawFont2D(mBuffer, tX - mUTIL.GetStringLength(mBuffer) / 2, sY + 103, 1);

                sprintf(mBuffer, "%c %s", mMYINFO.mCreateAvatarInfo.aHeadType + 65, mMESSAGE.Return(28));
                tX = sX + 163;
                mUTIL.DrawFont2D(mBuffer, tX - mUTIL.GetStringLength(mBuffer) / 2, sY + 127, 1);

                sprintf(mBuffer, "%c %s", mMYINFO.mCreateAvatarInfo.aFaceType + 65, mMESSAGE.Return(28));
                tX = sX + 163;
                mUTIL.DrawFont2D(mBuffer, tX - mUTIL.GetStringLength(mBuffer) / 2, sY + 151, 1);

                if (mMYINFO.mCreateAvatarInfo.aTribe == 0)
                {
                    switch (mCreateWeaponType)
                    {
                    case 0: strcpy(mBuffer, mMESSAGE.Return(29)); break;
                    case 1: strcpy(mBuffer, mMESSAGE.Return(30)); break;
                    case 2: strcpy(mBuffer, mMESSAGE.Return(31)); break;
                    }
                }
                else if (mMYINFO.mCreateAvatarInfo.aTribe == 1)
                {
                    switch (mCreateWeaponType)
                    {
                    case 0: strcpy(mBuffer, mMESSAGE.Return(32)); break;
                    case 1: strcpy(mBuffer, mMESSAGE.Return(33)); break;
                    case 2: strcpy(mBuffer, mMESSAGE.Return(34)); break;
                    }
                }
                else if (mMYINFO.mCreateAvatarInfo.aTribe == 2)
                {
                    switch (mCreateWeaponType)
                    {
                    case 0: strcpy(mBuffer, mMESSAGE.Return(35)); break;
                    case 1: strcpy(mBuffer, mMESSAGE.Return(36)); break;
                    case 2: strcpy(mBuffer, mMESSAGE.Return(37)); break;
                    }
                }
                tX = sX + 163;
                mUTIL.DrawFont2D(mBuffer, tX - mUTIL.GetStringLength(mBuffer) / 2, sY + 175, 1);

                if (bIsClick[0])
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[41], sX + 115, sY + 78);
                if (bIsClick[1])
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[42], sX + 196, sY + 78);
                if (bIsClick[2])
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[41], sX + 115, sY + 102);
                if (bIsClick[3])
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[42], sX + 196, sY + 102);
                if (bIsClick[4])
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[41], sX + 115, sY + 126);
                if (bIsClick[5])
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[42], sX + 196, sY + 126);
                if (bIsClick[6])
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[41], sX + 115, sY + 150);
                if (bIsClick[7])
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[42], sX + 196, sY + 150);
                if (bIsClick[8])
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[41], sX + 115, sY + 174);
                if (bIsClick[9])
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[42], sX + 196, sY + 174);

                if (bIsClick[10])
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[10], sX + 47, sY + 203);
                }
                else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[9], sX + 47, sY + 203, mX, mY))
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[9], sX + 47, sY + 203);
                }

                if (bIsClick[11])
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[13], sX + 149, sY + 203);
                }
                else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[12], sX + 149, sY + 203, mX, mY))
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[12], sX + 149, sY + 203);
                }

                mMYINFO.AdjustScreenCoord(44, 390, 628, &sX, &sY);
                if (bIsClick[12])
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[45], sX, sY);
                }
                else
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[44], sX, sY);
                }

                mMYINFO.AdjustScreenCoord(46, 557, 628, &sX, &sY);
                if (bIsClick[13])
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[47], sX, sY);
                }
                else
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[46], sX, sY);
                }
            }

            // Draw Other Menus
            if (mSecondPasswordState)
            {
                switch (mSecondPasswordType)
                {
                case 1:
                    sX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2387]) / 2;
                    sY = mMYINFO.mScreenYSize / 2 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2387]) / 2;
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[2387], sX, sY);
                    for (i = 0; i < mInputNum[0]; ++i)
                    {
                        mBuffer[i] = '*';
                    }
                    mBuffer[i] = 0;
                    mUTIL.DrawFont2D(mBuffer, sX + 123, sY + 143, 3);

                    if (!mSecondPasswordInputIndex)
                    {
                        tY = sY + 143;
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[43], sX + mUTIL.GetStringLength(mBuffer) + 124, tY);
                    }

                    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2597], sX + 176, sY + 141, mX, mY))
                    {
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2597], sX + 176, sY + 141);
                    }
                    for (i = 0; i < mInputNum[1]; ++i)
                    {
                        mBuffer[i] = '*';
                    }
                    mBuffer[i] = 0;
                    mUTIL.DrawFont2D(mBuffer, sX + 123, sY + 163, 3);

                    if (mSecondPasswordInputIndex == 1)
                    {
                        tY = sY + 163;
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[43], sX + mUTIL.GetStringLength(mBuffer) + 124, tY);
                    }
                    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2597], sX + 176, sY + 161, mX, mY))
                    {
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2597], sX + 176, sY + 161);
                    }

                    for (i = 0; i < 10; ++i)
                    {
                        if (GIMAGE2D::CheckIn( &mGDATA.mUI_MAIN[3 * mSecondPasswordImage[i] + 2035], sX + 38 * (i % 5) + 43, sY + 39 * (i / 5) + 210, mX, mY))
                        {
                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3 * mSecondPasswordImage[i] + 2035 + 1], sX + 38 * (i % 5) + 43, sY + 39 * (i / 5) + 210);
                        }
                        else
                        {
                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3 * mSecondPasswordImage[i] + 2035], sX + 38 * (i % 5) + 43, sY + 39 * (i / 5) + 210);
                        }
                    }
                    
                    if (bIsClick[51])
                    {
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2390], sX + 158, sY + 299);
                    }
                    if (bIsClick[52])
                    {
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2391], sX + 212, sY + 299);
                    }
                    break;

                case 2:
                    sX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2388]) / 2;
                    sY = mMYINFO.mScreenYSize / 2 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2388]) / 2;
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[2388], sX, sY);
                    for (i = 0; i < mInputNum[0]; ++i)
                    {
                        mBuffer[i] = '*';
                    }
                    mBuffer[i] = 0;
                    mUTIL.DrawFont2D(mBuffer, sX + 123, sY + 143, 3);

                    if (!mSecondPasswordInputIndex)
                    {
                        tY = sY + 143;
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[43], sX + mUTIL.GetStringLength(mBuffer) + 124, tY);
                    }
                    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2597], sX + 176, sY + 141, mX, mY))
                    {
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2597], sX + 176, sY + 141);
                    }

                    for (i = 0; i < 10; ++i)
                    {
                        if (GIMAGE2D::CheckIn( &mGDATA.mUI_MAIN[3 * mSecondPasswordImage[i] + 2035], sX + 38 * (i % 5) + 43, sY + 39 * (i / 5) + 210, mX, mY))
                        {
                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3 * mSecondPasswordImage[i] + 2035 + 1], sX + 38 * (i % 5) + 43, sY + 39 * (i / 5) + 210);
                        }
                        else
                        {
                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3 * mSecondPasswordImage[i] + 2035], sX + 38 * (i % 5) + 43, sY + 39 * (i / 5) + 210);
                        }
                    }

                    if (bIsClick[51])
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2390], sX + 158, sY + 299);
                    if (bIsClick[52])
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2391], sX + 212, sY + 299);
                    if (bIsClick[53])
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2392], sX + 104, sY + 299);
                    break;

                case 3:
                    sX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2389]) / 2;
                    sY = mMYINFO.mScreenYSize / 2 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2389]) / 2;
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[2389], sX, sY);
                    for (i = 0; i < mInputNum[0]; ++i)
                    {
                        mBuffer[i] = '*';
                    }
                    mBuffer[i] = 0;
                    mUTIL.DrawFont2D(mBuffer, sX + 123, sY + 143, 3);

                    if (!mSecondPasswordInputIndex)
                    {
                        tY = sY + 143;
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[43], sX + mUTIL.GetStringLength(mBuffer) + 124, tY);
                    }
                    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2597], sX + 176, sY + 141, mX, mY))
                    {
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2597], sX + 176, sY + 141);
                    }

                    for (i = 0; i < mInputNum[1]; ++i)
                    {
                        mBuffer[i] = '*';
                    }
                    mBuffer[i] = 0;
                    mUTIL.DrawFont2D(mBuffer, sX + 123, sY + 163, 3);

                    if (mSecondPasswordInputIndex == 1)
                    {
                        tY = sY + 163;
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[43], sX + mUTIL.GetStringLength(mBuffer) + 124, tY);
                    }

                    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2597], sX + 176, sY + 161, mX, mY))
                    {
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2597], sX + 176, sY + 161);
                    }
                    for (i = 0; i < mInputNum[2]; ++i)
                    {
                        mBuffer[i] = '*';
                    }
                    mBuffer[i] = 0;
                    mUTIL.DrawFont2D(mBuffer, sX + 123, sY + 183, 3);

                    if (mSecondPasswordInputIndex == 2)
                    {
                        tY = sY + 183;
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[43], sX + mUTIL.GetStringLength(mBuffer) + 124, tY);
                    }
                    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2597], sX + 176, sY + 181, mX, mY))
                    {
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2597], sX + 176, sY + 181);
                    }

                    for (i = 0; i < 10; ++i)
                    {
                        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3 * mSecondPasswordImage[i] + 2035], sX + 38 * (i % 5) + 43, sY + 39 * (i / 5) + 210, mX, mY))
                        {
                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3 * mSecondPasswordImage[i] + 2035 + 1], sX + 38 * (i % 5) + 43, sY + 39 * (i / 5) + 210);
                        }
                        else
                        {
                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3 * mSecondPasswordImage[i] + 2035], sX + 38 * (i % 5) + 43, sY + 39 * (i / 5) + 210);
                        }
                    }
                    if (bIsClick[51])
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2390], sX + 158, sY + 299);
                    if (bIsClick[52])
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2391], sX + 212, sY + 299);
                    break;

                default:
                    break;
                }
            }

            if (mWorldIndex == 40 && mSelectState)
            {
                sX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3448]) / 2;
                sY = mMYINFO.mScreenYSize / 2 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3448]) / 2;
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3448], sX, sY);
                if (bIsClick[83])
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[1884], sX + 64, sY + 357);
                }
                else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1883], sX + 64, sY + 357, mX, mY))
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[1883], sX + 64, sY + 357);
                }
                if (bIsClick[84])
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[1886], sX + 284, sY + 357);
                }
                else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1885], sX + 284, sY + 357, mX, mY))
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[1885], sX + 284, sY + 357);
                }
            }

            if (mGiftType == 1)
            {
                sX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3169]) / 2;
                sY = mMYINFO.mScreenYSize / 2 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3169]) / 2;
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3169], sX, sY);
                for (i = 0; i < 10; ++i)
                {
                    if (mMYINFO.mGiftItem[i][0] >= 1)
                    {
                        tX = sX + 55 * (i % 5) + 19;
                        tY = sY + 55 * (i / 5) + 41;
                        tITEM = mITEM.Search(mMYINFO.mGiftItem[i][0]);
                        if (tITEM)
                        {
                            GIMAGE2D::Display(&mGDATA.mUI_ITEM[tITEM->iDataNumber2D - 1], tX, tY);
                            if (i == mWantGiftIndex)
                            {
                                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2792], tX, tY);
                            }
                        }
                    }
                }
                if (bIsClick[83])
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[3171], sX + 158, sY + 165);
                }
                else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3170], sX + 158, sY + 165, mX, mY))
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[3170], sX + 158, sY + 165);
                }

                if (bIsClick[84])
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[2790], sX + 229, sY + 165);
                }
                else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2789], sX + 229, sY + 165, mX, mY))
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[2789], sX + 229, sY + 165);
                }
                for (i = 0; i < 10; ++i)
                {
                    if (mMYINFO.mGiftItem[i][0] >= 1)
                    {
                        tX = sX + 55 * (i % 5) + 19;
                        tY = sX + 55 * (i / 5) + 41;
                        if (mX > tX && mX < tX + 55 && mY > tY && mY < tY + 55)
                        {
                            mINVENUI.DrawItemInfo(mX, mY, mMYINFO.mGiftItem[i][0], 0, 0, 1, 0, 0, 0, 0, 0, 0);
                            break;
                        }
                    }
                }
            }

            if (tLoginWebMallState)
            {
                sX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4111]) / 2;
                sY = mMYINFO.mScreenYSize / 2 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[4111]) / 2;
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[4111], sX, sY);
                sprintf(mBuffer, "%d", mMYINFO.mAvatarInfo.aLoginGameWebMallPoints % 1000);
                tY = sY + 14;
                tX = sX + 394;
                mUTIL.DrawFont2D(mBuffer, tX - mUTIL.GetStringLength(mBuffer), tY, 3);

                for (i = 0; i < 10; ++i)
                {
                    if (mLoginWebmallInfo[40 * tLoginWebMallPage + 4 * i] >= 1)
                    {
                        tITEM = mITEM.Search(mLoginWebmallInfo[40 * tLoginWebMallPage + 4 * i]);
                        if (tITEM)
                        {
                            i2D = tITEM->iDataNumber2D - 1;
                            iSort = tITEM->iSort;
                            if (iSort == 2 || iSort == 7 || iSort == 11)
                                GIMAGE2D::Display(&mGDATA.mUI_ITEM[i2D], sX + 195 * (i / 5) + 41, sY + 69 * (i % 5) + 67);
                            else
                                GIMAGE2D::Display(&mGDATA.mUI_ITEM[i2D], sX + 195 * (i / 5) + 28, sY + 69 * (i % 5) + 54);

                            if (i + 10 * tLoginWebMallPage == tLoginWebMallSelectIndex)
                                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2627], sX + 195 * (i / 5) + 28, sY + 69 * (i % 5) + 54);

                            switch (tITEM->iEquipInfo[0])
                            {
                            case 1:
                                strcpy(mBuffer, mMESSAGE.Return(585));
                                break;
                            case 2:
                                strcpy(mBuffer, mMESSAGE.Return(586));
                                break;
                            case 3:
                                strcpy(mBuffer, mMESSAGE.Return(587));
                                break;
                            case 4:
                                strcpy(mBuffer, mMESSAGE.Return(588));
                                break;
                            default:
                                break;
                            }

                            tY = sY + 69 * (i % 5) + 57;
                            tX = sX + 195 * (i / 5) + 144;
                            mUTIL.DrawFont2D(mBuffer, tX - mUTIL.GetStringLength(mBuffer) / 2, tY, 1);

                            strcpy(mBuffer, tITEM->iName);
                            tY = sY + 69 * (i % 5) + 73;
                            tX = sX + 195 * (i / 5) + 144;
                            mUTIL.DrawFont2D(mBuffer, tX - mUTIL.GetStringLength(mBuffer) / 2, tY, 1);

                            sprintf(mBuffer, "%d p", mLoginWebmallInfo[40 * tLoginWebMallPage + 1 + 4 * i]);
                            tY = sY + 69 * (i % 5) + 89;
                            tX = sX + 195 * (i / 5) + 144;
                            mUTIL.DrawFont2D(mBuffer, tX - mUTIL.GetStringLength(mBuffer) / 2, tY, 3);
                        }
                    }
                }
                sprintf(mBuffer, "%d / %d", tLoginWebMallPage + 1, tLoginWebMallMaxPage + 1);
                tY = sY + 414;
                tX = sX + 210;
                mUTIL.DrawFont2D(mBuffer, tX - mUTIL.GetStringLength(mBuffer) / 2, tY, 1);

                if (bIsClick[87])
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], sX + 7, sY + 7);
                if (bIsClick[88])
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], sX + 152, sY + 411);
                if (bIsClick[89])
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], sX + 250, sY + 411);

                if (bIsClick[86])
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[1339], sX + 361, sY + 411);
                }
                else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1338], sX + 361, sY + 411, mX, mY))
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[1338], sX + 361, sY + 411);
                }

                tIndex = GetLoginWebMallIndex0(sX, sY, mX, mY);
                if (tIndex != -1)
                {
                    mINVENUI.DrawItemInfo(mX, mY, mLoginWebmallInfo[4 * tIndex], mLoginWebmallInfo[4 * tIndex + 2], 0, 1, 0, 0, 0, 0, 0, 1);
                }
            }

            if (mChangeNameWindowState)
            {
                sX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1359]) / 2;
                sY = mMYINFO.mScreenYSize / 2 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[1359]) / 2;
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[1359], sX, sY);
                GetWindowTextA(mEDITBOX.mDATA[17], mBuffer, 1000);
                mUTIL.DrawFont2D(mBuffer, sX + 93, sY + 34, 1);

                if (mEDITBOX.mDataIndex == 18)
                {
                    tY = sY + 34;
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[43], sX + mUTIL.GetStringLength(mBuffer) + 94, tY);
                }
                if (bIsClick[75])
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[722], sX + 110, sY + 55);
                }
                else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[721], sX + 110, sY + 55, mX, mY))
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[721], sX + 110, sY + 55);
                }
                if (bIsClick[76])
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[724], sX + 147, sY + 55);
                }
                else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[723], sX + 147, sY + 55, mX, mY))
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[723], sX + 147, sY + 55);
                }
            }

            if (bOpenWebStorageState)
            {
                sX = mMYINFO.mScreenXSize / 2;
                sX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3169]) / 2;
                sY = mMYINFO.mScreenYSize / 2;
                sY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3169]) / 2;
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3169], sX, sY);
                for (i = 0; i < 10; ++i)
                {
                    if (mMYINFO.mWebItem[10 * uCurrentGiftPage + i] >= 1)
                    {
                        tX = sX + 55 * (i % 5) + 19;
                        tY = sY + 55 * (i / 5) + 41;
                        tITEM = mITEM.Search(mMYINFO.mWebItem[10 * uCurrentGiftPage + i]);
                        if (tITEM)
                        {
                            i2D = tITEM->iDataNumber2D - 1;
                            GIMAGE2D::Display(&mGDATA.mUI_ITEM[i2D], tX, tY);
                            if (i + 10 * uCurrentGiftPage == tWebStorageSelectIndex)
                            {
                                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2792], tX, tY);
                            }
                        }
                    }
                }
                sprintf(mBuffer, "%d / 5", uCurrentGiftPage + 1);
                tY = sY + 171;
                tX = sX + 81;
                mUTIL.DrawFont2D(mBuffer, tX - mUTIL.GetStringLength(mBuffer) / 2, tY, 1);

                if (bIsClick[77])
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[3171], sX + 158, sY + 165);
                }
                else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3170], sX + 158, sY + 165, mX, mY))
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[3170], sX + 158, sY + 165);
                }
                if (bIsClick[78])
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[2790], sX + 229, sY + 165);
                }
                else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2789], sX + 229, sY + 165, mX, mY))
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[2789], sX + 229, sY + 165);
                }
                if (bIsClick[79])
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], sX + 23, sY + 167);
                }
                if (bIsClick[80])
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], sX + 121, sY + 167);
                }
                for (i = 0; i < 10; ++i)
                {
                    if (mMYINFO.mWebItem[10 * uCurrentGiftPage + i] >= 1)
                    {
                        tX = sX + 55 * (i % 5) + 19;
                        tY = sY + 55 * (i / 5) + 41;
                        if (mX > tX && mX < tX + 55 && mY > tY && mY < tY + 55)
                        {
                            mINVENUI.DrawItemInfo(mX, mY, mMYINFO.mWebItem[10 * uCurrentGiftPage + i], 0, 0, 1, 0, 0, 0, 0, 0, 0);
                            break;
                        }
                    }
                }
            }

            if (bResetInputSecondPassword)
            {
                sX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2998]) / 2;
                sY = mMYINFO.mScreenYSize / 2 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2998]) / 2;
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2998], sX, sY);
                GetWindowTextA(mEDITBOX.mDATA[18], mBuffer, 1000);
                mUTIL.DrawFont2D(mBuffer, sX + 119, sY + 71, 1);

                if (mEDITBOX.mDataIndex == 19)
                {
                    tY = sY + 71;
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[43], sX + mUTIL.GetStringLength(mBuffer) + 120, tY);
                }
                if (bIsClick[81])
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[10], sX + 287, sY + 233);
                }
                else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[9], sX + 287, sY + 233, mX, mY))
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[9], sX + 287, sY + 233);
                }
                if (bIsClick[82])
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[13], sX + 360, sY + 233);
                }
                else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[12], sX + 360, sY + 233, mX, mY))
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[12], sX + 360, sY + 233);
                }
            }

            mUI.Draw();
            mGXD.EndFor2D();
            mGXD.EndForDrawing();
        }
        else
        {
            mGXD.EndFor2D();
            mGXD.EndForDrawing();
        }
    }
    else if (tResult == 1)
    {
        TW2AddIn::mGXD.OnLostDevice();
    }
}
void MAIN::Draw5( float dTime )
{
    int tResult;
    int sX, sY, mX, mY, dX, dY, tstrlen;
    char mBuffer1[1000];
    char mBuffer2[1000];
    int tDataIndex;

    if ( mGXD.ReadyForDrawing(&tResult))
    {
        TW2AddIn::mGXD.OnResetDevice();
        mGXD.BeginForDrawing(0);
        CopyMemory(&TW2AddIn::mGXD.mViewMatrix, &mGXD.mViewMatrix, sizeof(D3DXMATRIX));
        CopyMemory(&TW2AddIn::mGXD.mWorldMatrix, &mGXD.mWorldMatrix, sizeof(D3DXMATRIX));
        TW2AddIn::mGXD.mCameraForward.x = mGXD.mCameraForward.x;
        TW2AddIn::mGXD.mCameraForward.y = mGXD.mCameraForward.y;
        TW2AddIn::mGXD.mCameraForward.z = mGXD.mCameraForward.z;
        mGXD.mGraphicDevice->Clear(0, 0, 7, 0, 1.0f, 0);
        mGXD.mGraphicDevice->SetRenderState(D3DRS_ALPHAFUNC, D3DCMP_GREATER);
        mGXD.mGraphicDevice->SetRenderState(D3DRS_SRCBLEND, D3DBLEND_SRCALPHA);
        mGXD.mGraphicDevice->SetRenderState(D3DRS_DESTBLEND, D3DBLEND_INVSRCALPHA);
        if (TW2AddIn::mGXD.mPresentShaderProgramNumber)
        {
            TW2AddIn::mGXD.mPresentShaderProgramNumber = 0;
            TW2AddIn::mGXD.mGraphicDevice->SetVertexShader(0);
            TW2AddIn::mGXD.mGraphicDevice->SetPixelShader(0);
        }
        mGXD.BeginFor2D();
        if (mSubMode)
        {
            sX = mMYINFO.mScreenXSize / 2;
            sX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAPLOAD[mLoadImg]) / 2;
            sY = mMYINFO.mScreenYSize / 2;
            sY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAPLOAD[mLoadImg]) / 2;
            GIMAGE2D::Display(&mGDATA.mUI_MAPLOAD[mLoadImg], sX, sY);

            // Draw Zone Name
            strcpy(mBuffer1, mZONENAME.Return(mMYINFO.mNextZoneNumber));
            strcpy(mBuffer2, mBuffer1);
            strcat(mBuffer2, mMESSAGE.Return(69));
            dX = sX + 363;
            tstrlen = mUTIL.GetStringLength(mBuffer2);
            mUTIL.DrawFont2D(mBuffer2, dX - tstrlen / 2, sY + 475, 3);

            // Draw System Message "Now Loading..."
            dX = sX + 363;
            tstrlen = dX - mUTIL.GetStringLength(mBuffer2) / 2;
            tstrlen = mUTIL.GetStringLength(mBuffer1) + tstrlen;
            mUTIL.DrawFont2D(mMESSAGE.Return(69), tstrlen, sY + 475, 1);

            // Draw Map Loading Splash
            tDataIndex = mLoadStep + 1140;
            if (tDataIndex > 1160)
            {
                tDataIndex = 1160;
            }
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], sX + 123, sY + 504);

            mUI.Draw();
            mGXD.EndFor2D();
            mGXD.EndForDrawing();
        }
        else
        {
            mGXD.EndFor2D();
            mGXD.EndForDrawing();
        }
    }
    else if(tResult == 1)
    {
        TW2AddIn::mGXD.OnLostDevice();
    }
}

void MAIN::Draw6(float dTime)
{
    int tResult;
    D3DLIGHT9 mLight;
    float tPostLimitLength;
    float tPostLimitCoord[3];
    int i, j, k;
    float tA[3];
    float tL[3];
    int tFrame;
    float pFrame;
    POINT mPoint;
    int mX, mY;
    int sX, sY;
    int tX, tY;
    char mBuffer[1000];
    int tDataIndex;
    int tSelectSort, tSelectIndex;

    if (mSubMode >= 0 && mSubMode <= 1)
    {
        if (mGXD.ReadyForDrawing(&tResult))
        {
            mGXD.BeginForDrawing(0);
            mGXD.EndForDrawing();
            return;
        }
        else if (tResult == 1)
        {
            TW2AddIn::mGXD.OnLostDevice();
            return;
        }
    }
    else if (mSubMode == 2)
    {
        if (mGXD.ReadyForDrawing(&tResult))
        {
            mGXD.BeginForDrawing(0);
            mGXD.BeginFor2D();
            mUI.Draw();
            mGXD.EndFor2D();
            mGXD.EndForDrawing();
            return;
        }
        else if (tResult == 1)
        {
            TW2AddIn::mGXD.OnLostDevice();
            return;
        }
    }

    // Begin Main Draw
    if (mGXD.ReadyForDrawing(&tResult))
    {
        TW2AddIn::mGXD.OnResetDevice();
        mGXD.BeginForDrawing(0);
        CopyMemory(&TW2AddIn::mGXD.mViewMatrix, &mGXD.mViewMatrix, sizeof(D3DXMATRIX));
        CopyMemory(&TW2AddIn::mGXD.mWorldMatrix, &mGXD.mWorldMatrix, sizeof(D3DXMATRIX));
        TW2AddIn::mGXD.mCameraForward.x = mGXD.mCameraForward.x;
        TW2AddIn::mGXD.mCameraForward.y = mGXD.mCameraForward.y;
        TW2AddIn::mGXD.mCameraForward.z = mGXD.mCameraForward.z;
        TW2AddIn::mGXD.SetDefaultTextureSamplerState();
        mGXD.mGraphicDevice->Clear(0, 0, 7, 0, 1.0f, 0);
        mGXD.mGraphicDevice->SetRenderState(D3DRS_ALPHAFUNC, D3DCMP_GREATER);
        mGXD.mGraphicDevice->SetRenderState(D3DRS_SRCBLEND, D3DBLEND_SRCALPHA);
        mGXD.mGraphicDevice->SetRenderState(D3DRS_DESTBLEND, D3DBLEND_INVSRCALPHA);
        if (TW2AddIn::mGXD.mPresentShaderProgramNumber)
        {
            TW2AddIn::mGXD.mPresentShaderProgramNumber = 0;
            TW2AddIn::mGXD.mGraphicDevice->SetVertexShader(0);
            TW2AddIn::mGXD.mGraphicDevice->SetPixelShader(0);
        }
        TW2AddIn::mGXD.m_Atmosphere.StartRender();
        CopyMemory(&mGXD.mLight, &TW2AddIn::mGXD.mLight, sizeof(D3DLIGHT9));
        CopyMemory(&mLight, &mGXD.mLight, sizeof(D3DLIGHT9));
        switch (mGAMEOPTION.tBrightness)
        {
        case 1:
            mGXD.mLight.Ambient.r = mLight.Ambient.r * 0.4000000059604645;
            mGXD.mLight.Ambient.g = mLight.Ambient.g * 0.4000000059604645;
            mGXD.mLight.Ambient.b = mLight.Ambient.b * 0.4000000059604645;
            mGXD.mLight.Ambient.a = mLight.Ambient.a;
            mGXD.mLight.Diffuse.r = mLight.Diffuse.r * 0.4000000059604645;
            mGXD.mLight.Diffuse.g = mLight.Diffuse.g * 0.4000000059604645;
            mGXD.mLight.Diffuse.b = mLight.Diffuse.b * 0.4000000059604645;
            mGXD.mLight.Diffuse.a = mLight.Diffuse.a;
            mGXD.mLight.Specular.r = mLight.Specular.r * 0.4000000059604645;
            mGXD.mLight.Specular.g = mLight.Specular.g * 0.4000000059604645;
            mGXD.mLight.Specular.b = mLight.Specular.b * 0.4000000059604645;
            mGXD.mLight.Specular.a = mLight.Specular.a;
            break;
        case 2:
            mGXD.mLight.Ambient.r = mLight.Ambient.r * 0.6000000238418579;
            mGXD.mLight.Ambient.g = mLight.Ambient.g * 0.6000000238418579;
            mGXD.mLight.Ambient.b = mLight.Ambient.b * 0.6000000238418579;
            mGXD.mLight.Ambient.a = mLight.Ambient.a;
            mGXD.mLight.Diffuse.r = mLight.Diffuse.r * 0.6000000238418579;
            mGXD.mLight.Diffuse.g = mLight.Diffuse.g * 0.6000000238418579;
            mGXD.mLight.Diffuse.b = mLight.Diffuse.b * 0.6000000238418579;
            mGXD.mLight.Diffuse.a = mLight.Diffuse.a;
            mGXD.mLight.Specular.r = mLight.Specular.r * 0.6000000238418579;
            mGXD.mLight.Specular.g = mLight.Specular.g * 0.6000000238418579;
            mGXD.mLight.Specular.b = mLight.Specular.b * 0.6000000238418579;
            mGXD.mLight.Specular.a = mLight.Specular.a;
            break;
        case 3:
            mGXD.mLight.Ambient.r = mLight.Ambient.r * 0.800000011920929;
            mGXD.mLight.Ambient.g = mLight.Ambient.g * 0.800000011920929;
            mGXD.mLight.Ambient.b = mLight.Ambient.b * 0.800000011920929;
            mGXD.mLight.Ambient.a = mLight.Ambient.a;
            mGXD.mLight.Diffuse.r = mLight.Diffuse.r * 0.800000011920929;
            mGXD.mLight.Diffuse.g = mLight.Diffuse.g * 0.800000011920929;
            mGXD.mLight.Diffuse.b = mLight.Diffuse.b * 0.800000011920929;
            mGXD.mLight.Diffuse.a = mLight.Diffuse.a;
            mGXD.mLight.Specular.r = mLight.Specular.r * 0.800000011920929;
            mGXD.mLight.Specular.g = mLight.Specular.g * 0.800000011920929;
            mGXD.mLight.Specular.b = mLight.Specular.b * 0.800000011920929;
            mGXD.mLight.Specular.a = mLight.Specular.a;
            break;
        case 4:
            mGXD.mLight.Ambient.r = mLight.Ambient.r * 1.0;
            mGXD.mLight.Ambient.g = mLight.Ambient.g * 1.0;
            mGXD.mLight.Ambient.b = mLight.Ambient.b * 1.0;
            mGXD.mLight.Ambient.a = mLight.Ambient.a;
            mGXD.mLight.Diffuse.r = mLight.Diffuse.r * 1.0;
            mGXD.mLight.Diffuse.g = mLight.Diffuse.g * 1.0;
            mGXD.mLight.Diffuse.b = mLight.Diffuse.b * 1.0;
            mGXD.mLight.Diffuse.a = mLight.Diffuse.a;
            mGXD.mLight.Specular.r = mLight.Specular.r * 1.0;
            mGXD.mLight.Specular.g = mLight.Specular.g * 1.0;
            mGXD.mLight.Specular.b = mLight.Specular.b * 1.0;
            mGXD.mLight.Specular.a = mLight.Specular.a;
            break;
        case 5:
            mGXD.mLight.Ambient.r = mLight.Ambient.r * 1.200000047683716;
            mGXD.mLight.Ambient.g = mLight.Ambient.g * 1.200000047683716;
            mGXD.mLight.Ambient.b = mLight.Ambient.b * 1.200000047683716;
            mGXD.mLight.Ambient.a = mLight.Ambient.a;
            mGXD.mLight.Diffuse.r = mLight.Diffuse.r * 1.200000047683716;
            mGXD.mLight.Diffuse.g = mLight.Diffuse.g * 1.200000047683716;
            mGXD.mLight.Diffuse.b = mLight.Diffuse.b * 1.200000047683716;
            mGXD.mLight.Diffuse.a = mLight.Diffuse.a;
            mGXD.mLight.Specular.r = mLight.Specular.r * 1.200000047683716;
            mGXD.mLight.Specular.g = mLight.Specular.g * 1.200000047683716;
            mGXD.mLight.Specular.b = mLight.Specular.b * 1.200000047683716;
            mGXD.mLight.Specular.a = mLight.Specular.a;
            break;
        case 6:
            mGXD.mLight.Ambient.r = mLight.Ambient.r * 1.399999976158142;
            mGXD.mLight.Ambient.g = mLight.Ambient.g * 1.399999976158142;
            mGXD.mLight.Ambient.b = mLight.Ambient.b * 1.399999976158142;
            mGXD.mLight.Ambient.a = mLight.Ambient.a;
            mGXD.mLight.Diffuse.r = mLight.Diffuse.r * 1.399999976158142;
            mGXD.mLight.Diffuse.g = mLight.Diffuse.g * 1.399999976158142;
            mGXD.mLight.Diffuse.b = mLight.Diffuse.b * 1.399999976158142;
            mGXD.mLight.Diffuse.a = mLight.Diffuse.a;
            mGXD.mLight.Specular.r = mLight.Specular.r * 1.399999976158142;
            mGXD.mLight.Specular.g = mLight.Specular.g * 1.399999976158142;
            mGXD.mLight.Specular.b = mLight.Specular.b * 1.399999976158142;
            mGXD.mLight.Specular.a = mLight.Specular.a;
            break;
        case 7:
            mGXD.mLight.Ambient.r = mLight.Ambient.r * 1.600000023841858;
            mGXD.mLight.Ambient.g = mLight.Ambient.g * 1.600000023841858;
            mGXD.mLight.Ambient.b = mLight.Ambient.b * 1.600000023841858;
            mGXD.mLight.Ambient.a = mLight.Ambient.a;
            mGXD.mLight.Diffuse.r = mLight.Diffuse.r * 1.600000023841858;
            mGXD.mLight.Diffuse.g = mLight.Diffuse.g * 1.600000023841858;
            mGXD.mLight.Diffuse.b = mLight.Diffuse.b * 1.600000023841858;
            mGXD.mLight.Diffuse.a = mLight.Diffuse.a;
            mGXD.mLight.Specular.r = mLight.Specular.r * 1.600000023841858;
            mGXD.mLight.Specular.g = mLight.Specular.g * 1.600000023841858;
            mGXD.mLight.Specular.b = mLight.Specular.b * 1.600000023841858;
            mGXD.mLight.Specular.a = mLight.Specular.a;
            break;
        case 8:
            mGXD.mLight.Ambient.r = mLight.Ambient.r * 1.799999952316284;
            mGXD.mLight.Ambient.g = mLight.Ambient.g * 1.799999952316284;
            mGXD.mLight.Ambient.b = mLight.Ambient.b * 1.799999952316284;
            mGXD.mLight.Ambient.a = mLight.Ambient.a;
            mGXD.mLight.Diffuse.r = mLight.Diffuse.r * 1.799999952316284;
            mGXD.mLight.Diffuse.g = mLight.Diffuse.g * 1.799999952316284;
            mGXD.mLight.Diffuse.b = mLight.Diffuse.b * 1.799999952316284;
            mGXD.mLight.Diffuse.a = mLight.Diffuse.a;
            mGXD.mLight.Specular.r = mLight.Specular.r * 1.799999952316284;
            mGXD.mLight.Specular.g = mLight.Specular.g * 1.799999952316284;
            mGXD.mLight.Specular.b = mLight.Specular.b * 1.799999952316284;
            mGXD.mLight.Specular.a = mLight.Specular.a;
            break;
        case 9:
            mGXD.mLight.Ambient.r = mLight.Ambient.r + mLight.Ambient.r;
            mGXD.mLight.Ambient.g = mLight.Ambient.g + mLight.Ambient.g;
            mGXD.mLight.Ambient.b = mLight.Ambient.b + mLight.Ambient.b;
            mGXD.mLight.Ambient.a = mLight.Ambient.a;
            mGXD.mLight.Diffuse.r = mLight.Diffuse.r + mLight.Diffuse.r;
            mGXD.mLight.Diffuse.g = mLight.Diffuse.g + mLight.Diffuse.g;
            mGXD.mLight.Diffuse.b = mLight.Diffuse.b + mLight.Diffuse.b;
            mGXD.mLight.Diffuse.a = mLight.Diffuse.a;
            mGXD.mLight.Specular.r = mLight.Specular.r + mLight.Specular.r;
            mGXD.mLight.Specular.g = mLight.Specular.g + mLight.Specular.g;
            mGXD.mLight.Specular.b = mLight.Specular.b + mLight.Specular.b;
            mGXD.mLight.Specular.a = mLight.Specular.a;
            break;
        default:
            break;
        }
        mGXD.mGraphicDevice->SetLight(0, &mGXD.mLight);
        CopyMemory(&TW2AddIn::mGXD.mLight, &mGXD.mLight, sizeof(D3DLIGHT9));
        TW2AddIn::mGXD.mGraphicDevice->SetLight(0, &TW2AddIn::mGXD.mLight);
        tPostLimitCoord[0] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0];
        tPostLimitCoord[1] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1];
        tPostLimitCoord[2] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2];
        tPostLimitLength = mUTIL.ReturnViewLength();
        mGDATA.mZONE.mWORLD.Draw(1, 1, 0.0049999999, 1, tPostLimitCoord, tPostLimitLength, 0.30000001);
        Draw6ForZone(1, dTime);
        TW2AddIn::mGXD.BeginForLowShadow();
        for (i = 0; i < mPLAY.MAX_AVATAR_OBJECT; ++i)
        {
            if (mPLAY.mAVATAR_OBJECT[i].mCheckValidState)
                mPLAY.mAVATAR_OBJECT[i].DrawShadow( i, dTime);
        }
        for (i = 0; i < mPLAY.MAX_NPC_OBJECT; ++i)
        {
            if (mPLAY.mNPC_OBJECT[i].mCheckValidState)
                mPLAY.mNPC_OBJECT[i].DrawShadow( i, dTime);
        }
        for (i = 0; i < mPLAY.MAX_MONSTER_OBJECT; ++i)
        {
            if (mPLAY.mMONSTER_OBJECT[i].mCheckValidState)
                mPLAY.mMONSTER_OBJECT[i].DrawShadow( i, dTime);
        }
        TW2AddIn::mGXD.EndForLowShadow();
        for (i = 0; i < mPLAY.MAX_AVATAR_OBJECT; ++i)
        {
            if (mPLAY.mAVATAR_OBJECT[i].mCheckValidState)
                mPLAY.mAVATAR_OBJECT[i].Draw( 1, i, dTime);
        }
        for (i = 0; i < mPLAY.MAX_NPC_OBJECT; ++i)
        {
            if (mPLAY.mNPC_OBJECT[i].mCheckValidState)
                mPLAY.mNPC_OBJECT[i].Draw( 1, i, dTime);
        }
        for (i = 0; i < mPLAY.MAX_MONSTER_OBJECT; ++i)
        {
            if (mPLAY.mMONSTER_OBJECT[i].mCheckValidState)
                mPLAY.mMONSTER_OBJECT[i].Draw( 1, i, dTime);
        }
        for (i = 0; i < mPLAY.MAX_ITEM_OBJECT; ++i)
        {
            if (mPLAY.mITEM_OBJECT[i].mCheckValidState)
                mPLAY.mITEM_OBJECT[i].Draw( 1, i, dTime);
        }
        for (i = 0; i < mPLAY.MAX_EFFECT_OBJECT; ++i)
        {
            if (mPLAY.mEFFECT_OBJECT[i].mCheckValidState)
                mPLAY.mEFFECT_OBJECT[i].Draw(1, i, dTime);
        }
        for (i = 0; i < mPLAY.MAX_PROXY_OBJECT; ++i)
        {
            if (mPLAY.mPROXY_OBJECT[i].mCheckValidState)
                mPLAY.mPROXY_OBJECT[i].Draw( 1, dTime);
        }

        switch (mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort)
        {
        case 2:
            if (mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetObjectIndex == -1)
            {
                tFrame = GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[mPLAY.mAVATAR_OBJECT[0].mDATA.aPreviousTribe]);
                if (tFrame >= 1)
                {
                    pFrame = (float)((int)(mAPP[0].hPresentElapsedSeconds * 30.0) % tFrame);
                    tL[0] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetLocation[0];
                    tL[1] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetLocation[1];
                    tL[2] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetLocation[2];
                    tA[0] = 0.0;
                    tA[1] = 0.0;
                    tA[2] = 0.0;
                    GMOBJECT::DisplayMObject(&mGDATA.mMODEL3[mPLAY.mAVATAR_OBJECT[0].mDATA.aPreviousTribe], 1, pFrame, tL, tA, 0);
                }
            }
            break;

        case 32:
        case 33:
        case 34:
        case 35:
        case 36:
            tFrame = GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[mPLAY.mAVATAR_OBJECT[0].mDATA.aPreviousTribe]);
            if (tFrame >= 1)
            {
                pFrame = (float)((int)(mAPP[0].hPresentElapsedSeconds * 30.0) % tFrame);
                tL[0] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetLocation[0];
                tL[1] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetLocation[1];
                tL[2] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetLocation[2];
                tA[0] = 0.0;
                tA[1] = 0.0;
                tA[2] = 0.0;
                GMOBJECT::DisplayMObject(&mGDATA.mMODEL3[mPLAY.mAVATAR_OBJECT[0].mDATA.aPreviousTribe], 1, pFrame, tL, tA, 0);
            }
            break;

        case 40:
            pFrame = (mAPP[0].hPresentElapsedSeconds - mMYINFO.mSkillRunPostTime1) * 10.0;
            if (mPLAY.mAVATAR_OBJECT[0].mDATA.mPartFrame > 0)
                pFrame = pFrame + pFrame;

            if (pFrame > 10.0)
                pFrame = 10.0;

            tL[0] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0];
            tL[1] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1];
            tL[2] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2];
            tA[0] = 0.0;
            tA[1] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aFront;
            tA[2] = 0.0;
            if (mPLAY.mAVATAR_OBJECT[0].mDATA.aAnimalNumber && !mPLAY.mAVATAR_OBJECT[0].mDATA.aAnimalAbsorbState)
                GMOBJECT::DisplayMObject(mGDATA.mSKILL_ATTACK_EFFECT[mPLAY.mAVATAR_OBJECT[0].mDATA.aPreviousTribe][mPLAY.mAVATAR_OBJECT[0].mDATA.aGender], 1, pFrame, tL, tA, 0);
            else
                GMOBJECT::DisplayMObject(mGDATA.mCHARMODEL[mPLAY.mAVATAR_OBJECT[0].mDATA.aPreviousTribe][mPLAY.mAVATAR_OBJECT[0].mDATA.aGender], 1, pFrame, tL, tA, 0);
            break;

        default:
            break;
        }

        for (i = 0; i < mMYINFO.mTotalTargetNum; i++)
        {
            if (mMYINFO.mTargetSort[i] == 1)
            {
                for (j = 0; j < mPLAY.MAX_AVATAR_OBJECT && (!mPLAY.mAVATAR_OBJECT[j].mCheckValidState || !mPLAY.mAVATAR_OBJECT[j].mDATA.aVisibleState || !mPLAY.CheckPossibleAvatarTarget(mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aSort) || mPLAY.mAVATAR_OBJECT[j].mIndex != mMYINFO.mTargetServerIndex[i] || mPLAY.mAVATAR_OBJECT[j].mUniqueNumber != mMYINFO.mTargetUniqueNumber[i]); ++j)
                    ;
                if (i != mPLAY.MAX_AVATAR_OBJECT)
                {
                    tFrame = GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[136]);
                    if (tFrame >= 1)
                    {
                        pFrame = (float)((int)(mAPP[0].hPresentElapsedSeconds * 30.0) % tFrame);
                        tL[0] = mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation[0];
                        tL[1] = mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation[1];
                        tL[2] = mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation[2];
                        tA[0] = 0.0;
                        tA[1] = 0.0;
                        tA[2] = 0.0;
                        GMOBJECT::DisplayMObject(&mGDATA.mMODEL3[136], 1, pFrame, tL, tA, 0);
                    }
                }
            }
            else if (mMYINFO.mTargetSort[i] == 2)
            {
                for (j = 0; j < mPLAY.MAX_MONSTER_OBJECT && (!mPLAY.mMONSTER_OBJECT[j].mCheckValidState || !mPLAY.CheckPossibleMonsterTarget(mPLAY.mMONSTER_OBJECT[j].mMONSTER.mAction.aSort) || mPLAY.mMONSTER_OBJECT[j].mServerIndex != mMYINFO.mTargetServerIndex[i] || mPLAY.mMONSTER_OBJECT[j].mUniqueNumber != mMYINFO.mTargetUniqueNumber[i]); ++j)
                    ;
                if (i != mPLAY.MAX_MONSTER_OBJECT)
                {
                    tFrame = GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[mPLAY.mMONSTER_OBJECT[i].mMONSTER_INFO->mSizeCategory + 135]);
                    if (tFrame >= 1)
                    {
                        pFrame = (float)((int)(mAPP[0].hPresentElapsedSeconds * 30.0) % tFrame);
                        tL[0] = mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aLocation[0];
                        tL[1] = mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aLocation[1];
                        tL[2] = mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aLocation[2];
                        tA[0] = 0.0;
                        tA[1] = 0.0;
                        tA[2] = 0.0;
                        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[mPLAY.mMONSTER_OBJECT[i].mMONSTER_INFO->mSizeCategory + 135], 1, pFrame, tL, tA, 0);
                    }
                }
            }
        }

        switch (mMYINFO.mSelectObjSort)
        {
        case 1:
        case 2:
        case 3:
            for (i = 1; i < mPLAY.MAX_AVATAR_OBJECT && (!mPLAY.mAVATAR_OBJECT[i].mCheckValidState || !mPLAY.mAVATAR_OBJECT[i].mDATA.aVisibleState || !mPLAY.CheckPossibleAvatarTarget(mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aSort) || mPLAY.mAVATAR_OBJECT[i].mIndex != mMYINFO.mSelectObjIndex || mPLAY.mAVATAR_OBJECT[i].mUniqueNumber != mMYINFO.mSelectObjUniqueNumber); ++i)
                ;
            if (i != mPLAY.MAX_AVATAR_OBJECT)
            {
                tFrame = GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[136]);
                if (tFrame >= 1)
                {
                    pFrame = (float)((int)(mAPP[0].hPresentElapsedSeconds * 30.0) % tFrame);
                    tL[0] = mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation[0];
                    tL[1] = mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation[1];
                    tL[2] = mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation[2];
                    tA[0] = 0.0;
                    tA[1] = 0.0;
                    tA[2] = 0.0;
                    GMOBJECT::DisplayMObject(&mGDATA.mMODEL3[136], 1, pFrame, tL, tA, 0);
                }
            }
            break;

        case 4:
            if (mUTIL.GetLengthXYZ(mPLAY.mNPC_OBJECT[mMYINFO.mSelectObjIndex].mLocation, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation) <= 500.0f)
            {
                tFrame = GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[136]);
                if (tFrame >= 1)
                {
                    pFrame = (float)((int)(mAPP[0].hPresentElapsedSeconds * 30.0) % tFrame);
                    tL[0] = mPLAY.mNPC_OBJECT[mMYINFO.mSelectObjIndex].mLocation[0];
                    tL[1] = mPLAY.mNPC_OBJECT[mMYINFO.mSelectObjIndex].mLocation[1];
                    tL[2] = mPLAY.mNPC_OBJECT[mMYINFO.mSelectObjIndex].mLocation[2];
                    tA[0] = 0.0;
                    tA[1] = 0.0;
                    tA[2] = 0.0;
                    GMOBJECT::DisplayMObject(&mGDATA.mMODEL3[136], 1, pFrame, tL, tA, 0);
                }
            }
            break;

        case 5:
            for (j = 0; j < mPLAY.MAX_MONSTER_OBJECT && (!mPLAY.mMONSTER_OBJECT[j].mCheckValidState || !mPLAY.CheckPossibleMonsterTarget(mPLAY.mMONSTER_OBJECT[j].mMONSTER.mAction.aSort) || mPLAY.mMONSTER_OBJECT[j].mServerIndex != mMYINFO.mSelectObjIndex || mPLAY.mMONSTER_OBJECT[j].mUniqueNumber != mMYINFO.mSelectObjUniqueNumber); ++j)
                ;
            if (j != mPLAY.MAX_MONSTER_OBJECT)
            {
                tFrame = GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[mPLAY.mMONSTER_OBJECT[j].mMONSTER_INFO->mSizeCategory + 135]);
                if (tFrame >= 1)
                {
                    pFrame = (float)((int)(mAPP[0].hPresentElapsedSeconds * 30.0) % tFrame);
                    tL[0] = mPLAY.mMONSTER_OBJECT[j].mMONSTER.mAction.aLocation[0];
                    tL[1] = mPLAY.mMONSTER_OBJECT[j].mMONSTER.mAction.aLocation[1];
                    tL[2] = mPLAY.mMONSTER_OBJECT[j].mMONSTER.mAction.aLocation[2];
                    tA[0] = 0.0;
                    tA[1] = 0.0;
                    tA[2] = 0.0;
                    GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[mPLAY.mMONSTER_OBJECT[j].mMONSTER_INFO->mSizeCategory + 135], 1, pFrame, tL, tA, 0);
                }
            }
            break;

        case 7:
            if (mUTIL.GetLengthXYZ(mPLAY.mPROXY_OBJECT[mMYINFO.mSelectObjIndex].mDATA.tShopLocation, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation) <= 500.0f)
            {
                tFrame = GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[136]);
                if (tFrame >= 1)
                {
                    pFrame = (float)((int)(mAPP[0].hPresentElapsedSeconds * 30.0) % tFrame);
                    tL[0] = mPLAY.mPROXY_OBJECT[mMYINFO.mSelectObjIndex].mDATA.tShopLocation[0];
                    tL[1] = mPLAY.mPROXY_OBJECT[mMYINFO.mSelectObjIndex].mDATA.tShopLocation[1];
                    tL[2] = mPLAY.mPROXY_OBJECT[mMYINFO.mSelectObjIndex].mDATA.tShopLocation[2];
                    tA[0] = 0.0f;
                    tA[1] = 0.0f;
                    tA[2] = 0.0f;
                    GMOBJECT::DisplayMObject(&mGDATA.mMODEL3[136], 1, pFrame, tL, tA, 0);
                }
            }
            break;

        default:
            break;
        }

        mGXD.mGraphicDevice->SetRenderState(D3DRS_ALPHAFUNC, D3DCMP_GREATER);
        mGXD.mGraphicDevice->SetRenderState(D3DRS_SRCBLEND, D3DBLEND_SRCALPHA);
        mGXD.mGraphicDevice->SetRenderState(D3DRS_DESTBLEND, D3DBLEND_INVSRCALPHA);
        if (TW2AddIn::mGXD.mPresentShaderProgramNumber)
        {
            TW2AddIn::mGXD.mPresentShaderProgramNumber = 0;
            TW2AddIn::mGXD.mGraphicDevice->SetVertexShader(0);
            TW2AddIn::mGXD.mGraphicDevice->SetPixelShader(0);
        }
        tPostLimitLength = mUTIL.ReturnViewLength();
        mGDATA.mZONE.mWORLD.Draw(2, 1, 0.0049999999, 1, tPostLimitCoord, tPostLimitLength, 0.30000001);
        Draw6ForZone(2, dTime);
        for (i = 0; i < mPLAY.MAX_AVATAR_OBJECT; ++i)
        {
            if (mPLAY.mAVATAR_OBJECT[i].mCheckValidState)
                mPLAY.mAVATAR_OBJECT[i].Draw( 2, i, dTime);
        }
        for (i = 0; i < mPLAY.MAX_NPC_OBJECT; ++i)
        {
            if (mPLAY.mNPC_OBJECT[i].mCheckValidState)
                mPLAY.mNPC_OBJECT[i].Draw( 2, i, dTime);
        }
        for (i = 0; i < mPLAY.MAX_MONSTER_OBJECT; ++i)
        {
            if (mPLAY.mMONSTER_OBJECT[i].mCheckValidState)
                mPLAY.mMONSTER_OBJECT[i].Draw( 2, i, dTime);
        }
        for (i = 0; i < mPLAY.MAX_ITEM_OBJECT; ++i)
        {
            if (mPLAY.mITEM_OBJECT[i].mCheckValidState)
                mPLAY.mITEM_OBJECT[i].Draw( 2, i, dTime);
        }
        for (i = 0; i < mPLAY.MAX_EFFECT_OBJECT; ++i)
        {
            if (mPLAY.mEFFECT_OBJECT[i].mCheckValidState)
                mPLAY.mEFFECT_OBJECT[i].Draw(2, i, dTime);
        }
        for (i = 0; i < mPLAY.MAX_PROXY_OBJECT; ++i)
        {
            if (mPLAY.mPROXY_OBJECT[i].mCheckValidState)
                mPLAY.mPROXY_OBJECT[i].Draw( 2, dTime);
        }

        switch (mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort)
        {
        case 2:
            if (mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetObjectIndex == -1)
            {
                tFrame = GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[mPLAY.mAVATAR_OBJECT[0].mDATA.aPreviousTribe]);
                if (tFrame >= 1)
                {
                    pFrame = (float)((int)(mAPP[0].hPresentElapsedSeconds * 30.0) % tFrame);
                    tL[0] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetLocation[0];
                    tL[1] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetLocation[1];
                    tL[2] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetLocation[2];
                    tA[0] = 0.0;
                    tA[1] = 0.0;
                    tA[2] = 0.0;
                    GMOBJECT::DisplayMObject(&mGDATA.mMODEL3[mPLAY.mAVATAR_OBJECT[0].mDATA.aPreviousTribe], 2, pFrame, tL, tA, 0);
                }
            }
            break;

        case 32:
        case 33:
        case 34:
        case 35:
        case 36:
            tFrame = GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[mPLAY.mAVATAR_OBJECT[0].mDATA.aPreviousTribe]);
            if (tFrame >= 1)
            {
                pFrame = (float)((int)(mAPP[0].hPresentElapsedSeconds * 30.0) % tFrame);
                tL[0] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetLocation[0];
                tL[1] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetLocation[1];
                tL[2] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetLocation[2];
                tA[0] = 0.0;
                tA[1] = 0.0;
                tA[2] = 0.0;
                GMOBJECT::DisplayMObject(&mGDATA.mMODEL3[mPLAY.mAVATAR_OBJECT[0].mDATA.aPreviousTribe], 2, pFrame, tL, tA, 0);
            }
            break;

        case 40:
            pFrame = (mAPP[0].hPresentElapsedSeconds - mMYINFO.mSkillRunPostTime1) * 10.0;
            if (mPLAY.mAVATAR_OBJECT[0].mDATA.mPartFrame > 0)
                pFrame = pFrame + pFrame;

            if (pFrame > 10.0)
                pFrame = 10.0;

            tL[0] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0];
            tL[1] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1];
            tL[2] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2];
            tA[0] = 0.0;
            tA[1] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aFront;
            tA[2] = 0.0;
            if (mPLAY.mAVATAR_OBJECT[0].mDATA.aAnimalNumber && !mPLAY.mAVATAR_OBJECT[0].mDATA.aAnimalAbsorbState)
                GMOBJECT::DisplayMObject(mGDATA.mSKILL_ATTACK_EFFECT[mPLAY.mAVATAR_OBJECT[0].mDATA.aPreviousTribe][mPLAY.mAVATAR_OBJECT[0].mDATA.aGender], 2, pFrame, tL, tA, 0);
            else
                GMOBJECT::DisplayMObject(mGDATA.mCHARMODEL[mPLAY.mAVATAR_OBJECT[0].mDATA.aPreviousTribe][mPLAY.mAVATAR_OBJECT[0].mDATA.aGender], 2, pFrame, tL, tA, 0);
            break;

        default:
            break;
        }

        for (j = 0; j < mMYINFO.mTotalTargetNum; ++j)
        {
            if (mMYINFO.mTargetSort[j] == 1)
            {
                for (i = 0; i < mPLAY.MAX_AVATAR_OBJECT && (!mPLAY.mAVATAR_OBJECT[i].mCheckValidState || !mPLAY.mAVATAR_OBJECT[i].mDATA.aVisibleState || !mPLAY.CheckPossibleAvatarTarget(mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aSort) || mPLAY.mAVATAR_OBJECT[i].mIndex != mMYINFO.mTargetServerIndex[j] || mPLAY.mAVATAR_OBJECT[i].mUniqueNumber != mMYINFO.mTargetUniqueNumber[j]); ++i)
                    ;
                if (i != mPLAY.MAX_AVATAR_OBJECT)
                {
                    tFrame = GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[136]);
                    if (tFrame >= 1)
                    {
                        pFrame = (float)((int)(mAPP[0].hPresentElapsedSeconds * 30.0) % tFrame);
                        tL[0] = mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation[0];
                        tL[1] = mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation[1];
                        tL[2] = mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation[2];
                        tA[0] = 0.0;
                        tA[1] = 0.0;
                        tA[2] = 0.0;
                        GMOBJECT::DisplayMObject(&mGDATA.mMODEL3[136], 2, pFrame, tL, tA, 0);
                    }
                }
            }
            else if(mMYINFO.mTargetSort[j] == 2)
            {
                for (i = 0; i < mPLAY.MAX_MONSTER_OBJECT && (!mPLAY.mMONSTER_OBJECT[i].mCheckValidState || !mPLAY.CheckPossibleMonsterTarget(mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aSort) || mPLAY.mMONSTER_OBJECT[i].mServerIndex != mMYINFO.mTargetServerIndex[j] || mPLAY.mMONSTER_OBJECT[i].mUniqueNumber != mMYINFO.mTargetUniqueNumber[j]); ++i)
                    ;
                if (i != mPLAY.MAX_MONSTER_OBJECT)
                {
                    tFrame = GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[mPLAY.mMONSTER_OBJECT[i].mMONSTER_INFO->mSizeCategory + 135]);
                    if (tFrame >= 1)
                    {
                        pFrame = (float)((int)(mAPP[0].hPresentElapsedSeconds * 30.0) % tFrame);
                        tL[0] = mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aLocation[0];
                        tL[1] = mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aLocation[1];
                        tL[2] = mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aLocation[2];
                        tA[0] = 0.0;
                        tA[1] = 0.0;
                        tA[2] = 0.0;
                        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[mPLAY.mMONSTER_OBJECT[i].mMONSTER_INFO->mSizeCategory + 135], 2, pFrame, tL, tA, 0);
                    }
                }
            }
        }

        switch (mMYINFO.mSelectObjSort)
        {
        case 1:
        case 2:
        case 3:
            for (i = 1; i < mPLAY.MAX_AVATAR_OBJECT && (!mPLAY.mAVATAR_OBJECT[i].mCheckValidState || !mPLAY.mAVATAR_OBJECT[i].mDATA.aVisibleState || !mPLAY.CheckPossibleAvatarTarget(mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aSort) || mPLAY.mAVATAR_OBJECT[i].mIndex != mMYINFO.mSelectObjIndex || mPLAY.mAVATAR_OBJECT[i].mUniqueNumber != mMYINFO.mSelectObjUniqueNumber); ++i)
                ;
            if (i != mPLAY.MAX_AVATAR_OBJECT)
            {
                tFrame = GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[136]);
                if (tFrame >= 1)
                {
                    pFrame = (float)((int)(mAPP[0].hPresentElapsedSeconds * 30.0) % tFrame);
                    tL[0] = mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation[0];
                    tL[1] = mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation[1];
                    tL[2] = mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation[2];
                    tA[0] = 0.0;
                    tA[1] = 0.0;
                    tA[2] = 0.0;
                    GMOBJECT::DisplayMObject(&mGDATA.mMODEL3[136], 2, pFrame, tL, tA, 0);
                }
            }
            break;

        case 4:
            if (mUTIL.GetLengthXYZ(mPLAY.mNPC_OBJECT[mMYINFO.mSelectObjIndex].mLocation, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation) <= 500.0f)
            {
                tFrame = GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[136]);
                if (tFrame >= 1)
                {
                    pFrame = (float)((int)(mAPP[0].hPresentElapsedSeconds * 30.0) % tFrame);
                    tL[0] = mPLAY.mNPC_OBJECT[mMYINFO.mSelectObjIndex].mLocation[0];
                    tL[1] = mPLAY.mNPC_OBJECT[mMYINFO.mSelectObjIndex].mLocation[1];
                    tL[2] = mPLAY.mNPC_OBJECT[mMYINFO.mSelectObjIndex].mLocation[2];
                    tA[0] = 0.0;
                    tA[1] = 0.0;
                    tA[2] = 0.0;
                    GMOBJECT::DisplayMObject(&mGDATA.mMODEL3[136], 2, pFrame, tL, tA, 0);
                }
            }
            break;

        case 5:
            for (i = 0; i < mPLAY.MAX_MONSTER_OBJECT && (!mPLAY.mMONSTER_OBJECT[i].mCheckValidState || !mPLAY.CheckPossibleMonsterTarget(mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aSort) || mPLAY.mMONSTER_OBJECT[i].mServerIndex != mMYINFO.mSelectObjIndex || mPLAY.mMONSTER_OBJECT[i].mUniqueNumber != mMYINFO.mSelectObjUniqueNumber); ++i)
                ;
            if (i != mPLAY.MAX_MONSTER_OBJECT)
            {
                tFrame = GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[mPLAY.mMONSTER_OBJECT[i].mMONSTER_INFO->mSizeCategory + 135]);
                if (tFrame >= 1)
                {
                    pFrame = (float)((int)(mAPP[0].hPresentElapsedSeconds * 30.0) % tFrame);
                    tL[0] = mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aLocation[0];
                    tL[1] = mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aLocation[1];
                    tL[2] = mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aLocation[2];
                    tA[0] = 0.0;
                    tA[1] = 0.0;
                    tA[2] = 0.0;
                    GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[mPLAY.mMONSTER_OBJECT[i].mMONSTER_INFO->mSizeCategory + 135], 2, pFrame, tL, tA, 0);
                }
            }
            break;

        case 7:
            if (mUTIL.GetLengthXYZ( mPLAY.mPROXY_OBJECT[mMYINFO.mSelectObjIndex].mDATA.tShopLocation, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation) <= 500.0f)
            {
                tFrame = GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[136]);
                if (tFrame >= 1)
                {
                    pFrame = (float)((int)(mAPP[0].hPresentElapsedSeconds * 30.0) % tFrame);
                    tL[0] = mPLAY.mPROXY_OBJECT[mMYINFO.mSelectObjIndex].mDATA.tShopLocation[0];
                    tL[1] = mPLAY.mPROXY_OBJECT[mMYINFO.mSelectObjIndex].mDATA.tShopLocation[1];
                    tL[2] = mPLAY.mPROXY_OBJECT[mMYINFO.mSelectObjIndex].mDATA.tShopLocation[2];
                    tA[0] = 0.0;
                    tA[1] = 0.0;
                    tA[2] = 0.0;
                    GMOBJECT::DisplayMObject(&mGDATA.mMODEL3[136], 2, pFrame, tL, tA, 0);
                }
            }
            break;

        default:
            break;
        }

        mGXD.mGraphicDevice->SetRenderState(D3DRS_ALPHAFUNC, D3DCMP_GREATER);
        mGXD.mGraphicDevice->SetRenderState(D3DRS_SRCBLEND, D3DBLEND_SRCALPHA);
        mGXD.mGraphicDevice->SetRenderState(D3DRS_DESTBLEND, D3DBLEND_INVSRCALPHA);
        if (TW2AddIn::mGXD.mPresentShaderProgramNumber)
        {
            TW2AddIn::mGXD.mPresentShaderProgramNumber = 0;
            TW2AddIn::mGXD.mGraphicDevice->SetVertexShader(0);
            TW2AddIn::mGXD.mGraphicDevice->SetPixelShader(0);
        }
        mGXD.BeginForPOBJECT();
        for (i = 0; i < mPLAY.MAX_EFFECT_OBJECT; ++i)
        {
            if (mPLAY.mEFFECT_OBJECT[i].mCheckValidState)
                mPLAY.mEFFECT_OBJECT[i].Draw(3, i, dTime);
        }
        mGXD.EndForPOBJECT();
        CopyMemory(&mGXD.mLight, &mLight, sizeof(D3DLIGHT9));
        mGXD.mGraphicDevice->SetLight(0, &mGXD.mLight);
        CopyMemory(&TW2AddIn::mGXD.mLight, &mGXD.mLight, sizeof(D3DLIGHT9));
        TW2AddIn::mGXD.mGraphicDevice->SetLight(0, &TW2AddIn::mGXD.mLight);
        TW2AddIn::mGXD.m_Atmosphere.EndRender(); //sub_412590(&TW2AddIn::mGXD.m_Atmosphere, v3);
        TW2AddIn::mGXD.ProcessForFilter();
        GetCursorPos(&mPoint);
        ScreenToClient(mAPP[0].hMainWindow, &mPoint);
        mX = mPoint.x;
        mY = mPoint.y;
        mGXD.BeginFor2D();

        if (mINPUT.mDisplayInfoState == 1 || mINPUT.mDisplayInfoState == 2)
        {
            for (j = 0; j < mPLAY.MAX_AVATAR_OBJECT; ++j)
            {
                if (mPLAY.mAVATAR_OBJECT[j].mCheckValidState)
                    mPLAY.mAVATAR_OBJECT[j].DrawAvatarName( 1, j, dTime);
            }
        }
        if (mINPUT.mDisplayInfoState == 1)
        {
            for (j = 0; j < mPLAY.MAX_NPC_OBJECT; ++j)
            {
                if (mPLAY.mNPC_OBJECT[j].mCheckValidState)
                    mPLAY.mNPC_OBJECT[j].DrawInfo( 1, j, dTime);
            }
            for (j = 0; j < mPLAY.MAX_ITEM_OBJECT; ++j)
            {
                if (mPLAY.mITEM_OBJECT[j].mCheckValidState)
                    mPLAY.mITEM_OBJECT[j].DrawInfo( j, dTime);
            }
            for (j = 0; j < mPLAY.MAX_PROXY_OBJECT; ++j)
            {
                if (mPLAY.mPROXY_OBJECT[j].mCheckValidState)
                    mPLAY.mPROXY_OBJECT[j].DrawInfo( dTime);
            }
        } 
        if (mINPUT.mCheckDisplayUI)
        {
            switch (mMYINFO.mSelectObjSort)
            {
            case 1:
                for (i = 1; i < mPLAY.MAX_AVATAR_OBJECT && (!mPLAY.mAVATAR_OBJECT[i].mCheckValidState || !mPLAY.mAVATAR_OBJECT[i].mDATA.aVisibleState || !mPLAY.CheckPossibleAvatarTarget(mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aSort) || mPLAY.mAVATAR_OBJECT[i].mIndex != mMYINFO.mSelectObjIndex || mPLAY.mAVATAR_OBJECT[i].mUniqueNumber != mMYINFO.mSelectObjUniqueNumber); ++i)
                    ;
                if (i != -mPLAY.MAX_AVATAR_OBJECT)
                {
                    sX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[350]) / 2;
                    sY = 4;

                    // Display Player Select Box
                    if (mUTIL.ReturnItemSort2(mPLAY.mAVATAR_OBJECT[i].mDATA.aEquipForView[1][0]) == 8)
                    {
                        switch (10 * (mUTIL.ReturnIUValue(mPLAY.mAVATAR_OBJECT[i].mDATA.aEquipForView[1][1]) / 10))
                        {
                        case 20:
                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4187], sX, sY);
                            break;
                        case 30:
                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4188], sX, sY);
                            break;
                        case 50:
                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4189], sX, sY);
                            break;
                        case 40:
                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4190], sX, sY);
                            break;
                        }
                    }
                    else if (mUTIL.ReturnItemSort2(mPLAY.mAVATAR_OBJECT[i].mDATA.aEquipForView[1][0]) == 9)
                    {
                        switch (10 * (mUTIL.Return4thValue(mPLAY.mAVATAR_OBJECT[i].mDATA.aEquipForView[1][1]) / 10))
                        {
                        case 20:
                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4187], sX, sY);
                            break;
                        case 30:
                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4188], sX, sY);
                            break;
                        case 50:
                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4189], sX, sY);
                            break;
                        case 40:
                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4190], sX, sY);
                            break;
                        }
                    }
                    else
                    {
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[350], sX, sY);
                    }

                    // Display Player Seelect Box Name and CP
                    if (mMYINFO.mPresentZoneNumber == 324)
                    {
                        sprintf(mBuffer, "%s", mMESSAGE.Return(mPLAY.mAVATAR_OBJECT[i].mDATA.aZone270TypeBattleTeam + 2685));
                    }
                    else
                    {
                        sprintf(mBuffer, "%s(%d)", mPLAY.mAVATAR_OBJECT[i].mDATA.aName, mPLAY.mAVATAR_OBJECT[i].mDATA.aKillOtherTribe);
                    }
                    tY = sY + 8;
                    tX = sX + 74;
                    mUTIL.DrawFont2D(mBuffer, tX - mUTIL.GetStringLength(mBuffer) / 2, tY, 1);

                    // Draw Select Box Life Bar
                    if (mPLAY.mAVATAR_OBJECT[i].mDATA.aLifeValue >= 1)
                    {
                        tDataIndex = (mPLAY.mAVATAR_OBJECT[i].mDATA.aLifeValue * 41.0 / mPLAY.mAVATAR_OBJECT[i].mDATA.aMaxLifeValue) + 351;
                        if (tDataIndex > 392)
                            tDataIndex = 392;
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], sX + 16, sY + 29);

                        // Draw HP Amount
                        sprintf(mBuffer, "HP: %d / %d", mPLAY.mAVATAR_OBJECT[i].mDATA.aLifeValue, mPLAY.mAVATAR_OBJECT[i].mDATA.aMaxLifeValue);
                        mUTIL.DrawFont2D(mBuffer, sX + 76 - mUTIL.GetStringLength(mBuffer) / 2, sY + 54, 3);
                    }
                }
                break;

            case 2:
                for (i = 1; i < mPLAY.MAX_AVATAR_OBJECT && (!mPLAY.mAVATAR_OBJECT[i].mCheckValidState || !mPLAY.mAVATAR_OBJECT[i].mDATA.aVisibleState || !mPLAY.CheckPossibleAvatarTarget(mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aSort) || mPLAY.mAVATAR_OBJECT[i].mIndex != mMYINFO.mSelectObjIndex || mPLAY.mAVATAR_OBJECT[i].mUniqueNumber != mMYINFO.mSelectObjUniqueNumber); ++i)
                    ;
                if (i != mPLAY.MAX_AVATAR_OBJECT)
                {
                    sX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[350]) / 2;
                    sY = 4;

                    // Draw Select Box
                    if (mUTIL.ReturnItemSort2(mPLAY.mAVATAR_OBJECT[i].mDATA.aEquipForView[1][0]) == 8)
                    {
                        switch (10 * (mUTIL.ReturnIUValue(mPLAY.mAVATAR_OBJECT[i].mDATA.aEquipForView[1][1]) / 10))
                        {
                        case 20:
                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4187], sX, sY);
                            break;
                        case 30:
                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4188], sX, sY);
                            break;
                        case 50:
                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4189], sX, sY);
                            break;
                        case 40:
                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4190], sX, sY);
                            break;
                        }
                    }
                    else if (mUTIL.ReturnItemSort2(mPLAY.mAVATAR_OBJECT[i].mDATA.aEquipForView[1][0]) == 9)
                    {
                        switch (10 * (mUTIL.Return4thValue(mPLAY.mAVATAR_OBJECT[i].mDATA.aEquipForView[1][1]) / 10))
                        {
                        case 20:
                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4187], sX, sY);
                            break;
                        case 30:
                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4188], sX, sY);
                            break;
                        case 50:
                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4189], sX, sY);
                            break;
                        case 40:
                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4190], sX, sY);
                            break;
                        }
                    }
                    else
                    {
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[350], sX, sY);
                    }

                    // Draw Select Box Name and CP
                    if (mMYINFO.mPresentZoneNumber == 324)
                    {
                        sprintf(mBuffer, "%s", mMESSAGE.Return(mPLAY.mAVATAR_OBJECT[i].mDATA.aZone270TypeBattleTeam + 2685));
                    }
                    else
                    {
                        sprintf(mBuffer, "%s(%d)", mPLAY.mAVATAR_OBJECT[i].mDATA.aName, mPLAY.mAVATAR_OBJECT[i].mDATA.aKillOtherTribe);
                    }
                    tY = sY + 8;
                    tX = sX + 74;
                    mUTIL.DrawFont2D(mBuffer, tX - mUTIL.GetStringLength(mBuffer) / 2, tY, 2);
                    if (mPLAY.mAVATAR_OBJECT[i].mDATA.aLifeValue >= 1)
                    {
                        tDataIndex = (mPLAY.mAVATAR_OBJECT[i].mDATA.aLifeValue * 41.0 / mPLAY.mAVATAR_OBJECT[i].mDATA.aMaxLifeValue) + 351;
                        if (tDataIndex > 392)
                        {
                            tDataIndex = 392;
                        }
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], sX + 16, sY + 29);
                    }

                }
                break;

            case 3:
                for (i = 1; i < mPLAY.MAX_AVATAR_OBJECT && (!mPLAY.mAVATAR_OBJECT[i].mCheckValidState || !mPLAY.mAVATAR_OBJECT[i].mDATA.aVisibleState || !mPLAY.CheckPossibleAvatarTarget(mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aSort) || mPLAY.mAVATAR_OBJECT[i].mIndex != mMYINFO.mSelectObjIndex || mPLAY.mAVATAR_OBJECT[i].mUniqueNumber != mMYINFO.mSelectObjUniqueNumber); ++i)
                    ;
                if (i != mPLAY.MAX_AVATAR_OBJECT)
                {
                    sX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[350]) / 2;
                    sY = 4;

                    // Draw Select Box
                    if (mUTIL.ReturnItemSort2(mPLAY.mAVATAR_OBJECT[i].mDATA.aEquipForView[1][0]) == 8)
                    {
                        switch (10 * (mUTIL.ReturnIUValue(mPLAY.mAVATAR_OBJECT[i].mDATA.aEquipForView[1][1]) / 10))
                        {
                        case 20:
                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4187], sX, sY);
                            break;
                        case 30:
                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4188], sX, sY);
                            break;
                        case 50:
                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4189], sX, sY);
                            break;
                        case 40:
                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4190], sX, sY);
                            break;
                        }
                    }
                    else if (mUTIL.ReturnItemSort2(mPLAY.mAVATAR_OBJECT[i].mDATA.aEquipForView[1][0]) == 9)
                    {
                        switch (10 * (mUTIL.Return4thValue(mPLAY.mAVATAR_OBJECT[i].mDATA.aEquipForView[1][1]) / 10))
                        {
                        case 20:
                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4187], sX, sY);
                            break;
                        case 30:
                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4188], sX, sY);
                            break;
                        case 50:
                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4189], sX, sY);
                            break;
                        case 40:
                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4190], sX, sY);
                            break;
                        }
                    }
                    else
                    {
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[350], sX, sY);
                    }

                    // Draw Select Box Name and CP
                    if (mMYINFO.mPresentZoneNumber == 324)
                    {
                        sprintf(mBuffer, "%s", mMESSAGE.Return(mPLAY.mAVATAR_OBJECT[i].mDATA.aZone270TypeBattleTeam + 2685));
                    }
                    else
                    {
                        sprintf(mBuffer, "%s(%d)", mPLAY.mAVATAR_OBJECT[i].mDATA.aName, mPLAY.mAVATAR_OBJECT[i].mDATA.aKillOtherTribe);
                    }
                    tY = sY + 8;
                    tX = sX + 74;
                    mUTIL.DrawFont2D(mBuffer, tX - mUTIL.GetStringLength(mBuffer) / 2, tY, 2);

                    // Draw Select Box Life Bar
                    if (mPLAY.mAVATAR_OBJECT[i].mDATA.aLifeValue >= 1)
                    {
                        tDataIndex = (mPLAY.mAVATAR_OBJECT[i].mDATA.aLifeValue * 41.0 / mPLAY.mAVATAR_OBJECT[i].mDATA.aMaxLifeValue) + 351;
                        if (tDataIndex > 392)
                            tDataIndex = 392;
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], sX + 16, sY + 29);

                        // Draw Select Player HP
                        sprintf(mBuffer, "HP: %d / %d", mPLAY.mAVATAR_OBJECT[i].mDATA.aLifeValue, mPLAY.mAVATAR_OBJECT[i].mDATA.aMaxLifeValue);
                        sX += 76;
                        sY += 54;
                        mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer) / 2, sY, 3);
                    }
                }
                break;

            case 4:
                if (mUTIL.GetLengthXYZ(mPLAY.mNPC_OBJECT[mMYINFO.mSelectObjIndex].mLocation, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation) <= 500.0f)
                {
                    sX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[350]) / 2;
                    sY = 4;
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[350], sX, 4);

                    strcpy(mBuffer, mPLAY.mNPC_OBJECT[mMYINFO.mSelectObjIndex].mNPC_INFO->nName);
                    tY = sY + 8;
                    tX = sX + 74;
                    mUTIL.DrawFont2D(mBuffer, tX - mUTIL.GetStringLength(mBuffer) / 2, tY, mUTIL.ReturnNPCNameColor(mPLAY.mNPC_OBJECT[mMYINFO.mSelectObjIndex].mNPC_INFO->nIndex));
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[392], sX + 16, sY + 29);
                }
                break;

            case 5:
                for (i = 0; i < mPLAY.MAX_MONSTER_OBJECT && (!mPLAY.mMONSTER_OBJECT[i].mCheckValidState || !mPLAY.CheckPossibleMonsterTarget(mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aSort) || mPLAY.mMONSTER_OBJECT[i].mServerIndex != mMYINFO.mSelectObjIndex || mPLAY.mMONSTER_OBJECT[i].mUniqueNumber != mMYINFO.mSelectObjUniqueNumber); ++i)
                    ;
                if (i != mPLAY.MAX_MONSTER_OBJECT)
                {
                    sX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[350]) / 2;
                    sY = 4;
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[350], sX, 4);

                    sprintf(mBuffer, "%s", mPLAY.mMONSTER_OBJECT[i].mMONSTER_INFO->mName);
                    tY = sY + 8;
                    tX = sX + 74;
                    mUTIL.DrawFont2D(mBuffer, tX - mUTIL.GetStringLength(mBuffer) / 2, tY, mUTIL.ReturnMonsterNameColor(&mPLAY.mMONSTER_OBJECT[i]));

                    if (mPLAY.mMONSTER_OBJECT[i].mMONSTER.mLifeValue >= 1)
                    {
                        tDataIndex = (mPLAY.mMONSTER_OBJECT[i].mMONSTER.mLifeValue * 41.0 / mPLAY.mMONSTER_OBJECT[i].mMONSTER_INFO->mLife) + 351;
                        if (tDataIndex > 392)
                            tDataIndex = 392;

                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], sX + 16, sY + 29);

                        // Draw Monster HP
                       // sprintf(mBuffer, "HP: %d / %d", mPLAY.mMONSTER_OBJECT[i].mMONSTER.mLifeValue, mPLAY.mMONSTER_OBJECT[i].mMONSTER_INFO->mLife);
                        sX += 76;
                        sY += 54;
                        mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer) / 2, sY, 3);
                    }
                }
                break;

            default:
                break;
            }


            if (mGAMEOPTION.tDisplayInfo)
                ExamineSelectObject(mX, mY, &tSelectSort, &tSelectIndex, 1);
            else
                ExamineSelectObject(mX, mY, &tSelectSort, &tSelectIndex, 0);
            switch (tSelectSort)
            {
            case 0:
                if (mUTIL.CheckMousePointerForSelectObject(mX, mY))
                    mPOINTER.Set(7);
                else
                    mPOINTER.Set(8);
                break;
            case 1:
                mPOINTER.Set((int)(mAPP[0].hPresentElapsedSeconds + mAPP[0].hPresentElapsedSeconds) % 2 + 1);
                mPLAY.mAVATAR_OBJECT[tSelectIndex].DrawAvatarName( 2, tSelectIndex, dTime);
                break;
            case 2:
                tDataIndex = (int)(mAPP[0].hPresentElapsedSeconds + mAPP[0].hPresentElapsedSeconds) % 2;
                mPOINTER.Set(tDataIndex + 3);
                mPLAY.mAVATAR_OBJECT[tSelectIndex].DrawAvatarName( 2, tSelectIndex, dTime);
                break;
            case 3:
                tDataIndex = (int)(mAPP[0].hPresentElapsedSeconds + mAPP[0].hPresentElapsedSeconds) % 2;
                mPOINTER.Set(tDataIndex + 3);
                mPLAY.mAVATAR_OBJECT[tSelectIndex].DrawAvatarName( 2, tSelectIndex, dTime);
                break;
            case 4:
                mPOINTER.Set((int)(mAPP[0].hPresentElapsedSeconds + mAPP[0].hPresentElapsedSeconds) % 2 + 1);
                mPLAY.mNPC_OBJECT[tSelectIndex].DrawInfo( 2, tSelectIndex, dTime);
                break;
            case 5:
                mPOINTER.Set((int)(mAPP[0].hPresentElapsedSeconds + mAPP[0].hPresentElapsedSeconds) % 2 + 3);
                mPLAY.mMONSTER_OBJECT[tSelectIndex].DrawInfo( tSelectIndex, dTime);
                break;
            case 6:
                mPOINTER.Set((int)(mAPP[0].hPresentElapsedSeconds + mAPP[0].hPresentElapsedSeconds) % 2 + 5);
                break;
            case 7:
                mPOINTER.Set((int)(mAPP[0].hPresentElapsedSeconds + mAPP[0].hPresentElapsedSeconds) % 2 + 1);
                mPLAY.mPROXY_OBJECT[tSelectIndex].DrawInfo( dTime);
                break;
            default:
                break;
            }
            // Draw WarZone ScoreBoard
            if (mMYINFO.mCheckLevelBattle49TypeOpenEffect)
            {
                mMYINFO.AdjustScreenCoord(mMYINFO.mLevelBattle49TypeOpenEffectImageIndex + 2472, 0, 192, &sX, &sY);
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[mMYINFO.mLevelBattle49TypeOpenEffectImageIndex + 2472], sX, sY);
            }
            if (mMYINFO.mCheckLevelBattle51TypeOpenEffect)
            {
                mMYINFO.AdjustScreenCoord(mMYINFO.mLevelBattle51TypeOpenEffectImageIndex + 2487, 0, 192, &sX, &sY);
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[mMYINFO.mLevelBattle51TypeOpenEffectImageIndex + 2487], sX, sY);
            }
            if (mMYINFO.mCheckLevelBattle53TypeOpenEffect)
            {
                mMYINFO.AdjustScreenCoord(mMYINFO.mLevelBattle53TypeOpenEffectImageIndex + 2502, 0, 192, &sX, &sY);
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[mMYINFO.mLevelBattle53TypeOpenEffectImageIndex + 2502], sX, sY);
            }
            if (mMYINFO.mCheckLevelBattle319TypeOpenEffect)
            {
                mMYINFO.AdjustScreenCoord(mMYINFO.mLevelBattle319TypeOpenEffectImageIndex + 2472, 0, 192, &sX, &sY);
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[mMYINFO.mLevelBattle319TypeOpenEffectImageIndex + 2472], sX, sY);
            }

            // Draw Main UI
            mUI.Draw();

            if (mINPUT.mSelectSort)
            {
                switch (mINPUT.mSelectIndex)
                {
                case 1:
                    strcpy(mBuffer, "[CAMERA_RECORD_MODE]::F_MODE");
                    break;
                case 2:
                    strcpy(mBuffer, "[CAMERA_RECORD_MODE]::P_MODE");
                    break;
                case 3:
                    strcpy(mBuffer, "[CAMERA_RECORD_MODE]::L_MODE");
                    break;
                }
                mUTIL.DrawFont2D(mBuffer, 100, 100, 1);
                sprintf(mBuffer, "[(W)-(S)-SPEED]::%.1f", mINPUT.mCameraRecordSpeed[0]);
                if (mINPUT.mCameraRecordChangeSpeedIndex)
                    mUTIL.DrawFont2D(mBuffer, 100, 120, 1);
                else
                    mUTIL.DrawFont2D(mBuffer, 100, 120, 3);
                sprintf(mBuffer, "[(A)-(D)-SPEED]::%.1f", mINPUT.mCameraRecordSpeed[1]);
                if (mINPUT.mCameraRecordChangeSpeedIndex == 1)
                    mUTIL.DrawFont2D(mBuffer, 100, 140, 3);
                else
                    mUTIL.DrawFont2D(mBuffer, 100, 140, 1);
                sprintf(mBuffer, "[(Q)-(E)-SPEED]::%.1f", mINPUT.mCameraRecordSpeed[2]);
                if (mINPUT.mCameraRecordChangeSpeedIndex == 2)
                    mUTIL.DrawFont2D(mBuffer, 100, 160, 3);
                else
                    mUTIL.DrawFont2D(mBuffer, 100, 160, 1);
                sprintf(mBuffer, "[(R)-(F)-SPEED]::%.1f", mINPUT.mCameraRecordSpeed[3]);
                if (mINPUT.mCameraRecordChangeSpeedIndex == 3)
                    mUTIL.DrawFont2D(mBuffer, 100, 180, 3);
                else
                    mUTIL.DrawFont2D(mBuffer, 100, 180, 1);
            }
        }

        if (mMYINFO.mPresentZoneNumber == 49 || mMYINFO.mPresentZoneNumber == 146 || mMYINFO.mPresentZoneNumber == 149)
        {
            if (mMYINFO.mCheckLevelBattle49TypeInfo)
            {
                sX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3035]) / 2;
                sY = 80;
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3035], sX, 80);
                for (i = 0; i < 3; ++i)
                {
                    tDataIndex = mMYINFO.mLevelBattle49TypeInfo[i] % 1000 / 100 + 2117;
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], sX + 104 * i + 32, sY + 28);
                    tDataIndex = mMYINFO.mLevelBattle49TypeInfo[i] % 100 / 10 + 2117;
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], sX + 104 * i + 57, sY + 28);
                    tDataIndex = mMYINFO.mLevelBattle49TypeInfo[i] % 10 + 2117;
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], sX + 104 * i + 82, sY + 28);
                }
            }
        }
        else if ((mMYINFO.mPresentZoneNumber == 154 || mMYINFO.mPresentZoneNumber == 157 || mMYINFO.mPresentZoneNumber == 160 || mMYINFO.mPresentZoneNumber == 120 || mMYINFO.mPresentZoneNumber == 121 || mMYINFO.mPresentZoneNumber == 122 || mMYINFO.mPresentZoneNumber == 295 || mMYINFO.mPresentZoneNumber == 296) && mMYINFO.mCheckLevelBattle49TypeInfo)
        {
            sX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2703]) / 2;
            sY = 80;
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2703], sX, 80);
            for (i = 0; i < 4; ++i)
            {
                tDataIndex = mMYINFO.mLevelBattle49TypeInfo[i] % 1000 / 100 + 2117;
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], sX + 104 * i + 32, sY + 28);
                tDataIndex = mMYINFO.mLevelBattle49TypeInfo[i] % 100 / 10 + 2117;
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], sX + 104 * i + 57, sY + 28);
                tDataIndex = mMYINFO.mLevelBattle49TypeInfo[i] % 10 + 2117;
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], sX + 104 * i + 82, sY + 28);
            }
        }
        if (mMYINFO.mPresentZoneNumber == 194 && (mPLAY.mWorldInfo.mZone194State == 3 || mPLAY.mWorldInfo.mZone194State == 4))
        {
            sX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2703]) / 2;
            sY = 80;
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2703], sX, 80);
            for (i = 0; i < 4; ++i)
            {
                tDataIndex = mMYINFO.mZone194BattleInfo[i] % 1000 / 100 + 2117;
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], sX + 104 * i + 32, sY + 28);
                tDataIndex = mMYINFO.mZone194BattleInfo[i] % 100 / 10 + 2117;
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], sX + 104 * i + 57, sY + 28);
                tDataIndex = mMYINFO.mZone194BattleInfo[i] % 10 + 2117;
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], sX + 104 * i + 82, sY + 28);
            }
        }
        if ((mMYINFO.mPresentZoneNumber == 267) && mMYINFO.mCheck267TypeInfo)
        {
            sY = 80;
            if (mMYINFO.mPresentZoneNumber == 267)
            {
                sX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3035]) / 2;
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3035], sX, sY);
                for (i = 0; i < 3; ++i)
                {
                    tDataIndex = mMYINFO.m267TypeInfo[i] % 1000 / 100 + 2117;
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], sX + 104 * i + 32, sY + 28);
                    tDataIndex = mMYINFO.m267TypeInfo[i] % 100 / 10 + 2117;
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], sX + 104 * i + 57, sY + 28);
                    tDataIndex = mMYINFO.m267TypeInfo[i] % 10 + 2117;
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], sX + 104 * i + 82, sY + 28);
                }
            }
            else
            {
                sX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2703]) / 2;
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2703], sX, sY);
                for (i = 0; i < 4; ++i)
                {
                    tDataIndex = mMYINFO.m267TypeInfo[i] % 1000 / 100 + 2117;
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], sX + 104 * i + 32, sY + 28);
                    tDataIndex = mMYINFO.m267TypeInfo[i] % 100 / 10 + 2117;
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], sX + 104 * i + 57, sY + 28);
                    tDataIndex = mMYINFO.m267TypeInfo[i] % 10 + 2117;
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], sX + 104 * i + 82, sY + 28);
                }
            }
        }
        if (mMYINFO.mCheck297TypeInfo || mMYINFO.mCheck200TypeInfo)
        {
            if (mMYINFO.mPresentZoneNumber == 297)
            {
                sX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3035]) / 2;
                sY = 80;
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3035], sX, 80);
                for (i = 0; i < 3; ++i)
                {
                    tDataIndex = mMYINFO.mZone297TypeMonsterInfo[i] % 1000 / 100 + 2117;
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], sX + 104 * i + 32, sY + 28);
                    tDataIndex = mMYINFO.mZone297TypeMonsterInfo[i] % 100 / 10 + 2117;
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], sX + 104 * i + 57, sY + 28);
                    tDataIndex = mMYINFO.mZone297TypeMonsterInfo[i] % 10 + 2117;
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], sX + 104 * i + 82, sY + 28);
                }
            }
            else
            {
                sX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2703]) / 2;
                sY = 80;
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2703], sX, 80);
                for (i = 0; i < 4; ++i)
                {
                    tDataIndex = mMYINFO.mZone297TypeMonsterInfo[i] % 1000 / 100 + 2117;
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], sX + 104 * i + 32, sY + 28);
                    tDataIndex = mMYINFO.mZone297TypeMonsterInfo[i] % 100 / 10 + 2117;
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], sX + 104 * i + 57, sY + 28);
                    tDataIndex = mMYINFO.mZone297TypeMonsterInfo[i] % 10 + 2117;
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], sX + 104 * i + 82, sY + 28);
                }
            }
        }
        mGXD.EndFor2D();
        mGXD.EndForDrawing();
    }
    else if (tResult == 1)
    {
        TW2AddIn::mGXD.OnLostDevice();
    }
}

void MAIN::Draw7( float dTime )
{
    int tResult;

    if (mGXD.ReadyForDrawing(&tResult))
    {
        TW2AddIn::mGXD.OnResetDevice();
        mGXD.BeginForDrawing(0);
        CopyMemory(&TW2AddIn::mGXD.mWorldMatrix, &mGXD.mWorldMatrix, sizeof(D3DXMATRIX));
        CopyMemory(&TW2AddIn::mGXD.mViewMatrix, &mGXD.mViewMatrix, sizeof(D3DXMATRIX));
        TW2AddIn::mGXD.mCameraForward.x = mGXD.mCameraForward.x;
        TW2AddIn::mGXD.mCameraForward.y = mGXD.mCameraForward.y;
        TW2AddIn::mGXD.mCameraForward.z = mGXD.mCameraForward.z;
        mGXD.mGraphicDevice->Clear(0, 0, 7, 0, 1.0f, 0);
        mGXD.mGraphicDevice->SetRenderState(D3DRS_ALPHAFUNC, D3DCMP_GREATER);
        mGXD.mGraphicDevice->SetRenderState(D3DRS_SRCBLEND, D3DBLEND_SRCALPHA);
        mGXD.mGraphicDevice->SetRenderState(D3DRS_DESTBLEND, D3DBLEND_INVSRCALPHA);
        if (TW2AddIn::mGXD.mPresentShaderProgramNumber)
        {
            TW2AddIn::mGXD.mPresentShaderProgramNumber = 0;
            TW2AddIn::mGXD.mGraphicDevice->SetVertexShader(0);
            TW2AddIn::mGXD.mGraphicDevice->SetPixelShader(0);
        }
        mGXD.BeginFor2D();


        mUTIL.DrawFont2D("Starting Client and Engine... Please Wait...", mMYINFO.mScreenXSize / 2 - 115, mMYINFO.mScreenYSize / 2, 3);


        mGXD.EndFor2D();
        mGXD.EndForDrawing();


    }
    else if (tResult == 1)
    {
        TW2AddIn::mGXD.OnLostDevice();
        return;
    }
}

void MAIN::Draw8(float dTime)
{
    int tResult;
    int mX;
    int mY;
    POINT mPoint;
    int tDrawX;
    int tDrawY;
    int uX;
    int uY;
    char tString[1000];
    int tStrLen = 0;
    int tCursorX;
    int tCursorY;
    float tScaleX;
    float tScaleY;

    if (mGXD.ReadyForDrawing(&tResult))
    {
        TW2AddIn::mGXD.OnResetDevice();
        mGXD.BeginForDrawing(0);
        CopyMemory(&TW2AddIn::mGXD.mWorldMatrix, &mGXD.mWorldMatrix, sizeof(D3DXMATRIX));
        CopyMemory(&TW2AddIn::mGXD.mViewMatrix, &mGXD.mViewMatrix, sizeof(D3DXMATRIX));
        TW2AddIn::mGXD.mCameraForward.x = mGXD.mCameraForward.x;
        TW2AddIn::mGXD.mCameraForward.y = mGXD.mCameraForward.y;
        TW2AddIn::mGXD.mCameraForward.z = mGXD.mCameraForward.z;
        mGXD.mGraphicDevice->SetRenderState(D3DRS_ALPHAFUNC, D3DCMP_GREATER);
        mGXD.mGraphicDevice->SetRenderState(D3DRS_SRCBLEND, D3DBLEND_SRCALPHA);
        mGXD.mGraphicDevice->SetRenderState(D3DRS_DESTBLEND, D3DBLEND_INVSRCALPHA);
        if (TW2AddIn::mGXD.mPresentShaderProgramNumber)
        {
            TW2AddIn::mGXD.mPresentShaderProgramNumber = 0;
            TW2AddIn::mGXD.mGraphicDevice->SetVertexShader(0);
            TW2AddIn::mGXD.mGraphicDevice->SetPixelShader(0);
        }
        mGXD.BeginFor2D();

        // Begin Draw
        if (mSubMode)
        {
            tScaleX = (float)(mMYINFO.mScreenXSize / mMYINFO.mScreenXPosSize);
            tScaleY = (float)(mMYINFO.mScreenYSize / mMYINFO.mScreenYPosSize);
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2381], 0, 0, tScaleX, tScaleY);
            GetCursorPos(&mPoint);
            ScreenToClient(mAPP->hMainWindow, &mPoint);
            mX = mPoint.x;
            mY = mPoint.y;
            uX = mMYINFO.mScreenXSize / 2;
            tDrawX = uX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[14]) / 2;
            uY = mMYINFO.mScreenYSize / 2;
            tDrawY = uY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[14]) / 2;
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[14], tDrawX, tDrawY);

            mUTIL.DrawFont2D("Account Creation Panel", tDrawX + 75, tDrawY + 165, 3);

            // Get Username
            GetWindowTextA(mEDITBOX.mDATA[0], tString, 1000);
            mUTIL.DrawFont2D(tString, tDrawX + 126, tDrawY + 60, 1);
            if (mEDITBOX.mDataIndex == 1)
            {
                tCursorY = tDrawY + 60;
                tStrLen = mUTIL.GetStringLength(tString);
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[43], tDrawX + tStrLen + 127, tCursorY);
            }
            // Get Password
            GetWindowTextA(mEDITBOX.mDATA[1], tString, 1000);
            tStrLen = strlen(tString);
            memset(tString, '*', tStrLen);
            mUTIL.DrawFont2D(tString, tDrawX + 126, tDrawY + 95, 1);
            if (mEDITBOX.mDataIndex == 2)
            {
                tCursorY = tDrawY + 95;
                tStrLen = mUTIL.GetStringLength(tString);
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[43], tDrawX + tStrLen + 127, tCursorY);
            }

            if (bIsClick[0])
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[10], tDrawX + 106, tDrawY + 126);
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[9], tDrawX + 106, tDrawY + 126, mX, mY) && mSubMode == 1)
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[9], tDrawX + 106, tDrawY + 126);
            }
            if (bIsClick[1])
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[13], tDrawX + 182, tDrawY + 126);
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[12], tDrawX + 182, tDrawY + 126, mX, mY) && mSubMode == 1)
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[12], tDrawX + 182, tDrawY + 126);
            }
            mUI.Draw();
            mGXD.EndFor2D();
            mGXD.EndForDrawing();
        }
        else
        {
            mGXD.EndFor2D();
            mGXD.EndForDrawing();
        }


        mGXD.EndFor2D();
        mGXD.EndForDrawing();


    }
    else if (tResult == 1)
    {
        TW2AddIn::mGXD.OnLostDevice();
    }
}


void MAIN::Draw6ForZone(int tDrawSort, float dTime)
{
    float pFrame;
    int tFrame;
    float tL[4][3];
    float tA[4][3];
    int i, j, k;
    float ToDraw[4];
    int tIndex[4];
    float tLocation[4];
    float tAngle[3];

    pFrame = 0.0f;
    mZONEMOVEINFO.DrawZonePortal(tDrawSort);
    for (i = 0; i < 4; i++)
    {
        ToDraw[i] = 0;
        tL[i][0] = 0.0f;
        tL[i][1] = 0.0f;
        tL[i][2] = 0.0f;
        tA[i][0] = 0.0f;
        tA[i][1] = 0.0f;
        tA[i][2] = 0.0f;
        switch (i)
        {
        case 0:
            tIndex[0] = 40;
            break;
        case 1:
            tIndex[1] = 41;
            break;
        case 2:
            tIndex[2] = 42;
            break;
        case 3:
            tIndex[3] = 148;
            break;
        default:
            continue;
        }
    }
    switch (mMYINFO.mPresentZoneNumber)
    {
    case 2:
        if (mPLAY.mWorldInfo.mTribeGuardState[0][3] == 1)
        {
            ToDraw[0] = 1;
            mZONEMOVEINFO.ReturnGuardStoneEffectCoord(0, mMYINFO.mPresentZoneNumber, tL[0]);
        }
        break;
    case 3:
        if (mPLAY.mWorldInfo.mTribeGuardState[0][2] == 1)
        {
            ToDraw[0] = 1;
            mZONEMOVEINFO.ReturnGuardStoneEffectCoord(0, mMYINFO.mPresentZoneNumber, tL[0]);
        }
        break;
    case 4:
        if (mPLAY.mWorldInfo.mTribeGuardState[0][1] == 1)
        {
            ToDraw[0] = 1;
            mZONEMOVEINFO.ReturnGuardStoneEffectCoord(0, mMYINFO.mPresentZoneNumber, tL[0]);
        }
        break;
    case 7:
        if (mPLAY.mWorldInfo.mTribeGuardState[1][3] == 1)
        {
            ToDraw[1] = 1;
            mZONEMOVEINFO.ReturnGuardStoneEffectCoord(1, mMYINFO.mPresentZoneNumber, tL[1]);
        }
        break;
    case 8:
        if (mPLAY.mWorldInfo.mTribeGuardState[1][2] == 1)
        {
            ToDraw[1] = 1;
            mZONEMOVEINFO.ReturnGuardStoneEffectCoord(1, mMYINFO.mPresentZoneNumber, tL[1]);
        }
        break;
    case 9:
        if (mPLAY.mWorldInfo.mTribeGuardState[1][1] == 1)
        {
            ToDraw[1] = 1;
            mZONEMOVEINFO.ReturnGuardStoneEffectCoord(1, mMYINFO.mPresentZoneNumber, tL[1]);
        }
        break;
    case 12:
        if (mPLAY.mWorldInfo.mTribeGuardState[2][3] == 1)
        {
            ToDraw[2] = 1;
            mZONEMOVEINFO.ReturnGuardStoneEffectCoord(2, mMYINFO.mPresentZoneNumber, tL[2]);
        }
        break;
    case 13:
        if (mPLAY.mWorldInfo.mTribeGuardState[2][2] == 1)
        {
            ToDraw[2] = 1;
            mZONEMOVEINFO.ReturnGuardStoneEffectCoord(2, mMYINFO.mPresentZoneNumber, tL[2]);
        }
        break;
    case 14:
        if (mPLAY.mWorldInfo.mTribeGuardState[2][1] == 1)
        {
            ToDraw[2] = 1;
            mZONEMOVEINFO.ReturnGuardStoneEffectCoord(2, mMYINFO.mPresentZoneNumber, tL[2]);
        }
        break;
    case 38:
        if (mPLAY.mWorldInfo.mTribeGuardState[0][0] == 1)
        {
            ToDraw[0] = 1;
            mZONEMOVEINFO.ReturnGuardStoneEffectCoord(0, mMYINFO.mPresentZoneNumber, tL[0]);
        }
        if (mPLAY.mWorldInfo.mTribeGuardState[1][0] == 1)
        {
            ToDraw[1] = 1;
            mZONEMOVEINFO.ReturnGuardStoneEffectCoord(1, mMYINFO.mPresentZoneNumber, tL[1]);
        }
        if (mPLAY.mWorldInfo.mTribeGuardState[2][0] == 1)
        {
            ToDraw[2] = 1;
            mZONEMOVEINFO.ReturnGuardStoneEffectCoord(2, mMYINFO.mPresentZoneNumber, tL[2]);
        }
        if (mPLAY.mWorldInfo.mTribeGuardState[3][0] == 1)
        {
            ToDraw[3] = 1;
            mZONEMOVEINFO.ReturnGuardStoneEffectCoord(3, mMYINFO.mPresentZoneNumber, tL[3]);
        }
        break;
    case 141:
        if (mPLAY.mWorldInfo.mTribeGuardState[3][3] == 1)
        {
            ToDraw[3] = 1;
            mZONEMOVEINFO.ReturnGuardStoneEffectCoord(3, mMYINFO.mPresentZoneNumber, tL[3]);
        }
        break;
    case 142:
        if (mPLAY.mWorldInfo.mTribeGuardState[3][2] == 1)
        {
            ToDraw[3] = 1;
            mZONEMOVEINFO.ReturnGuardStoneEffectCoord(3, mMYINFO.mPresentZoneNumber, tL[3]);
        }
        break;
    case 143:
        if (mPLAY.mWorldInfo.mTribeGuardState[3][1] == 1)
        {
            ToDraw[3] = 1;
            mZONEMOVEINFO.ReturnGuardStoneEffectCoord(3, mMYINFO.mPresentZoneNumber, tL[3]);
        }
        break;
    default:
        break;
    }
    for (i = 0; i < 4; ++i)
    {
        if (ToDraw[i])
        {
            tFrame = GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[tIndex[i]]);
            if (tFrame >= 1)
            {
                pFrame = (float)((int)(mAPP[0].hPresentElapsedSeconds * 30.0) % tFrame);
                GMOBJECT::DisplayMObject(&mGDATA.mMODEL3[tIndex[i]], tDrawSort, pFrame, tL[i], tA[i], 0);
            }
        }
    }
    if (mZONEMAININFO.CheckLevelBattleZoneNumber2())
    {
        if (mMYINFO.mPresentZoneNumber > 153)
        {
            switch (mMYINFO.mPresentZoneNumber)
            {
            case 154:
            case 155:
            case 156:
            case 157:
            case 158:
            case 159:
            case 160:
            case 161:
            case 162:
            case 163:
            case 164:
            case 295:
            case 296:
            case 350://
            LABEL_67:
                tIndex[0] = 128;
                break;
            case 319:
            case 320:
            case 321:
            case 322:
            case 323:
                tIndex[0] = 241;
                break;
            default:
                break;
            }
        }
        else if (mMYINFO.mPresentZoneNumber >= 146)
        {
        LABEL_66:
            tIndex[0] = 127;
        }
        else
        {
            switch (mMYINFO.mPresentZoneNumber)
            {
            case 49:
            case 51:
            case 53:
                goto LABEL_66;
            case 120:
            case 121:
            case 122:
                goto LABEL_67;
            default:
                break;
            }
        }
        mZONEMOVEINFO.ReturnLevelBattleGateCoord(0, mMYINFO.mPresentZoneNumber, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject(&mGDATA.mMODEL3[tIndex[0]], tDrawSort, mMYINFO.mLevelBattleOpenGateEffectFrame, tLocation, tAngle, 0);
        mZONEMOVEINFO.ReturnLevelBattleGateCoord(1, mMYINFO.mPresentZoneNumber, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject(&mGDATA.mMODEL3[tIndex[0]], tDrawSort, mMYINFO.mLevelBattleOpenGateEffectFrame, tLocation, tAngle, 0);
        mZONEMOVEINFO.ReturnLevelBattleGateCoord(2, mMYINFO.mPresentZoneNumber, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[tIndex[0]], tDrawSort, mMYINFO.mLevelBattleOpenGateEffectFrame, tLocation, tAngle, 0);
        switch (mMYINFO.mPresentZoneNumber)
        {
        case 120:
        case 121:
        case 122:
        case 154:
        case 155:
        case 156:
        case 157:
        case 158:
        case 159:
        case 160:
        case 161:
        case 162:
        case 163:
        case 164:
        case 295:
        case 296:
        case 319:
        case 320:
        case 321:
        case 322:
        case 323:
        case 350:
            mZONEMOVEINFO.ReturnLevelBattleGateCoord(3, mMYINFO.mPresentZoneNumber, tLocation);
            tAngle[0] = 0.0;
            tAngle[1] = tLocation[3];
            tAngle[2] = 0.0;
            GMOBJECT::DisplayMObject(&mGDATA.mMODEL3[tIndex[0]], tDrawSort, mMYINFO.mLevelBattleOpenGateEffectFrame, tLocation, tAngle, 0);
            break;
        default:
            break;
        }
    }
    switch (mMYINFO.mPresentZoneNumber)
    {
    case 53:
    case 148:
    case 151:
    case 152:
    case 153:
        tFrame = GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[150]);
        if (tFrame > 0)
            pFrame = (float)((int)(mAPP[0].hPresentElapsedSeconds * 30.0) % tFrame);
        tLocation[0] = 0.0;
        tLocation[1] = 0.0;
        tLocation[2] = 400.0;
        tAngle[0] = 0.0;
        tAngle[1] = 0.0;
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject(&mGDATA.mMODEL3[150], tDrawSort, pFrame, tLocation, tAngle, 0);
        break;
    case 54:
        tFrame = GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[151]);
        if (tFrame > 0)
            pFrame = (float)((int)(mAPP[0].hPresentElapsedSeconds * 30.0) % tFrame);
        tLocation[0] = 1.0;
        tLocation[1] = 55.0;
        tLocation[2] = 0.0;
        tAngle[0] = 0.0;
        tAngle[1] = 0.0;
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject(&mGDATA.mMODEL3[151], tDrawSort, pFrame, tLocation, tAngle, 0);
        break;
    case 156:
    case 159:
    case 162:
    case 163:
    case 164:
        tFrame = GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[151]);
        if (tFrame > 0)
            pFrame = (float)((int)(mAPP[0].hPresentElapsedSeconds * 30.0) % tFrame);
        tLocation[0] = 60.0;
        tLocation[1] = 106.0;
        tLocation[2] = 4190.0;
        tAngle[0] = 0.0;
        tAngle[1] = 0.0;
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject(&mGDATA.mMODEL3[151], tDrawSort, pFrame, tLocation, tAngle, 0);
        break;
    default:
        break;
    }
    if (mMYINFO.mCheckLevelBattle53TypeEffect1)
    {
        if (mMYINFO.mPresentZoneNumber >= 154)
        {
            tIndex[0] = 142;
            tLocation[0] = 60.0;
            tLocation[1] = 106.0;
            tLocation[2] = 4190.0;
        }
        else
        {
            tIndex[0] = 140;
            tLocation[0] = 0.0;
            tLocation[1] = 0.0;
            tLocation[2] = 400.0;
        }
        tAngle[0] = 0.0;
        tAngle[1] = 0.0;
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[tIndex[0]], tDrawSort, mMYINFO.mLevelBattle53TypeEffectFrame1, tLocation, tAngle, 0);
    }
    if (mMYINFO.mCheckLevelBattle53TypeEffect2)
    {
        if (mMYINFO.mPresentZoneNumber >= 154)
        {
            tIndex[0] = 143;
            tLocation[0] = 60.0;
            tLocation[1] = 106.0;
            tLocation[2] = 4190.0;
        }
        else
        {
            tIndex[0] = 141;
            tLocation[0] = 0.0;
            tLocation[1] = 0.0;
            tLocation[2] = 400.0;
        }
        tAngle[0] = 0.0;
        tAngle[1] = 0.0;
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[tIndex[0]], tDrawSort, mMYINFO.mLevelBattle53TypeEffectFrame2, tLocation, tAngle, 0);
    }
    if (mMYINFO.mPresentZoneNumber == 38)
    {
        tFrame = GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[39]);
        if (tFrame > 0)
        {
            pFrame = (float)((int)(mAPP[0].hPresentElapsedSeconds * 30.0) % tFrame);
        }
        tLocation[0] = -40.0;
        tLocation[1] = 200.0;
        tLocation[2] = 6379.0;
        tAngle[0] = 0.0;
        tAngle[1] = 0.0;
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject(&mGDATA.mMODEL3[39], tDrawSort, pFrame, tLocation, tAngle, 0);
    }
    if (mMYINFO.mCheckZone038Effect1)
    {
        tLocation[0] = -40.0;
        tLocation[1] = 200.0;
        tLocation[2] = 6379.0;
        tAngle[0] = 0.0;
        tAngle[1] = 0.0;
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject(&mGDATA.mMODEL3[37], tDrawSort, mMYINFO.mZone038EffectFrame1, tLocation, tAngle, 0);
    }
    if (mMYINFO.mCheckZone038Effect2)
    {
        tLocation[0] = -40.0;
        tLocation[1] = 200.0;
        tLocation[2] = 6379.0;
        tAngle[0] = 0.0;
        tAngle[1] = 0.0;
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject(&mGDATA.mMODEL3[38], tDrawSort, mMYINFO.mZone038EffectFrame2, tLocation, tAngle, 0);
    }
    if (mMYINFO.mCheckZone037Effect1)
    {
        tLocation[0] = -4.0;
        tLocation[1] = 8.0;
        tLocation[2] = -272.0;
        tAngle[0] = 0.0;
        tAngle[1] = 0.0;
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject(&mGDATA.mMODEL3[134], tDrawSort, mMYINFO.mZone037EffectFrame1, tLocation, tAngle, 0);
    }
    if (mMYINFO.mCheckZone037Effect2)
    {
        tLocation[0] = -4.0;
        tLocation[1] = 8.0;
        tLocation[2] = -272.0;
        tAngle[0] = 0.0;
        tAngle[1] = 0.0;
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject(&mGDATA.mMODEL3[154], tDrawSort, mMYINFO.mZone037EffectFrame2, tLocation, tAngle, 0);
    }
    if (mMYINFO.mCheckZone291Effect)
    {
        tLocation[0] = -6.0700002;
        tLocation[1] = 233.62;
        tLocation[2] = 3960.45;
        tAngle[0] = 0.0;
        tAngle[1] = 0.0;
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject(&mGDATA.mMODEL3[217], tDrawSort, mMYINFO.mZone291EffectFrame, tLocation, tAngle, 0);
    }
    else if (mMYINFO.mPresentZoneNumber == 291)
    {
        tLocation[0] = -6.0700002;
        tLocation[1] = 233.62;
        tLocation[2] = 3960.45;
        tAngle[0] = 0.0;
        tAngle[1] = 0.0;
        tAngle[2] = 0.0;
        if (mPLAY.mWorldInfo.mFortressOfLostSoulState)
        {
            pFrame = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[217]) - 1);
            GMOBJECT::DisplayMObject(&mGDATA.mMODEL3[217], tDrawSort, pFrame, tLocation, tAngle, 0);
        }
        else
        {
            GMOBJECT::DisplayMObject(&mGDATA.mMODEL3[217], tDrawSort, 0.0, tLocation, tAngle, 0);
        }
    }
    if (mZONEMAININFO.CheckZone175TypeZoneNumber2())
    {
        mZONEMOVEINFO.ReturnMysteryDungeonGateCoord(1, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[163], tDrawSort, mMYINFO.mZone175TypeGateFrame[0], tLocation, tAngle, 0);
        mZONEMOVEINFO.ReturnMysteryDungeonGateCoord(2, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[164], tDrawSort, mMYINFO.mZone175TypeGateFrame[1], tLocation, tAngle, 0);
        mZONEMOVEINFO.ReturnMysteryDungeonGateCoord(3, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[164], tDrawSort, mMYINFO.mZone175TypeGateFrame[2], tLocation, tAngle, 0);
        mZONEMOVEINFO.ReturnMysteryDungeonGateCoord(4, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[165], tDrawSort, mMYINFO.mZone175TypeGateFrame[3], tLocation, tAngle, 0);
        mZONEMOVEINFO.ReturnMysteryDungeonGateCoord(5, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[165], tDrawSort, mMYINFO.mZone175TypeGateFrame[4], tLocation, tAngle, 0);
        mZONEMOVEINFO.ReturnMysteryDungeonGateCoord(6, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[166], tDrawSort, mMYINFO.mZone175TypeGateFrame[5], tLocation, tAngle, 0);
        mZONEMOVEINFO.ReturnMysteryDungeonGateCoord(7, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[166], tDrawSort, mMYINFO.mZone175TypeGateFrame[6], tLocation, tAngle, 0);
        mZONEMOVEINFO.ReturnMysteryDungeonGateCoord(8, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[167], tDrawSort, mMYINFO.mZone175TypeGateFrame[7], tLocation, tAngle, 0);
        mZONEMOVEINFO.ReturnMysteryDungeonGateCoord(9, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[167], tDrawSort, mMYINFO.mZone175TypeGateFrame[8], tLocation, tAngle, 0);
        mZONEMOVEINFO.ReturnMysteryDungeonGateCoord(10, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[168], tDrawSort, mMYINFO.mZone175TypeGateFrame[9], tLocation, tAngle, 0);
    }
    if (mMYINFO.mPresentZoneNumber == 194)
    {
        tLocation[0] = 0.0;
        tLocation[1] = 62.0;
        tLocation[2] = 0.0;
        tAngle[0] = 0.0;
        tAngle[1] = 0.0;
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject(
            &mGDATA.mMODEL3[169],
            tDrawSort,
            mMYINFO.mZone194BattleOpenGateEffectFrame,
            tLocation,
            tAngle,
            0);
    }
    if (mZONEMAININFO.Check267TypeZoneNumber2())
    {
        tIndex[0] = 196;
        mZONEMOVEINFO.ReturnLevelBattleGateCoord(0, mMYINFO.mPresentZoneNumber, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[tIndex[0]], tDrawSort, mMYINFO.m267TypeOpenGateEffectFrame, tLocation, tAngle, 0);
        mZONEMOVEINFO.ReturnLevelBattleGateCoord(1, mMYINFO.mPresentZoneNumber, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[tIndex[0]], tDrawSort, mMYINFO.m267TypeOpenGateEffectFrame, tLocation, tAngle, 0);
        mZONEMOVEINFO.ReturnLevelBattleGateCoord(2, mMYINFO.mPresentZoneNumber, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[tIndex[0]], tDrawSort, mMYINFO.m267TypeOpenGateEffectFrame, tLocation, tAngle, 0);
        mZONEMOVEINFO.ReturnLevelBattleGateCoord(3, mMYINFO.mPresentZoneNumber, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[tIndex[0]], tDrawSort, mMYINFO.m267TypeOpenGateEffectFrame, tLocation, tAngle, 0);
    }
    if (mZONEMAININFO.CheckZone297TypeZoneNumber())
    {
        mZONEMOVEINFO.ReturnHoisundoGateCoord(1, 0, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[223], tDrawSort, mMYINFO.mZone297TypeGateFrame1[0], tLocation, tAngle, 0);
        mZONEMOVEINFO.ReturnHoisundoGateCoord(1, 1, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[223], tDrawSort, mMYINFO.mZone297TypeGateFrame1[1], tLocation, tAngle, 0);
        mZONEMOVEINFO.ReturnHoisundoGateCoord(1, 2, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[223], tDrawSort, mMYINFO.mZone297TypeGateFrame1[2], tLocation, tAngle, 0);
        mZONEMOVEINFO.ReturnHoisundoGateCoord(1, 3, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[223], tDrawSort, mMYINFO.mZone297TypeGateFrame1[3], tLocation, tAngle, 0);
        mZONEMOVEINFO.ReturnHoisundoGateCoord(2, 0, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[223], tDrawSort, mMYINFO.mZone297TypeGateFrame2[0], tLocation, tAngle, 0);
        mZONEMOVEINFO.ReturnHoisundoGateCoord(2, 1, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[223], tDrawSort, mMYINFO.mZone297TypeGateFrame2[1], tLocation, tAngle, 0);
        mZONEMOVEINFO.ReturnHoisundoGateCoord(2, 2, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[223], tDrawSort, mMYINFO.mZone297TypeGateFrame2[2], tLocation, tAngle, 0);
        mZONEMOVEINFO.ReturnHoisundoGateCoord(2, 3, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[223], tDrawSort, mMYINFO.mZone297TypeGateFrame2[3], tLocation, tAngle, 0);
    }
    if (mMYINFO.mPresentZoneNumber == 88)
    {
        mZONEMOVEINFO.ReturnSamgundoGateCoord(mMYINFO.mAvatarInfo.aTribe, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[225], tDrawSort, mMYINFO.mZone88TypeGateFrame[mMYINFO.mAvatarInfo.aTribe], tLocation, tAngle, 0);
        tFrame = GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[151]);
        if (tFrame > 0)
            pFrame = (float)((int)(mAPP[0].hPresentElapsedSeconds * 30.0) % tFrame);
        tLocation[0] = 4.0;
        tLocation[1] = -140.0;
        tLocation[2] = 2514.0;
        tAngle[0] = 0.0;
        tAngle[1] = 0.0;
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject(&mGDATA.mMODEL3[151], tDrawSort, pFrame, tLocation, tAngle, 0);
        if (mMYINFO.mZone88TypeCenterEffect[0])
        {
            GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[146], tDrawSort, mMYINFO.mZone88TypeCenterFrame[0], tLocation, tAngle, 0);
        }
        if (mMYINFO.mZone88TypeCenterEffect[1])
        {
            GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[147], tDrawSort, mMYINFO.mZone88TypeCenterFrame[1], tLocation, tAngle, 0);
        }
    }
    if (mZONEMAININFO.CheckFourGuildTypeZoneNumber())
    {
        mZONEMOVEINFO.ReturnFourGuildGateCoord(0, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[227], tDrawSort, mMYINFO.mZoneFourGuildTypeGateFrame1, tLocation, tAngle, 0);
        mZONEMOVEINFO.ReturnFourGuildGateCoord(1, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[227], tDrawSort, mMYINFO.mZoneFourGuildTypeGateFrame2, tLocation, tAngle, 0);
        mZONEMOVEINFO.ReturnFourGuildGateCoord(2, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[227], tDrawSort, mMYINFO.mZoneFourGuildTypeGateFrame3, tLocation, tAngle, 0);
        mZONEMOVEINFO.ReturnFourGuildGateCoord(3, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[227], tDrawSort, mMYINFO.mZoneFourGuildTypeGateFrame4, tLocation, tAngle, 0);
    }
    if (mMYINFO.mPresentZoneNumber == 200)
    {
        mZONEMOVEINFO.ReturnHoisundoGateCoord(1, 0, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[223], tDrawSort, mMYINFO.mZone200TypeGateFrame1[0], tLocation, tAngle, 0);
        mZONEMOVEINFO.ReturnHoisundoGateCoord(1, 1, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[223], tDrawSort, mMYINFO.mZone200TypeGateFrame1[1], tLocation, tAngle, 0);
        mZONEMOVEINFO.ReturnHoisundoGateCoord(1, 2, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[223], tDrawSort, mMYINFO.mZone200TypeGateFrame1[2], tLocation, tAngle, 0);
        mZONEMOVEINFO.ReturnHoisundoGateCoord(1, 3, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[223], tDrawSort, mMYINFO.mZone200TypeGateFrame1[3], tLocation, tAngle, 0);
        mZONEMOVEINFO.ReturnHoisundoGateCoord(2, 0, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[223], tDrawSort, mMYINFO.mZone200TypeGateFrame2[0], tLocation, tAngle, 0);
        mZONEMOVEINFO.ReturnHoisundoGateCoord(2, 1, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[223], tDrawSort, mMYINFO.mZone200TypeGateFrame2[1], tLocation, tAngle, 0);
        mZONEMOVEINFO.ReturnHoisundoGateCoord(2, 2, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[223], tDrawSort, mMYINFO.mZone200TypeGateFrame2[2], tLocation, tAngle, 0);
        mZONEMOVEINFO.ReturnHoisundoGateCoord(2, 3, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[223], tDrawSort, mMYINFO.mZone200TypeGateFrame2[3], tLocation, tAngle, 0);
    }
    if (mPLAY.CheckTrapView(mMYINFO.mAvatarInfo.aTribe) || mMYINFO.uUserSort > 0)
    {
        tFrame = GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[229]);
        if (tFrame > 0)
            pFrame = (float)((int)(mAPP[0].hPresentElapsedSeconds * 30.0) % tFrame);
        tAngle[0] = 0.0;
        tAngle[1] = 0.0;
        tAngle[2] = 0.0;
        for (i = 0; i < 5; ++i)
        {
            if (mMYINFO.mTrapPosition[i][0] != 0.0 || mMYINFO.mTrapPosition[i][1] != 0.0 || mMYINFO.mTrapPosition[i][2] != 0.0)
            {
                GMOBJECT::DisplayMObject(&mGDATA.mMODEL3[229], tDrawSort, pFrame, mMYINFO.mTrapPosition[i], tAngle, 0);
            }
        }
    }
    if (mZONEMAININFO.CheckZone5Type())
    {
        mZONEMOVEINFO.ReturnMysteryDungeonGateCoord(1, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[163], tDrawSort, mMYINFO.mZone5TypeGateFrame[0], tLocation, tAngle, 0);
        mZONEMOVEINFO.ReturnMysteryDungeonGateCoord(2, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[164], tDrawSort, mMYINFO.mZone5TypeGateFrame[1], tLocation, tAngle, 0);
        mZONEMOVEINFO.ReturnMysteryDungeonGateCoord(3, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[164], tDrawSort, mMYINFO.mZone5TypeGateFrame[2], tLocation, tAngle, 0);
        mZONEMOVEINFO.ReturnMysteryDungeonGateCoord(4, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[165], tDrawSort, mMYINFO.mZone5TypeGateFrame[3], tLocation, tAngle, 0);
        mZONEMOVEINFO.ReturnMysteryDungeonGateCoord(5, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[165], tDrawSort, mMYINFO.mZone5TypeGateFrame[4], tLocation, tAngle, 0);
        mZONEMOVEINFO.ReturnMysteryDungeonGateCoord(6, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[166], tDrawSort, mMYINFO.mZone5TypeGateFrame[5], tLocation, tAngle, 0);
        mZONEMOVEINFO.ReturnMysteryDungeonGateCoord(7, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[166], tDrawSort, mMYINFO.mZone5TypeGateFrame[6], tLocation, tAngle, 0);
        mZONEMOVEINFO.ReturnMysteryDungeonGateCoord(8, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[167], tDrawSort, mMYINFO.mZone5TypeGateFrame[7], tLocation, tAngle, 0);
        mZONEMOVEINFO.ReturnMysteryDungeonGateCoord(9, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[167], tDrawSort, mMYINFO.mZone5TypeGateFrame[8], tLocation, tAngle, 0);
        mZONEMOVEINFO.ReturnMysteryDungeonGateCoord(10, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[168], tDrawSort, mMYINFO.mZone5TypeGateFrame[9], tLocation, tAngle, 0);
    }
    if (mMYINFO.mPresentZoneNumber == 54)
    {
        mZONEMOVEINFO.ReturnZone54GateCoord(0, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[234], tDrawSort, mMYINFO.mZone54TypeGateFrame[0], tLocation, tAngle, 0);
        mZONEMOVEINFO.ReturnZone54GateCoord(1, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[234], tDrawSort, mMYINFO.mZone54TypeGateFrame[1], tLocation, tAngle, 0);
        mZONEMOVEINFO.ReturnZone54GateCoord(2, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[234], tDrawSort, mMYINFO.mZone54TypeGateFrame[2], tLocation, tAngle, 0);
        mZONEMOVEINFO.ReturnZone54GateCoord(3, tLocation);
        tAngle[0] = 0.0;
        tAngle[1] = tLocation[3];
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[234], tDrawSort, mMYINFO.mZone54TypeGateFrame[3], tLocation, tAngle, 0);
    }
    mUTIL.DrawHolyStoneTray(tDrawSort);
    switch (mMYINFO.mPresentZoneNumber)
    {
    case 85:
    case 99:
    case 100:
    case 196:
        tFrame = GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[39]);
        if (tFrame > 0)
            pFrame = (float)((int)(mAPP[0].hPresentElapsedSeconds * 30.0) % tFrame);
        tLocation[0] = -20.0;
        tLocation[1] = -144.0;
        tLocation[2] = 2511.0;
        tAngle[0] = 0.0;
        tAngle[1] = 0.0;
        tAngle[2] = 0.0;
        GMOBJECT::DisplayMObject(&mGDATA.mMODEL3[39], tDrawSort, pFrame, tLocation, tAngle, 0);
        if (mMYINFO.mCheckZone196Effect1)
        {
            tLocation[0] = -20.0;
            tLocation[1] = -144.0;
            tLocation[2] = 2511.0;
            tAngle[0] = 0.0;
            tAngle[1] = 0.0;
            tAngle[2] = 0.0;
            GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[140], tDrawSort, mMYINFO.mZone196EffectFrame1, tLocation, tAngle, 0);
        }
        if (mMYINFO.mCheckZone196Effect2)
        {
            tLocation[0] = -20.0;
            tLocation[1] = -144.0;
            tLocation[2] = 2511.0;
            tAngle[0] = 0.0;
            tAngle[1] = 0.0;
            tAngle[2] = 0.0;
            GMOBJECT::DisplayMObject( &mGDATA.mMODEL3[141], tDrawSort, mMYINFO.mZone196EffectFrame2, tLocation, tAngle, 0);
        }
        break;
    default:
        return;
    }

}


void MAIN::LBUTTONDOWN2(int uX, int uY)
{
    int sX, sY;
    int i;
    int tIdx;

    if (mSubMode)
    {
        sX = mMYINFO.mScreenXSize / 2;
        sX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1785]) / 2;
        sY = mMYINFO.mScreenYSize / 2;
        sY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[1785]) / 2;

        for (i = mWorldMin; i <= mWorldMax; ++i)
        {
            if (mPresentPlayerNum[i] >= 0)
            {
                tIdx = ReturnWorldNameImage(i);
                sY = ReturnYCoord(i);
                sX = ReturnXCoord(i);
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[tIdx], sX, sY, uX, uY))
                {
                    if (mPresentPlayerNum[i] >= 0 && mPresentPlayerNum[i] < mMaxPlayerNum[i])
                    {
                        GSOUND::Play(mGDATA.mSOUND_5, 0, 100);
                        mWorldIndex = i;
                        mMainMode = 3;
                        mSubMode = 0;
                        mTicks = 0;
                    }
                    return;
                }
            }
        }
        mMYINFO.AdjustScreenCoord(4, 891, 701, &sX, &sY);
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4], sX, sY, uX, uY))
        {
            GSOUND::Play(mGDATA.mSOUND_5, 0, 100);
            bIsClick[0] = 1;
        }

        mMYINFO.AdjustScreenCoord(8, 905, 701, &sX, &sY);
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[8], sX, sY - 45, uX, uY))
        {
            GSOUND::Play(mGDATA.mSOUND_5, 0, 100);
            bIsClick[1] = 1;
        }
    }
}

void MAIN::LBUTTONDOWN3(int uX, int uY)
{
    int sX, sY;

    if (mSubMode == 1)
    {
        sX = mMYINFO.mScreenXSize / 2;
        sX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[14]) / 2;
        sY = mMYINFO.mScreenYSize / 2;
        sY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[14]) / 2;
        if (uX > mEDITBOX.mEditBoxInfo[0][0] && uX < mEDITBOX.mEditBoxInfo[0][2] && uY > mEDITBOX.mEditBoxInfo[0][1] && uY < mEDITBOX.mEditBoxInfo[0][3])
        {
            mEDITBOX.Set(1);
        }
        else if (uX > mEDITBOX.mEditBoxInfo[1][0] && uX < mEDITBOX.mEditBoxInfo[1][2] && uY > mEDITBOX.mEditBoxInfo[1][1] && uY < mEDITBOX.mEditBoxInfo[1][3])
        {
            mEDITBOX.Set(2);
        }
        else
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[9], sX + 106, sY + 126, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                bIsClick[0] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[12], sX + 182, sY + 126, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                bIsClick[1] = 1;
            }
        }
    }
}
void MAIN::LBUTTONUP2( int uX, int uY ) 
{
    int sX, sY;

    if (mSubMode)
    {
        mMYINFO.AdjustScreenCoord(4, 891, 701, &sX, &sY);
        if (bIsClick[0])
        {
            bIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4], sX, sY, uX, uY))
            {
                mCBOXUI.Set(1, mMESSAGE.Return(1), "");
            }
        }
        
        mMYINFO.AdjustScreenCoord(8, 905, 701, &sX, &sY);
        if (bIsClick[1])
        {
            bIsClick[1] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[8], sX, sY - 45, uX, uY))
            {
                mMainMode = 8;
                mSubMode = 0;
                mTicks = 0;
            }
        }
    }
}
void MAIN::LBUTTONUP3(int uX, int uY)
{
    int mX;
    int mY;
    int tDrawX;
    int tDrawY;

    if (mSubMode == 1 )
    {
        mX = mMYINFO.mScreenXSize / 2;
        tDrawX = mX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[14]) / 2;
        mY = mMYINFO.mScreenYSize / 2;
        tDrawY = mY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[14]) / 2;
        if (bIsClick[0])
        {
            bIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[9], tDrawX + 106, tDrawY + 126, uX, uY))
            {
                mSubMode = 2;
            }
        }
        else if (bIsClick[1])
        {
            bIsClick[1] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[12], tDrawX + 182, tDrawY + 126, uX, uY))
            {
                mMainMode = 2;
                mSubMode = 0;
                mTicks = 0;
            }
        }
    }
}
void MAIN::LBUTTONUP4(int uX, int uY)
{
    int sX, sY;
    int i;
    int tResult;
    char mBuffer[1000];
    int tPage, tIndex;
    GSOUND* mCHARSOUND;
    int tAvatarSort;

    switch (mSubMode)
    {
    case 1:
        if (mSecondPasswordState)
        {
            switch (mSecondPasswordType)
            {
            case 1:
                sX = mMYINFO.mScreenXSize / 2;
                sX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2387]) / 2;
                sY = mMYINFO.mScreenYSize / 2;
                sY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2387]) / 2;
                if (bIsClick[51])
                {
                    bIsClick[51] = 0;
                    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2390], sX + 158, sY + 299, uX, uY))
                    {
                        if (mInputNum[0] < 4 || mInputNum[1] < 4)
                        {
                            mMBOXUI.Set(1, mMESSAGE.Return(617), "");
                            return;
                        }
                        if (strcmp(aInputText[0], aInputText[1]))
                        {
                            mMBOXUI.Set(1, mMESSAGE.Return(618), "");
                            return;
                        }
                        TW_CREATE_MOUSE_PASSWORD_SEND(aInputText[0], &tResult);
                        switch (tResult)
                        {
                        case 0:
                            mMBOXUI.Set(1, mMESSAGE.Return(622), mMESSAGE.Return(623));
                            mSecondPasswordState = 0;
                            for (i = 0; i < 3 && !strcmp(mMYINFO.mSelectAvatarInfo[i].aName, ""); ++i)
                            {
                                ;
                            }
                            if (i >= 3)
                            {
                                mSelectState = 1;
                            }
                            break;
                        case 1:
                            mMBOXUI.Set(2, mMESSAGE.Return(619), "");
                            mSubMode = 2;
                            mTicks = 0;
                            break;
                            mMBOXUI.Set(2, mMESSAGE.Return(620), "");
                            mSubMode = 2;
                            mTicks = 0;
                            break;
                        case 102:
                            mMBOXUI.Set(2, mMESSAGE.Return(621), "");
                            mSubMode = 2;
                            mTicks = 0;
                            break;
                        default:
                            return;
                        }
                    }
                    return;
                }
                else if (bIsClick[52])
                {
                    bIsClick[52] = 0;
                    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2391], sX + 212, sY + 299, uX, uY))
                    {
                        mMYINFO.mWarningDisplayState = 0;
                        mAPP[0].hAbortProgram = 1;
                    }
                }
                return;

            case 2:
                sX = mMYINFO.mScreenXSize / 2;
                sX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2388]) / 2;
                sY = mMYINFO.mScreenYSize / 2;
                sY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2388]) / 2;
                if (bIsClick[51])
                {
                    bIsClick[51] = 0;
                    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2390], sX + 158, sY + 299, uX, uY))
                    {
                        if (mInputNum[0] < 4)
                        {
                            mMBOXUI.Set(1, mMESSAGE.Return(617), "");
                            return;
                        }
                        TW_LOGIN_MOUSE_PASSWORD_SEND(aInputText[0], &tResult);
                        switch (tResult)
                        {
                        case 0:
                            mSecondPasswordState = 0;
                            for (i = 0; i < 3 && !strcmp(mMYINFO.mSelectAvatarInfo[i].aName, ""); ++i)
                            {
                                ;
                            }
                            if (i >= 3)
                            {
                                mSelectState = 1;
                            }
                            break;
                        case 1:
                            if (++mSecondLoginTryNum == 3)
                            {
                                mAPP[0].hAbortProgram = 1;
                            }
                            else
                            {
                                mMBOXUI.Set(1, mMESSAGE.Return(624), "");
                                mSecondPasswordInputIndex = 0;
                                mInputNum[0] = 0;
                                strcpy(aInputText[0], "");
                            }
                            break;
                        case 101:
                            mMBOXUI.Set(2, mMESSAGE.Return(625), "");
                            mSubMode = 2;
                            mTicks = 0;
                            break;
                        case 102:
                            mMBOXUI.Set(2, mMESSAGE.Return(626), "");
                            mSubMode = 2;
                            mTicks = 0;
                            break;
                        default:
                            return;
                        }
                    }
                    return;
                }
                else if (bIsClick[52])
                {
                    bIsClick[52] = 0;
                    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2391], sX + 212, sY + 299, uX, uY))
                    {
                        mAPP[0].hAbortProgram = 1;
                    }
                }
                else if (bIsClick[53])
                {
                    bIsClick[53] = 0;
                    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2392], sX + 104, sY + 299, uX, uY))
                    {
                        mSecondPasswordType = 3;
                        mSecondPasswordInputIndex = 0;
                        mInputNum[0] = 0;
                        mInputNum[1] = 0;
                        mInputNum[2] = 0;
                        strcpy(aInputText[0], "");
                        strcpy(aInputText[1], "");
                        strcpy(aInputText[2], "");
                    }
                }
                return;

            case 3:
                sX = mMYINFO.mScreenXSize / 2;
                sX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2389]) / 2;
                sY = mMYINFO.mScreenYSize / 2;
                sY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2389]) / 2;
                if (bIsClick[51])
                {
                    bIsClick[51] = 0;
                    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2390], sX + 158, sY + 299, uX, uY))
                    {
                        if (mInputNum[0] < 4 || mInputNum[1] < 4 || mInputNum[2] < 4)
                        {
                            mMBOXUI.Set(1, mMESSAGE.Return(617), "");
                            return;
                        }
                        if (!strcmp(aInputText[1], aInputText[2]))
                        {
                            TW_CHANGE_MOUSE_PASSWORD_SEND(aInputText[0], aInputText[1], &tResult);
                            switch (tResult)
                            {
                            case 0:
                                mMBOXUI.Set(1, mMESSAGE.Return(627), mMESSAGE.Return(623));
                                mSecondPasswordState = 0;
                                for (i = 0; i < 3 && !strcmp(mMYINFO.mSelectAvatarInfo[i].aName, ""); ++i)
                                {
                                    ;
                                }
                                if (i >= 3)
                                {
                                    mSelectState = 1;
                                }
                                break;
                            case 1:
                                if (++mSecondLoginTryNum == 3)
                                {
                                    mAPP[0].hAbortProgram = 1;
                                }
                                else
                                {
                                    mMBOXUI.Set(1, mMESSAGE.Return(624), "");
                                    mSecondPasswordInputIndex = 0;
                                    mInputNum[0] = 0;
                                    strcpy(aInputText[0], "");
                                }
                                break;
                            case 2:
                                mMBOXUI.Set(2, mMESSAGE.Return(628), "");
                                mSubMode = 2;
                                mTicks = 0;
                                break;
                            case 101:
                                mMBOXUI.Set(2, mMESSAGE.Return(629), "");
                                mSubMode = 2;
                                mTicks = 0;
                                break;
                            case 102:
                                mMBOXUI.Set(2, mMESSAGE.Return(630), "");
                                mSubMode = 2;
                                mTicks = 0;
                                break;
                            default:
                                return;
                            }
                            return;
                        }
                        else
                        {
                            mMBOXUI.Set(1, mMESSAGE.Return(618), "");
                            return;
                        }
                    }
                    return;
                }
                if (bIsClick[52])
                {
                    bIsClick[52] = 0;
                    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2391], sX + 212, sY + 299, uX, uY))
                    {
                        mSecondPasswordType = 2;
                        mSecondPasswordInputIndex = 0;
                        mInputNum[0] = 0;
                        strcpy(aInputText[0], "");
                    }
                }
                return;

            default:
                return;
            }
        }
        if (mWorldIndex == 40 && mSelectState)
        {
            sX = mMYINFO.mScreenXSize / 2;
            sX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3448]) / 2;
            sY = mMYINFO.mScreenYSize / 2;
            sY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3448]) / 2;
            if (bIsClick[83])
            {
                bIsClick[83] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1883], sX + 64, sY + 357, uX, uY))
                {
                    mSelectState = 0;
                }
            }
            else if (bIsClick[84])
            {
                bIsClick[84] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1885], sX + 284, sY + 357, uX, uY))
                {
                    mSelectState = 0;
                    mNETWORK.CLOSE();
                    mMainMode = 2;
                    mSubMode = 0;
                    mTicks = 0;
                }
            }

            return;
        }
        if (mGiftType)
        {
            switch (mGiftType)
            {
            case 1:
                sX = mMYINFO.mScreenXSize / 2;
                sX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3169]) / 2;
                sY = mMYINFO.mScreenYSize / 2;
                sY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3169]) / 2;
                if (bIsClick[83])
                {
                    bIsClick[83] = 0;
                    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3170], sX + 158, sY + 165, uX, uY))
                    {
                        if (mWantGiftIndex != -1)
                        {
                            TW_WANT_GIFT_SEND(1, mWantGiftIndex, &tResult);
                            switch (tResult)
                            {
                            case 0:
                                mWantGiftIndex = -1;
                                mMBOXUI.Set(1, mMESSAGE.Return(1355), "");
                                break;
                            case 1:
                                mMBOXUI.Set(1, mMESSAGE.Return(1356), "");
                                break;
                            case 2:
                                mMBOXUI.Set(1, mMESSAGE.Return(1357), "");
                                break;
                            case 101:
                                mMBOXUI.Set(2, mMESSAGE.Return(708), "");
                                mSubMode = 2;
                                mTicks = 0;
                                break;
                            case 102:
                                mMBOXUI.Set(2, mMESSAGE.Return(709), "");
                                mSubMode = 2;
                                mTicks = 0;
                                break;
                            default:
                                return;
                            }
                            return;
                        }
                        mMBOXUI.Set(1, mMESSAGE.Return(1354), "");
                        return;
                    }
                }
                if (bIsClick[84])
                {
                    bIsClick[84] = 0;
                    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2789], sX + 229, sY + 165, uX, uY))
                    {
                        for (i = 0; i < 150; ++i)
                        {
                            bIsClick[i] = 0;
                        }
                        mGiftType = 0;
                        mWantGiftIndex = -1;
                    }
                }
                return;
            }
        }
        if (tLoginWebMallState)
        {
            sX = mMYINFO.mScreenXSize / 2;
            sX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4111]) / 2;
            sY = mMYINFO.mScreenYSize / 2;
            sY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[4111]) / 2;
            if (bIsClick[86])
            {
                bIsClick[86] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3170], sX + 361, sY + 411, uX, uY))
                {
                    if (tLoginWebMallSelectIndex != -1)
                    {
                        TW_BUY_WEBMALL_SEND(tLoginWebMallSelectIndex, &tResult);
                        switch (tResult)
                        {
                        case 0:
                            tLoginWebMallSelectIndex = -1;
                            mMBOXUI.Set(1, mMESSAGE.Return(2650), "");
                            break;
                        case 1:
                            mMBOXUI.Set(1, mMESSAGE.Return(2651), "");
                            break;
                        case 2:
                        case 3:
                        case 4:
                        case 5:
                        case 6:
                        case 8:
                        case 9:
                        case 10:
                        case 11:
                            sprintf(mBuffer, mMESSAGE.Return(2661), tResult);
                            mMBOXUI.Set(1, mMESSAGE.Return(2660), mBuffer);
                            break;
                        case 7:
                            mMBOXUI.Set(1, mMESSAGE.Return(2662), "");
                            break;
                        case 12:
                        case 13:
                        case 14:
                            sprintf(mBuffer, mMESSAGE.Return(2661), tResult);
                            mMBOXUI.Set(1, mMESSAGE.Return(2665), mBuffer);
                            break;
                        case 101:
                            mMBOXUI.Set(2, mMESSAGE.Return(708), "");
                            mSubMode = 2;
                            mTicks = 0;
                            break;
                        case 102:
                            mMBOXUI.Set(2, mMESSAGE.Return(709), "");
                            mSubMode = 2;
                            mTicks = 0;
                            break;
                        default:
                            return;
                        }
                        return;
                    }
                    else
                    {
                        mMBOXUI.Set(1, mMESSAGE.Return(1354), "");
                    }
                    return;
                }
            }
            if (bIsClick[87])
            {
                bIsClick[87] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], sX + 7, sY + 7, uX, uY))
                {
                    for (i = 0; i < 150; ++i)
                        bIsClick[i] = 0;
                    tLoginWebMallState = 0;
                    tLoginWebMallPage = 0;
                    tLoginWebMallSelectIndex = -1;
                }
            }
            else if (bIsClick[88])
            {
                bIsClick[88] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], sX + 152, sY + 411, uX, uY) && tLoginWebMallPage > 0)
                {
                    --tLoginWebMallPage;
                }
            }
            else if (bIsClick[89])
            {
                bIsClick[89] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], sX + 250, sY + 411, uX, uY))
                {
                    if (tLoginWebMallPage < tLoginWebMallMaxPage)
                    {
                        ++tLoginWebMallPage;
                    }
                }
            }
            return;
        }
        if (bTransferState)
        {
            sX = mMYINFO.mScreenXSize / 2;
            sX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3085]) / 2;
            sY = mMYINFO.mScreenYSize / 2;
            sY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3085]) / 2;
            if (bIsClick[71])
            {
                bIsClick[71] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], sX + 83, sY + 59, uX, uY) && mTransferIndex > 0)
                {
                    --mTransferIndex;
                }
            }
            else if (bIsClick[72])
            {
                bIsClick[72] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], sX + 206, sY + 59, uX, uY) && mTransferIndex < unk101[0] - 1)
                {
                    ++mTransferIndex;
                }
            }
            else if (bIsClick[73])
            {
                bIsClick[73] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[9], sX + 60, sY + 114, uX, uY))
                {
                    mCBOXUI.Set(39, mMESSAGE.Return(1282), mMESSAGE.Return(1283));
                    mPOINTER.Set(0);
                    mEDITBOX.Set(0);
                    for (i = 0; i < 150; ++i)
                    {
                        bIsClick[i] = 0;
                    }
                    bTransferState = 0;
                }
            }
            else if (bIsClick[74])
            {
                bIsClick[74] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[12], sX + 135, sY + 114, uX, uY))
                {
                    mPOINTER.Set(0);
                    mEDITBOX.Set(0);
                    for (i = 0; i < 150; ++i)
                    {
                        bIsClick[i] = 0;
                    }
                    bTransferState = 0;
                }
            }
            return;
        }
        if (mChangeNameWindowState)
        {
            sX = mMYINFO.mScreenXSize / 2;
            sX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1359]) / 2;
            sY = mMYINFO.mScreenYSize / 2;
            sY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[1359]) / 2;
            if (bIsClick[75])
            {
                bIsClick[75] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[721], sX + 110, sY + 55, uX, uY))
                {
                    if (GetWindowTextA(mEDITBOX.mDATA[17], mBuffer, 13))
                    {
                        if (mUTIL.CheckNameString(mBuffer))
                        {
                            tPage = 0;
                            tIndex = 0;
                            if (mUTIL.CheckNameString(mMYINFO.mSelectAvatarInfo[mSelectAvtIndex].aName))
                            {
                                if (mINVENUI.IsFindItem1(mSelectAvtIndex, 1133, &tPage, &tIndex) == 1)
                                {
                                    TW_CHANGE_AVATAR_NAME_SEND(mSelectAvtIndex, mBuffer, tPage, tIndex, &tResult);
                                }
                            }
                            else
                            {
                                TW_CHANGE_AVATAR_NAME_SEND(mSelectAvtIndex, mBuffer, -1, -1, &tResult);
                            }
                            switch (tResult)
                            {
                            case 0:
                                mMBOXUI.Set(1, mMESSAGE.Return(1327), "");
                                mPOINTER.Set(0);
                                mEDITBOX.Set(0);
                                for (i = 0; i < 150; ++i)
                                {
                                    bIsClick[i] = 0;
                                }
                                mChangeNameWindowState = 0;
                                break;
                            case 1:
                                mMBOXUI.Set(1, mMESSAGE.Return(1328), "");
                                mPOINTER.Set(0);
                                mEDITBOX.Set(0);
                                for (i = 0; i < 150; ++i)
                                {
                                    bIsClick[i] = 0;
                                }
                                mChangeNameWindowState = 0;
                                break;
                            case 2:
                                mMBOXUI.Set(1, mMESSAGE.Return(1329), "");
                                break;
                            case 3:
                                mMBOXUI.Set(1, mMESSAGE.Return(1330), "");
                                mPOINTER.Set(0);
                                mEDITBOX.Set(0);
                                for (i = 0; i < 150; ++i)
                                    bIsClick[i] = 0;
                                mChangeNameWindowState = 0;
                                break;
                            case 4:
                                mMBOXUI.Set(1, mMESSAGE.Return(2090), "");
                                mPOINTER.Set(0);
                                mEDITBOX.Set(0);
                                for (i = 0; i < 150; ++i)
                                    bIsClick[i] = 0;
                                mChangeNameWindowState = 0;
                                break;
                            case 5:
                                mMBOXUI.Set(1, mMESSAGE.Return(2091), "");
                                mPOINTER.Set(0);
                                mEDITBOX.Set(0);
                                for (i = 0; i < 150; ++i)
                                    bIsClick[i] = 0;
                                mChangeNameWindowState = 0;
                                break;
                            case 6:
                                mMBOXUI.Set(1, "Non English name is not allowed.", "");
                                mPOINTER.Set(0);
                                mEDITBOX.Set(0);
                                for (i = 0; i < 150; ++i)
                                    bIsClick[i] = 0;
                                mChangeNameWindowState = 0;
                                break;
                            case 7:
                                mMBOXUI.Set(1, mMESSAGE.Return(1326), "");
                                mPOINTER.Set(0);
                                mEDITBOX.Set(0);
                                for (i = 0; i < 150; ++i)
                                    bIsClick[i] = 0;
                                mChangeNameWindowState = 0;
                                break;
                            case 8:
                                mMBOXUI.Set(1, "Can not change name when Friend List is not empty.", "");
                                mPOINTER.Set(0);
                                mEDITBOX.Set(0);
                                for (i = 0; i < 150; ++i)
                                    bIsClick[i] = 0;
                                mChangeNameWindowState = 0;
                                break;
                            case 9:
                                mMBOXUI.Set(1, "Can not change name when in a Teacher-Student Relationship.", "");
                                mPOINTER.Set(0);
                                mEDITBOX.Set(0);
                                for (i = 0; i < 150; ++i)
                                    bIsClick[i] = 0;
                                mChangeNameWindowState = 0;
                                break;
                            case 101:
                                mMBOXUI.Set(2, mMESSAGE.Return(703), "");
                                mSubMode = 2;
                                mTicks = 0;
                                break;
                            case 102:
                                mMBOXUI.Set(2, mMESSAGE.Return(704), "");
                                mSubMode = 2;
                                mTicks = 0;
                                break;
                            default:
                                mPOINTER.Set(0);
                                mEDITBOX.Set(0);
                                for (i = 0; i < 150; ++i)
                                {
                                    bIsClick[i] = 0;
                                }
                                mChangeNameWindowState = 0;
                                break;
                            }
                        }
                        else
                        {
                            mMBOXUI.Set(1, mMESSAGE.Return(30), "");
                        }
                    }
                    else
                    {
                        mMBOXUI.Set(1, mMESSAGE.Return(38), "");
                    }
                }
            }
            else if (bIsClick[76])
            {
                bIsClick[76] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[723], sX + 147, sY + 55, uX, uY))
                {
                    mPOINTER.Set(0);
                    mEDITBOX.Set(0);
                    for (i = 0; i < 150; ++i)
                    {
                        bIsClick[i] = 0;
                    }
                    mChangeNameWindowState = 0;
                }
            }
            return;
        }
        if (bOpenWebStorageState)
        {
            sX = mMYINFO.mScreenXSize / 2;
            sX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3169]) / 2;
            sY = mMYINFO.mScreenYSize / 2;
            sY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3169]) / 2;
            if (bIsClick[77])
            {
                bIsClick[77] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3170], sX + 158, sY + 165, uX, uY))
                {
                    if (tWebStorageSelectIndex != -1)
                    {
                        TW_WANT_GIFT_SEND(2, tWebStorageSelectIndex, &tResult);
                        switch (tResult)
                        {
                        case 0:
                            tWebStorageSelectIndex = -1;
                            mMBOXUI.Set(1, mMESSAGE.Return(1355), "");
                            break;
                        case 1:
                            mMBOXUI.Set(1, mMESSAGE.Return(1356), "");
                            break;
                        case 2:
                            mMBOXUI.Set(1, mMESSAGE.Return(1357), "");
                            break;
                        case 101:
                            mMBOXUI.Set(2, mMESSAGE.Return(708), "");
                            mSubMode = 2;
                            mTicks = 0;
                            break;
                        case 102:
                            mMBOXUI.Set(2, mMESSAGE.Return(709), "");
                            mSubMode = 2;
                            mTicks = 0;
                            break;
                        default:
                            return;
                        }
                        return;
                    }
                    mMBOXUI.Set(1, mMESSAGE.Return(1354), "");
                    return;
                }
            }
            if (bIsClick[78])
            {
                bIsClick[78] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2789], sX + 229, sY + 165, uX, uY))
                {
                    for (i = 0; i < 150; ++i)
                    {
                        bIsClick[i] = 0;
                    }
                    bOpenWebStorageState = 0;
                    uCurrentGiftPage = 0;
                    tWebStorageSelectIndex = -1;
                }
            }
            else if (bIsClick[79])
            {
                bIsClick[79] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], sX + 23, sY + 167, uX, uY) && uCurrentGiftPage > 0)
                {
                    --uCurrentGiftPage;
                }
            }
            else if (bIsClick[80])
            {
                bIsClick[80] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], sX + 121, sY + 167, uX, uY))
                {
                    if (uCurrentGiftPage < 4)
                    {
                        ++uCurrentGiftPage;
                    }
                }
            }

            return;
        }
        if (mSelectType == 1)
        {
            sX = mMYINFO.mScreenXSize - 140;
            sY = mMYINFO.mScreenYSize - 301;
            if (bIsClick[0])
            {
                bIsClick[0] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[16], sX, sY, uX, uY) && mActSort != 3)
                {
                    if (mSelectAvtIndex != -1)
                    {
                        //if (mUTIL.CheckNameString(mMYINFO.mSelectAvatarInfo[mSelectAvtIndex].aName))
                       // {
                        mActType = 2 * mFACTOR.GetWeaponClass1(mMYINFO.mSelectAvatarInfo[mSelectAvtIndex].aEquip);
                        mActSort = 3;
                        mActFrame = 0.0;
                        mCHARSOUND = mGDATA.ReturnCharacterSound(mMYINFO.mSelectAvatarInfo[mSelectAvtIndex].aPreviousTribe, mMYINFO.mSelectAvatarInfo[mSelectAvtIndex].aGender, mActType, mActSort, 1, 0, 0);
                        GSOUND::Play(mCHARSOUND, 0, 100);
                        // }
                        // else
                       //  {
                        //     tstr = mMESSAGE.Return(1856);
                        //     mMBOXUI.Set(1, tstr, "");
                        // }
                        return;
                    }
                    mMBOXUI.Set(1, mMESSAGE.Return(47), "");
                    return;
                }
            }
            if (bIsClick[1])
            {
                bIsClick[1] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[19], sX, sY + 37, uX, uY) || mActSort == 3)
                {
                    for (i = 0; i < 3 && strcmp(mMYINFO.mSelectAvatarInfo[i].aName, ""); ++i)
                    {
                        ;
                    }
                    if (i != 3)
                    {
                        mPOINTER.Set(0);
                        mEDITBOX.Set(3);
                        SetWindowTextA(mEDITBOX.mDATA[2], "");
                        for (i = 0; i < 150; ++i)
                        {
                            bIsClick[i] = 0;
                        }
                        mSelectType = 2;
                        mCreateWeaponType = 0;
                        mMYINFO.mCreateAvatarInfo.aName[0] = 0;
                        mMYINFO.mCreateAvatarInfo.aTribe = rand() % 3;
                        mMYINFO.mCreateAvatarInfo.aGender = 0;
                        mMYINFO.mCreateAvatarInfo.aHeadType = 0;
                        mMYINFO.mCreateAvatarInfo.aFaceType = 0;
                        mActType = 0;
                        mActSort = 1;
                        mActFrame = 0.0;
                        mActCoord[0] = 0.0;
                        mActCoord[1] = 0.0;
                        mActCoord[2] = 0.0;
                        mActAngle[0] = 0.0;
                        mActAngle[1] = 0.0;
                        mActAngle[2] = 0.0;
                    }
                    else
                    {
                        mMBOXUI.Set(1, mMESSAGE.Return(22), "");
                    }
                    return;
                }
            }
            if (bIsClick[2])
            {
                bIsClick[2] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[22], sX, sY + 74, uX, uY) || mWorldIndex == 60 || mActSort == 3)
                {
                    if (mSelectAvtIndex != -1)
                    {
                        mCBOXUI.Set(2, mMESSAGE.Return(49), "");
                        return;
                    }
                    else
                    {
                        mMBOXUI.Set(1, mMESSAGE.Return(47), "");
                    }
                    return;
                }
            }
            if (bIsClick[3])
            {
                bIsClick[3] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1812], sX, sY + 111, uX, uY) || mWorldIndex == 60 || mActSort == 3)
                {
                    if (mSelectAvtIndex != -1)
                    {
                        tPage = 0;
                        tIndex = 0;
                        if (mUTIL.CheckNameString(mMYINFO.mSelectAvatarInfo[mSelectAvtIndex].aName))
                        {
                            if (!mINVENUI.IsFindItem1(mSelectAvtIndex, 1133, &tPage, &tIndex))
                            {
                                mMBOXUI.Set(1, mMESSAGE.Return(1325), "");
                                return;
                            }
                            if (mPLAY.mWorldInfo.mTribeVoteState[0] || mPLAY.mWorldInfo.mTribeVoteState[1] || mPLAY.mWorldInfo.mTribeVoteState[2] || mPLAY.mWorldInfo.mTribeVoteState[3])
                            {
                                for (i = 0; i < 10; i++)
                                {
                                    if (!strcmp(mPLAY.mTribeInfo.mTribeVoteName[mMYINFO.mAvatarInfo.aTribe][i], mMYINFO.mAvatarInfo.aName))
                                    {
                                        mMBOXUI.Set(1, mMESSAGE.Return(1524), "");
                                        return;
                                    }
                                }
                            }
                        }
                        if (!strcmp(mMYINFO.mSelectAvatarInfo[mSelectAvtIndex].aGuildName, ""))
                        {
                            mPOINTER.Set(0);
                            mEDITBOX.Set(18);
                            SetWindowTextA(mEDITBOX.mDATA[17], "");
                            for (i = 0; i < 150; ++i)
                            {
                                bIsClick[i] = 0;
                            }
                            mChangeNameWindowState = 1;
                        }
                        else
                        {
                            mMBOXUI.Set(1, mMESSAGE.Return(1326), "");
                        }
                        return;
                    }
                    else
                    {
                        mMBOXUI.Set(1, mMESSAGE.Return(47), "");
                    }
                    return;
                }
            }
            if (bIsClick[4])
            {
                bIsClick[4] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1925], sX, sY + 148, uX, uY) || mWorldIndex == 60)
                {
                    if (mActSort != 3)
                    {
                        memset(mMYINFO.mGiftItem, 0, 80);
                        TW_DEMAND_GIFT_SEND(&tResult);
                        switch (tResult)
                        {
                        case 0:
                            mPOINTER.Set(0);
                            mEDITBOX.Set(0);
                            for (i = 0; i < 150; ++i)
                            {
                                bIsClick[i] = 0;
                            }
                            mGiftType = 1;
                            break;
                        case 1:
                            mPOINTER.Set(0);
                            mEDITBOX.Set(0);
                            for (i = 0; i < 150; ++i)
                            {
                                bIsClick[i] = 0;
                            }
                            mGiftType = 1;
                            break;
                        case 2:
                            mPOINTER.Set(0);
                            mEDITBOX.Set(0);
                            for (i = 0; i < 150; ++i)
                            {
                                bIsClick[i] = 0;
                            }
                            mGiftType = 1;
                            break;
                        case 101:
                            mMBOXUI.Set(2, mMESSAGE.Return(44), "");
                            break;
                        case 102:
                            mMBOXUI.Set(2, mMESSAGE.Return(45), "");
                            break;
                        default:
                            return;
                        }
                    }
                    return;
                }
            }
            if (bIsClick[5])
            {
                bIsClick[5] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[963], sX, sY + 185, uX, uY) && mActSort != 3)
                {
                    mNETWORK.CLOSE();
                    mMainMode = 2;
                    mSubMode = 0;
                    mTicks = 0;
                }
                return;
            }
            if (bIsClick[6])
            {
                bIsClick[6] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[25], sX, sY + 222, uX, uY) && mActSort != 3)
                {
                    mCBOXUI.Set(1, mMESSAGE.Return(1), "");
                }
                return;
            }
            if (bIsClick[8])
            {
                bIsClick[8] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3166], 15, 332, uX, uY) && mWorldIndex != 60 && mWorldIndex != 40 && mActSort != 3)
                {
                    for (i = 0; i < 150; ++i)
                    {
                        bIsClick[i] = 0;
                    }
                    bOpenWebStorageState = 1;
                    uCurrentGiftPage = 0;
                    tWebStorageSelectIndex = -1;
                }
                return;
            }
            if (bIsClick[85])
            {
                bIsClick[85] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4116], 15, 368, uX, uY) && mActSort != 3)
                {
                    for (i = 0; i < 150; ++i)
                    {
                        bIsClick[i] = 0;
                    }
                    TW_DEMAND_WEBMALL_SEND();
                }
                return;
            }
        }
        else if (mSelectType == 2)
        {
            sX = mMYINFO.mScreenXSize - 335;
            sY = 73;
            if (bIsClick[0])
            {
                bIsClick[0] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[41], sX + 115, sY + 78, uX, uY) && mMYINFO.mCreateAvatarInfo.aTribe)
                {
                    --mMYINFO.mCreateAvatarInfo.aTribe;
                    mMYINFO.mCreateAvatarInfo.aGender = 0;
                    mMYINFO.mCreateAvatarInfo.aHeadType = 0;
                    mMYINFO.mCreateAvatarInfo.aFaceType = 0;
                    mCreateWeaponType = 0;
                    mActFrame = 0.0;
                }
                return;
            }
            if (bIsClick[1])
            {
                bIsClick[1] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[42], sX + 196, sY + 78, uX, uY) && mMYINFO.mCreateAvatarInfo.aTribe != 2)
                {
                    ++mMYINFO.mCreateAvatarInfo.aTribe;
                    mMYINFO.mCreateAvatarInfo.aGender = 0;
                    mMYINFO.mCreateAvatarInfo.aHeadType = 0;
                    mMYINFO.mCreateAvatarInfo.aFaceType = 0;
                    mCreateWeaponType = 0;
                    mActFrame = 0.0;
                }
                return;
            }
            if (bIsClick[2])
            {
                bIsClick[2] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[41], sX + 115, sY + 102, uX, uY) && mMYINFO.mCreateAvatarInfo.aGender)
                {
                    --mMYINFO.mCreateAvatarInfo.aGender;
                    mMYINFO.mCreateAvatarInfo.aHeadType = 0;
                    mMYINFO.mCreateAvatarInfo.aFaceType = 0;
                    mActFrame = 0.0;
                }
                return;
            }
            if (bIsClick[3])
            {
                bIsClick[3] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[42], sX + 196, sY + 102, uX, uY) && mMYINFO.mCreateAvatarInfo.aGender != 1)
                {
                    ++mMYINFO.mCreateAvatarInfo.aGender;
                    mMYINFO.mCreateAvatarInfo.aHeadType = 0;
                    mMYINFO.mCreateAvatarInfo.aFaceType = 0;
                    mActFrame = 0.0;
                }
                return;
            }
            if (bIsClick[4])
            {
                bIsClick[4] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[41], sX + 115, sY + 126, uX, uY) && mMYINFO.mCreateAvatarInfo.aHeadType)
                {
                    --mMYINFO.mCreateAvatarInfo.aHeadType;
                }
                return;
            }
            if (bIsClick[5])
            {
                bIsClick[5] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[42], sX + 196, sY + 126, uX, uY)
                    && mMYINFO.mCreateAvatarInfo.aHeadType != 6)
                {
                    ++mMYINFO.mCreateAvatarInfo.aHeadType;
                }
                return;
            }
            if (bIsClick[6])
            {
                bIsClick[6] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[41], sX + 115, sY + 150, uX, uY) && mMYINFO.mCreateAvatarInfo.aFaceType)
                {
                    --mMYINFO.mCreateAvatarInfo.aFaceType;
                }
                return;
            }
            if (bIsClick[7])
            {
                bIsClick[7] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[42], sX + 196, sY + 150, uX, uY) && mMYINFO.mCreateAvatarInfo.aFaceType != 2)
                {
                    ++mMYINFO.mCreateAvatarInfo.aFaceType;
                }
                return;
            }
            if (bIsClick[8])
            {
                bIsClick[8] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[41], sX + 115, sY + 174, uX, uY) && mCreateWeaponType)
                {
                    --mCreateWeaponType;
                }
                return;
            }
            if (bIsClick[9])
            {
                bIsClick[9] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[42], sX + 196, sY + 174, uX, uY) && mCreateWeaponType != 2)
                {
                    ++mCreateWeaponType;
                }
                return;
            }
            if (bIsClick[10])
            {
                bIsClick[10] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[9], sX + 47, sY + 203, uX, uY))
                {
                    if (!GetWindowTextA(mEDITBOX.mDATA[2], mMYINFO.mCreateAvatarInfo.aName, 13))
                    {
                        mMBOXUI.Set(1, mMESSAGE.Return(38), "");
                        return;
                    }
                    if (!mUTIL.CheckNameString(mMYINFO.mCreateAvatarInfo.aName))
                    {
                        mMBOXUI.Set(1, mMESSAGE.Return(39), "");
                        return;
                    }
                    memset(mMYINFO.mCreateAvatarInfo.aEquip, 0, sizeof(mMYINFO.mCreateAvatarInfo.aEquip));
                    if (mMYINFO.mCreateAvatarInfo.aTribe == 0)
                    {
                        if (mCreateWeaponType == 0)
                            mMYINFO.mCreateAvatarInfo.aEquip[7][0] = 5;
                        if (mCreateWeaponType == 1)
                            mMYINFO.mCreateAvatarInfo.aEquip[7][0] = 6;
                        if (mCreateWeaponType == 2)
                            mMYINFO.mCreateAvatarInfo.aEquip[7][0] = 7;
                    }
                    else if (mMYINFO.mCreateAvatarInfo.aTribe == 1)
                    {
                        if (mCreateWeaponType == 0)
                            mMYINFO.mCreateAvatarInfo.aEquip[7][0] = 11;
                        if (mCreateWeaponType == 1)
                            mMYINFO.mCreateAvatarInfo.aEquip[7][0] = 12;
                        if (mCreateWeaponType == 2)
                            mMYINFO.mCreateAvatarInfo.aEquip[7][0] = 13;
                    }
                    else if (mMYINFO.mCreateAvatarInfo.aTribe == 2)
                    {
                        if (mCreateWeaponType == 0)
                            mMYINFO.mCreateAvatarInfo.aEquip[7][0] = 17;
                        if (mCreateWeaponType == 1)
                            mMYINFO.mCreateAvatarInfo.aEquip[7][0] = 18;
                        if (mCreateWeaponType == 2)
                            mMYINFO.mCreateAvatarInfo.aEquip[7][0] = 19;
                    }
                    for (i = 0; i < 3 && strcmp(mMYINFO.mSelectAvatarInfo[i].aName, ""); ++i)
                    {
                        ;
                    }
                    if (i != 3)
                    {
                        tAvatarSort = i;
                        TW_CREATE_AVATAR_SEND(i, &mMYINFO.mCreateAvatarInfo, &tResult);
                        switch (tResult)
                        {
                        case 0:
                            mMBOXUI.Set(1, mMESSAGE.Return(41), "");
                            mPOINTER.Set(0);
                            mEDITBOX.Set(0);
                            for (i = 0; i < 150; ++i)
                                bIsClick[i] = 0;
                            mSelectType = 1;
                            mSelectAvtIndex = tAvatarSort;
                            mActType = 0;
                            mActSort = 1;
                            mActFrame = 0.0f;
                            mActCoord[0] = 0.0f;
                            mActCoord[1] = 0.0f;
                            mActCoord[2] = 0.0f;
                            mActAngle[0] = 0.0f;
                            mActAngle[1] = 0.0f;
                            mActAngle[2] = 0.0f;
                            break;
                        case 1:
                            mMBOXUI.Set(2, mMESSAGE.Return(42), "");
                            mSubMode = 2;
                            mTicks = 0;
                            break;
                        case 2:
                            mMBOXUI.Set(1, mMESSAGE.Return(43), "");
                            break;
                        case 3:
                            mMBOXUI.Set(1, mMESSAGE.Return(701), "");
                            break;
                        case 101:
                            mMBOXUI.Set(2, mMESSAGE.Return(44), "");
                            mSubMode = 2;
                            mTicks = 0;
                            break;
                        case 102:
                            mMBOXUI.Set(2, mMESSAGE.Return(45), "");
                            mSubMode = 2;
                            mTicks = 0;
                            break;
                        default:
                            sprintf(mBuffer, "MyDB::CreateCharacter() -- Error on Line: %d", tResult);
                            mMBOXUI.Set(2, mBuffer, "");
                            mSubMode = 2;
                            mTicks = 0;
                            return;
                        }
                        return;
                    }
                    else
                    {
                        mMBOXUI.Set(1, mMESSAGE.Return(22), "");
                    }
                    return;
                }
            }
            if (bIsClick[11])
            {
                bIsClick[11] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[12], sX + 149, sY + 203, uX, uY))
                {
                    mPOINTER.Set(0);
                    mEDITBOX.Set(0);
                    for (i = 0; i < 150; ++i)
                        bIsClick[i] = 0;
                    mSelectType = 1;
                    mActType = 0;
                    mActSort = 1;
                    mActFrame = 0.0;
                    mActCoord[0] = 0.0;
                    mActCoord[1] = 0.0;
                    mActCoord[2] = 0.0;
                    mActAngle[0] = 0.0;
                    mActAngle[1] = 0.0;
                    mActAngle[2] = 0.0;
                }
            }
            else if (bIsClick[12])
            {
                bIsClick[12] = 0;
            }
            else if (bIsClick[13])
            {
                bIsClick[13] = 0;
            }
            return;
        }
        return;

    default:
        return;
    }
}

void MAIN::LBUTTONUP6(int uX, int uY)
{

}

void MAIN::LBUTTONUP8(int uX, int uY)
{
    int mX;
    int mY;
    int tDrawX;
    int tDrawY;

    if (mSubMode == 1)
    {
        mX = mMYINFO.mScreenXSize / 2;
        tDrawX = mX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[14]) / 2;
        mY = mMYINFO.mScreenYSize / 2;
        tDrawY = mY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[14]) / 2;
        if (bIsClick[0])
        {
            bIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[9], tDrawX + 106, tDrawY + 126, uX, uY))
            {
                mSubMode = 2;
            }
        }
        else if (bIsClick[1])
        {
            bIsClick[1] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[12], tDrawX + 182, tDrawY + 126, uX, uY))
            {
                mMainMode = 2;
                mSubMode = 0;
                mTicks = 0;
            }
        }
    }
}


void MAIN::LBUTTONDOWN4(int uX, int uY)
{
    int sX, sY;
    int tX, tY;
    int i;
    int tIdx;

    switch ( mSubMode )
    {
    case 1:
        if (mSecondPasswordState)
        {
            if (mSecondPasswordType == 1)
            {
                sX = mMYINFO.mScreenXSize / 2;
                sX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2387]) / 2;
                sY = mMYINFO.mScreenYSize / 2;
                sY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2387]) / 2;
                if (uX > sX + 112 && uX < sX + 160 && uY > sY + 141 && uY < sY + 158)
                {
                    mSecondPasswordInputIndex = 0;
                    return;
                }
                if (uX > sX + 112 && uX < sX + 160 && uY > sY + 161 && uY < sY + 178)
                {
                    mSecondPasswordInputIndex = 1;
                    return;
                }
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2597], sX + 176, sY + 141, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    mInputNum[0] = 0;
                    strcpy(aInputText[0], "");
                    return;
                }
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2597], sX + 176, sY + 161, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    mInputNum[1] = 0;
                    strcpy(aInputText[1], "");
                    return;
                }
                for (i = 0; i < 10; ++i)
                {
                    tIdx = 3 * mSecondPasswordImage[i] + 2035;
                    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[tIdx], sX + 38 * (i % 5) + 43, sY + 39 * (i / 5) + 210, uX, uY))
                    {
                        if (mInputNum[mSecondPasswordInputIndex] != 4)
                        {
                            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                            aInputText[mSecondPasswordInputIndex][mInputNum[mSecondPasswordInputIndex]++] = mSecondPasswordImage[i] + 48;
                            aInputText[mSecondPasswordInputIndex][mInputNum[mSecondPasswordInputIndex]] = 0;
                        }
                        return;
                    }
                }
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2390], sX + 158, sY + 299, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    bIsClick[51] = 1;
                    return;
                }
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2391], sX + 212, sY + 299, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    bIsClick[52] = 1;
                    return;
                }
            }
            if (mSecondPasswordType == 2)
            {
                sX = mMYINFO.mScreenXSize / 2;
                sX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2388]) / 2;
                sY = mMYINFO.mScreenYSize / 2;
                sY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2388]) / 2;
                if (uX > sX + 112 && uX < sX + 160 && uY > sY + 141 && uY < sY + 158)
                {
                    mSecondPasswordInputIndex = 0;
                    return;
                }
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2597], sX + 176, sY + 141, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    mInputNum[0] = 0;
                    strcpy(aInputText[0], "");
                    return;
                }
                for (i = 0; i < 10; ++i)
                {
                    tIdx = 3 * mSecondPasswordImage[i] + 2035;
                    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[tIdx], sX + 38 * (i % 5) + 43, sY + 39 * (i / 5) + 210, uX, uY))
                    {
                        if (mInputNum[mSecondPasswordInputIndex] != 4)
                        {
                            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                            aInputText[mSecondPasswordInputIndex][mInputNum[mSecondPasswordInputIndex]++] = mSecondPasswordImage[i] + 48;
                            aInputText[mSecondPasswordInputIndex][mInputNum[mSecondPasswordInputIndex]] = 0;
                        }
                        return;
                    }
                }
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2390], sX + 158, sY + 299, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    bIsClick[51] = 1;
                    return;
                }
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2391], sX + 212, sY + 299, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    bIsClick[52] = 1;
                    return;
                }
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2392], sX + 104, sY + 299, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    bIsClick[53] = 1;
                    return;
                }
                return;
            }
            if (mSecondPasswordType == 3)
            {
                sX = mMYINFO.mScreenXSize / 2;
                sX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2389]) / 2;
                sY = mMYINFO.mScreenYSize / 2;
                sY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2389]) / 2;
                if (uX > sX + 112 && uX < sX + 160 && uY > sY + 141 && uY < sY + 158)
                {
                    mSecondPasswordInputIndex = 0;
                    return;
                }
                if (uX > sX + 112 && uX < sX + 160 && uY > sY + 161 && uY < sY + 178)
                {
                    mSecondPasswordInputIndex = 1;
                    return;
                }
                if (uX > sX + 112 && uX < sX + 160 && uY > sY + 181 && uY < sY + 198)
                {
                    mSecondPasswordInputIndex = 2;
                    return;
                }
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2597], sX + 176, sY + 141, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    mInputNum[0] = 0;
                    strcpy(aInputText[0], "");
                    return;
                }
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2597], sX + 176, sY + 161, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    mInputNum[1] = 0;
                    strcpy(aInputText[1], "");
                    return;
                }
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2597], sX + 176, sY + 181, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    mInputNum[2] = 0;
                    strcpy(aInputText[2], "");
                    return;
                }
                for (i = 0; i < 10; ++i)
                {
                    tIdx = 3 * mSecondPasswordImage[i] + 2035;
                    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[tIdx], sX + 38 * (i % 5) + 43, sY + 39 * (i / 5) + 210, uX, uY))
                    {
                        if (mInputNum[mSecondPasswordInputIndex] != 4)
                        {
                            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                            aInputText[mSecondPasswordInputIndex][mInputNum[mSecondPasswordInputIndex]++] = mSecondPasswordImage[i] + 48;
                            aInputText[mSecondPasswordInputIndex][mInputNum[mSecondPasswordInputIndex]] = 0;
                        }
                        return;
                    }
                }
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2390], sX + 158, sY + 299, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    bIsClick[51] = 1;
                    return;
                }
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2391], sX + 212, sY + 299, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    bIsClick[52] = 1;
                    return;
                }
            }
            return;
        }
        if (mWorldIndex == 40 && mSelectState)
        {
            sX = mMYINFO.mScreenXSize / 2;
            sX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3448]) / 2;
            sY = mMYINFO.mScreenYSize / 2;
            sY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3448]) / 2;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1883], sX + 64, sY + 357, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                bIsClick[83] = 1;
                return;
            }
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1885], sX + 284, sY + 357, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                bIsClick[84] = 1;
                return;
            }
            return;
        }
        if (mGiftType)
        {
            if (mGiftType == 2)
            {
                sX = mMYINFO.mScreenXSize / 2;
                sX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1929]) / 2;
                sY = mMYINFO.mScreenYSize / 2;
                sY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[1929]) / 2;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1930], sX + 25, sY + 193, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    bIsClick[61] = 1;
                }
                else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1930], sX + 90, sY + 193, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    bIsClick[62] = 1;
                }
                else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1930], sX + 155, sY + 193, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    bIsClick[63] = 1;
                }
                else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1930], sX + 220, sY + 193, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    bIsClick[64] = 1;
                }
                else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1930], sX + 285, sY + 193, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    bIsClick[65] = 1;
                }
                else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1622], sX + 285, sY + 236, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    bIsClick[66] = 1;
                }

                return;
            }
            if (mGiftType == 1)
            {
                sX = mMYINFO.mScreenXSize / 2;
                sX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3169]) / 2;
                sY = mMYINFO.mScreenYSize / 2;
                sY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3169]) / 2;
                for (i = 0; i < 10; ++i)
                {
                    if (mMYINFO.mGiftItem[i][0] >= 1)
                    {
                        tX = sX + 55 * (i % 5) + 19;
                        tY = sY + 55 * (i / 5) + 41;
                        if (uX > tX && uX < tX + 55 && uY > tY && uY < tY + 55)
                        {
                            mWantGiftIndex = i;
                            return;
                        }
                    }
                }
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3170], sX + 158, sY + 165, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    bIsClick[83] = 1;
                    return;
                }
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2789], sX + 229, sY + 165, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    bIsClick[84] = 1;
                    return;
                }
                return;
            }
        }
        if (tLoginWebMallState)
        {
            sX = mMYINFO.mScreenXSize / 2;
            sX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4111]) / 2;
            sY = mMYINFO.mScreenYSize / 2;
            sY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[4111]) / 2;
            tIdx = GetLoginWebMallIndex0(sX, sY, uX, uY);
            if (tIdx == -1)
            {
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1339], sX + 361, sY + 411, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    bIsClick[86] = 1;
                }
                else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], sX + 7, sY + 7, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    bIsClick[87] = 1;
                }
                else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], sX + 152, sY + 411, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    bIsClick[88] = 1;
                }
                else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], sX + 250, sY + 411, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    bIsClick[89] = 1;
                }
            }
            else if (tIdx != tLoginWebMallSelectIndex)
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                tLoginWebMallSelectIndex = tIdx;
            }
            return;
        }
        if (bTransferState)
        {
            sX = mMYINFO.mScreenXSize / 2;
            sX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3085]) / 2;
            sY = mMYINFO.mScreenYSize / 2;
            sY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3085]) / 2;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], sX + 83, sY + 59, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                bIsClick[71] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], sX + 206, sY + 59, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                bIsClick[72] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[9], sX + 60, sY + 114, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                bIsClick[73] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[12], sX + 135, sY + 114, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                bIsClick[74] = 1;
            }

            return;
        }
        if (mChangeNameWindowState)
        {
            sX = mMYINFO.mScreenXSize / 2;
            sX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1359]) / 2;
            sY = mMYINFO.mScreenYSize / 2;
            sY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[1359]) / 2;
            if (uX > mEDITBOX.mEditBoxInfo[17][0] && uX < mEDITBOX.mEditBoxInfo[17][2] && uY > mEDITBOX.mEditBoxInfo[17][1] && uY < mEDITBOX.mEditBoxInfo[17][3])
            {
                mEDITBOX.Set(18);
            }
            else
            {
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[721], sX + 110, sY + 55, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    bIsClick[75] = 1;
                }
                else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[723], sX + 147, sY + 55, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    bIsClick[76] = 1;
                }
            }

            return;
        }
        if (bOpenWebStorageState)
        {
            sX = mMYINFO.mScreenXSize / 2;
            sX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3169]) / 2;
            sY = mMYINFO.mScreenYSize / 2;
            sY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3169]) / 2;
            for (i = 0; i < 10; ++i)
            {
                if (mMYINFO.mWebItem[10 * uCurrentGiftPage + i] >= 1)
                {
                    tX = sX + 55 * (i % 5) + 19;
                    tY = sY + 55 * (i / 5) + 41;
                    if (uX > tX && uX < tX + 55 && uY > tY && uY < tY + 55)
                    {
                        tWebStorageSelectIndex = i + 10 * uCurrentGiftPage;
                        return;
                    }
                }
            }
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3170], sX + 158, sY + 165, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                bIsClick[77] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2789], sX + 229, sY + 165, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                bIsClick[78] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], sX + 23, sY + 167, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                bIsClick[79] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], sX + 121, sY + 167, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                bIsClick[80] = 1;
            }

            return;
        }
        if (bResetInputSecondPassword)
        {
            sX = mMYINFO.mScreenXSize / 2;
            sX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2998]) / 2;
            sY = mMYINFO.mScreenYSize / 2;
            sY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2998]) / 2;
            if (uX > mEDITBOX.mEditBoxInfo[18][0] && uX < mEDITBOX.mEditBoxInfo[18][2] && uY > mEDITBOX.mEditBoxInfo[18][1] && uY < mEDITBOX.mEditBoxInfo[18][3])
            {
                mEDITBOX.Set(19);
            }
            else
            {
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[9], sX + 287, sY + 233, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    bIsClick[81] = 1;
                }
                else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[12], sX + 360, sY + 233, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    bIsClick[82] = 1;
                }
            }

            return;
        }
        if (mSelectType == 1)
        {
            sX = mMYINFO.mScreenXSize - 194;
            sY = 19;
            for (i = 0; i < 3; ++i)
            {
                if (strcmp(mMYINFO.mSelectAvatarInfo[i].aName, "") && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1657], sX + 25, sY + 44 * i + 50, uX, uY))
                {
                    if (i != mSelectAvtIndex)
                    {
                        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                        mActFrame = 0.0;
                        mSelectAvtIndex = i;
                    }
                    return;
                }
            }
            sX = mMYINFO.mScreenXSize - 140;
            sY = mMYINFO.mScreenYSize - 301;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[16], mMYINFO.mScreenXSize - 140, mMYINFO.mScreenYSize - 301, uX, uY))
            {
                GSOUND::Play(mGDATA.mSOUND_5, 0, 100);
                bIsClick[0] = 1;
            }
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[19], sX, sY + 37, uX, uY))
            {
                if (mWorldIndex != 60 && mWorldIndex != 50)
                {
                    GSOUND::Play(mGDATA.mSOUND_5, 0, 100);
                    bIsClick[1] = 1;
                }
            }
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[22], sX, sY + 74, uX, uY))
            {
                if (mWorldIndex != 60)
                {
                    GSOUND::Play(mGDATA.mSOUND_5, 0, 100);
                    bIsClick[2] = 1;
                }
            }
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1812], sX, sY + 111, uX, uY))
            {
                if (mWorldIndex != 60)
                {
                    GSOUND::Play(mGDATA.mSOUND_5, 0, 100);
                    bIsClick[3] = 1;
                }
            }
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1925], sX, sY + 148, uX, uY))
            {
                if (mWorldIndex != 60)
                {
                    GSOUND::Play(mGDATA.mSOUND_5, 0, 100);
                    bIsClick[4] = 1;
                }
            }
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[963], sX, sY + 185, uX, uY))
            {
                GSOUND::Play(mGDATA.mSOUND_5, 0, 100);
                bIsClick[5] = 1;
            }
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[25], sX, sY + 222, uX, uY))
            {
                GSOUND::Play(mGDATA.mSOUND_5, 0, 100);
                bIsClick[6] = 1;
            }
            if ((mWorldIndex == 50 || mWorldIndex == 40) && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3086], sX, sY - 37, uX, uY))
            {
                GSOUND::Play(mGDATA.mSOUND_5, 0, 100);
                bIsClick[7] = 1;
            }
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4116], 15, 368, uX, uY))
            {
                GSOUND::Play(mGDATA.mSOUND_5, 0, 100);
                bIsClick[85] = 1;
            }
            if (mWorldIndex == 40 && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3192], 15, 404, uX, uY))
            {
                GSOUND::Play(mGDATA.mSOUND_5, 0, 100);
                bIsClick[9] = 1;
            }

            return;
        }
        else if (mSelectType == 2)
        {
            sX = mMYINFO.mScreenXSize - 335;
            sY = 73;
            if (uX > mEDITBOX.mEditBoxInfo[2][0] && uX < mEDITBOX.mEditBoxInfo[2][2] && uY > mEDITBOX.mEditBoxInfo[2][1] && uY < mEDITBOX.mEditBoxInfo[2][3])
            {
                mEDITBOX.Set(3);
            }
            else
            {
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[41], sX + 115, sY + 78, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    bIsClick[0] = 1;
                }
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[42], sX + 196, sY + 78, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    bIsClick[1] = 1;
                }
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[41], sX + 115, sY + 102, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    bIsClick[2] = 1;
                }
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[42], sX + 196, sY + 102, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    bIsClick[3] = 1;
                }
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[41], sX + 115, sY + 126, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    bIsClick[4] = 1;
                }
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[42], sX + 196, sY + 126, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    bIsClick[5] = 1;
                }
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[41], sX + 115, sY + 150, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    bIsClick[6] = 1;
                }
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[42], sX + 196, sY + 150, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    bIsClick[7] = 1;
                }
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[41], sX + 115, sY + 174, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    bIsClick[8] = 1;
                }
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[42], sX + 196, sY + 174, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    bIsClick[9] = 1;
                }
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[9], sX + 47, sY + 203, uX, uY))
                {
                    GSOUND::Play(mGDATA.mSOUND_5, 0, 100);
                    bIsClick[10] = 1;
                }
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[12], sX + 149, sY + 203, uX, uY))
                {
                    GSOUND::Play(mGDATA.mSOUND_5, 0, 100);
                    bIsClick[11] = 1;
                }
                mMYINFO.AdjustScreenCoord(44, 390, 628, &sX, &sY);
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[44], sX, sY, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    bIsClick[12] = 1;
                }
                mMYINFO.AdjustScreenCoord(46, 557, 628, &sX, &sY);
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[46], sX, sY, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    bIsClick[13] = 1;
                }
            }
        }
        return;
    }
}

void MAIN::LBUTTONDOWN6(int uX, int uY)
{
    char* tstr;
    int tstrlen;
    int i, j, k;
    int mIndex = -1;
    BOOL tIsSelect;
    int tSelectSort;
    float tSpeed;
    float tECoord[3];
    float tResult[3];
    int tTrisIndex;


    if (mSubMode == 4)
    {
        if (mMYINFO.mSelectObjSort)
        {
            tIsSelect = 0;
            switch (mMYINFO.mSelectObjSort)
            {
            case 1:
                mUTIL.CheckSelectAvatar(uX, uY, &mIndex);
                if (mIndex != -1 && mPLAY.mAVATAR_OBJECT[mIndex].mIndex == mMYINFO.mSelectObjIndex && mPLAY.mAVATAR_OBJECT[mIndex].mUniqueNumber == mMYINFO.mSelectObjUniqueNumber)
                {
                    tIsSelect = 1;
                }
                break;
            case 2:
                mUTIL.CheckSelectAvatar(uX, uY, &mIndex);
                if (mIndex != -1 && mPLAY.mAVATAR_OBJECT[mIndex].mIndex == mMYINFO.mSelectObjIndex && mPLAY.mAVATAR_OBJECT[mIndex].mUniqueNumber == mMYINFO.mSelectObjUniqueNumber)
                {
                    tIsSelect = 1;
                }
                break;
            case 3:
                mUTIL.CheckSelectAvatar(uX, uY, &mIndex);
                if (mIndex != -1 && mPLAY.mAVATAR_OBJECT[mIndex].mIndex == mMYINFO.mSelectObjIndex && mPLAY.mAVATAR_OBJECT[mIndex].mUniqueNumber == mMYINFO.mSelectObjUniqueNumber)
                {
                    tIsSelect = 1;
                }
                break;
            case 4:
                mUTIL.CheckSelectNPC(uX, uY, &mIndex);
                if (mIndex != -1 && mIndex == mMYINFO.mSelectObjIndex)
                {
                    tIsSelect = 1;
                }
                break;
            case 5:
                mUTIL.CheckSelectMonster(uX, uY, &mIndex);
                if (mIndex != -1 && mPLAY.mMONSTER_OBJECT[mIndex].mServerIndex == mMYINFO.mSelectObjIndex && mPLAY.mMONSTER_OBJECT[mIndex].mUniqueNumber == mMYINFO.mSelectObjUniqueNumber)
                {
                    tIsSelect = 1;
                }
                break;
            case 7:
                mUTIL.GetProxySelectIndex(uX, uY, &mIndex);
                if (mIndex != -1 && mIndex == mMYINFO.mSelectObjIndex && mPLAY.mPROXY_OBJECT[mIndex].mUniqueNumber == mMYINFO.mSelectObjUniqueNumber)
                {
                    tIsSelect = 1;
                }
                break;
            default:
                break;
            }
            if (tIsSelect)
            {
                switch (mMYINFO.mSelectObjSort)
                {
                case 1:
                    if (mMYINFO.mAvatarInfo.aVisibleState)
                    {
                        ProcessForGetAvatar1(mMYINFO.mSelectObjIndex, mMYINFO.mSelectObjUniqueNumber);
                    }
                    return;
                case 2:
                    if (mMYINFO.mAvatarInfo.aVisibleState)
                    {
                        ProcessForGetAvatar1(mMYINFO.mSelectObjIndex, mMYINFO.mSelectObjUniqueNumber);
                    }
                    break;
                case 3:
                    if (mMYINFO.mAvatarInfo.aVisibleState)
                    {
                        ProcessForGetAvatar1(mMYINFO.mSelectObjIndex, mMYINFO.mSelectObjUniqueNumber); 
                    }
                    break;
                case 4:
                    if (mMYINFO.mAvatarInfo.aVisibleState)
                    {
                        ProcessForGetNPC1(mMYINFO.mSelectObjIndex);
                    }
                    break;
                case 5:
                    if (mMYINFO.mAvatarInfo.aVisibleState)
                    {
                        ProcessForGetMonster1(mMYINFO.mSelectObjIndex, mMYINFO.mSelectObjUniqueNumber);
                    }
                    break;
                case 7:
                    if (mMYINFO.mAvatarInfo.aVisibleState)
                    {
                        ProcessForGetDeputyPShop1(mMYINFO.mSelectObjIndex);
                    }
                    break;
                default:
                    return;
                }
            }
            else
            {
                ExamineSelectObject(uX, uY, &tSelectSort, &mIndex, 1);
                switch (tSelectSort)
                {
                case 0:
                    strcpy(mINPUT.mCameraRecordPostAvatarName, "");
                    if (mMYINFO.mAvatarInfo.aVisibleState)
                    {
                        if (mMYINFO.mHotKeyIndex != -1
                            && mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][mMYINFO.mHotKeyIndex][2] == 1
                            && (mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][mMYINFO.mHotKeyIndex][0] == 2
                                || mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][mMYINFO.mHotKeyIndex][0] == 21
                                || mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][mMYINFO.mHotKeyIndex][0] == 40
                                || mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][mMYINFO.mHotKeyIndex][0] == 3
                                || mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][mMYINFO.mHotKeyIndex][0] == 22
                                || mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][mMYINFO.mHotKeyIndex][0] == 41))
                        {
                            ProcessForSkill2(mMYINFO.mHotKeyIndex, uX, uY, 1, 0);
                        }
                        else if (!mUTIL.CheckJumpRunMovingZoneForLocation(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation))
                        {
                            if (mGDATA.mZONE.mWORLD2.ScreenCoordToWorldCoord(uX, uY, &tTrisIndex, &tECoord[0], 0))
                            {
                                tSpeed = mFACTOR.GetRunSpeed();
                                if (mUTIL.Collision(1, &tECoord[0], tSpeed, &tResult[0]))
                                {
                                    mMYINFO.A002_2(&tResult[0], 0, -1, 0, 0, 0, 0);
                                }
                            }
                        }
                    }
                    else if (mGDATA.mZONE.mWORLD2.ScreenCoordToWorldCoord(uX, uY, &tTrisIndex, &tECoord[0], 0) && !mMYINFO.mMoveZoneState)
                    {
                        mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0] = tECoord[0];
                        mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1] = tECoord[1];
                        mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2] = tECoord[2];
                        mPLAY.PROCESS_DATA_507_SEND(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation);
                    }
                    break;
                case 1:
                case 2:
                case 3:
                    strcpy(mINPUT.mCameraRecordPostAvatarName, mPLAY.mAVATAR_OBJECT[mIndex].mDATA.aName);
                    mMYINFO.mSelectObjSort = tSelectSort;
                    mMYINFO.mSelectObjIndex = mPLAY.mAVATAR_OBJECT[mIndex].mIndex;
                    mMYINFO.mSelectObjUniqueNumber = mPLAY.mAVATAR_OBJECT[mIndex].mUniqueNumber;
                    break;
                case 4:
                    strcpy(mINPUT.mCameraRecordPostAvatarName, "");
                    mMYINFO.mSelectObjSort = tSelectSort;
                    mMYINFO.mSelectObjIndex = mIndex;
                    break;
                case 5:
                    strcpy(mINPUT.mCameraRecordPostAvatarName, "");
                    mMYINFO.mSelectObjSort = tSelectSort;
                    mMYINFO.mSelectObjIndex = mPLAY.mMONSTER_OBJECT[mIndex].mServerIndex;
                    mMYINFO.mSelectObjUniqueNumber = mPLAY.mMONSTER_OBJECT[mIndex].mUniqueNumber;
                    break;
                case 6:
                    strcpy(mINPUT.mCameraRecordPostAvatarName, "");
                    if (mMYINFO.mAvatarInfo.aVisibleState && CheckForInventory())
                    { 
                        ProcessForGetItem1( mPLAY.mITEM_OBJECT[mIndex].mServerIndex, mPLAY.mITEM_OBJECT[mIndex].mUniqueNumber); 
                    }
                    break;
                case 7:
                    strcpy(mINPUT.mCameraRecordPostAvatarName, "");
                    mMYINFO.mSelectObjSort = tSelectSort;
                    mMYINFO.mSelectObjIndex = mIndex;
                    mMYINFO.mSelectObjUniqueNumber = mPLAY.mPROXY_OBJECT[mIndex].mUniqueNumber;
                    break;
                default:
                    return;
                }
            }
        }
        else
        {
            ExamineSelectObject(uX, uY, &tSelectSort, &mIndex, 1);
            switch (tSelectSort)
            {
            case 0:
                strcpy(mINPUT.mCameraRecordPostAvatarName, "");
                if (!mMYINFO.mAvatarInfo.aVisibleState)
                {
                    if (!mGDATA.mZONE.mWORLD2.ScreenCoordToWorldCoord(uX, uY, &tTrisIndex, &tECoord[0], 0) || mMYINFO.mMoveZoneState)
                    {
                        return;
                    }
                    mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0] = tECoord[0];
                    mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1] = tECoord[1];
                    mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2] = tECoord[2];
                    mPLAY.PROCESS_DATA_507_SEND(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation);
                    return;
                }
                if (mMYINFO.mHotKeyIndex != -1
                    && mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][mMYINFO.mHotKeyIndex][2] == 1
                    && (mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][mMYINFO.mHotKeyIndex][0] == 2
                        || mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][mMYINFO.mHotKeyIndex][0] == 21
                        || mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][mMYINFO.mHotKeyIndex][0] == 40
                        || mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][mMYINFO.mHotKeyIndex][0] == 3
                        || mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][mMYINFO.mHotKeyIndex][0] == 22
                        || mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][mMYINFO.mHotKeyIndex][0] == 41))
                {
                    ProcessForSkill2(mMYINFO.mHotKeyIndex, uX, uY, 1, 0);
                    return;
                }
                if (mUTIL.CheckJumpRunMovingZoneForLocation(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation))
                {
                    return;
                }
                if (!mGDATA.mZONE.mWORLD2.ScreenCoordToWorldCoord(uX, uY, &tTrisIndex, &tECoord[0], 0))
                {
                    return;
                }
                tSpeed = mFACTOR.GetRunSpeed();
                if (!mUTIL.Collision(1, &tECoord[0], tSpeed, &tResult[0]))
                {
                    return;
                }
                break;
            case 1:
            case 2:
            case 3:
                strcpy(mINPUT.mCameraRecordPostAvatarName, mPLAY.mAVATAR_OBJECT[mIndex].mDATA.aName);
                mMYINFO.mSelectObjSort = tSelectSort;
                mMYINFO.mSelectObjIndex = mPLAY.mAVATAR_OBJECT[mIndex].mIndex;
                mMYINFO.mSelectObjUniqueNumber = mPLAY.mAVATAR_OBJECT[mIndex].mUniqueNumber;
                return;
            case 4:
                strcpy(mINPUT.mCameraRecordPostAvatarName, "");
                mMYINFO.mSelectObjSort = tSelectSort;
                mMYINFO.mSelectObjIndex = mIndex;
                return;
            case 5:
                strcpy(mINPUT.mCameraRecordPostAvatarName, "");
                mMYINFO.mSelectObjSort = tSelectSort;
                mMYINFO.mSelectObjIndex = mPLAY.mMONSTER_OBJECT[mIndex].mServerIndex;
                mMYINFO.mSelectObjUniqueNumber = mPLAY.mMONSTER_OBJECT[mIndex].mUniqueNumber;
                return;
            case 6:
                strcpy(mINPUT.mCameraRecordPostAvatarName, "");
                if (mMYINFO.mAvatarInfo.aVisibleState && CheckForInventory())
                {
                    ProcessForGetItem1( mPLAY.mITEM_OBJECT[mIndex].mServerIndex, mPLAY.mITEM_OBJECT[mIndex].mUniqueNumber);
                }
                return;
            case 7:
                strcpy(mINPUT.mCameraRecordPostAvatarName, "");
                strcpy(mINPUT.mCameraRecordPostAvatarName, mPLAY.mPROXY_OBJECT[mIndex].mDATA.tShopName);
                mMYINFO.mSelectObjSort = tSelectSort;
                mMYINFO.mSelectObjIndex = mIndex;
                mMYINFO.mSelectObjUniqueNumber = mPLAY.mPROXY_OBJECT[mIndex].mUniqueNumber;
                return;
            default:
                return;
            }
            mMYINFO.A002_2(&tResult[0], 0, -1, 0, 0, 0, 0);
        }
    }
}

void MAIN::LBUTTONDOWN8(int uX, int uY)
{
    int mX;
    int mY;
    int tDrawX;
    int tDrawY;

    if (mSubMode == 1)
    {
        mX = mMYINFO.mScreenXSize / 2;
        tDrawX = mX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[14]) / 2;
        mY = mMYINFO.mScreenYSize / 2;
        tDrawY = mY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[14]) / 2;
        if (uX <= mEDITBOX.mEditBoxInfo[0][0]
            || uX >= mEDITBOX.mEditBoxInfo[0][2]
            || uY <= mEDITBOX.mEditBoxInfo[0][1]
            || uY >= mEDITBOX.mEditBoxInfo[0][3])
        {
            if (uX <= mEDITBOX.mEditBoxInfo[1][0]
                || uX >= mEDITBOX.mEditBoxInfo[1][2]
                || uY <= mEDITBOX.mEditBoxInfo[1][1]
                || uY >= mEDITBOX.mEditBoxInfo[1][3])
            {
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[9], tDrawX + 106, tDrawY + 126, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    bIsClick[0] = 1;
                }
                else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[12], tDrawX + 182, tDrawY + 126, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    bIsClick[1] = 1;
                }
            }
            else
            {
                mEDITBOX.Set(2);
            }
        }
        else
        {
            mEDITBOX.Set(1);
        }
    }
}


void MAIN::LBUTTONDOWN(int uX, int uY)
{
    switch (mMainMode)
    {
    case 2:
        LBUTTONDOWN2(uX, uY);
        return;
    case 3:
        LBUTTONDOWN3(uX, uY);
        return;
    case 4:
        LBUTTONDOWN4(uX, uY);
        return;
    case 6:
        LBUTTONDOWN6(uX, uY);
        return;
    case 8:
        LBUTTONDOWN8(uX, uY);
        return;

    default:
        break;
    }
}

void MAIN::LBUTTONUP(int uX, int uY)
{
    switch (mMainMode)
    {
    case 2:
        LBUTTONUP2(uX, uY);
        return;
    case 3:
        LBUTTONUP3(uX, uY);
        return;
    case 4:
        LBUTTONUP4(uX, uY);
        return;
    case 6:
        LBUTTONUP6(uX, uY);
        return;
    case 8:
        LBUTTONUP8(uX, uY);
        return;

    default:
        break;
    }
}
void MAIN::RBUTTONDOWN(int uX, int uY)
{
    switch (mMainMode)
    {
    case 6:
        return;
    }
}
void MAIN::RBUTTONUP(int uX, int uY)
{
    switch (mMainMode)
    {
    case 6:
        return;
    }
}

void MAIN::KEYBOARD()
{
    switch (mMainMode)
    {
    case 6:
        KEYBOARD6();
        break;
    default:
        return;
    }
}

void MAIN::KEYBOARD6()
{
    int sX, sY;
    ITEM_INFO* tITEM;
    int i, j, k;
    int tIndex;


    if (mSubMode == 4 && mMYINFO.mAvatarInfo.aVisibleState)
    {
        for (i = 0; i < mGXD.mKeyboardBufferedDataNum && (mGXD.mKeyboardBufferedData[i].dwData & 0x80) == 0; ++i)
            ;
        if (i == mGXD.mKeyboardBufferedDataNum)
        {
            return;
        }

        if (mGXD.mKeyboardBufferedData[i].dwOfs == 21)
        {
            if (mPLAY.mAVATAR_OBJECT[0].mDATA.aAnimalNumber)
                mANIMALUI.Down(1);
            else
                mANIMALUI.Up(1);
        }
        else if (mCInnerAuto.IsAbleKey(mGAMEOPTION.tShortCutKey, mGXD.mKeyboardBufferedData[i].dwOfs))
        {
            tIndex = -1;
            if (mGAMEOPTION.tShortCutKey == 1)
            {
                switch (mGXD.mKeyboardBufferedData[i].dwOfs)
                {
                case 2:
                    tIndex = 10;
                    break;
                case 3:
                    tIndex = 11;
                    break;
                case 4:
                    tIndex = 12;
                    break;
                case 5:
                    tIndex = 13;
                    break;
                case 41:
                    if (CheckForInventory())
                    {
                        ProcessForGetItem3();
                    }
                    return;
                case 57:
                    if (mPLAY.mAVATAR_OBJECT[0].mDATA.aAnimalNumber && !mPLAY.mAVATAR_OBJECT[0].mDATA.aAnimalAbsorbState)
                    {
                        mBASICUI.Insert1(mMESSAGE.Return(1186), mFONTCOLOR.mData[44]);
                        return;
                    }
                    if (!(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aType % 2))
                    {
                        mMYINFO.A003();
                        return;
                    }
                    mMYINFO.A004();
                    return;
                case 59:
                    tIndex = 0;
                    break;
                case 70:
                    tIndex = 1;
                    break;
                case 61:
                    tIndex = 2;
                    break;
                case 62:
                    tIndex = 3;
                    break;
                case 63:
                    tIndex = 4;
                    break;
                case 64:
                    tIndex = 5;
                    break;
                case 65:
                    tIndex = 6;
                    break;
                case 66:
                    tIndex = 7;
                    break;
                case 67:
                    tIndex = 8;
                    break;
                case 68:
                    tIndex = 9;
                    break;
                default:
                    break;
                }
            }
            else
            {
                switch (mGXD.mKeyboardBufferedData[i].dwOfs)
                {
                case 2:
                    tIndex = 0;
                    break;
                case 3:
                    tIndex = 1;
                    break;
                case 4:
                    tIndex = 2;
                    break;
                case 5:
                    tIndex = 3;
                    break;
                case 6:
                    tIndex = 4;
                    break;
                case 7:
                    tIndex = 5;
                    break;
                case 8:
                    tIndex = 6;
                    break;
                case 9:
                    tIndex = 7;
                    break;
                case 10:
                    tIndex = 8;
                    break;
                case 11:
                    tIndex = 9;
                    break;
                case 16:
                    tIndex = 10;
                    break;
                case 17:
                    tIndex = 11;
                    break;
                case 18:
                    tIndex = 12;
                    break;
                case 19:
                    tIndex = 13;
                    break;
                case 41:
                    if (CheckForInventory())
                    {
                        ProcessForGetItem3();
                    }
                    return;
                case 57:
                    if (mPLAY.mAVATAR_OBJECT[0].mDATA.aAnimalNumber && !mPLAY.mAVATAR_OBJECT[0].mDATA.aAnimalAbsorbState)
                    {
                        mBASICUI.Insert1(mMESSAGE.Return(186), mFONTCOLOR.mData[44]);
                    }
                    else if (mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aType % 2)
                    {
                        mMYINFO.A004();
                    }
                    else
                    {
                        mMYINFO.A003();
                    }
                    return;
                default:
                    break;
                }
            }

            // Main Action
            if (tIndex != -1)
            {
                switch (mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][tIndex][2])
                {
                case 1:
                    if (mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][tIndex][0] == 2 || mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][tIndex][0] == 21 || mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][tIndex][0] == 40 || mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][tIndex][0] == 3 || mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][tIndex][0] == 22 || mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][tIndex][0] == 41)
                    {
                        if (mMYINFO.mHotKeyIndex == tIndex)
                        {
                            mMYINFO.mHotKeyIndex = -1;
                        }
                        else
                        {
                            mMYINFO.mHotKeyIndex = tIndex;
                        }
                    }
                    else
                    {
                        ProcessForSkill2(tIndex, 0, 0, 1, 0);
                    }
                    break;
                case 2:
                    switch (mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][tIndex][0])
                    {
                    case 1:
                        if (CheckForInventory())
                        {
                            ProcessForGetItem3();
                        }
                        break;
                    case 2:
                        if (mPLAY.mAVATAR_OBJECT[0].mDATA.aAnimalNumber && !mPLAY.mAVATAR_OBJECT[0].mDATA.aAnimalAbsorbState)
                        {
                            mBASICUI.Insert1(mMESSAGE.Return(186), mFONTCOLOR.mData[44]);
                            return;
                        }
                        mMYINFO.A021();
                        break;
                    case 3:
                        if (mPLAY.mAVATAR_OBJECT[0].mDATA.aAnimalNumber && !mPLAY.mAVATAR_OBJECT[0].mDATA.aAnimalAbsorbState)
                        {
                            mBASICUI.Insert1(mMESSAGE.Return(186), mFONTCOLOR.mData[44]);
                            return;
                        }
                        mMYINFO.A022();
                        break;
                    case 4:
                        if (mPLAY.mAVATAR_OBJECT[0].mDATA.aAnimalNumber && !mPLAY.mAVATAR_OBJECT[0].mDATA.aAnimalAbsorbState)
                        {
                            mBASICUI.Insert1(mMESSAGE.Return(186), mFONTCOLOR.mData[44]);
                            return;
                        }
                        mMYINFO.A023();
                        break;
                    case 5:
                        if (mPLAY.mAVATAR_OBJECT[0].mDATA.aAnimalNumber && !mPLAY.mAVATAR_OBJECT[0].mDATA.aAnimalAbsorbState)
                        {
                            mBASICUI.Insert1(mMESSAGE.Return(186), mFONTCOLOR.mData[44]);
                            return;
                        }
                        if (mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort == 19)
                        {
                            mMYINFO.A019();
                        }
                        else
                        {
                            mMYINFO.A018();
                        }
                        break;
                    case 6:
                        if (mPLAY.mAVATAR_OBJECT[0].mDATA.aAnimalNumber && !mPLAY.mAVATAR_OBJECT[0].mDATA.aAnimalAbsorbState)
                        {
                            mBASICUI.Insert1(mMESSAGE.Return(186), mFONTCOLOR.mData[44]);
                            return;
                        }
                        mMYINFO.A015();
                        break;
                    case 7:
                        if (mPLAY.mAVATAR_OBJECT[0].mDATA.aAnimalNumber && !mPLAY.mAVATAR_OBJECT[0].mDATA.aAnimalAbsorbState)
                        {
                            mBASICUI.Insert1(mMESSAGE.Return(186), mFONTCOLOR.mData[44]);
                            return;
                        }
                        mMYINFO.A014();
                        break;
                    case 8:
                        if (mPLAY.mAVATAR_OBJECT[0].mDATA.aAnimalNumber && !mPLAY.mAVATAR_OBJECT[0].mDATA.aAnimalAbsorbState)
                        {
                            mBASICUI.Insert1(mMESSAGE.Return(186), mFONTCOLOR.mData[44]);
                            return;
                        }
                        mMYINFO.A016(0);
                        break;
                    case 9:
                        if (mPLAY.mAVATAR_OBJECT[0].mDATA.aAnimalNumber && !mPLAY.mAVATAR_OBJECT[0].mDATA.aAnimalAbsorbState)
                        {
                            mBASICUI.Insert1(mMESSAGE.Return(186), mFONTCOLOR.mData[44]);
                            return;
                        }
                        if (!(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aType % 2))
                        {
                            mMYINFO.A003();
                            return;
                        }
                        mMYINFO.A004();
                        break;

                    default:
                        return;
                    }
                    break;
                case 3:
                    tITEM = mITEM.Search(mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][tIndex][0]);
                    if (tITEM)
                    {
                        switch (tITEM->iPotionType[0])
                        {
                        case 1:
                            if (mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue < mFACTOR.GetMaxLife() && !mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                            {
                                goto USE;
                            }
                            break;
                        case 2:
                            if (mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue < mFACTOR.GetMaxLife() && !mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                            {
                                goto USE;
                            }
                            break;
                        case 3:
                            if (mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue < mFACTOR.GetMaxMana() && !mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                            {
                                goto USE;
                            }
                            break;
                        case 4:
                            if (mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue < mFACTOR.GetMaxMana() && !mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                            {
                                goto USE;
                            }
                            break;
                        case 5:
                            if ((mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue < mFACTOR.GetMaxLife() || mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue < mFACTOR.GetMaxMana()) && !mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                            {
                                goto USE;
                            }
                            break;
                        case 6:
                            if (mMYINFO.mAvatarInfo.aEquip[8][0] >= 1 && !mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                            {
                                tITEM = mITEM.Search(mMYINFO.mAvatarInfo.aEquip[8][0]);
                                if (tITEM)
                                {
                                    if (tITEM->iSort == 22)
                                    {
                                        goto USE;
                                    }
                                }
                            }
                            break;
                        case 9:
                            if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                            {
                                goto USE;
                            }
                            break;
                        case 12:
                            if (!mZONEMAININFO.CheckLevelBattleZoneNumber2() && !mZONEMAININFO.Check267TypeZoneNumber2())
                            {
                                goto USE;
                            }
                            if (!mUTIL.CheckPossibleEatPotionAttack(mMYINFO.mPresentZoneNumber))
                            {
                                mBASICUI.Insert1(mMESSAGE.Return(1149), mFONTCOLOR.mData[44]);
                                return;
                            }
                            if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                            {
                                goto USE;
                            }
                            break;
                        case 13:
                            if (mMYINFO.mAvatarInfo.aLevel1 >= 70 || mZONEMAININFO.CheckLevelBattleZoneNumber2())
                            {
                                if (mUTIL.CheckPossibleEatPotionAttack(mMYINFO.mPresentZoneNumber))
                                {
                                    if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                                    {
                                        goto USE;
                                    }
                                }
                                else
                                {
                                    mBASICUI.Insert1(mMESSAGE.Return(1149), mFONTCOLOR.mData[44]);
                                    return;
                                }
                            }
                            else
                            {
                                mBASICUI.Insert1(mMESSAGE.Return(1150), mFONTCOLOR.mData[44]);
                                return;
                            }
                            break;
                        case 14:
                        case 15:
                            if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                            {
                                goto USE;
                            }
                            break;
                        case 16:
                            if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                            {
                            USE:
                                mTRANSFER.T_USE_HOTKEY_ITEM_SEND(mMYINFO.mHotKeyPage, tIndex);
                                mMYINFO.mNetworkLock = 1;
                                mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                            }
                            break;

                        default:
                            return;
                        }
                    }
                    break;

                default:
                    break;
                }
            }
        }
    }
}
BOOL MAIN::KEYBOARD6_FOR_SKILL()
{
    int tHotkeyIndex;

    if (mMYINFO.mCheckSendActionPacket || !mPLAY.CheckPossibleChangeAction())
        return 0;
    if (mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSkillNumber > 0 || mEDITBOX.mDataIndex)
        return 0;
    tHotkeyIndex = -1;
    if (!mCInnerAuto.IsAbleKey(mGAMEOPTION.tShortCutKey, 0))
        return 0;
    if (mGAMEOPTION.tShortCutKey == 1)
    {
        if ((mGXD.mKeyboardImmediateData[59] & 0x80) != 0)
            tHotkeyIndex = 0;
        if ((mGXD.mKeyboardImmediateData[60] & 0x80) != 0)
            tHotkeyIndex = 1;
        if ((mGXD.mKeyboardImmediateData[61] & 0x80) != 0)
            tHotkeyIndex = 2;
        if ((mGXD.mKeyboardImmediateData[62] & 0x80) != 0)
            tHotkeyIndex = 3;
        if ((mGXD.mKeyboardImmediateData[63] & 0x80) != 0)
            tHotkeyIndex = 4;
        if ((mGXD.mKeyboardImmediateData[64] & 0x80) != 0)
            tHotkeyIndex = 5;
        if ((mGXD.mKeyboardImmediateData[65] & 0x80) != 0)
            tHotkeyIndex = 6;
        if ((mGXD.mKeyboardImmediateData[66] & 0x80) != 0)
            tHotkeyIndex = 7;
        if ((mGXD.mKeyboardImmediateData[67] & 0x80) != 0)
            tHotkeyIndex = 8;
        if ((mGXD.mKeyboardImmediateData[68] & 0x80) != 0)
            tHotkeyIndex = 9;
        if ((mGXD.mKeyboardImmediateData[2] & 0x80) != 0)
            tHotkeyIndex = 10;
        if ((mGXD.mKeyboardImmediateData[3] & 0x80) != 0)
            tHotkeyIndex = 11;
        if ((mGXD.mKeyboardImmediateData[4] & 0x80) != 0)
            tHotkeyIndex = 12;
        if ((mGXD.mKeyboardImmediateData[5] & 0x80) != 0)
            tHotkeyIndex = 13;
    }
    else
    {
        if ((mGXD.mKeyboardImmediateData[2] & 0x80) != 0)
            tHotkeyIndex = 0;
        if ((mGXD.mKeyboardImmediateData[3] & 0x80) != 0)
            tHotkeyIndex = 1;
        if ((mGXD.mKeyboardImmediateData[4] & 0x80) != 0)
            tHotkeyIndex = 2;
        if ((mGXD.mKeyboardImmediateData[5] & 0x80) != 0)
            tHotkeyIndex = 3;
        if ((mGXD.mKeyboardImmediateData[6] & 0x80) != 0)
            tHotkeyIndex = 4;
        if ((mGXD.mKeyboardImmediateData[7] & 0x80) != 0)
            tHotkeyIndex = 5;
        if ((mGXD.mKeyboardImmediateData[8] & 0x80) != 0)
            tHotkeyIndex = 6;
        if ((mGXD.mKeyboardImmediateData[9] & 0x80) != 0)
            tHotkeyIndex = 7;
        if ((mGXD.mKeyboardImmediateData[10] & 0x80) != 0)
            tHotkeyIndex = 8;
        if ((mGXD.mKeyboardImmediateData[11] & 0x80) != 0)
            tHotkeyIndex = 9;
        if ((mGXD.mKeyboardImmediateData[16] & 0x80) != 0)
            tHotkeyIndex = 10;
        if ((mGXD.mKeyboardImmediateData[17] & 0x80) != 0)
            tHotkeyIndex = 11;
        if ((mGXD.mKeyboardImmediateData[18] & 0x80) != 0)
            tHotkeyIndex = 12;
        if ((mGXD.mKeyboardImmediateData[19] & 0x80) != 0)
            tHotkeyIndex = 13;
    }
    if (tHotkeyIndex == -1)
        return 0;
    if (mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][tHotkeyIndex][2] != 1)
        return 0;
    if (mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][tHotkeyIndex][0] == 2
        || mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][tHotkeyIndex][0] == 21
        || mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][tHotkeyIndex][0] == 40
        || mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][tHotkeyIndex][0] == 3
        || mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][tHotkeyIndex][0] == 22
        || mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][tHotkeyIndex][0] == 41)
    {
        return 1;
    }

    return ProcessForSkill2(tHotkeyIndex, 0, 0, 0, 0);
}

void MAIN::TW_LOGIN_SEND(char* tID, char* tPassword, int tVersion, int* tResult)
{
    char mBuffer[1000];
    int tSize;
    int tSendSize = 0;
    int tRecvSize = 0;
    int tTotalSendSize = 0;
    int tTotalRecvSize = 0;
    int mResult = 0;
    int tCP1;
    int tCP2;
    int tCP3;
    char* tStr;
    TW_LOGIN_RECV_DATA mDATA;
    HW_PROFILE_INFO hwid;

    GetCurrentHwProfile(&hwid);

    mBuffer[7] = mNETWORK.mPacketEncryption[1];
    mBuffer[8] = P_LOGIN_SEND;
    CopyMemory(&mBuffer[9], tID, MAX_USER_ID_LENGTH);
    CopyMemory(&mBuffer[9 + MAX_USER_ID_LENGTH], tPassword, MAX_USER_PASSWORD_LENGTH);
    CopyMemory(&mBuffer[9 + MAX_USER_ID_LENGTH + MAX_USER_PASSWORD_LENGTH], &tVersion, 4);
    CopyMemory(&mBuffer[13 + MAX_USER_ID_LENGTH + MAX_USER_PASSWORD_LENGTH], &hwid.szHwProfileGuid, HW_PROFILE_GUIDLEN);
    tSize = S_LOGIN_SEND;

    for (int i = 0; i < tSize; i++)
    {
        mBuffer[i] ^= mNETWORK.mPacketEncryption[0];
    }
    while (tSize > 0)
    {
        tSendSize = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], tSize, 0);
        if (tSendSize == -1)
        {
            mNETWORK.CLOSE();
            *tResult = 101;
            return;
        }
        tSize -= tSendSize;
        tTotalSendSize += tSendSize;
    }
    mNETWORK.mPacketEncryption[1]++;
    while(1)
    {
        tRecvSize = recv(mNETWORK.mSocket, &mNETWORK.mBuffer[tTotalRecvSize], 200000 - tTotalRecvSize, 0);
        if (tRecvSize <= 0)
        {
            mNETWORK.CLOSE();
            *tResult = 102;
            return;
        }
        tTotalRecvSize += tRecvSize;
        if ( tTotalRecvSize == sizeof(TW_LOGIN_RECV_DATA) )
        {
            break;
        }
    }
    CopyMemory(&mDATA, &mNETWORK.mBuffer[0], sizeof(TW_LOGIN_RECV_DATA));

    CopyMemory(&mResult, &mDATA.tResult, 4);
    *tResult = mResult;
    if (mResult == 0)
    {
        CopyMemory(&mMYINFO.uID, &mDATA.uID, MAX_USER_ID_LENGTH);
        CopyMemory(&mMYINFO.uUserSort, &mDATA.uUserSort, 4);
        CopyMemory(&mMYINFO.uLoginPremium, &mDATA.uLoginPremium, 4);
        CopyMemory(&mMYINFO.mSecondLoginSort, &mDATA.mSecondLoginSort, 4);
        CopyMemory(&mMYINFO.mMousePassword, &mDATA.mMousePassword, MAX_MOUSE_PASSWORD_LENGTH);
        CopyMemory(&mMYINFO.mWebItem, &mDATA.mWebItem, 200);
        CopyMemory(&mMYINFO.mSelectAvatarInfo[0], &mDATA.mSelectAvtInfo1, sizeof(AVATAR_INFO));
        CopyMemory(&mMYINFO.mSelectAvatarInfo[1], &mDATA.mSelectAvtInfo2, sizeof(AVATAR_INFO));
        CopyMemory(&mMYINFO.mSelectAvatarInfo[2], &mDATA.mSelectAvtInfo3, sizeof(AVATAR_INFO));
    }
}
void MAIN::TW_CLIENT_OK_FOR_LOGIN_SEND(int* tResult)
{
    char mBuffer[1000];
    int tLen = 0;
    int i = 0;
    int tSendSize = 0;
    int tSendIndex = 0;


    mBuffer[7] = mNETWORK.mPacketEncryption[1];
    mBuffer[8] = 12;
    tLen = 9;

    for (i = 0; i < tLen; i++)
    {
        mBuffer[i] ^= mNETWORK.mPacketEncryption[0];
    }
    while (tLen > 0)
    {
        tSendSize = send(mNETWORK.mSocket, &mBuffer[tSendIndex], tLen, 0);
        if (tSendSize == SOCKET_ERROR)
        {
            mNETWORK.CLOSE();
            *tResult = 101;
            return;
        }
        tLen -= tSendSize;
        tSendIndex += tSendSize;
    }
    mNETWORK.mPacketEncryption[1]++;
    *tResult = 0;
}
void MAIN::TW_CREATE_MOUSE_PASSWORD_SEND(char* tInputText, int* tResult)
{
    char mBuffer[1000];
    char tRecvBuffer[1000];
    int tLen = 0;
    int i = 0;
    int tSendSize = 0;
    int tSendIndex = 0;
    int tRecvSize = 0;
    int tTotalRecvSize = 0;
    int tRecvResult = 0;

    mBuffer[7] = mNETWORK.mPacketEncryption[1];
    mBuffer[8] = P_CREATE_MOUSE_PASSWORD_SEND;
    CopyMemory(&mBuffer[9], tInputText, 5);
    tLen = S_CREATE_MOUSE_PASSWORD_SEND;

    for (i = 0; i < tLen; i++)
    {
        mBuffer[i] ^= mNETWORK.mPacketEncryption[0];
    }
    while (tLen > 0)
    {
        tSendSize = send(mNETWORK.mSocket, &mBuffer[tSendIndex], tLen, 0);
        if (tSendSize == SOCKET_ERROR)
        {
            mNETWORK.CLOSE();
            *tResult = 101;
            return;
        }
        tLen -= tSendSize;
        tSendIndex += tSendSize;
    }
    mNETWORK.mPacketEncryption[1]++;
    while (TRUE)
    {
        tRecvSize = recv(mNETWORK.mSocket, &mNETWORK.mBuffer[tTotalRecvSize], 200000 - tTotalRecvSize, 0);
        if (tRecvSize <= 0)
        {
            mNETWORK.CLOSE();
            *tResult = 102;
            return;
        }
        tTotalRecvSize += tRecvSize;
        if (tTotalRecvSize == 10)
        {
            break;
        }
    }
    CopyMemory(&tRecvResult, &mNETWORK.mBuffer[1], 4);
    *tResult = tRecvResult;
    if (!tRecvResult)
    {
        mMYINFO.mSecondLoginSort = 0;
        CopyMemory(&mMYINFO.mMousePassword, &mNETWORK.mBuffer[5], 5);
    }
}
void MAIN::TW_LOGIN_MOUSE_PASSWORD_SEND(char* tInputText, int* tResult)
{
    char mBuffer[1000];
    char tRecvBuffer[1000];
    int tLen = 0;
    int i = 0;
    int tSendSize = 0;
    int tSendIndex = 0;
    int tRecvSize = 0;
    int tTotalRecvSize = 0;
    int tRecvResult = 0;

    mBuffer[7] = mNETWORK.mPacketEncryption[1];
    mBuffer[8] = P_LOGIN_MOUSE_PASSWORD_SEND;
    CopyMemory(&mBuffer[9], tInputText, 5);
    tLen = S_LOGIN_MOUSE_PASSWORD_SEND;

    for (i = 0; i < tLen; i++)
    {
        mBuffer[i] ^= mNETWORK.mPacketEncryption[0];
    }
    while (tLen > 0)
    {
        tSendSize = send(mNETWORK.mSocket, &mBuffer[tSendIndex], tLen, 0);
        if (tSendSize == SOCKET_ERROR)
        {
            mNETWORK.CLOSE();
            *tResult = 101;
            return;
        }
        tLen -= tSendSize;
        tSendIndex += tSendSize;
    }
    mNETWORK.mPacketEncryption[1]++;
    while (TRUE)
    {
        tRecvSize = recv(mNETWORK.mSocket, &mNETWORK.mBuffer[tTotalRecvSize], 200000 - tTotalRecvSize, 0);
        if (tRecvSize <= 0)
        {
            mNETWORK.CLOSE();
            *tResult = 102;
            return;
        }
        tTotalRecvSize += tRecvSize;
        if (tTotalRecvSize == 5)
        {
            break;
        }
    }
    CopyMemory(&tRecvResult, &mNETWORK.mBuffer[1], 4);
    *tResult = tRecvResult;
    if (!tRecvResult)
    {
        mMYINFO.mSecondLoginSort = 0;
    }
}
void MAIN::TW_CHANGE_MOUSE_PASSWORD_SEND(char* tInputText, char* tInputText2, int* tResult)
{
    char mBuffer[1000];
    int tLen = 0;
    int i = 0;
    int tSendSize = 0;
    int tSendIndex = 0;
    int tRecvSize = 0;
    int tTotalRecvSize = 0;
    int tRecvResult = 0;

    mBuffer[7] = mNETWORK.mPacketEncryption[1];
    mBuffer[8] = P_CHANGE_MOUSE_PASSWORD_SEND;
    CopyMemory(&mBuffer[9], tInputText, 5);
    CopyMemory(&mBuffer[14], tInputText2, 5);
    tLen = S_CHANGE_MOUSE_PASSWORD_SEND;

    for (i = 0; i < tLen; i++)
    {
        mBuffer[i] ^= mNETWORK.mPacketEncryption[0];
    }
    while (tLen > 0)
    {
        tSendSize = send(mNETWORK.mSocket, &mBuffer[tSendIndex], tLen, 0);
        if (tSendSize == SOCKET_ERROR)
        {
            mNETWORK.CLOSE();
            *tResult = 101;
            return;
        }
        tLen -= tSendSize;
        tSendIndex += tSendSize;
    }
    mNETWORK.mPacketEncryption[1]++;
    while (TRUE)
    {
        tRecvSize = recv(mNETWORK.mSocket, &mNETWORK.mBuffer[tTotalRecvSize], 200000 - tTotalRecvSize, 0);
        if (tRecvSize <= 0)
        {
            mNETWORK.CLOSE();
            *tResult = 102;
            return;
        }
        tTotalRecvSize += tRecvSize;
        if (tTotalRecvSize == 10)
        {
            break;
        }
    }
    CopyMemory(&tRecvResult, &mNETWORK.mBuffer[1], 4);
    *tResult = tRecvResult;
    if (!tRecvResult)
    {
        mMYINFO.mSecondLoginSort = 0;
        CopyMemory(&mMYINFO.mMousePassword, &mNETWORK.mBuffer[5], 5);
    }
}
void MAIN::TW_CREATE_AVATAR_SEND(int tAvatarSort, AVATAR_INFO* tAvtInfo, int* tResult)
{
    char mBuffer[50000];
    int tSize;
    int tSendSize = 0;
    int tRecvSize = 0;
    int tTotalSendSize = 0;
    int tTotalRecvSize = 0;
    int mResult = 0;
    int tCP1;
    int tCP2;
    int tCP3;
    char* tStr;
    TW_CREATE_AVATAR_DATA mDATA;

    mBuffer[7] = mNETWORK.mPacketEncryption[1];
    mBuffer[8] = P_CREATE_AVATAR_SEND;
    CopyMemory(&mBuffer[9], &tAvatarSort, 4);
    CopyMemory(&mBuffer[13], tAvtInfo, sizeof(AVATAR_INFO));
    tSize = S_CREATE_AVATAR_SEND;

    for (int i = 0; i < tSize; i++)
        mBuffer[i] ^= mNETWORK.mPacketEncryption[0];
    while (tSize > 0)
    {
        tSendSize = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], tSize, 0);
        if (tSendSize == -1)
        {
            mNETWORK.CLOSE();
            *tResult = 101;
            return;
        }
        tSize -= tSendSize;
        tTotalSendSize += tSendSize;
    }
    mNETWORK.mPacketEncryption[1]++;
    while(TRUE)
    {
        tRecvSize = recv(mNETWORK.mSocket, &mNETWORK.mBuffer[tTotalRecvSize], 200000 - tTotalRecvSize, 0);
        if (tRecvSize <= 0)
        {
            mNETWORK.CLOSE();
            *tResult = 102;
            return;
        }
        tTotalRecvSize += tRecvSize;
        if (tTotalRecvSize == sizeof(TW_CREATE_AVATAR_DATA))
        {
            break;
        }
    }
    CopyMemory(&mDATA, &mNETWORK.mBuffer[0], sizeof(TW_CREATE_AVATAR_DATA));

    CopyMemory(&mResult, &mDATA.tResult, 4);
    *tResult = mResult;
    if (mResult == 0)
    {
        CopyMemory(&mMYINFO.mSelectAvatarInfo[tAvatarSort], &mDATA.tAvatarInfo, sizeof(AVATAR_INFO));
    }
}
void MAIN::TW_DELETE_AVATAR_SEND(int tSelectAvtIndex, int tSort, int tValue, int* tResult)
{
    char mBuffer[1000];
    int tSize;
    int tSendSize = 0;
    int tRecvSize = 0;
    int tTotalSendSize = 0;
    int tTotalRecvSize = 0;
    int mResult = 0;
    int tCP1;
    int tCP2;
    int tCP3;
    char* tStr;

    mBuffer[7] = mNETWORK.mPacketEncryption[1];
    mBuffer[8] = P_DELETE_AVATAR_SEND;
    CopyMemory(&mBuffer[9], &tSelectAvtIndex, 4);
    CopyMemory(&mBuffer[13], &tSort, 4);
    CopyMemory(&mBuffer[17], &tValue, 4);
    tSize = S_DELETE_AVATAR_SEND;

    for (int i = 0; i < tSize; i++)
        mBuffer[i] ^= mNETWORK.mPacketEncryption[0];
    while (tSize > 0)
    {
        tSendSize = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], tSize, 0);
        if (tSendSize == -1)
        {
            mNETWORK.CLOSE();
            *tResult = 101;
            return;
        }
        tSize -= tSendSize;
        tTotalSendSize += tSendSize;
    }
    mNETWORK.mPacketEncryption[1]++;
    while(TRUE)
    {
        tRecvSize = recv(mNETWORK.mSocket, &mNETWORK.mBuffer[tTotalRecvSize], 200000 - tTotalRecvSize, 0);
        if (tRecvSize <= 0)
        {
            mNETWORK.CLOSE();
            *tResult = 102;
            return;
        }
        tTotalRecvSize += tRecvSize;
        if (tTotalRecvSize == 5)
        {
            break;
        }
    }
    CopyMemory(&mResult, &mNETWORK.mBuffer[1], 4);
    *tResult = mResult;
}

void MAIN::TW_FAIL_MOVE_ZONE_1_SEND(int* tResult)
{
    char mBuffer[1000];
    int tLen = 0;
    int i = 0;
    int tSendSize = 0;
    int tSendIndex = 0;


    mBuffer[7] = mNETWORK.mPacketEncryption[1];
    mBuffer[8] = P_FAIL_MOVE_ZONE_1_SEND;
    tLen = S_FAIL_MOVE_ZONE_1_SEND;

    for (i = 0; i < tLen; i++)
    {
        mBuffer[i] ^= mNETWORK.mPacketEncryption[0];
    }
    while (tLen > 0)
    {
        tSendSize = send(mNETWORK.mSocket, &mBuffer[tSendIndex], tLen, 0);
        if (tSendSize == SOCKET_ERROR)
        {
            mNETWORK.CLOSE();
            *tResult = 101;
            return;
        }
        tLen -= tSendSize;
        tSendIndex += tSendSize;
    }
    mNETWORK.mPacketEncryption[1]++;
    *tResult = 0;
}

void MAIN::TW_DEMAND_ZONE_SERVER_INFO_1(int tSelectAvtIndex, char* tIP, int* tPort, int* tZone, int* tResult)
{
    char mBuffer[1000];
    char tRecvBuffer[1000];
    int tLen = 0;
    int i = 0;
    int tSendSize = 0;
    int tSendIndex = 0;
    int tRecvSize = 0;
    int tTotalRecvSize = 0;
    int tRecvResult = 0;

    mBuffer[7] = mNETWORK.mPacketEncryption[1];
    mBuffer[8] = P_DEMAND_ZONE_SERVER_INFO_1_SEND;
    CopyMemory(&mBuffer[9], &tSelectAvtIndex, 4);
    tLen = S_DEMAND_ZONE_SERVER_INFO_1_SEND;

    for (i = 0; i < tLen; i++)
    {
        mBuffer[i] ^= mNETWORK.mPacketEncryption[0];
    }
    while (tLen > 0)
    {
        tSendSize = send(mNETWORK.mSocket, &mBuffer[tSendIndex], tLen, 0);
        if (tSendSize == SOCKET_ERROR)
        {
            mNETWORK.CLOSE();
            *tResult = 101;
            return;
        }
        tLen -= tSendSize;
        tSendIndex += tSendSize;
    }
    mNETWORK.mPacketEncryption[1]++;
    while (TRUE)
    {
        tRecvSize = recv(mNETWORK.mSocket, &mNETWORK.mBuffer[tTotalRecvSize], 200000 - tTotalRecvSize, 0);
        if (tRecvSize <= 0)
        {
            mNETWORK.CLOSE();
            *tResult = 102;
            return;
        }
        tTotalRecvSize += tRecvSize;
        if (tTotalRecvSize == 29)
        {
            break;
        }
    }
    CopyMemory(&tRecvResult, &mNETWORK.mBuffer[1], 4);
    *tResult = tRecvResult;
    if (!tRecvResult)
    {
        CopyMemory(tIP, &mNETWORK.mBuffer[5], 16);
        CopyMemory(tPort, &mNETWORK.mBuffer[21], 4);
        CopyMemory(tZone, &mNETWORK.mBuffer[25], 4);
        mNPCUI.mDemandBloodShopInfo = 0;
    }
}
void MAIN::TW_DEMAND_GIFT_SEND(int* tResult)
{
    char mBuffer[1000];
    char tRecvBuffer[1000];
    int tLen = 0;
    int i = 0;
    int tSendSize = 0;
    int tSendIndex = 0;
    int tRecvSize = 0;
    int tTotalRecvSize = 0;
    int tRecvResult = 0;

    mBuffer[7] = mNETWORK.mPacketEncryption[1];
    mBuffer[8] = P_DEMAND_GIFT_SEND;
    tLen = S_DEMAND_GIFT_SEND;

    for (i = 0; i < tLen; i++)
    {
        mBuffer[i] ^= mNETWORK.mPacketEncryption[0];
    }
    while (tLen > 0)
    {
        tSendSize = send(mNETWORK.mSocket, &mBuffer[tSendIndex], tLen, 0);
        if (tSendSize == SOCKET_ERROR)
        {
            mNETWORK.CLOSE();
            *tResult = 101;
            return;
        }
        tLen -= tSendSize;
        tSendIndex += tSendSize;
    }
    mNETWORK.mPacketEncryption[1]++;
    while (TRUE)
    {
        tRecvSize = recv(mNETWORK.mSocket, &mNETWORK.mBuffer[tTotalRecvSize], 200000 - tTotalRecvSize, 0);
        if (tRecvSize <= 0)
        {
            mNETWORK.CLOSE();
            *tResult = 102;
            return;
        }
        tTotalRecvSize += tRecvSize;
        if (tTotalRecvSize == 85)
        {
            break;
        }
    }
    CopyMemory(&tRecvResult, &mNETWORK.mBuffer[1], 4);
    *tResult = tRecvResult;
    if (!tRecvResult)
    {
        CopyMemory(&mMYINFO.mGiftItem, &mNETWORK.mBuffer[5], 80);
    }
}
void MAIN::TW_WANT_GIFT_SEND(int tSort, int tGiftIndex, int* tResult)
{
    char mBuffer[1000];
    char tRecvBuffer[1000];
    int tLen = 0;
    int i = 0;
    int tSendSize = 0;
    int tSendIndex = 0;
    int tRecvSize = 0;
    int tTotalRecvSize = 0;
    int tRecvResult = 0;

    mBuffer[7] = mNETWORK.mPacketEncryption[1];
    mBuffer[8] = P_WANT_GIFT_SEND;
    CopyMemory(&mBuffer[9], &tSort, 4);
    CopyMemory(&mBuffer[13], &tGiftIndex, 4);
    tLen = S_WANT_GIFT_SEND;

    for (i = 0; i < tLen; i++)
    {
        mBuffer[i] ^= mNETWORK.mPacketEncryption[0];
    }
    while (tLen > 0)
    {
        tSendSize = send(mNETWORK.mSocket, &mBuffer[tSendIndex], tLen, 0);
        if (tSendSize == SOCKET_ERROR)
        {
            mNETWORK.CLOSE();
            *tResult = 101;
            return;
        }
        tLen -= tSendSize;
        tSendIndex += tSendSize;
    }
    mNETWORK.mPacketEncryption[1]++;
    while (TRUE)
    {
        tRecvSize = recv(mNETWORK.mSocket, &mNETWORK.mBuffer[tTotalRecvSize], 200000 - tTotalRecvSize, 0);
        if (tRecvSize <= 0)
        {
            mNETWORK.CLOSE();
            *tResult = 102;
            return;
        }
        tTotalRecvSize += tRecvSize;
        if (tTotalRecvSize == 5)
        {
            break;
        }
    }
    CopyMemory(&tRecvResult, &mNETWORK.mBuffer[1], 4);
    *tResult = tRecvResult;
    if (!tRecvResult)
    {
        if (tSort == 1)
        {
            mMYINFO.mGiftItem[tGiftIndex][0] = 0;
            mMYINFO.mGiftItem[tGiftIndex][1] = 0;
        }
        else
        {
            mMYINFO.mWebItem[tGiftIndex] = 0;
        }
    }
}
void MAIN::TW_DEMAND_WEBMALL_SEND()
{
    char mBuffer[1000];
    int tLen = 0;
    int i = 0;
    int tSendSize = 0;
    int tSendIndex = 0;
    int tRecvSize = 0;
    int tTotalRecvSize = 0;
    int tRecvResult = 0;
    int tResult = 0;
    int tPageNum;
    char* tstr;


    mBuffer[7] = mNETWORK.mPacketEncryption[1];
    mBuffer[8] = P_DEMAND_WEBMALL_SEND;
    tLen = S_DEMAND_WEBMALL_SEND;

    for (i = 0; i < tLen; i++)
    {
        mBuffer[i] ^= mNETWORK.mPacketEncryption[0];
    }
    while (tLen > 0)
    {
        tSendSize = send(mNETWORK.mSocket, &mBuffer[tSendIndex], tLen, 0);
        if (tSendSize == SOCKET_ERROR)
        {
            mNETWORK.CLOSE();
            tResult = 101;
            return;
        }
        tLen -= tSendSize;
        tSendIndex += tSendSize;
    }
    mNETWORK.mPacketEncryption[1]++;
    while (TRUE)
    {
        tRecvSize = recv(mNETWORK.mSocket, &mNETWORK.mBuffer[tTotalRecvSize], 200000 - tTotalRecvSize, 0);
        if (tRecvSize <= 0)
        {
            mNETWORK.CLOSE();
            tResult = 102;
            return;
        }
        tTotalRecvSize += tRecvSize;
        if (tTotalRecvSize == 813)
        {
            break;
        }
    }
    CopyMemory(&tRecvResult, &mNETWORK.mBuffer[1], 4);
    CopyMemory(&mMYINFO.mAvatarInfo.aLoginGameWebMallPoints, &mNETWORK.mBuffer[5], 4);
    CopyMemory(&tPageNum, &mNETWORK.mBuffer[9], 4);
    CopyMemory(&mLoginWebmallInfo, &mNETWORK.mBuffer[13], 800);
    tLoginWebMallMaxPage = tPageNum / 10;
    if (tResult != 101 && tResult != 102)
    {
        if (tRecvResult)
        {
            tLoginWebMallState = 1;
        }
        else
        {
            tstr = mMESSAGE.Return(1857);
            mMBOXUI.Set(1, tstr, "");
        }
    }
}
void MAIN::TW_BUY_WEBMALL_SEND(int tIndex, int* tResult)
{
    char mBuffer[1000];
    int tLen = 0;
    int i = 0;
    int tSendSize = 0;
    int tSendIndex = 0;
    int tRecvSize = 0;
    int tTotalRecvSize = 0;
    int tRecvResult = 0;


    mBuffer[7] = mNETWORK.mPacketEncryption[1];
    mBuffer[8] = P_BUY_WEBMALL_SEND;
    CopyMemory(&mBuffer[9], &tIndex, 4);
    tLen = S_BUY_WEBMALL_SEND;

    for (i = 0; i < tLen; i++)
    {
        mBuffer[i] ^= mNETWORK.mPacketEncryption[0];
    }
    while (tLen > 0)
    {
        tSendSize = send(mNETWORK.mSocket, &mBuffer[tSendIndex], tLen, 0);
        if (tSendSize == SOCKET_ERROR)
        {
            mNETWORK.CLOSE();
            *tResult = 101;
            return;
        }
        tLen -= tSendSize;
        tSendIndex += tSendSize;
    }
    mNETWORK.mPacketEncryption[1]++;
    while (TRUE)
    {
        tRecvSize = recv(mNETWORK.mSocket, &mNETWORK.mBuffer[tTotalRecvSize], 200000 - tTotalRecvSize, 0);
        if (tRecvSize <= 0)
        {
            mNETWORK.CLOSE();
            *tResult = 102;
            return;
        }
        tTotalRecvSize += tRecvSize;
        if (tTotalRecvSize == 9)
        {
            break;
        }
    }
    CopyMemory(&tRecvResult, &mNETWORK.mBuffer[1], 4);
    *tResult = tRecvResult;
    CopyMemory(&mMYINFO.mAvatarInfo.aLoginGameWebMallPoints, &mNETWORK.mBuffer[5], 4);
}
void MAIN::TW_CHANGE_AVATAR_NAME_SEND(int tSelectAvtIndex, char* tAvtName, int tPage, int tIndex, int* tResult)
{
    char mBuffer[1000];
    int tLen = 0;
    int i = 0;
    int tSendSize = 0;
    int tSendIndex = 0;
    int tRecvSize = 0;
    int tTotalRecvSize = 0;
    int tRecvResult = 0;
    char* tstr;

    mBuffer[7] = mNETWORK.mPacketEncryption[1];
    mBuffer[8] = P_CHANGE_AVATAR_NAME_SEND;
    CopyMemory(&mBuffer[9], &tSelectAvtIndex, 4);
    CopyMemory(&mBuffer[13], tAvtName, MAX_AVATAR_NAME_LENGTH);
    CopyMemory(&mBuffer[26], &tPage, 4);
    CopyMemory(&mBuffer[30], &tIndex, 4);
    tLen = S_CHANGE_AVATAR_NAME_SEND;

    for (i = 0; i < tLen; i++)
    {
        mBuffer[i] ^= mNETWORK.mPacketEncryption[0];
    }
    while (tLen > 0)
    {
        tSendSize = send(mNETWORK.mSocket, &mBuffer[tSendIndex], tLen, 0);
        if (tSendSize == SOCKET_ERROR)
        {
            mNETWORK.CLOSE();
            *tResult = 101;
            return;
        }
        tLen -= tSendSize;
        tSendIndex += tSendSize;
    }
    mNETWORK.mPacketEncryption[1]++;
    while (TRUE)
    {
        tRecvSize = recv(mNETWORK.mSocket, &mNETWORK.mBuffer[tTotalRecvSize], 200000 - tTotalRecvSize, 0);
        if (tRecvSize <= 0)
        {
            mNETWORK.CLOSE();
            *tResult = 102;
            return;
        }
        tTotalRecvSize += tRecvSize;
        if (tTotalRecvSize == 5)
        {
            break;
        }
    }
    CopyMemory(&tRecvResult, &mNETWORK.mBuffer[1], 4);
    *tResult = tRecvResult;
    if (tRecvResult)
    {
        if (tRecvResult == 4)
        {
            tstr = mMESSAGE.Return(2339);
            mMBOXUI.Set(1, tstr, "");
        }
    }
    else
    {
        strcpy(mMYINFO.mSelectAvatarInfo[tSelectAvtIndex].aName, tAvtName);
        if (mMYINFO.mSelectAvatarInfo[tSelectAvtIndex].aInventory[tPage][tIndex][0] == 1133)
        {
            mMYINFO.mSelectAvatarInfo[tSelectAvtIndex].aInventory[tPage][tIndex][0] = 0;
            mMYINFO.mSelectAvatarInfo[tSelectAvtIndex].aInventory[tPage][tIndex][1] = 0;
            mMYINFO.mSelectAvatarInfo[tSelectAvtIndex].aInventory[tPage][tIndex][2] = 0;
            mMYINFO.mSelectAvatarInfo[tSelectAvtIndex].aInventory[tPage][tIndex][3] = 0;
            mMYINFO.mSelectAvatarInfo[tSelectAvtIndex].aInventory[tPage][tIndex][4] = 0;
            mMYINFO.mSelectAvatarInfo[tSelectAvtIndex].aInventory[tPage][tIndex][5] = 0;
        }
    }
}
void MAIN::TW_CREATE_ACCOUNT_SEND(char* tID, char* tPassword, int* tResult)
{
    char mBuffer[1000];
    int tSize;
    int tSendSize = 0;
    int tRecvSize = 0;
    int tTotalSendSize = 0;
    int tTotalRecvSize = 0;
    int mResult = 0;
    char* tStr;
    TW_LOGIN_RECV_DATA mDATA;

    mBuffer[7] = mNETWORK.mPacketEncryption[1];
    mBuffer[8] = P_CREATE_ACCOUNT_SEND;
    CopyMemory(&mBuffer[9], tID, MAX_USER_ID_LENGTH);
    CopyMemory(&mBuffer[9 + MAX_USER_ID_LENGTH], tPassword, MAX_USER_PASSWORD_LENGTH);
    tSize = S_CREATE_ACCOUNT_SEND;

    for (int i = 0; i < tSize; i++)
    {
        mBuffer[i] ^= mNETWORK.mPacketEncryption[0];
    }
    while (tSize > 0)
    {
        tSendSize = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], tSize, 0);
        if (tSendSize == -1)
        {
            mNETWORK.CLOSE();
            *tResult = 101;
            return;
        }
        tSize -= tSendSize;
        tTotalSendSize += tSendSize;
    }
    mNETWORK.mPacketEncryption[1]++;
    while (1)
    {
        tRecvSize = recv(mNETWORK.mSocket, &mNETWORK.mBuffer[tTotalRecvSize], 200000 - tTotalRecvSize, 0);
        if (tRecvSize <= 0)
        {
            mNETWORK.CLOSE();
            *tResult = 102;
            return;
        }
        tTotalRecvSize += tRecvSize;
        if (tTotalRecvSize == 5)
        {
            break;
        }
    }
    CopyMemory(&mDATA, &mNETWORK.mBuffer[0], sizeof(TW_LOGIN_RECV_DATA));

    CopyMemory(&mResult, &mDATA.tResult, 4);
    *tResult = mResult;
}


std::string GetPublicIP() 
{
    char buffer[4096];
    DWORD read;

    HINTERNET net = InternetOpen("IP retriever", INTERNET_OPEN_TYPE_PRECONFIG, NULL, NULL, 0);
    HINTERNET conn = InternetOpenUrl(net, "http://myexternalip.com/raw", NULL, 0, INTERNET_FLAG_RELOAD, 0);

    InternetReadFile(conn, buffer, sizeof(buffer) / sizeof(buffer[0]), &read);
    InternetCloseHandle(net);

    return std::string(buffer, read);
}

int MAIN::GetWorldUser(char* tIP, int tPort, int* mMaxPlayerNum, int* mGagePlayerNum)
{
    SOCKET mSocket;
    SOCKADDR_IN mAddress;
    int tResult;
    int tRecvSize = 0;
    int tTotalSize = 0;
    char mBuffer[1000];
    int v9;

    mSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (mSocket == INVALID_SOCKET)
    {
        return -1;
    }
    mAddress.sin_family = AF_INET;
    mAddress.sin_addr.s_addr = inet_addr(tIP);
    mAddress.sin_port = htons(tPort);

    if (connect(mSocket, (LPSOCKADDR)&mAddress, sizeof(mAddress)) == SOCKET_ERROR)
    {
        if (WSAGetLastError() != WSAEINPROGRESS && WSAGetLastError() != WSAEWOULDBLOCK)
        {
            closesocket(mSocket);
            return -1;
        }
    }

    while (TRUE)
    {
        tRecvSize = recv(mSocket, &mBuffer[tTotalSize], 1000 - tTotalSize, 0);
        if (tRecvSize <= 0)
        {
            if (WSAGetLastError() == WSAEWOULDBLOCK)
            {
                continue;
            }
            closesocket(mSocket);
            return -1;
        }
        tTotalSize += tRecvSize;
        if (tTotalSize == 17)
        {
            closesocket(mSocket);
            break;
        }
    }
    CopyMemory(mMaxPlayerNum, &mBuffer[5], 4);
    CopyMemory(mGagePlayerNum, &mBuffer[9], 4);
    CopyMemory(&v9, &mBuffer[13], 4);
    return v9;
}

int MAIN::ReturnXCoord(int tIndex)
{
    int v1;
    int result; 
    int v3; 

    v3 = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1785]) / 2;
    GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[1785]);
    switch (tIndex)
    {
    case 0:
        result = v3 + 291;
        break;
    case 1:
        result = v3 + 291;
        break;
    case 2:
        result = v3 + 291;
        break;
    case 3:
        result = v3 + 291;
        break;
    case 4:
        result = v3 + 291;
        break;
    case 5:
        result = v3 + 291;
        break;
    case 6:
        result = v3 + 291;
        break;
    case 7:
        result = v3 + 291;
        break;
    case 8:
        result = v3 + 291;
        break;
    case 9:
        result = v3 + 291;
        break;
    case 60:
        result = v3 + 539;
        break;
    default:
        result = 0;
        break;
    }
    return result;
}
int MAIN::ReturnYCoord(int tIndex)
{
    int v1; 
    int result; 
    int v3;

    GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1785]);
    v3 = mMYINFO.mScreenYSize / 2 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[1785]) / 2;
    switch (tIndex)
    {
    case 0:
        result = v3 + 196;
        break;
    case 1:
        result = v3 + 287;
        break;
    case 2:
        result = v3 + 378;
        break;
    case 3:
        result = v3 + 469;
        break;
    case 4:
        result = v3 + 560;
        break;
    case 5:
        result = v3 + 651;
        break;
    case 6:
        result = v3 + 196;
        break;
    case 7:
        result = v3 + 278;
        break;
    case 8:
        result = v3 + 378;
        break;
    case 9:
        result = v3 + 469;
        break;
    case 40:
        result = v3 + 196;
        break;
    case 50:
        result = v3 + 196;
        break;
    case 60:
        result = v3 + 469;
        break;
    default:
        result = 0;
        break;
    }
    return result;
}
int MAIN::ReturnWorldNameImage(int tIndex)
{
    int result;

    switch (tIndex)
    {
    case 0:
        result = 1786;
        break;
    case 1:
        result = 1788;
        break;
    case 2:
        result = 1790;
        break;
    case 3:
        result = 1792;
        break;
    case 4:
        result = 1794;
        break;
    case 5:
        result = 1810;
        break;
    case 6:
        result = 1798;
        break;
    case 7:
        result = 1800;
        break;
    case 8:
        result = 1802;
        break;
    case 9:
        result = 1808;
        break;
    case 40:
        result = 3452;
        break;
    case 50:
        result = 3099;
        break;
    case 60:
        result = 2630;
        break;
    default:
        result = 0;
        break;
    }
    return result;
}

int MAIN::ReturnWorldNameImageForConnect(int tIndex)
{
    int result;

    switch (tIndex)
    {
    case 0:
        result = 2656;
        break;
    case 1:
        result = 2657;
        break;
    case 2:
        result = 2658;
        break;
    case 3:
        result = 2659;
        break;
    case 4:
        result = 2660;
        break;
    case 5:
        result = 2661;
        break;
    case 6:
        result = 2662;
        break;
    case 7:
        result = 2663;
        break;
    case 8:
        result = 2664;
        break;
    case 9:
        result = 2666;
        break;
    case 40:
        result = 3454;
        break;
    case 50:
        result = 3101;
        break;
    case 60:
        result = 2679;
        break;
    default:
        result = 0;
        break;
    }
    return result;
}
void MAIN::DisplayWorldUserNumber( int tWorldIndex, int tPresentPlayerNum )
{
    int sX, sY;
    int bX, bY;
    int tX, tY;

    tX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1785]) / 2;
    tY = mMYINFO.mScreenYSize / 2 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[1785]) / 2;
    switch (tWorldIndex)
    {
    case 0:
        sX = tX + 291;
        sY = tY + 237;
        bX = tX + 443;
        bY = tY + 234;
        break;
    case 1:
        sX = tX + 291;
        sY = tY + 328;
        bX = tX + 443;
        bY = tY + 325;
        break;
    case 2:
        sX = tX + 291;
        sY = tY + 419;
        bX = tX + 443;
        bY = tY + 416;
        break;
    case 3:
        sX = tX + 291;
        sY = tY + 510;
        bX = tX + 443;
        bY = tY + 507;
        break;
    case 4:
        sX = tX + 291;
        sY = tY + 601;
        bX = tX + 443;
        bY = tY + 598;
        break;
    case 5:
        sX = tX + 291;
        sY = tY + 692;
        bX = tX + 443;
        bY = tY + 689;
        break;
    case 6:
        sX = tX + 291;
        sY = tY + 237;
        bX = tX + 443;
        bY = tY + 234;
        break;
    case 7:
        sX = tX + 291;
        sY = tY + 328;
        bX = tX + 443;
        bY = tY + 325;
        break;
    case 8:
        sX = tX + 291;
        sY = tY + 419;
        bX = tX + 443;
        bY = tY + 416;
        break;
    case 9:
        sX = tX + 291;
        sY = tY + 510;
        bX = tX + 443;
        bY = tY + 507;
        break;
    case 60:
        sX = tX + 542;
        sY = tY + 510;
        bX = tX + 694;
        bY = tY + 507;
        break;
    default:
        break;
    }
    if (tPresentPlayerNum < 0)
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1907], sX, sY);
    }
    else if (tPresentPlayerNum < mGagePlayerNum[tWorldIndex])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1899], sX, sY);
    }
    else if (tPresentPlayerNum < 0.5 * mGagePlayerNum[tWorldIndex])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1900], sX, sY);
    }
    else if (tPresentPlayerNum < 1 * mGagePlayerNum[tWorldIndex])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1901], sX, sY);
    }
    else if (tPresentPlayerNum < 1.5 * mGagePlayerNum[tWorldIndex])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1902], sX, sY);
    }
    else if (tPresentPlayerNum < 2 * mGagePlayerNum[tWorldIndex])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1903], sX, sY);
    }
    else if (tPresentPlayerNum < 2.5 * mGagePlayerNum[tWorldIndex])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1904], sX, sY);
    }
    else if (tPresentPlayerNum < 7 * mGagePlayerNum[tWorldIndex])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1905], sX, sY);
    }
    else
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1906], sX, sY);
    }

    // Draw is Full?
    if (tPresentPlayerNum >= mMaxPlayerNum[tWorldIndex])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2599], bX, bY);
    }
}
BOOL MAIN::CheckForInventory()
{
    return mCHOICEUI.mSort != 1 || mCHOICEUI.mActive != 1;
}
void MAIN::ProcessForDeleteAvatar()
{
    int tResult;

    TW_DELETE_AVATAR_SEND(mSelectAvtIndex, 1, 0, &tResult);
    switch (tResult)
    {
    case 0:
        mMBOXUI.Set(1, mMESSAGE.Return(50), "");
        strcpy(mMYINFO.mSelectAvatarInfo[mSelectAvtIndex].aName, "");
        mSelectAvtIndex = -1;
        break;
    case 1:
        mMBOXUI.Set(2, mMESSAGE.Return(51), "");
        mSubMode = 2;
        mTicks = 0;
        break;
    case 2:
        mMBOXUI.Set(1, mMESSAGE.Return(411), "");
        break;
    case 3:
        mMBOXUI.Set(1, mMESSAGE.Return(48), "");
        break;
    case 4:
        mMBOXUI.Set(1, mMESSAGE.Return(633), "");
        break;
    case 5:
        mMBOXUI.Set(1, mMESSAGE.Return(2091), "");
        break;
    case 101:
        mMBOXUI.Set(2, mMESSAGE.Return(52), "");
        mSubMode = 2;
        mTicks = 0;
        break;
    case 102:
        mMBOXUI.Set(2, mMESSAGE.Return(53), "");
        mSubMode = 2;
        mTicks = 0;
        break;
    default:
        return;
    }
}
void MAIN::DrawAvatarInfo( int tDrawSort, int tSort, AVATAR_INFO* tAvtInfo, int mActType, int mActSort, float mActFrame, float mActCoord[3], float mActAngle[3])
{
    int sX, sY;
    int tstrlen;
    int i, j, k, l;
    int tValue, tValue2, tValue3;
    float fValue, fValue2, fValue3;
    GMOTION* tMOTION;
    GMOTION* tPetMotion;
    GMOTION* tMountMotion;
    int tPetGrow;
    float tL[3];
    float tA[3];
    ITEM_INFO* mEquip[12];
    int tEffectSort = -1;
    GMOBJECT *mOBJECT;
    int tFrame;
    int tMount3d;
    float tEffectLoc[3];
    float tEffectAngle[3];

   
    if (tSort == 1)
    {
        // Draw Character Creation Screen
        tMOTION = mGDATA.ReturnCharacterMotion(tAvtInfo->aTribe, tAvtInfo->aGender, mActType, mActSort, 1, 0, 0);
        GSOBJECT::DisplaySObject( &mGDATA.mCHARFACE[tAvtInfo->aTribe][tAvtInfo->aGender][tAvtInfo->aFaceType], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
        GSOBJECT::DisplaySObject( &mGDATA.mCHARHAIR[tAvtInfo->aTribe][tAvtInfo->aGender][tAvtInfo->aHeadType], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
        GSOBJECT::DisplaySObject( &mGDATA.mBODY[tAvtInfo->aTribe][tAvtInfo->aGender][35], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
        GSOBJECT::DisplaySObject( &mGDATA.mFEET[tAvtInfo->aTribe][tAvtInfo->aGender][35], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);

        if (mCreateWeaponType == 0)
        {
            GSOBJECT::DisplaySObject( &mGDATA.mWEAPON_1[tAvtInfo->aTribe][tAvtInfo->aGender][33], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
        }
        else if (mCreateWeaponType == 1)
        {
            GSOBJECT::DisplaySObject( &mGDATA.mWEAPON_2[tAvtInfo->aTribe][tAvtInfo->aGender][33], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
        }
        else if (mCreateWeaponType == 2)
        {
            GSOBJECT::DisplaySObject( &mGDATA.mWEAPON_3[tAvtInfo->aTribe][tAvtInfo->aGender][33], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);

            if (tAvtInfo->aTribe == 2)
            {
                memset(tA, 0, sizeof(tA));
                GSOBJECT::GetSObjectCoord( mGDATA.mWEAPON_3_EFFECT[tAvtInfo->aTribe][tAvtInfo->aGender], 2, tL, mActFrame, mActCoord, mActAngle[1], tMOTION, 1);
                GMOBJECT::DisplayMObject(&mGDATA.mMODEL3[28], tDrawSort, 0.0, tL, tA, 0);
            }
            else
            {
                memset(tA, 0, sizeof(tA));
                GSOBJECT::GetSObjectCoord(mGDATA.mWEAPON_3_EFFECT[tAvtInfo->aTribe][tAvtInfo->aGender], 2, tL, mActFrame, mActCoord, mActAngle[1], tMOTION, 1);
                GMOBJECT::DisplayMObject(&mGDATA.mMODEL3[27], tDrawSort, 0.0, tL, tA, 0);
                GSOBJECT::GetSObjectCoord(mGDATA.mWEAPON_3_EFFECT[tAvtInfo->aTribe][tAvtInfo->aGender], 3, tL, mActFrame, mActCoord, mActAngle[1], tMOTION, 1);
                GMOBJECT::DisplayMObject(&mGDATA.mMODEL3[27], tDrawSort, 0.0, tL, tA, 0);
            }
        }
    }
    else
    {
        mEquip[0] = mITEM.Search(tAvtInfo->aEquip[1][0]);
        mEquip[1] = mITEM.Search(tAvtInfo->aEquip[2][0]);
        mEquip[4] = mITEM.Search(tAvtInfo->aEquip[5][0]);
        mEquip[6] = mITEM.Search(tAvtInfo->aEquip[7][0]);
        mEquip[7] = mITEM.Search(tAvtInfo->aEquip[8][0]);
        mEquip[8] = mITEM.Search(tAvtInfo->aEquip[9][0]);
        mEquip[9] = mITEM.Search(tAvtInfo->aEquip[10][0]);
        mEquip[10] = mITEM.Search(tAvtInfo->aEquip[11][0]);
        mEquip[11] = mITEM.Search(tAvtInfo->aEquip[12][0]);
        tMOTION = mGDATA.ReturnCharacterMotion(tAvtInfo->aPreviousTribe, tAvtInfo->aGender, mActType, mActSort, 1, 0, 0);

        if (tAvtInfo->aTribe == 3)
        {
            GSOBJECT::DisplaySObject( mGDATA.mHEADBAND_NANGIN[tAvtInfo->aPreviousTribe][tAvtInfo->aGender], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
        }

        GSOBJECT::DisplaySObject( &mGDATA.mCHARHAIR[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][tAvtInfo->aHeadType], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
        GSOBJECT::DisplaySObject( &mGDATA.mCHARFACE[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][tAvtInfo->aFaceType], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);

        // Draw Body/Armors
        if (mEquip[1])
        {
            if (tAvtInfo->aTribe == 3 && GSOBJECT::Load(&mGDATA.mBODY_NANGIN[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][mEquip[1]->iDataNumber3D], 1))
            {
                GSOBJECT::DisplaySObject( &mGDATA.mBODY_NANGIN[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][mEquip[1]->iDataNumber3D], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
            }
            else
            {
                GSOBJECT::DisplaySObject( &mGDATA.mBODY[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][mEquip[1]->iDataNumber3D], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
            }
        }
        else
        {
            GSOBJECT::DisplaySObject( mGDATA.mBODY[tAvtInfo->aPreviousTribe][tAvtInfo->aGender], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
        }

        // Draw Feet
        if (mEquip[4])
        {
            if (tAvtInfo->aTribe == 3 && GSOBJECT::Load(&mGDATA.mFEET_NANGIN[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][mEquip[4]->iDataNumber3D], 1))
            {
                GSOBJECT::DisplaySObject( &mGDATA.mFEET_NANGIN[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][mEquip[4]->iDataNumber3D - 1], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
            }
            else
            {
                GSOBJECT::DisplaySObject( &mGDATA.mFEET[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][mEquip[4]->iDataNumber3D], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
            }
        }
        else
        {
            GSOBJECT::DisplaySObject( mGDATA.mFEET[tAvtInfo->aPreviousTribe][tAvtInfo->aGender], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
        }

        // Draw Deco 1
        if (mEquip[8])
        {
            if (tAvtInfo->aTribe == tAvtInfo->aPreviousTribe)
            {
                GSOBJECT::DisplaySObject( &mGDATA.mDECO1[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][mEquip[8]->iDataNumber3D - 1], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
            }
            else
            {
                GSOBJECT::DisplaySObject( &mGDATA.mDECO1_NANGIN[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][mEquip[8]->iDataNumber3D - 1], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
            }
        }

        // Draw Deco 2
        if (mEquip[9])
        {
            switch (mEquip[9]->iIndex)
            {
            case 219:
            case 220:
            case 221:
                if (mActSort == 3)
                {
                    tFrame = GMOBJECT::GetTotalFrameNum(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][511]);
                    if (tFrame > 0)
                    {
                        tEffectLoc[0] = mActCoord[0];
                        tEffectLoc[1] = mActCoord[1];
                        tEffectLoc[2] = mActCoord[2];
                        tEffectAngle[0] = mActAngle[0];
                        tEffectAngle[1] = mActAngle[1];
                        tEffectAngle[2] = mActAngle[2];
                        if (!(mActType % 2))
                        {
                            if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) >= 33 && mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) < 40)
                            {
                                switch (mActType)
                                {
                                case 0: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][520], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                                case 2: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][522], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                                case 4: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][524], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                                case 6: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][526], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                                }
                            }
                            else if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) == 40)
                            {
                                switch (mActType)
                                {
                                case 0: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][530], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                                case 2: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][532], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                                case 4: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][534], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                                case 6: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][536], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                                }
                            }
                            switch (mActType)
                            {
                            case 0: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][510], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                            case 2: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][512], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                            case 4: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][514], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                            case 6: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][516], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                            }
                        }
                    }
                }
                if (mActSort == 1)
                {
                    tFrame = GMOBJECT::GetTotalFrameNum(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][508]);
                    if (tFrame > 0)
                    {
                        tEffectLoc[0] = mActCoord[0];
                        tEffectLoc[1] = mActCoord[1];
                        tEffectLoc[2] = mActCoord[2];
                        tEffectAngle[0] = mActAngle[0];
                        tEffectAngle[1] = mActAngle[1];
                        tEffectAngle[2] = mActAngle[2];
                        if (!(mActType % 2))
                        {
                            if (mMYINFO.mAvatarInfo.aLevel1 + mMYINFO.mAvatarInfo.aLevel2 >= 146)
                            {
                                if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) >= 33 && mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) < 40)
                                {
                                    GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][538], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                                }
                                else if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) == 40)
                                {
                                    GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][539], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                                }
                                GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][537], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                            }
                            else
                            {
                                if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) >= 33 && mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) < 40)
                                {
                                    GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][518], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                                }
                                else if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) == 40)
                                {
                                    GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][528], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                                }
                                GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][508], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                            }
                        }
                    }
                }
                if (mActSort == 2)
                {
                    tFrame = GMOBJECT::GetTotalFrameNum(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][509]);
                    if (tFrame > 0)
                    {
                        tEffectLoc[0] = mActCoord[0];
                        tEffectLoc[1] = mActCoord[1];
                        tEffectLoc[2] = mActCoord[2];
                        tEffectAngle[0] = mActAngle[0];
                        tEffectAngle[1] = mActAngle[1];
                        tEffectAngle[2] = mActAngle[2];
                        if (!(mActType % 2))
                        {
                            if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) >= 33 && mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) < 40)
                            {
                                GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][519], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                            }
                            else if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) == 40)
                            {
                                GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][529], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                            }
                            GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][509], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                        }
                    }
                }
                if (mActSort == 32)
                {
                    tFrame = GMOBJECT::GetTotalFrameNum(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][509]);
                    if (tFrame > 0)
                    {
                        tEffectLoc[0] = mActCoord[0];
                        tEffectLoc[1] = mActCoord[1];
                        tEffectLoc[2] = mActCoord[2];
                        tEffectAngle[0] = mActAngle[0];
                        tEffectAngle[1] = mActAngle[1];
                        tEffectAngle[2] = mActAngle[2];
                        if (!(mActType % 2))
                        {
                            if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) >= 33 && mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) < 40)
                            {
                                GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][521], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                            }
                            else if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) == 40)
                            {
                                GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][531], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                            }
                            GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][511], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                        }
                    }
                }
                break;

            case 222:
            case 223:
            case 224:
                if (mActSort == 3)
                {
                    tFrame = GMOBJECT::GetTotalFrameNum(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][611]);
                    if (tFrame > 0)
                    {
                        tEffectLoc[0] = mActCoord[0];
                        tEffectLoc[1] = mActCoord[1];
                        tEffectLoc[2] = mActCoord[2];
                        tEffectAngle[0] = mActAngle[0];
                        tEffectAngle[1] = mActAngle[1];
                        tEffectAngle[2] = mActAngle[2];
                        if (!(mActType % 2))
                        {
                            if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) >= 33 && mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) < 40)
                            {
                                switch (mActType)
                                {
                                case 0: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][620], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                                case 2: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][622], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                                case 4: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][624], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                                case 6: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][626], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                                }
                            }
                            else if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) == 40)
                            {
                                switch (mActType)
                                {
                                case 0: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][630], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                                case 2: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][632], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                                case 4: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][634], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                                case 6: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][636], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                                }
                            }
                            switch (mActType)
                            {
                            case 0: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][610], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                            case 2: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][612], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                            case 4: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][614], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                            case 6: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][616], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                            }
                        }
                    }
                }
                if (mActSort == 1)
                {
                    tFrame = GMOBJECT::GetTotalFrameNum(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][608]);
                    if (tFrame > 0)
                    {
                        tEffectLoc[0] = mActCoord[0];
                        tEffectLoc[1] = mActCoord[1];
                        tEffectLoc[2] = mActCoord[2];
                        tEffectAngle[0] = mActAngle[0];
                        tEffectAngle[1] = mActAngle[1];
                        tEffectAngle[2] = mActAngle[2];
                        if (!(mActType % 2))
                        {
                            if (mMYINFO.mAvatarInfo.aLevel1 + mMYINFO.mAvatarInfo.aLevel2 >= 146)
                            {
                                if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) >= 33 && mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) < 40)
                                {
                                    GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][638], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                                }
                                else if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) == 40)
                                {
                                    GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][639], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                                }
                                GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][637], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                            }
                            else
                            {
                                if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) >= 33 && mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) < 40)
                                {
                                    GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][618], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                                }
                                else if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) == 40)
                                {
                                    GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][628], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                                }
                                GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][608], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                            }
                        }
                    }
                }
                if (mActSort == 2)
                {
                    tFrame = GMOBJECT::GetTotalFrameNum(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][609]);
                    if (tFrame > 0)
                    {
                        tEffectLoc[0] = mActCoord[0];
                        tEffectLoc[1] = mActCoord[1];
                        tEffectLoc[2] = mActCoord[2];
                        tEffectAngle[0] = mActAngle[0];
                        tEffectAngle[1] = mActAngle[1];
                        tEffectAngle[2] = mActAngle[2];
                        if (!(mActType % 2))
                        {
                            if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) >= 33 && mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) < 40)
                            {
                                GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][619], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                            }
                            else if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) == 40)
                            {
                                GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][629], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                            }
                            GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][609], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                        }
                    }
                }
                if (mActSort == 32)
                {
                    tFrame = GMOBJECT::GetTotalFrameNum(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][609]);
                    if (tFrame > 0)
                    {
                        tEffectLoc[0] = mActCoord[0];
                        tEffectLoc[1] = mActCoord[1];
                        tEffectLoc[2] = mActCoord[2];
                        tEffectAngle[0] = mActAngle[0];
                        tEffectAngle[1] = mActAngle[1];
                        tEffectAngle[2] = mActAngle[2];
                        if (!(mActType % 2))
                        {
                            if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) >= 33 && mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) < 40)
                            {
                                GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][621], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                            }
                            else if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) == 40)
                            {
                                GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][631], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                            }
                            GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][611], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                        }
                    }
                }
                break;

            case 225:
            case 226:
            case 227:
                if (mActSort == 3)
                {
                    tFrame = GMOBJECT::GetTotalFrameNum(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][711]);
                    if (tFrame > 0)
                    {
                        tEffectLoc[0] = mActCoord[0];
                        tEffectLoc[1] = mActCoord[1];
                        tEffectLoc[2] = mActCoord[2];
                        tEffectAngle[0] = mActAngle[0];
                        tEffectAngle[1] = mActAngle[1];
                        tEffectAngle[2] = mActAngle[2];
                        if (!(mActType % 2))
                        {
                            if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) >= 33 && mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) < 40)
                            {
                                switch (mActType)
                                {
                                case 0: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][720], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                                case 2: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][722], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                                case 4: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][724], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                                case 6: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][726], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                                }
                            }
                            else if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) == 40)
                            {
                                switch (mActType)
                                {
                                case 0: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][730], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                                case 2: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][732], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                                case 4: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][734], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                                case 6: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][736], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                                }
                            }
                            switch (mActType)
                            {
                            case 0: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][710], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                            case 2: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][712], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                            case 4: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][714], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                            case 6: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][716], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                            }
                        }
                    }
                }
                if (mActSort == 1)
                {
                    tFrame = GMOBJECT::GetTotalFrameNum(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][708]);
                    if (tFrame > 0)
                    {
                        tEffectLoc[0] = mActCoord[0];
                        tEffectLoc[1] = mActCoord[1];
                        tEffectLoc[2] = mActCoord[2];
                        tEffectAngle[0] = mActAngle[0];
                        tEffectAngle[1] = mActAngle[1];
                        tEffectAngle[2] = mActAngle[2];
                        if (!(mActType % 2))
                        {
                            if (mMYINFO.mAvatarInfo.aLevel1 + mMYINFO.mAvatarInfo.aLevel2 >= 146)
                            {
                                if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) >= 33 && mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) < 40)
                                {
                                    GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][738], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                                }
                                else if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) == 40)
                                {
                                    GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][739], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                                }
                                GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][737], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                            }
                            else
                            {
                                if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) >= 33 && mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) < 40)
                                {
                                    GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][718], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                                }
                                else if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) == 40)
                                {
                                    GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][728], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                                }
                                GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][708], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                            }
                        }
                    }
                }
                if (mActSort == 2)
                {
                    tFrame = GMOBJECT::GetTotalFrameNum(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][709]);
                    if (tFrame > 0)
                    {
                        tEffectLoc[0] = mActCoord[0];
                        tEffectLoc[1] = mActCoord[1];
                        tEffectLoc[2] = mActCoord[2];
                        tEffectAngle[0] = mActAngle[0];
                        tEffectAngle[1] = mActAngle[1];
                        tEffectAngle[2] = mActAngle[2];
                        if (!(mActType % 2))
                        {
                            if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) >= 33 && mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) < 40)
                            {
                                GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][719], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                            }
                            else if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) == 40)
                            {
                                GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][729], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                            }
                            GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][709], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                        }
                    }
                }
                if (mActSort == 32)
                {
                    tFrame = GMOBJECT::GetTotalFrameNum(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][709]);
                    if (tFrame > 0)
                    {
                        tEffectLoc[0] = mActCoord[0];
                        tEffectLoc[1] = mActCoord[1];
                        tEffectLoc[2] = mActCoord[2];
                        tEffectAngle[0] = mActAngle[0];
                        tEffectAngle[1] = mActAngle[1];
                        tEffectAngle[2] = mActAngle[2];
                        if (!(mActType % 2))
                        {
                            if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) >= 33 && mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) < 40)
                            {
                                GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][721], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                            }
                            else if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) == 40)
                            {
                                GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][731], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                            }
                            GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][711], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                        }
                    }
                }
                break;

            case 228:
            case 229:
            case 230:
                if (mActSort == 3)
                {
                    tFrame = GMOBJECT::GetTotalFrameNum(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][811]);
                    if (tFrame > 0)
                    {
                        tEffectLoc[0] = mActCoord[0];
                        tEffectLoc[1] = mActCoord[1];
                        tEffectLoc[2] = mActCoord[2];
                        tEffectAngle[0] = mActAngle[0];
                        tEffectAngle[1] = mActAngle[1];
                        tEffectAngle[2] = mActAngle[2];
                        if (!(mActType % 2))
                        {
                            if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) >= 33 && mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) < 40)
                            {
                                switch (mActType)
                                {
                                case 0: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][820], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                                case 2: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][822], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                                case 4: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][824], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                                case 6: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][826], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                                }
                            }
                            else if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) == 40)
                            {
                                switch (mActType)
                                {
                                case 0: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][830], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                                case 2: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][832], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                                case 4: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][834], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                                case 6: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][836], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                                }
                            }
                            switch (mActType)
                            {
                            case 0: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][810], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                            case 2: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][812], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                            case 4: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][814], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                            case 6: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][816], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                            }
                        }
                    }
                }
                if (mActSort == 1)
                {
                    tFrame = GMOBJECT::GetTotalFrameNum(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][808]);
                    if (tFrame > 0)
                    {
                        tEffectLoc[0] = mActCoord[0];
                        tEffectLoc[1] = mActCoord[1];
                        tEffectLoc[2] = mActCoord[2];
                        tEffectAngle[0] = mActAngle[0];
                        tEffectAngle[1] = mActAngle[1];
                        tEffectAngle[2] = mActAngle[2];
                        if (!(mActType % 2))
                        {
                            if (mMYINFO.mAvatarInfo.aLevel1 + mMYINFO.mAvatarInfo.aLevel2 >= 146)
                            {
                                if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) >= 33 && mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) < 40)
                                {
                                    GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][838], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                                }
                                else if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) == 40)
                                {
                                    GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][839], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                                }
                                GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][837], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                            }
                            else
                            {
                                if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) >= 33 && mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) < 40)
                                {
                                    GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][818], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                                }
                                else if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) == 40)
                                {
                                    GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][828], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                                }
                                GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][808], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                            }
                        }
                    }
                }
                if (mActSort == 2)
                {
                    tFrame = GMOBJECT::GetTotalFrameNum(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][809]);
                    if (tFrame > 0)
                    {
                        tEffectLoc[0] = mActCoord[0];
                        tEffectLoc[1] = mActCoord[1];
                        tEffectLoc[2] = mActCoord[2];
                        tEffectAngle[0] = mActAngle[0];
                        tEffectAngle[1] = mActAngle[1];
                        tEffectAngle[2] = mActAngle[2];
                        if (!(mActType % 2))
                        {
                            if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) >= 33 && mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) < 40)
                            {
                                GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][819], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                            }
                            else if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) == 40)
                            {
                                GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][829], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                            }
                            GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][809], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                        }
                    }
                }
                if (mActSort == 32)
                {
                    tFrame = GMOBJECT::GetTotalFrameNum(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][809]);
                    if (tFrame > 0)
                    {
                        tEffectLoc[0] = mActCoord[0];
                        tEffectLoc[1] = mActCoord[1];
                        tEffectLoc[2] = mActCoord[2];
                        tEffectAngle[0] = mActAngle[0];
                        tEffectAngle[1] = mActAngle[1];
                        tEffectAngle[2] = mActAngle[2];
                        if (!(mActType % 2))
                        {
                            if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) >= 33 && mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) < 40)
                            {
                                GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][821], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                            }
                            else if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) == 40)
                            {
                                GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][831], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                            }
                            GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][811], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                        }
                    }
                }
                break;

            case 231:
            case 232:
            case 233:
                if (mActSort == 3)
                {
                    tFrame = GMOBJECT::GetTotalFrameNum(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][911]);
                    if (tFrame > 0)
                    {
                        tEffectLoc[0] = mActCoord[0];
                        tEffectLoc[1] = mActCoord[1];
                        tEffectLoc[2] = mActCoord[2];
                        tEffectAngle[0] = mActAngle[0];
                        tEffectAngle[1] = mActAngle[1];
                        tEffectAngle[2] = mActAngle[2];
                        if (!(mActType % 2))
                        {
                            if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) >= 33 && mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) < 40)
                            {
                                switch (mActType)
                                {
                                case 0: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][920], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                                case 2: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][922], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                                case 4: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][924], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                                case 6: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][926], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                                }
                            }
                            else if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) == 40)
                            {
                                switch (mActType)
                                {
                                case 0: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][930], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                                case 2: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][932], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                                case 4: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][934], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                                case 6: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][936], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                                }
                            }
                            switch (mActType)
                            {
                            case 0: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][910], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                            case 2: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][912], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                            case 4: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][914], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                            case 6: GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][916], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0); break;
                            }
                        }
                    }
                }
                if (mActSort == 1)
                {
                    tFrame = GMOBJECT::GetTotalFrameNum(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][908]);
                    if (tFrame > 0)
                    {
                        tEffectLoc[0] = mActCoord[0];
                        tEffectLoc[1] = mActCoord[1];
                        tEffectLoc[2] = mActCoord[2];
                        tEffectAngle[0] = mActAngle[0];
                        tEffectAngle[1] = mActAngle[1];
                        tEffectAngle[2] = mActAngle[2];
                        if (!(mActType % 2))
                        {
                            if (mMYINFO.mAvatarInfo.aLevel1 + mMYINFO.mAvatarInfo.aLevel2 >= 146)
                            {
                                if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) >= 33 && mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) < 40)
                                {
                                    GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][938], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                                }
                                else if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) == 40)
                                {
                                    GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][939], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                                }
                                GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][937], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                            }
                            else
                            {
                                if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) >= 33 && mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) < 40)
                                {
                                    GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][918], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                                }
                                else if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) == 40)
                                {
                                    GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][928], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                                }
                                GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][908], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                            }
                        }
                    }
                }
                if (mActSort == 2)
                {
                    tFrame = GMOBJECT::GetTotalFrameNum(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][909]);
                    if (tFrame > 0)
                    {
                        tEffectLoc[0] = mActCoord[0];
                        tEffectLoc[1] = mActCoord[1];
                        tEffectLoc[2] = mActCoord[2];
                        tEffectAngle[0] = mActAngle[0];
                        tEffectAngle[1] = mActAngle[1];
                        tEffectAngle[2] = mActAngle[2];
                        if (!(mActType % 2))
                        {
                            if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) >= 33 && mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) < 40)
                            {
                                GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][919], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                            }
                            else if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) == 40)
                            {
                                GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][929], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                            }
                            GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][909], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                        }
                    }
                }
                if (mActSort == 32)
                {
                    tFrame = GMOBJECT::GetTotalFrameNum(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][909]);
                    if (tFrame > 0)
                    {
                        tEffectLoc[0] = mActCoord[0];
                        tEffectLoc[1] = mActCoord[1];
                        tEffectLoc[2] = mActCoord[2];
                        tEffectAngle[0] = mActAngle[0];
                        tEffectAngle[1] = mActAngle[1];
                        tEffectAngle[2] = mActAngle[2];
                        if (!(mActType % 2))
                        {
                            if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) >= 33 && mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) < 40)
                            {
                                GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][921], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                            }
                            else if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) == 40)
                            {
                                GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][931], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                            }
                            GMOBJECT::DisplayMObject(&mGDATA.mCHARMODEL[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][911], tDrawSort, mActFrame, tEffectLoc, tEffectAngle, 0);
                        }
                    }
                }
                break;

            default:
                if (tAvtInfo->aEquip[10][0] >= 2355 && tAvtInfo->aEquip[10][0] <= 2372)
                {
                    if (mUTIL.Return4thValue(tAvtInfo->aEquip[10][2]) > 0)
                    {
                        GSOBJECT::DisplaySObject(&mGDATA.mDECO2[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][21], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
                    }
                    else
                    {
                        GSOBJECT::DisplaySObject(&mGDATA.mDECO2[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][mEquip[9]->iDataNumber3D - 1], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
                    }
                }
                else if (tAvtInfo->aEquip[10][0] >= 2379 && tAvtInfo->aEquip[10][0] <= 2381)
                {
                    if (mUTIL.Return4thValue(tAvtInfo->aEquip[10][2]) > 0)
                    {
                        GSOBJECT::DisplaySObject(&mGDATA.mDECO2[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][21], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
                    }
                    else
                    {
                        GSOBJECT::DisplaySObject(&mGDATA.mDECO2[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][mEquip[10]->iDataNumber3D - 1], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
                    }
                }
                else if (mUTIL.ReturnItemSort2(tAvtInfo->aEquip[10][0]) == 2)
                {
                    if (tAvtInfo->aTribe == tAvtInfo->aPreviousTribe)
                    {
                        GSOBJECT::DisplaySObject(&mGDATA.mDECO2[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][mEquip[9]->iDataNumber3D - 1], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
                    }
                    else
                    {
                        GSOBJECT::DisplaySObject(&mGDATA.mDECO2_NANGIN[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][mEquip[9]->iDataNumber3D - 1], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
                    }
                }
                else if (tAvtInfo->aTribe == tAvtInfo->aPreviousTribe)
                {
                    GSOBJECT::DisplaySObject(&mGDATA.mDECO2[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][mEquip[9]->iDataNumber3D - 1], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
                }
                else
                {
                    GSOBJECT::DisplaySObject(&mGDATA.mDECO2_NANGIN[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][mEquip[9]->iDataNumber3D - 1], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
                }

                // Draw Enchant Glow
                if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) == 40)
                {
                    if (tAvtInfo->aEquip[10][0] == 216 || tAvtInfo->aEquip[10][0] == 217 || tAvtInfo->aEquip[10][0] == 218)
                    {
                        GSOBJECT_OLD::DisplaySObject(&mGDATA.mENCHANT_GLOW[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][1][5][3], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
                    }
                    else
                    {
                        GSOBJECT_OLD::DisplaySObject(&mGDATA.mENCHANT_GLOW[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][1][5][1], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
                    }
                }
                else if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) >= 33)
                {
                    if (tAvtInfo->aEquip[10][0] == 216 || tAvtInfo->aEquip[10][0] == 217 || tAvtInfo->aEquip[10][0] == 218)
                    {
                        GSOBJECT_OLD::DisplaySObject(&mGDATA.mENCHANT_GLOW[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][1][5][2], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
                    }
                    else
                    {
                        GSOBJECT_OLD::DisplaySObject(mGDATA.mENCHANT_GLOW[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][1][5], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
                    }
                }
                break;
            }

            //if (tAvtInfo->aEquip[10][0] >= 2355 && tAvtInfo->aEquip[10][0] <= 2372)
            //{
            //    if (mUTIL.Return4thValue(tAvtInfo->aEquip[10][2]) > 0)
            //    {
            //        GSOBJECT::DisplaySObject(&mGDATA.mDECO2[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][21], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
            //    }
            //    else
            //    {
            //        GSOBJECT::DisplaySObject(&mGDATA.mDECO2[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][mEquip[9]->iDataNumber3D - 1], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
            //    }
            //}
            //else if (tAvtInfo->aEquip[10][0] >= 2379 && tAvtInfo->aEquip[10][0] <= 2381)
            //{
            //    if (mUTIL.Return4thValue(tAvtInfo->aEquip[10][2]) > 0)
            //    {
            //        GSOBJECT::DisplaySObject(&mGDATA.mDECO2[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][21], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
            //    }
            //    else
            //    {
            //        GSOBJECT::DisplaySObject(&mGDATA.mDECO2[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][mEquip[10]->iDataNumber3D - 1], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
            //    }
            //}
            //else if (mUTIL.ReturnItemSort2(tAvtInfo->aEquip[10][0]) == 2)
            //{
            //    if (tAvtInfo->aTribe == tAvtInfo->aPreviousTribe)
            //    {
            //        GSOBJECT::DisplaySObject(&mGDATA.mDECO2[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][mEquip[9]->iDataNumber3D - 1], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
            //    }
            //    else
            //    {
            //        GSOBJECT::DisplaySObject(&mGDATA.mDECO2_NANGIN[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][mEquip[9]->iDataNumber3D - 1], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
            //    }
            //}
            //else if (tAvtInfo->aTribe == tAvtInfo->aPreviousTribe)
            //{
            //    GSOBJECT::DisplaySObject(&mGDATA.mDECO2[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][mEquip[9]->iDataNumber3D - 1], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
            //}
            //else
            //{
            //    GSOBJECT::DisplaySObject(&mGDATA.mDECO2_NANGIN[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][mEquip[9]->iDataNumber3D - 1], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
            //}

            //// Draw Enchant Glow
            //if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) == 40)
            //{
            //    if (tAvtInfo->aEquip[10][0] == 216 || tAvtInfo->aEquip[10][0] == 217 || tAvtInfo->aEquip[10][0] == 218)
            //    {
            //        GSOBJECT_OLD::DisplaySObject(&mGDATA.mENCHANT_GLOW[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][1][5][3], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
            //    }
            //    else
            //    {
            //        GSOBJECT_OLD::DisplaySObject(&mGDATA.mENCHANT_GLOW[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][1][5][1], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
            //    }
            //}
            //else if (mUTIL.ReturnISValue(tAvtInfo->aEquip[10][2]) >= 33)
            //{
            //    if (tAvtInfo->aEquip[10][0] == 216 || tAvtInfo->aEquip[10][0] == 217 || tAvtInfo->aEquip[10][0] == 218)
            //    {
            //        GSOBJECT_OLD::DisplaySObject(&mGDATA.mENCHANT_GLOW[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][1][5][2], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
            //    }
            //    else
            //    {
            //        GSOBJECT_OLD::DisplaySObject(mGDATA.mENCHANT_GLOW[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][1][5], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
            //    }
            //}
        }

        // Deco 3
        if (mEquip[10])
        {
            if (tAvtInfo->aTribe == tAvtInfo->aPreviousTribe)
            {
                GSOBJECT::DisplaySObject( &mGDATA.mDECO3[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][mEquip[10]->iDataNumber3D - 1], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
            }
            else
            {
                GSOBJECT::DisplaySObject( &mGDATA.mDECO3_NANGIN[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][mEquip[10]->iDataNumber3D - 1], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
            }
        }

        // Deco 4
        if (mEquip[11])
        {
            if (tAvtInfo->aTribe == tAvtInfo->aPreviousTribe)
            {
                GSOBJECT::DisplaySObject( &mGDATA.mDECO4[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][mEquip[11]->iDataNumber3D - 1], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
            }
            else
            {
                GSOBJECT::DisplaySObject( &mGDATA.mDECO3_NANGIN[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][mEquip[11]->iDataNumber3D - 1], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
            }
        }

        // Draw Weapon
        if (mEquip[6])
        {
            switch (mEquip[6]->iSort)
            {
            case 13:
            case 16:
            case 19:
                GSOBJECT::DisplaySObject(&mGDATA.mWEAPON_1[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][mEquip[6]->iDataNumber3D - 1], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
                break;
            case 14:
            case 17:
            case 20:
                GSOBJECT::DisplaySObject(&mGDATA.mWEAPON_2[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][mEquip[6]->iDataNumber3D - 1], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
                break;
            case 15:
            case 18:
            case 21:
                GSOBJECT::DisplaySObject(&mGDATA.mWEAPON_3[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][mEquip[6]->iDataNumber3D - 1], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
                if (tAvtInfo->aPreviousTribe == 2)
                {
                    memset(&tA, 0, sizeof(tA));
                    GSOBJECT::GetSObjectCoord(mGDATA.mWEAPON_3_EFFECT[tAvtInfo->aPreviousTribe][tAvtInfo->aGender], 2, &tL[0], mActFrame, mActCoord, mActAngle[1], tMOTION, 1);
                    GMOBJECT::DisplayMObject(&mGDATA.mMODEL3[28], tDrawSort, 0.0, &tL[0], &tA[0], 0);
                }
                else
                {
                    memset(&tA, 0, sizeof(tA));
                    GSOBJECT::GetSObjectCoord(mGDATA.mWEAPON_3_EFFECT[tAvtInfo->aPreviousTribe][tAvtInfo->aGender], 2, &tL[0], mActFrame, mActCoord, mActAngle[1], tMOTION, 1);
                    GMOBJECT::DisplayMObject(&mGDATA.mMODEL3[27], tDrawSort, 0.0, &tL[0], &tA[0], 0);

                    GSOBJECT::GetSObjectCoord(mGDATA.mWEAPON_3_EFFECT[tAvtInfo->aPreviousTribe][tAvtInfo->aGender], 3, &tL[0], mActFrame, mActCoord, mActAngle[1], tMOTION, 1);
                    GMOBJECT::DisplayMObject(&mGDATA.mMODEL3[27], tDrawSort, 0.0, &tL[0], &tA[0], 0);
                }
                break;
            }
            // Draw Weapon Enchant
            if (mEquip[6]->iCheckItemSet == 3)
            {
                if (mUTIL.ReturnISValue(tAvtInfo->aEquip[7][2]) >= 0 && mUTIL.ReturnISValue(tAvtInfo->aEquip[7][2]) < 5)
                {
                    tEffectSort = 1;
                }
                else if (mUTIL.ReturnISValue(tAvtInfo->aEquip[7][2]) >= 5 && mUTIL.ReturnISValue(tAvtInfo->aEquip[7][2]) < 9)
                {
                    tEffectSort = 6;
                }
                else if (mUTIL.ReturnISValue(tAvtInfo->aEquip[7][2]) >= 9 && mUTIL.ReturnISValue(tAvtInfo->aEquip[7][2]) < 11)
                {
                    tEffectSort = 7;
                }
                else if (mUTIL.ReturnISValue(tAvtInfo->aEquip[7][2]) >= 12)
                {
                    tEffectSort = 8;
                }
            }
            else if (mUTIL.ReturnItemSort2(tAvtInfo->aEquip[7][0]) == 1 || mUTIL.ReturnItemSort2(tAvtInfo->aEquip[7][0]) == 4)
            {
                if (mUTIL.ReturnISValue(tAvtInfo->aEquip[7][2]) >= 3 && mUTIL.ReturnISValue(tAvtInfo->aEquip[7][2]) < 6)
                {
                    tEffectSort = 0;
                }
                else if (mUTIL.ReturnISValue(tAvtInfo->aEquip[7][2]) >= 6 && mUTIL.ReturnISValue(tAvtInfo->aEquip[7][2]) < 9)
                {
                    tEffectSort = 1;
                }
                else if (mUTIL.ReturnISValue(tAvtInfo->aEquip[7][2]) >= 9 && mUTIL.ReturnISValue(tAvtInfo->aEquip[7][2]) < 12)
                {
                    tEffectSort = 2;
                }
                else if (mUTIL.ReturnISValue(tAvtInfo->aEquip[7][2]) >= 12)
                {
                    tEffectSort = 3;
                }
            }
            else if (mUTIL.ReturnISValue(tAvtInfo->aEquip[7][2]) >= 1 && mUTIL.ReturnISValue(tAvtInfo->aEquip[7][2]) < 10)
            {
                tEffectSort = 0;
            }
            else if (mUTIL.ReturnISValue(tAvtInfo->aEquip[7][2]) >= 10 && mUTIL.ReturnISValue(tAvtInfo->aEquip[7][2]) < 20)
            {
                tEffectSort = 1;
            }
            else if (mUTIL.ReturnISValue(tAvtInfo->aEquip[7][2]) >= 20 && mUTIL.ReturnISValue(tAvtInfo->aEquip[7][2]) < 30)
            {
                tEffectSort = 2;
            }
            else if (mUTIL.ReturnISValue(tAvtInfo->aEquip[7][2]) >= 30 && mUTIL.ReturnISValue(tAvtInfo->aEquip[7][2]) < 40)
            {
                tEffectSort = 3;
            }
            else if (mUTIL.ReturnISValue(tAvtInfo->aEquip[7][2]) == 40)
            {
                tEffectSort = 4;
            }
            else if (mUTIL.ReturnISValue(tAvtInfo->aEquip[7][2]) >= 41 && mUTIL.ReturnISValue(tAvtInfo->aEquip[7][2]) < 44)
            {
                tEffectSort = 5;
            }
            else if (mUTIL.ReturnISValue(tAvtInfo->aEquip[7][2]) >= 44 && mUTIL.ReturnISValue(tAvtInfo->aEquip[7][2]) < 47)
            {
                tEffectSort = 6;
            }
            else if (mUTIL.ReturnISValue(tAvtInfo->aEquip[7][2]) >= 47 && mUTIL.ReturnISValue(tAvtInfo->aEquip[7][2]) < 50)
            {
                tEffectSort = 7;
            }
            else if (mUTIL.ReturnISValue(tAvtInfo->aEquip[7][2]) == 50)
            {
                tEffectSort = 8;
            }
            if (tEffectSort != -1)
            {
                GSOBJECT_OLD::DisplaySObject(&mGDATA.mENCHANT_GLOW[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][mEquip[6]->iType - 1][mEquip[6]->iSort - 1][tEffectSort], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
            }
        }
        
        // Draw Cape
        if (mEquip[0])
        {
            if (mEquip[0]->iSort == 8)
            {
                GSOBJECT::DisplaySObject( &mGDATA.mCAPE1[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][mEquip[0]->iDataNumber3D - 1], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
            }
            else if (mEquip[0]->iSort == 29)
            {
                GSOBJECT::DisplaySObject( &mGDATA.mCAPE2[tAvtInfo->aPreviousTribe][tAvtInfo->aGender][mEquip[0]->iDataNumber3D - 1], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
            }
        }

        // Draw Pet
        if (mEquip[7])
        {
            tPetGrow = mPET.ReturnGrowStep(tAvtInfo->aEquip[8][0], tAvtInfo->aEquip[8][2]);
            if (!mPET.CheckIfPetMaxGrow(tAvtInfo->aEquip[8][0], tAvtInfo->aEquip[8][2]))
            {
                tPetGrow = 5;
            }
            tPetMotion = &mGDATA.mPET_MOTION[mEquip[7]->iDataNumber3D - 1][tPetGrow][0];
            tFrame = GMOTION::GetTotalFrameNum(tPetMotion, 1);
            if (tFrame > 0)
            {
                tL[0] = -7.0f;
                tL[1] = 10.0f;
                tL[2] = 0.0f;
                tFrame = ((int)(mAPP[0].hPresentElapsedSeconds * 30.0f) % tFrame);
                GSOBJECT::DisplaySObject(&mGDATA.mPET[mEquip[7]->iDataNumber3D - 1][tPetGrow][0], tDrawSort, tFrame, tL, mActAngle[1], 10.0f, tPetMotion, 1);
            }
        }

        // Draw Mount
        if (tAvtInfo->aAnimalIndex >= 10 && tAvtInfo->aAnimalIndex < 20)
        {
            tL[0] = 13.0f;
            tL[1] = -5.0f;
            tL[2] = 45.0f;
            mUTIL.ReturnMount3DIndex(tAvtInfo->aAnimal[tAvtInfo->aAnimalIndex - 10], &tMount3d);
            if (tMount3d != -1)
            {
                tMountMotion = &mGDATA.mMOUNT_MOTION[tMount3d][0];
                GSOBJECT::DisplaySObject(&mGDATA.mMOUNT[tMount3d][0], tDrawSort, mActFrame, tL, mActAngle[1], 20.0f, tMountMotion, 1);
            }
        }
        else if (tAvtInfo->aAnimalIndex >= 0 && tAvtInfo->aAnimalIndex < 10)
        {
            tL[0] = 13.0f;
            tL[1] = -5.0f;
            tL[2] = 45.0f;
            mUTIL.ReturnMount3DIndex(tAvtInfo->aAnimal[tAvtInfo->aAnimalIndex - 10], &tMount3d);
            if (tMount3d != -1)
            {
                tMountMotion = &mGDATA.mMOUNT_MOTION[tMount3d][0];
                GSOBJECT::DisplaySObject(&mGDATA.mMOUNT[tMount3d][0], tDrawSort, mActFrame, tL, mActAngle[1], 20.0f, tMountMotion, 1);
            }
        }

        if (tAvtInfo->aSpecialState == 1)
        {
            GSOBJECT::DisplaySObject( mGDATA.mGM_HAT[tAvtInfo->aPreviousTribe][tAvtInfo->aGender], tDrawSort, mActFrame, mActCoord, mActAngle[1], 20.0, tMOTION, 1);
        }

        if (mUTIL.GetWarlordState(tAvtInfo->aEquip) > 0)
        {
            mOBJECT = 0;
            switch (mUTIL.GetWarlordState(tAvtInfo->aEquip) % 10)
            {
            case 0:
                mOBJECT = &mGDATA.mMODEL3[206];
                break;
            case 1:
                mOBJECT = &mGDATA.mMODEL3[197];
                break;
            case 2:
                mOBJECT = &mGDATA.mMODEL3[198];
                break;
            case 3:
                mOBJECT = &mGDATA.mMODEL3[199];
                break;
            case 4:
                mOBJECT = &mGDATA.mMODEL3[200];
                break;
            case 5:
                mOBJECT = &mGDATA.mMODEL3[201];
                break;
            case 6:
                mOBJECT = &mGDATA.mMODEL3[202];
                break;
            case 7:
                mOBJECT = &mGDATA.mMODEL3[203];
                break;
            case 8:
                mOBJECT = &mGDATA.mMODEL3[204];
                break;
            case 9:
                mOBJECT = &mGDATA.mMODEL3[205];
                break;
            default:
                break;
            }
            if (mOBJECT)
            {
                tFrame = GMOBJECT::GetTotalFrameNum(mOBJECT);
                if (tFrame > 0)
                {
                    tFrame = ((int)(mAPP[0].hPresentElapsedSeconds * 30.0) % tFrame);
                    GSOBJECT::GetSObjectCoord( mGDATA.mWEAPON_3_EFFECT[tAvtInfo->aPreviousTribe][tAvtInfo->aGender], 4, tL, mActFrame, mActCoord, mActAngle[1], tMOTION, 1);
                    tA[0] = 0.0;
                    tA[1] = mActAngle[1];
                    tA[2] = 0.0;
                    GMOBJECT::DisplayMObject(mOBJECT, tDrawSort, tFrame, tL, tA, 0);
                }
            }
        }

        if (tAvtInfo->aRebirth > 0)
        {
            mOBJECT = 0;
            switch (tAvtInfo->aRebirth)
            {
            case 1:
                mOBJECT = &mGDATA.mMODEL3[208];
                break;
            case 2:
                mOBJECT = &mGDATA.mMODEL3[209];
                break;
            case 3:
                mOBJECT = &mGDATA.mMODEL3[210];
                break;
            case 4:
                mOBJECT = &mGDATA.mMODEL3[211];
                break;
            case 5:
                mOBJECT = &mGDATA.mMODEL3[212];
                break;
            case 6:
                mOBJECT = &mGDATA.mMODEL3[213];
                break;
            case 7:
                mOBJECT = &mGDATA.mMODEL3[214];
                break;
            case 8:
                mOBJECT = &mGDATA.mMODEL3[215];
                break;
            case 9:
                mOBJECT = &mGDATA.mMODEL3[216];
                break;
            case 10:
                mOBJECT = &mGDATA.mMODEL3[220];
                break;
            case 11:
                mOBJECT = &mGDATA.mMODEL3[221];
                break;
            case 12:
                mOBJECT = &mGDATA.mMODEL3[222];
                break;
            default:
                break;
            }
            if (mOBJECT)
            {
                tFrame = GMOBJECT::GetTotalFrameNum(mOBJECT);
                if (tFrame > 0)
                {
                    tFrame = ((int)(mAPP[0].hPresentElapsedSeconds * 30.0) % tFrame);
                    tL[0] = mActCoord[0];
                    tL[1] = mActCoord[1];
                    tL[2] = mActCoord[2];
                    tA[0] = 0.0;
                    tA[1] = mActAngle[1];
                    tA[2] = 0.0;
                    GMOBJECT::DisplayMObject(mOBJECT, tDrawSort, tFrame, tL, tA, 0);
                }
            }
        }
    }
}

int MAIN::GetLoginWebMallIndex0( int sX, int sY, int mX, int mY ) 
{
    int i; 
    int v7; 

    for (i = 0; i < 10 && (mX < sX + 195 * (i / 5) + 28 || mX > sX + 195 * (i / 5) + 78 || mY < sY + 69 * (i % 5) + 54 || mY > sY + 69 * (i % 5) + 104); ++i)
        ;

    v7 = i + 10 * tLoginWebMallPage;
    if (v7 >= 10 * (tLoginWebMallPage + 1))
    {
        return -1;
    }
    if (mLoginWebmallInfo[4 * v7] <= -1)
    {
        return -1;
    }
    return v7;
}

int MAIN::ReturnWorldGroupImage(int tGroupIndex, int tSort)
{
    if (tSort == 1)
    {
        if (!tGroupIndex)
            return 2586;
        if (tGroupIndex == 1)
            return 2612;
    }
    else if (tSort == 2)
    {
        if (!tGroupIndex)
            return 2587;
        if (tGroupIndex == 1)
            return 2613;
    }
    return 0;
}
void MAIN::ProcessForCamera()
{
    float v0;
    float v1;
    float v2;
    float v3;
    float v4;
    float v5;
    float tCoord[3]; 
    float tCamEye[3]; 
    float y; 
    float tResult[3];
    float v10; 
    float v11; 
    float v12; 
    int i; 
    float v14; 
    float v15; 
    float v16; 
    float v17; 
    float tL[3];
    float v19;

    if (!mMYINFO.mAvatarInfo.aVisibleState && !mINPUT.mSelectSort && mMYINFO.mPresentZoneNumber == 194)
        return;
    if (!mMYINFO.mAvatarInfo.aVisibleState && mINPUT.mSelectSort && mINPUT.mSelectIndex == 3)
    {
        for (i = 0; i < mPLAY.MAX_AVATAR_OBJECT && (!mPLAY.mAVATAR_OBJECT[i].mCheckValidState || strcmp(mPLAY.mAVATAR_OBJECT[i].mDATA.aName, mINPUT.mCameraRecordPostAvatarName)); ++i)
        {
            ;
        }
        if (i == mPLAY.MAX_AVATAR_OBJECT)
        {
            return;
        }
        mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0] = mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation[0];
        mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1] = mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation[1];
        mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2] = mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation[2];
        mPLAY.PROCESS_DATA_507_SEND(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation);
    }
    tL[0] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0];
    tL[1] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1] + 10.0f;
    tL[2] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2];
    tCamEye[0] = mGXD.mCameraEye.x - mGXD.mCameraLook.x + mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0];
    tCamEye[1] = mGXD.mCameraEye.y - mGXD.mCameraLook.y + mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1] + 10.0f;
    tCamEye[2] = mGXD.mCameraEye.z - mGXD.mCameraLook.z + mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2];
    v10 = tCamEye[0] - mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0];
    v11 = tCamEye[1] - tL[1];
    v12 = tCamEye[2] - mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2];
    v5 = v12 * v12 + v11 * v11 + v10 * v10;
    v4 = sqrt(v5);
    v14 = v4;
    if (v4 <= 0.0)
    {
        v15 = 0.0;
        v16 = 0.0;
        v17 = 0.0;
    }
    else
    {
        v15 = v10 / v14;
        v16 = v11 / v14;
        v17 = v12 / v14;
    }
    tCamEye[0] = mINPUT.mPostCameraLength * v15 + tL[0];
    tCamEye[1] = mINPUT.mPostCameraLength * v16 + tL[1];
    tCamEye[2] = mINPUT.mPostCameraLength * v17 + tL[2];
    if (mGDATA.mZONE.mWORLD.FindCameraInWorld(tL, tCamEye, 2.5f, tResult))
    {
        memcpy(tCamEye, tResult, 12);
    }
    if (!mUTIL.CheckJumpRunMovingZoneForLocation(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation) && mGDATA.mZONE.mWORLD.TestCameraInWorldMObject(tL, tCamEye))
    {
        v10 = tCamEye[0] - tL[0];
        v11 = tCamEye[1] - tL[1];
        v12 = tCamEye[2] - tL[2];
        v3 = v12 * v12 + v11 * v11 + v10 * v10;
        v2 = sqrt(v3);
        v14 = v2;
        if (v2 <= 0.0)
        {
            v15 = 0.0;
            v16 = 0.0;
            v17 = 0.0;
        }
        else
        {
            v15 = v10 / v14;
            v16 = v11 / v14;
            v17 = v12 / v14;
        }
        v19 = 1.0;
        tCoord[0] = (float)1.0f * v15 + tL[0];
        tCoord[1] = (float)1.0f * v16 + tL[1];
        tCoord[2] = (float)1.0f * v17 + tL[2];
        while (mGDATA.mZONE.mWORLD2.GetYCoord(tCoord[0], tCoord[2], &y, 0, 0.0f, 0, 1))
        {
            v19 = v19 + 1.0f;
            tCoord[0] = v19 * v15 + tL[0];
            tCoord[1] = v19 * v16 + tL[1];
            tCoord[2] = v19 * v17 + tL[2];
            if (v14 < (float)v19)
            {
                tCoord[0] = v14 * v15 + tL[0];
                tCoord[1] = v14 * v16 + tL[1];
                tCoord[2] = v14 * v17 + tL[2];
                break;
            }
        }
        memcpy(tCamEye, tCoord, 12);
    }
    v10 = tCamEye[0] - tL[0];
    v11 = tCamEye[1] - tL[1];
    v12 = tCamEye[2] - tL[2];
    v1 = v12 * v12 + v11 * v11 + v10 * v10;
    v0 = sqrt(v1);
    v14 = v0;
    if (v0 <= 0.0)
    {
        v15 = 0.0;
        v16 = 0.0;
        v17 = 0.0;
    }
    else
    {
        v15 = v10 / v14;
        v16 = v11 / v14;
        v17 = v12 / v14;
    }
    if (v14 < 10.0)
    {
        tCamEye[0] = v15 * 4.0 + tL[0];
        tCamEye[1] = v16 * 4.0 + tL[1];
        tCamEye[2] = v17 * 4.0 + tL[2];
    }
    mGXD.SetCameraPosition(tCamEye[0], tCamEye[1], tCamEye[2], tL[0], tL[1], tL[2]);
    TW2AddIn::mGXD.SetCameraPosition(tCamEye[0], tCamEye[1], tCamEye[2], tL[0], tL[1], tL[2]);
}

void MAIN::Logic6ForZone( float dTime )
{
    int v2; 
    int v4; 
    int v5; 
    int v6; 

    mGDATA.mZONE.mWSOUND.Play(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation, mGAMEOPTION.tEnvironmentSoundLevel);
    if (mAPP[0].hPresentElapsedSeconds - mMYINFO.mBGMPlayPostTime > 900.0)
    {
        mMYINFO.mBGMPlayPostTime = mAPP[0].hPresentElapsedSeconds;
        if (mGAMEOPTION.tIsBGM)
        {
            mGDATA.mZONE.mBGM.Play(0, 100, 1);
        }
    }
    if (mMYINFO.mCheckLevelBattle49TypeOpenEffect)
    {
        if (!(mTicks % 6))
            ++mMYINFO.mLevelBattle49TypeOpenEffectImageIndex;
        if (mMYINFO.mLevelBattle49TypeOpenEffectImageIndex > 14)
            mMYINFO.mCheckLevelBattle49TypeOpenEffect = 0;
    }
    if (mMYINFO.mCheckLevelBattle51TypeOpenEffect)
    {
        if (!(mTicks % 6))
            ++mMYINFO.mLevelBattle51TypeOpenEffectImageIndex;
        if (mMYINFO.mLevelBattle51TypeOpenEffectImageIndex > 14)
            mMYINFO.mCheckLevelBattle51TypeOpenEffect = 0;
    }
    if (mMYINFO.mCheckLevelBattle53TypeOpenEffect)
    {
        if (!(mTicks % 6))
            ++mMYINFO.mLevelBattle53TypeOpenEffectImageIndex;
        if (mMYINFO.mLevelBattle53TypeOpenEffectImageIndex > 14)
            mMYINFO.mCheckLevelBattle53TypeOpenEffect = 0;
    }
    if (mMYINFO.mCheckLevelBattleOpenGateEffect)
    {
        if (mMYINFO.mPresentZoneNumber >= 154)
            v4 = 128;
        else
            v4 = 127;
        if (mMYINFO.mPresentZoneNumber >= 319 && mMYINFO.mPresentZoneNumber <= 323)
            v4 = 241;
        mMYINFO.mLevelBattleOpenGateEffectFrame = dTime * 30.0 + mMYINFO.mLevelBattleOpenGateEffectFrame;
        if (mMYINFO.mLevelBattleOpenGateEffectFrame >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[v4]))
        {
            mMYINFO.mCheckLevelBattleOpenGateEffect = 0;
            mMYINFO.mLevelBattleOpenGateEffectFrame = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[v4]) - 1);
            GWORLD::Load(&mGDATA.mZONE, 2);
        }
    }
    if (mMYINFO.mCheckLevelBattle53TypeEffect1)
    {
        v5 = mMYINFO.mPresentZoneNumber >= 154 ? 142 : 140;
        mMYINFO.mLevelBattle53TypeEffectFrame1 = dTime * 30.0 + mMYINFO.mLevelBattle53TypeEffectFrame1;
        if (mMYINFO.mLevelBattle53TypeEffectFrame1 >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[v5]))
            mMYINFO.mCheckLevelBattle53TypeEffect1 = 0;
    }
    if (mMYINFO.mCheckLevelBattle53TypeEffect2)
    {
        v6 = mMYINFO.mPresentZoneNumber >= 154 ? 143 : 141;
        mMYINFO.mLevelBattle53TypeEffectFrame2 = dTime * 30.0 + mMYINFO.mLevelBattle53TypeEffectFrame2;
        if (mMYINFO.mLevelBattle53TypeEffectFrame2 >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[v6]))
            mMYINFO.mCheckLevelBattle53TypeEffect2 = 0;
    }
    if (mMYINFO.mCheckZone038Effect1)
    {
        mMYINFO.mZone038EffectFrame1 = dTime * 30.0 + mMYINFO.mZone038EffectFrame1;
        if (mMYINFO.mZone038EffectFrame1 >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[37]))
            mMYINFO.mCheckZone038Effect1 = 0;
    }
    if (mMYINFO.mCheckZone038Effect2)
    {
        mMYINFO.mZone038EffectFrame2 = dTime * 30.0 + mMYINFO.mZone038EffectFrame2;
        if (mMYINFO.mZone038EffectFrame2 >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[38]))
            mMYINFO.mCheckZone038Effect2 = 0;
    }
    if (mMYINFO.mCheckZone037Effect1)
    {
        mMYINFO.mZone037EffectFrame1 = dTime * 30.0 + mMYINFO.mZone037EffectFrame1;
        if (mMYINFO.mZone037EffectFrame1 >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[134]))
            mMYINFO.mCheckZone037Effect1 = 0;
    }
    if (mMYINFO.mCheckZone037Effect2)
    {
        mMYINFO.mZone037EffectFrame2 = dTime * 30.0 + mMYINFO.mZone037EffectFrame2;
        if (mMYINFO.mZone037EffectFrame2 >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[154]))
            mMYINFO.mCheckZone037Effect2 = 0;
    }
    if (mMYINFO.mCheckZone175TypeGateEffect1[0])
    {
        mMYINFO.mZone175TypeGateFrame[0] = dTime * 30.0 + mMYINFO.mZone175TypeGateFrame[0];
        if (mMYINFO.mZone175TypeGateFrame[0] >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[163]))
        {
            mMYINFO.mCheckZone175TypeGateEffect1[0] = 0;
            mMYINFO.mZone175TypeGateFrame[0] = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[163]) - 1);
            GWORLD::Load(&mGDATA.mZONE, 2);
        }
    }
    if (mMYINFO.mCheckZone175TypeGateEffect2[0])
    {
        mMYINFO.mZone175TypeGateFrame[0] = mMYINFO.mZone175TypeGateFrame[0] - dTime * 30.0;
        if (mMYINFO.mZone175TypeGateFrame[0] < 0.0)
        {
            mMYINFO.mCheckZone175TypeGateEffect2[0] = 0;
            mMYINFO.mZone175TypeGateFrame[0] = 0.0;
        }
    }
    if (mMYINFO.mCheckZone175TypeGateEffect1[1])
    {
        mMYINFO.mZone175TypeGateFrame[1] = dTime * 30.0 + mMYINFO.mZone175TypeGateFrame[1];
        if (mMYINFO.mZone175TypeGateFrame[1] >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[164]))
        {
            mMYINFO.mCheckZone175TypeGateEffect1[1] = 0;
            mMYINFO.mZone175TypeGateFrame[1] = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[164]) - 1);
        }
    }
    if (mMYINFO.mCheckZone175TypeGateEffect2[1])
    {
        mMYINFO.mZone175TypeGateFrame[1] = mMYINFO.mZone175TypeGateFrame[1] - dTime * 30.0;
        if (mMYINFO.mZone175TypeGateFrame[1] < 0.0)
        {
            mMYINFO.mCheckZone175TypeGateEffect2[1] = 0;
            mMYINFO.mZone175TypeGateFrame[1] = 0.0;
            GWORLD::Load(&mGDATA.mZONE, 3);
            if (!mUTIL.CheckGeneralMovingZoneForLocation(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation))
                mPLAY.ReturnToTown(0);
        }
    }
    if (mMYINFO.mCheckZone175TypeGateEffect1[2])
    {
        mMYINFO.mZone175TypeGateFrame[2] = dTime * 30.0 + mMYINFO.mZone175TypeGateFrame[2];
        if (mMYINFO.mZone175TypeGateFrame[2] >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[164]))
        {
            mMYINFO.mCheckZone175TypeGateEffect1[2] = 0;
            mMYINFO.mZone175TypeGateFrame[2] = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[164]) - 1);
            GWORLD::Load(&mGDATA.mZONE, 4);
        }
    }
    if (mMYINFO.mCheckZone175TypeGateEffect2[2])
    {
        mMYINFO.mZone175TypeGateFrame[2] = mMYINFO.mZone175TypeGateFrame[2] - dTime * 30.0;
        if (mMYINFO.mZone175TypeGateFrame[2] < 0.0)
        {
            mMYINFO.mCheckZone175TypeGateEffect2[2] = 0;
            mMYINFO.mZone175TypeGateFrame[2] = 0.0;
        }
    }
    if (mMYINFO.mCheckZone175TypeGateEffect1[3])
    {
        mMYINFO.mZone175TypeGateFrame[3] = dTime * 30.0 + mMYINFO.mZone175TypeGateFrame[3];
        if (mMYINFO.mZone175TypeGateFrame[3] >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[165]))
        {
            mMYINFO.mCheckZone175TypeGateEffect1[3] = 0;
            mMYINFO.mZone175TypeGateFrame[3] = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[165]) - 1);
        }
    }
    if (mMYINFO.mCheckZone175TypeGateEffect2[3])
    {
        mMYINFO.mZone175TypeGateFrame[3] = mMYINFO.mZone175TypeGateFrame[3] - dTime * 30.0;
        if (mMYINFO.mZone175TypeGateFrame[3] < 0.0)
        {
            mMYINFO.mCheckZone175TypeGateEffect2[3] = 0;
            mMYINFO.mZone175TypeGateFrame[3] = 0.0;
            GWORLD::Load(&mGDATA.mZONE, 5);
            if (!mUTIL.CheckGeneralMovingZoneForLocation(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation))
                mPLAY.ReturnToTown(0);
        }
    }
    if (mMYINFO.mCheckZone175TypeGateEffect1[4])
    {
        mMYINFO.mZone175TypeGateFrame[4] = dTime * 30.0 + mMYINFO.mZone175TypeGateFrame[4];
        if (mMYINFO.mZone175TypeGateFrame[4] >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[165]))
        {
            mMYINFO.mCheckZone175TypeGateEffect1[4] = 0;
            mMYINFO.mZone175TypeGateFrame[4] = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[165]) - 1);
            GWORLD::Load(&mGDATA.mZONE, 6);
        }
    }
    if (mMYINFO.mCheckZone175TypeGateEffect2[4])
    {
        mMYINFO.mZone175TypeGateFrame[4] = mMYINFO.mZone175TypeGateFrame[4] - dTime * 30.0;
        if (mMYINFO.mZone175TypeGateFrame[4] < 0.0)
        {
            mMYINFO.mCheckZone175TypeGateEffect2[4] = 0;
            mMYINFO.mZone175TypeGateFrame[4] = 0.0;
        }
    }
    if (mMYINFO.mCheckZone175TypeGateEffect1[5])
    {
        mMYINFO.mZone175TypeGateFrame[5] = dTime * 30.0 + mMYINFO.mZone175TypeGateFrame[5];
        if (mMYINFO.mZone175TypeGateFrame[5] >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[166]))
        {
            mMYINFO.mCheckZone175TypeGateEffect1[5] = 0;
            mMYINFO.mZone175TypeGateFrame[5] = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[166]) - 1);
        }
    }
    if (mMYINFO.mCheckZone175TypeGateEffect2[5])
    {
        mMYINFO.mZone175TypeGateFrame[5] = mMYINFO.mZone175TypeGateFrame[5] - dTime * 30.0;
        if (mMYINFO.mZone175TypeGateFrame[5] < 0.0)
        {
            mMYINFO.mCheckZone175TypeGateEffect2[5] = 0;
            mMYINFO.mZone175TypeGateFrame[5] = 0.0;
            GWORLD::Load(&mGDATA.mZONE, 7);
            if (!mUTIL.CheckGeneralMovingZoneForLocation(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation))
                mPLAY.ReturnToTown(0);
        }
    }
    if (mMYINFO.mCheckZone175TypeGateEffect1[6])
    {
        mMYINFO.mZone175TypeGateFrame[6] = dTime * 30.0 + mMYINFO.mZone175TypeGateFrame[6];
        if (mMYINFO.mZone175TypeGateFrame[6] >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[166]))
        {
            mMYINFO.mCheckZone175TypeGateEffect1[6] = 0;
            mMYINFO.mZone175TypeGateFrame[6] = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[166]) - 1);
            GWORLD::Load(&mGDATA.mZONE, 8);
        }
    }
    if (mMYINFO.mCheckZone175TypeGateEffect2[6])
    {
        mMYINFO.mZone175TypeGateFrame[6] = mMYINFO.mZone175TypeGateFrame[6] - dTime * 30.0;
        if (mMYINFO.mZone175TypeGateFrame[6] < 0.0)
        {
            mMYINFO.mCheckZone175TypeGateEffect2[6] = 0;
            mMYINFO.mZone175TypeGateFrame[6] = 0.0;
        }
    }
    if (mMYINFO.mCheckZone175TypeGateEffect1[7])
    {
        mMYINFO.mZone175TypeGateFrame[7] = dTime * 30.0 + mMYINFO.mZone175TypeGateFrame[7];
        if (mMYINFO.mZone175TypeGateFrame[7] >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[167]))
        {
            mMYINFO.mCheckZone175TypeGateEffect1[7] = 0;
            mMYINFO.mZone175TypeGateFrame[7] = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[167]) - 1);
        }
    }
    if (mMYINFO.mCheckZone175TypeGateEffect2[7])
    {
        mMYINFO.mZone175TypeGateFrame[7] = mMYINFO.mZone175TypeGateFrame[7] - dTime * 30.0;
        if (mMYINFO.mZone175TypeGateFrame[7] < 0.0)
        {
            mMYINFO.mCheckZone175TypeGateEffect2[7] = 0;
            mMYINFO.mZone175TypeGateFrame[7] = 0.0;
            GWORLD::Load(&mGDATA.mZONE, 9);
            if (!mUTIL.CheckGeneralMovingZoneForLocation(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation))
                mPLAY.ReturnToTown(0);
        }
    }
    if (mMYINFO.mCheckZone175TypeGateEffect1[8])
    {
        mMYINFO.mZone175TypeGateFrame[8] = dTime * 30.0 + mMYINFO.mZone175TypeGateFrame[8];
        if (mMYINFO.mZone175TypeGateFrame[8] >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[167]))
        {
            mMYINFO.mCheckZone175TypeGateEffect1[8] = 0;
            mMYINFO.mZone175TypeGateFrame[8] = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[167]) - 1);
            GWORLD::Load(&mGDATA.mZONE, 10);
        }
    }
    if (mMYINFO.mCheckZone175TypeGateEffect2[8])
    {
        mMYINFO.mZone175TypeGateFrame[8] = mMYINFO.mZone175TypeGateFrame[8] - dTime * 30.0;
        if (mMYINFO.mZone175TypeGateFrame[8] < 0.0)
        {
            mMYINFO.mCheckZone175TypeGateEffect2[8] = 0;
            mMYINFO.mZone175TypeGateFrame[8] = 0.0;
        }
    }
    if (mMYINFO.mCheckZone175TypeGateEffect1[9])
    {
        mMYINFO.mZone175TypeGateFrame[9] = dTime * 30.0 + mMYINFO.mZone175TypeGateFrame[9];
        if (mMYINFO.mZone175TypeGateFrame[9] >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[168]))
        {
            mMYINFO.mCheckZone175TypeGateEffect1[9] = 0;
            mMYINFO.mZone175TypeGateFrame[9] = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[168]) - 1);
        }
    }
    if (mMYINFO.mCheckZone175TypeGateEffect2[9])
    {
        mMYINFO.mZone175TypeGateFrame[9] = mMYINFO.mZone175TypeGateFrame[9] - dTime * 30.0;
        if (mMYINFO.mZone175TypeGateFrame[9] < 0.0)
        {
            mMYINFO.mCheckZone175TypeGateEffect2[9] = 0;
            mMYINFO.mZone175TypeGateFrame[9] = 0.0;
            GWORLD::Load(&mGDATA.mZONE, 11);
            if (!mUTIL.CheckGeneralMovingZoneForLocation(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation))
                mPLAY.ReturnToTown(0);
        }
    }
    if (mMYINFO.mCheckZone194BattleOpenGateEffect)
    {
        mMYINFO.mZone194BattleOpenGateEffectFrame = dTime * 30.0 + mMYINFO.mZone194BattleOpenGateEffectFrame;
        if (mMYINFO.mZone194BattleOpenGateEffectFrame >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[169]))
        {
            mMYINFO.mCheckZone194BattleOpenGateEffect = 0;
            mMYINFO.mZone194BattleOpenGateEffectFrame = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[169]) - 1);
            GWORLD::Load(&mGDATA.mZONE, 2);
        }
    }
    if (mMYINFO.mCheckZone196Effect1)
    {
        mMYINFO.mZone196EffectFrame1 = dTime * 30.0 + mMYINFO.mZone196EffectFrame1;
        if (mMYINFO.mZone196EffectFrame1 >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[37]))
            mMYINFO.mCheckZone196Effect1 = 0;
    }
    if (mMYINFO.mCheckZone196Effect2)
    {
        mMYINFO.mZone196EffectFrame2 = dTime * 30.0 + mMYINFO.mZone196EffectFrame2;
        if (mMYINFO.mZone196EffectFrame2 >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[38]))
            mMYINFO.mCheckZone196Effect2 = 0;
    }
    if (mMYINFO.mCheck267TypeOpenGateEffect)
    {
        mMYINFO.m267TypeOpenGateEffectFrame = dTime * 30.0 + mMYINFO.m267TypeOpenGateEffectFrame;
        if (mMYINFO.m267TypeOpenGateEffectFrame >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[196]))
        {
            mMYINFO.mCheck267TypeOpenGateEffect = 0;
            mMYINFO.m267TypeOpenGateEffectFrame = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[196]) - 1);
            GWORLD::Load(&mGDATA.mZONE, 2);
        }
    }
    if (mMYINFO.mCheckZone291Effect)
    {
        mMYINFO.mZone291EffectFrame = dTime * 30.0 + mMYINFO.mZone291EffectFrame;
        if (mMYINFO.mZone291EffectFrame >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[217]))
        {
            mMYINFO.mCheckZone291Effect = 0;
            mMYINFO.mZone291EffectFrame = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[217]) - 1);
            GWORLD::Load(&mGDATA.mZONE, 2);
        }
    }
    if (mMYINFO.mCheckZone297TypeGateEffect1[0])
    {
        mMYINFO.mZone297TypeGateFrame1[0] = dTime * 30.0 + mMYINFO.mZone297TypeGateFrame1[0];
        if (mMYINFO.mZone297TypeGateFrame1[0] >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[223]))
        {
            mMYINFO.mCheckZone297TypeGateEffect1[0] = 0;
            mMYINFO.mZone297TypeGateFrame1[0] = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[223]) - 1);
            GWORLD::Load(&mGDATA.mZONE, 2);
        }
    }
    if (mMYINFO.mCheckZone297TypeGateEffect1[1])
    {
        mMYINFO.mZone297TypeGateFrame1[1] = dTime * 30.0 + mMYINFO.mZone297TypeGateFrame1[1];
        if (mMYINFO.mZone297TypeGateFrame1[1] >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[223]))
        {
            mMYINFO.mCheckZone297TypeGateEffect1[1] = 0;
            mMYINFO.mZone297TypeGateFrame1[1] = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[223]) - 1);
            GWORLD::Load(&mGDATA.mZONE, 2);
        }
    }
    if (mMYINFO.mCheckZone297TypeGateEffect1[2])
    {
        mMYINFO.mZone297TypeGateFrame1[2] = dTime * 30.0 + mMYINFO.mZone297TypeGateFrame1[2];
        if (mMYINFO.mZone297TypeGateFrame1[2] >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[223]))
        {
            mMYINFO.mCheckZone297TypeGateEffect1[2] = 0;
            mMYINFO.mZone297TypeGateFrame1[2] = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[223]) - 1);
            GWORLD::Load(&mGDATA.mZONE, 2);
        }
    }
    if (mMYINFO.mCheckZone297TypeGateEffect1[3])
    {
        mMYINFO.mZone297TypeGateFrame1[3] = dTime * 30.0 + mMYINFO.mZone297TypeGateFrame1[3];
        if (mMYINFO.mZone297TypeGateFrame1[3] >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[223]))
        {
            mMYINFO.mCheckZone297TypeGateEffect1[3] = 0;
            mMYINFO.mZone297TypeGateFrame1[3] = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[223]) - 1);
            GWORLD::Load(&mGDATA.mZONE, 2);
        }
    }
    if (mMYINFO.mCheckZone297TypeGateEffect2[0])
    {
        mMYINFO.mZone297TypeGateFrame2[0] = dTime * 30.0 + mMYINFO.mZone297TypeGateFrame2[0];
        if (mMYINFO.mZone297TypeGateFrame2[0] >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[223]))
        {
            mMYINFO.mCheckZone297TypeGateEffect2[0] = 0;
            mMYINFO.mZone297TypeGateFrame2[0] = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[223]) - 1);
            GWORLD::Load(&mGDATA.mZONE, 3);
        }
    }
    if (mMYINFO.mCheckZone297TypeGateEffect2[1])
    {
        mMYINFO.mZone297TypeGateFrame2[1] = dTime * 30.0 + mMYINFO.mZone297TypeGateFrame2[1];
        if (mMYINFO.mZone297TypeGateFrame2[1] >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[223]))
        {
            mMYINFO.mCheckZone297TypeGateEffect2[1] = 0;
            mMYINFO.mZone297TypeGateFrame2[1] = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[223]) - 1);
            GWORLD::Load(&mGDATA.mZONE, 3);
        }
    }
    if (mMYINFO.mCheckZone297TypeGateEffect2[2])
    {
        mMYINFO.mZone297TypeGateFrame2[2] = dTime * 30.0 + mMYINFO.mZone297TypeGateFrame2[2];
        if (mMYINFO.mZone297TypeGateFrame2[2] >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[223]))
        {
            mMYINFO.mCheckZone297TypeGateEffect2[2] = 0;
            mMYINFO.mZone297TypeGateFrame2[2] = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[223]) - 1);
            GWORLD::Load(&mGDATA.mZONE, 3);
        }
    }
    if (mMYINFO.mCheckZone297TypeGateEffect2[3])
    {
        mMYINFO.mZone297TypeGateFrame2[3] = dTime * 30.0 + mMYINFO.mZone297TypeGateFrame2[3];
        if (mMYINFO.mZone297TypeGateFrame2[3] >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[223]))
        {
            mMYINFO.mCheckZone297TypeGateEffect2[3] = 0;
            mMYINFO.mZone297TypeGateFrame2[3] = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[223]) - 1);
            GWORLD::Load(&mGDATA.mZONE, 3);
        }
    }
    if (mMYINFO.mCheckZone88TypeGateEffect[mMYINFO.mAvatarInfo.aTribe])
    {
        mMYINFO.mZone88TypeGateFrame[mMYINFO.mAvatarInfo.aTribe] = dTime * 30.0
            + mMYINFO.mZone88TypeGateFrame[mMYINFO.mAvatarInfo.aTribe];
        if (mMYINFO.mZone88TypeGateFrame[mMYINFO.mAvatarInfo.aTribe] >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[225]))
        {
            mMYINFO.mCheckZone88TypeGateEffect[mMYINFO.mAvatarInfo.aTribe] = 0;
            v2 = GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[225]) - 1;
            mMYINFO.mZone88TypeGateFrame[mMYINFO.mAvatarInfo.aTribe] = (float)v2;
            GWORLD::Load(&mGDATA.mZONE, mMYINFO.mAvatarInfo.aTribe + 1);
        }
    }
    if (mMYINFO.mZone88TypeCenterEffect[0])
    {
        mMYINFO.mZone88TypeCenterFrame[0] = dTime * 30.0 + mMYINFO.mZone88TypeCenterFrame[0];
        if (mMYINFO.mZone88TypeCenterFrame[0] >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[146]))
        {
            mMYINFO.mZone88TypeCenterEffect[0] = 0;
            mMYINFO.mZone88TypeCenterFrame[0] = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[146]) - 1);
        }
    }
    if (mMYINFO.mZone88TypeCenterEffect[1])
    {
        mMYINFO.mZone88TypeCenterFrame[1] = dTime * 30.0 + mMYINFO.mZone88TypeCenterFrame[1];
        if (mMYINFO.mZone88TypeCenterFrame[1] >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[147]))
        {
            mMYINFO.mZone88TypeCenterEffect[1] = 0;
            mMYINFO.mZone88TypeCenterFrame[1] = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[147]) - 1);
        }
    }
    if (mMYINFO.mCheckFourGuildTypeGateEffect1)
    {
        mMYINFO.mZoneFourGuildTypeGateFrame1 = dTime * 30.0 + mMYINFO.mZoneFourGuildTypeGateFrame1;
        if (mMYINFO.mZoneFourGuildTypeGateFrame1 >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[227]))
        {
            mMYINFO.mCheckFourGuildTypeGateEffect1 = 0;
            mMYINFO.mZoneFourGuildTypeGateFrame1 = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[227]) - 1);
            GWORLD::Load(&mGDATA.mZONE, 2);
        }
    }
    if (mMYINFO.mCheckFourGuildTypeGateEffect2)
    {
        mMYINFO.mZoneFourGuildTypeGateFrame2 = dTime * 30.0 + mMYINFO.mZoneFourGuildTypeGateFrame2;
        if (mMYINFO.mZoneFourGuildTypeGateFrame2 >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[227]))
        {
            mMYINFO.mCheckFourGuildTypeGateEffect2 = 0;
            mMYINFO.mZoneFourGuildTypeGateFrame2 = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[227]) - 1);
            GWORLD::Load(&mGDATA.mZONE, 3);
        }
    }
    if (mMYINFO.mCheckFourGuildTypeGateEffect3)
    {
        mMYINFO.mZoneFourGuildTypeGateFrame3 = dTime * 30.0 + mMYINFO.mZoneFourGuildTypeGateFrame3;
        if (mMYINFO.mZoneFourGuildTypeGateFrame3 >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[227]))
        {
            mMYINFO.mCheckFourGuildTypeGateEffect3 = 0;
            mMYINFO.mZoneFourGuildTypeGateFrame3 = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[227]) - 1);
            GWORLD::Load(&mGDATA.mZONE, 4);
        }
    }
    if (mMYINFO.mCheckFourGuildTypeGateEffect4)
    {
        mMYINFO.mZoneFourGuildTypeGateFrame4 = dTime * 30.0 + mMYINFO.mZoneFourGuildTypeGateFrame4;
        if (mMYINFO.mZoneFourGuildTypeGateFrame4 >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[227]))
        {
            mMYINFO.mCheckFourGuildTypeGateEffect4 = 0;
            mMYINFO.mZoneFourGuildTypeGateFrame4 = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[227]) - 1);
            GWORLD::Load(&mGDATA.mZONE, 5);
        }
    }
    if (mMYINFO.mCheckZone200TypeGateEffect1[0])
    {
        mMYINFO.mZone200TypeGateFrame1[0] = dTime * 30.0 + mMYINFO.mZone200TypeGateFrame1[0];
        if (mMYINFO.mZone200TypeGateFrame1[0] >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[223]))
        {
            mMYINFO.mCheckZone200TypeGateEffect1[0] = 0;
            mMYINFO.mZone200TypeGateFrame1[0] = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[223]) - 1);
            GWORLD::Load(&mGDATA.mZONE, 2);
        }
    }
    if (mMYINFO.mCheckZone200TypeGateEffect1[1])
    {
        mMYINFO.mZone200TypeGateFrame1[1] = dTime * 30.0 + mMYINFO.mZone200TypeGateFrame1[1];
        if (mMYINFO.mZone200TypeGateFrame1[1] >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[223]))
        {
            mMYINFO.mCheckZone200TypeGateEffect1[1] = 0;
            mMYINFO.mZone200TypeGateFrame1[1] = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[223]) - 1);
            GWORLD::Load(&mGDATA.mZONE, 2);
        }
    }
    if (mMYINFO.mCheckZone200TypeGateEffect1[2])
    {
        mMYINFO.mZone200TypeGateFrame1[2] = dTime * 30.0 + mMYINFO.mZone200TypeGateFrame1[2];
        if (mMYINFO.mZone200TypeGateFrame1[2] >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[223]))
        {
            mMYINFO.mCheckZone200TypeGateEffect1[2] = 0;
            mMYINFO.mZone200TypeGateFrame1[2] = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[223]) - 1);
            GWORLD::Load(&mGDATA.mZONE, 2);
        }
    }
    if (mMYINFO.mCheckZone200TypeGateEffect1[3])
    {
        mMYINFO.mZone200TypeGateFrame1[3] = dTime * 30.0 + mMYINFO.mZone200TypeGateFrame1[3];
        if (mMYINFO.mZone200TypeGateFrame1[3] >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[223]))
        {
            mMYINFO.mCheckZone200TypeGateEffect1[3] = 0;
            mMYINFO.mZone200TypeGateFrame1[3] = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[223]) - 1);
            GWORLD::Load(&mGDATA.mZONE, 2);
        }
    }
    if (mMYINFO.mCheckZone200TypeGateEffect2[0])
    {
        mMYINFO.mZone200TypeGateFrame2[0] = dTime * 30.0 + mMYINFO.mZone200TypeGateFrame2[0];
        if (mMYINFO.mZone200TypeGateFrame2[0] >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[223]))
        {
            mMYINFO.mCheckZone200TypeGateEffect2[0] = 0;
            mMYINFO.mZone200TypeGateFrame2[0] = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[223]) - 1);
            GWORLD::Load(&mGDATA.mZONE, 3);
        }
    }
    if (mMYINFO.mCheckZone200TypeGateEffect2[1])
    {
        mMYINFO.mZone200TypeGateFrame2[1] = dTime * 30.0 + mMYINFO.mZone200TypeGateFrame2[1];
        if (mMYINFO.mZone200TypeGateFrame2[1] >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[223]))
        {
            mMYINFO.mCheckZone200TypeGateEffect2[1] = 0;
            mMYINFO.mZone200TypeGateFrame2[1] = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[223]) - 1);
            GWORLD::Load(&mGDATA.mZONE, 3);
        }
    }
    if (mMYINFO.mCheckZone200TypeGateEffect2[2])
    {
        mMYINFO.mZone200TypeGateFrame2[2] = dTime * 30.0 + mMYINFO.mZone200TypeGateFrame2[2];
        if (mMYINFO.mZone200TypeGateFrame2[2] >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[223]))
        {
            mMYINFO.mCheckZone200TypeGateEffect2[2] = 0;
            mMYINFO.mZone200TypeGateFrame2[2] = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[223]) - 1);
            GWORLD::Load(&mGDATA.mZONE, 3);
        }
    }
    if (mMYINFO.mCheckZone200TypeGateEffect2[3])
    {
        mMYINFO.mZone200TypeGateFrame2[3] = dTime * 30.0 + mMYINFO.mZone200TypeGateFrame2[3];
        if (mMYINFO.mZone200TypeGateFrame2[3] >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[223]))
        {
            mMYINFO.mCheckZone200TypeGateEffect2[3] = 0;
            mMYINFO.mZone200TypeGateFrame2[3] = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[223]) - 1);
            GWORLD::Load(&mGDATA.mZONE, 3);
        }
    }
    if (mMYINFO.mCheckZone5TypeGateEffect2[0])
    {
        mMYINFO.mZone5TypeGateFrame[0] = dTime * 30.0 + mMYINFO.mZone5TypeGateFrame[0];
        if (mMYINFO.mZone5TypeGateFrame[0] >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[163]))
        {
            mMYINFO.mCheckZone5TypeGateEffect2[0] = 0;
            mMYINFO.mZone5TypeGateFrame[0] = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[163]) - 1);
            GWORLD::Load(&mGDATA.mZONE, 2);
        }
    }
    if (mMYINFO.mCheckZone5TypeGateEffect1[0])
    {
        mMYINFO.mZone5TypeGateFrame[0] = mMYINFO.mZone5TypeGateFrame[0] - dTime * 30.0;
        if (mMYINFO.mZone5TypeGateFrame[0] < 0.0)
        {
            mMYINFO.mCheckZone5TypeGateEffect1[0] = 0;
            mMYINFO.mZone5TypeGateFrame[0] = 0.0;
        }
    }
    if (mMYINFO.mCheckZone5TypeGateEffect2[1])
    {
        mMYINFO.mZone5TypeGateFrame[1] = dTime * 30.0 + mMYINFO.mZone5TypeGateFrame[1];
        if (mMYINFO.mZone5TypeGateFrame[1] >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[164]))
        {
            mMYINFO.mCheckZone5TypeGateEffect2[1] = 0;
            mMYINFO.mZone5TypeGateFrame[1] = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[164]) - 1);
        }
    }
    if (mMYINFO.mCheckZone5TypeGateEffect1[1])
    {
        mMYINFO.mZone5TypeGateFrame[1] = mMYINFO.mZone5TypeGateFrame[1] - dTime * 30.0;
        if (mMYINFO.mZone5TypeGateFrame[1] < 0.0)
        {
            mMYINFO.mCheckZone5TypeGateEffect1[1] = 0;
            mMYINFO.mZone5TypeGateFrame[1] = 0.0;
            GWORLD::Load(&mGDATA.mZONE, 3);
            if (!mUTIL.CheckGeneralMovingZoneForLocation(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation))
                mPLAY.ReturnToTown(0);
        }
    }
    if (mMYINFO.mCheckZone5TypeGateEffect2[2])
    {
        mMYINFO.mZone5TypeGateFrame[2] = dTime * 30.0 + mMYINFO.mZone5TypeGateFrame[2];
        if (mMYINFO.mZone5TypeGateFrame[2] >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[164]))
        {
            mMYINFO.mCheckZone5TypeGateEffect2[2] = 0;
            mMYINFO.mZone5TypeGateFrame[2] = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[164]) - 1);
            GWORLD::Load(&mGDATA.mZONE, 4);
        }
    }
    if (mMYINFO.mCheckZone5TypeGateEffect1[2])
    {
        mMYINFO.mZone5TypeGateFrame[2] = mMYINFO.mZone5TypeGateFrame[2] - dTime * 30.0;
        if (mMYINFO.mZone5TypeGateFrame[2] < 0.0)
        {
            mMYINFO.mCheckZone5TypeGateEffect1[2] = 0;
            mMYINFO.mZone5TypeGateFrame[2] = 0.0;
        }
    }
    if (mMYINFO.mCheckZone5TypeGateEffect2[3])
    {
        mMYINFO.mZone5TypeGateFrame[3] = dTime * 30.0 + mMYINFO.mZone5TypeGateFrame[3];
        if (mMYINFO.mZone5TypeGateFrame[3] >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[165]))
        {
            mMYINFO.mCheckZone5TypeGateEffect2[3] = 0;
            mMYINFO.mZone5TypeGateFrame[3] = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[165]) - 1);
        }
    }
    if (mMYINFO.mCheckZone5TypeGateEffect1[3])
    {
        mMYINFO.mZone5TypeGateFrame[3] = mMYINFO.mZone5TypeGateFrame[3] - dTime * 30.0;
        if (mMYINFO.mZone5TypeGateFrame[3] < 0.0)
        {
            mMYINFO.mCheckZone5TypeGateEffect1[3] = 0;
            mMYINFO.mZone5TypeGateFrame[3] = 0.0;
            GWORLD::Load(&mGDATA.mZONE, 5);
            if (!mUTIL.CheckGeneralMovingZoneForLocation(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation))
                mPLAY.ReturnToTown(0);
        }
    }
    if (mMYINFO.mCheckZone5TypeGateEffect2[4])
    {
        mMYINFO.mZone5TypeGateFrame[4] = dTime * 30.0 + mMYINFO.mZone5TypeGateFrame[4];
        if (mMYINFO.mZone5TypeGateFrame[4] >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[165]))
        {
            mMYINFO.mCheckZone5TypeGateEffect2[4] = 0;
            mMYINFO.mZone5TypeGateFrame[4] = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[165]) - 1);
            GWORLD::Load(&mGDATA.mZONE, 6);
        }
    }
    if (mMYINFO.mCheckZone5TypeGateEffect1[4])
    {
        mMYINFO.mZone5TypeGateFrame[4] = mMYINFO.mZone5TypeGateFrame[4] - dTime * 30.0;
        if (mMYINFO.mZone5TypeGateFrame[4] < 0.0)
        {
            mMYINFO.mCheckZone5TypeGateEffect1[4] = 0;
            mMYINFO.mZone5TypeGateFrame[4] = 0.0;
        }
    }
    if (mMYINFO.mCheckZone5TypeGateEffect2[5])
    {
        mMYINFO.mZone5TypeGateFrame[5] = dTime * 30.0 + mMYINFO.mZone5TypeGateFrame[5];
        if (mMYINFO.mZone5TypeGateFrame[5] >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[166]))
        {
            mMYINFO.mCheckZone5TypeGateEffect2[5] = 0;
            mMYINFO.mZone5TypeGateFrame[5] = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[166]) - 1);
        }
    }
    if (mMYINFO.mCheckZone5TypeGateEffect1[5])
    {
        mMYINFO.mZone5TypeGateFrame[5] = mMYINFO.mZone5TypeGateFrame[5] - dTime * 30.0;
        if (mMYINFO.mZone5TypeGateFrame[5] < 0.0)
        {
            mMYINFO.mCheckZone5TypeGateEffect1[5] = 0;
            mMYINFO.mZone5TypeGateFrame[5] = 0.0;
            GWORLD::Load(&mGDATA.mZONE, 7);
            if (!mUTIL.CheckGeneralMovingZoneForLocation(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation))
                mPLAY.ReturnToTown(0);
        }
    }
    if (mMYINFO.mCheckZone5TypeGateEffect2[6])
    {
        mMYINFO.mZone5TypeGateFrame[6] = dTime * 30.0 + mMYINFO.mZone5TypeGateFrame[6];
        if (mMYINFO.mZone5TypeGateFrame[6] >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[166]))
        {
            mMYINFO.mCheckZone5TypeGateEffect2[6] = 0;
            mMYINFO.mZone5TypeGateFrame[6] = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[166]) - 1);
            GWORLD::Load(&mGDATA.mZONE, 8);
        }
    }
    if (mMYINFO.mCheckZone5TypeGateEffect1[6])
    {
        mMYINFO.mZone5TypeGateFrame[6] = mMYINFO.mZone5TypeGateFrame[6] - dTime * 30.0;
        if (mMYINFO.mZone5TypeGateFrame[6] < 0.0)
        {
            mMYINFO.mCheckZone5TypeGateEffect1[6] = 0;
            mMYINFO.mZone5TypeGateFrame[6] = 0.0;
        }
    }
    if (mMYINFO.mCheckZone5TypeGateEffect2[7])
    {
        mMYINFO.mZone5TypeGateFrame[7] = dTime * 30.0 + mMYINFO.mZone5TypeGateFrame[7];
        if (mMYINFO.mZone5TypeGateFrame[7] >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[167]))
        {
            mMYINFO.mCheckZone5TypeGateEffect2[7] = 0;
            mMYINFO.mZone5TypeGateFrame[7] = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[167]) - 1);
        }
    }
    if (mMYINFO.mCheckZone5TypeGateEffect1[7])
    {
        mMYINFO.mZone5TypeGateFrame[7] = mMYINFO.mZone5TypeGateFrame[7] - dTime * 30.0;
        if (mMYINFO.mZone5TypeGateFrame[7] < 0.0)
        {
            mMYINFO.mCheckZone5TypeGateEffect1[7] = 0;
            mMYINFO.mZone5TypeGateFrame[7] = 0.0;
            GWORLD::Load(&mGDATA.mZONE, 9);
            if (!mUTIL.CheckGeneralMovingZoneForLocation(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation))
                mPLAY.ReturnToTown(0);
        }
    }
    if (mMYINFO.mCheckZone5TypeGateEffect2[8])
    {
        mMYINFO.mZone5TypeGateFrame[8] = dTime * 30.0 + mMYINFO.mZone5TypeGateFrame[8];
        if (mMYINFO.mZone5TypeGateFrame[8] >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[167]))
        {
            mMYINFO.mCheckZone5TypeGateEffect2[8] = 0;
            mMYINFO.mZone5TypeGateFrame[8] = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[167]) - 1);
            GWORLD::Load(&mGDATA.mZONE, 10);
        }
    }
    if (mMYINFO.mCheckZone5TypeGateEffect1[8])
    {
        mMYINFO.mZone5TypeGateFrame[8] = mMYINFO.mZone5TypeGateFrame[8] - dTime * 30.0;
        if (mMYINFO.mZone5TypeGateFrame[8] < 0.0)
        {
            mMYINFO.mCheckZone5TypeGateEffect1[8] = 0;
            mMYINFO.mZone5TypeGateFrame[8] = 0.0;
        }
    }
    if (mMYINFO.mCheckZone5TypeGateEffect2[9])
    {
        mMYINFO.mZone5TypeGateFrame[9] = dTime * 30.0 + mMYINFO.mZone5TypeGateFrame[9];
        if (mMYINFO.mZone5TypeGateFrame[9] >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[168]))
        {
            mMYINFO.mCheckZone5TypeGateEffect2[9] = 0;
            mMYINFO.mZone5TypeGateFrame[9] = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[168]) - 1);
        }
    }
    if (mMYINFO.mCheckZone5TypeGateEffect1[9])
    {
        mMYINFO.mZone5TypeGateFrame[9] = mMYINFO.mZone5TypeGateFrame[9] - dTime * 30.0;
        if (mMYINFO.mZone5TypeGateFrame[9] < 0.0)
        {
            mMYINFO.mCheckZone5TypeGateEffect1[9] = 0;
            mMYINFO.mZone5TypeGateFrame[9] = 0.0;
            GWORLD::Load(&mGDATA.mZONE, 11);
            if (!mUTIL.CheckGeneralMovingZoneForLocation(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation))
                mPLAY.ReturnToTown(0);
        }
    }
    if (mMYINFO.mCheckZone54TypeGateEffect[0])
    {
        mMYINFO.mZone54TypeGateFrame[0] = dTime * 30.0 + mMYINFO.mZone54TypeGateFrame[0];
        if (mMYINFO.mZone54TypeGateFrame[0] >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[234]))
        {
            mMYINFO.mCheckZone54TypeGateEffect[0] = 0;
            mMYINFO.mZone54TypeGateFrame[0] = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[234]) - 1);
            GWORLD::Load(&mGDATA.mZONE, 2);
        }
    }
    if (mMYINFO.mCheckZone54TypeGateEffect[1])
    {
        mMYINFO.mZone54TypeGateFrame[1] = dTime * 30.0 + mMYINFO.mZone54TypeGateFrame[1];
        if (mMYINFO.mZone54TypeGateFrame[1] >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[234]))
        {
            mMYINFO.mCheckZone54TypeGateEffect[1] = 0;
            mMYINFO.mZone54TypeGateFrame[1] = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[234]) - 1);
            GWORLD::Load(&mGDATA.mZONE, 2);
        }
    }
    if (mMYINFO.mCheckZone54TypeGateEffect[2])
    {
        mMYINFO.mZone54TypeGateFrame[2] = dTime * 30.0 + mMYINFO.mZone54TypeGateFrame[2];
        if (mMYINFO.mZone54TypeGateFrame[2] >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[234]))
        {
            mMYINFO.mCheckZone54TypeGateEffect[2] = 0;
            mMYINFO.mZone54TypeGateFrame[2] = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[234]) - 1);
            GWORLD::Load(&mGDATA.mZONE, 2);
        }
    }
    if (mMYINFO.mCheckZone54TypeGateEffect[3])
    {
        mMYINFO.mZone54TypeGateFrame[3] = dTime * 30.0 + mMYINFO.mZone54TypeGateFrame[3];
        if (mMYINFO.mZone54TypeGateFrame[3] >= (float)GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[234]))
        {
            mMYINFO.mCheckZone54TypeGateEffect[3] = 0;
            mMYINFO.mZone54TypeGateFrame[3] = (float)(GMOBJECT::GetTotalFrameNum(&mGDATA.mMODEL3[234]) - 1);
            GWORLD::Load(&mGDATA.mZONE, 2);
        }
    }
    if (mMYINFO.mCheckLevelBattle319TypeOpenEffect)
    {
        if (!(mTicks % 6))
            ++mMYINFO.mLevelBattle319TypeOpenEffectImageIndex;
        if (mMYINFO.mLevelBattle319TypeOpenEffectImageIndex > 14)
            mMYINFO.mCheckLevelBattle319TypeOpenEffect = 0;
    }
    if (mMYINFO.mPresentZoneNumber == 196 && mPLAY.mWorldInfo.mTribeSymbolBattle == 1)
    {
        mPLAY.ReturnToTown(0);
    }
}


void MAIN::ProcessForGetAvatar1(int mIndex, DWORD mUniqueNumber)
{
    int v4; 
    float v5; 
    int i;
    float tLocation[3];
    float tResult[3]; 
    float tSpeed;

    for (i = 1; i < mPLAY.MAX_AVATAR_OBJECT && (!mPLAY.mAVATAR_OBJECT[i].mCheckValidState || !mPLAY.mAVATAR_OBJECT[i].mDATA.aVisibleState || !mPLAY.CheckPossibleAvatarTarget(mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aSort) || mPLAY.mAVATAR_OBJECT[i].mIndex != mIndex || mPLAY.mAVATAR_OBJECT[i].mUniqueNumber != mUniqueNumber); ++i)
        ;
    if (i != mPLAY.MAX_AVATAR_OBJECT)
    {
        if (mMYINFO.mSelectObjSort == 1)
        {
            if (mUTIL.GetLengthXYZ( mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation) <= 30.0)
            {
                if (!mMYINFO.mCheckSendActionPacket && mPLAY.CheckPossibleChangeAction())
                {
                    mMYINFO.A001();
                    if (mPLAY.mAVATAR_OBJECT[i].mDATA.aPShopState)
                    {
                        mPSHOPUI.Off(2, mPLAY.mAVATAR_OBJECT[i].mDATA.aName, -1);
                    }
                    else
                    {
                        mAVATARUI.Set( mPLAY.mAVATAR_OBJECT[i].mDATA.aName, mPLAY.mAVATAR_OBJECT[i].mDATA.aLevel1, mPLAY.mAVATAR_OBJECT[i].mDATA.aLevel2, mPLAY.mAVATAR_OBJECT[i].mDATA.aTribe);
                    }
                }
            }
            else
            {
                tLocation[0] = mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation[0];
                tLocation[1] = mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation[1];
                tLocation[2] = mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation[2];
                if (!mUTIL.CheckJumpRunMovingZoneForLocation(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation))
                {
                    tSpeed = mFACTOR.GetRunSpeed();
                    if (mUTIL.Collision(1, &tLocation[0], tSpeed, &tResult[0]))
                    {
                        mMYINFO.A002_2(&tResult[0], mMYINFO.mSelectObjSort, mIndex, mUniqueNumber, 0, 0, 0);
                        return;
                    }
                }
            }
        }
        else
        {
            if (mMYINFO.mSelectObjSort <= 1 || mMYINFO.mSelectObjSort > 3)
            {
                return;
            }
            v5 = mUTIL.GetLengthXYZ( mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation);
            if ( (float)mFACTOR.GetAttackRadius(0) + 4.5f < v5)
            {
                tLocation[0] = mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation[0];
                tLocation[1] = mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation[1];
                tLocation[2] = mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation[2];
                if (mUTIL.CheckJumpRunMovingZoneForLocation(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation))
                {
                    return;
                }
                tSpeed = mFACTOR.GetRunSpeed();
                if (!mUTIL.Collision(1, &tLocation[0], tSpeed, &tResult[0]))
                {
                    return;
                }
                mMYINFO.A002_2(&tResult[0], mMYINFO.mSelectObjSort, mIndex, mUniqueNumber, 0, 0, 0);
                return;
            }
            v4 = rand() % 3;
            if (v4 == 0)
            {
                mMYINFO.A005(mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation, mMYINFO.mSelectObjSort, mIndex, mUniqueNumber, 0, 0, 0);
            }
            else if (v4 == 1)
            {
                mMYINFO.A006(mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation, mMYINFO.mSelectObjSort, mIndex, mUniqueNumber, 0, 0, 0);
            }
            else if (v4 == 2)
            {
                mMYINFO.A007(mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation, mMYINFO.mSelectObjSort, mIndex, mUniqueNumber, 0, 0, 0);
            }
        }
    }
}

BOOL MAIN::ProcessForGetAvatar2()
{
    float v0;
    float v1; 
    float v2; 
    float v3;
    int i;

    for (i = 1; i < mPLAY.MAX_AVATAR_OBJECT && (!mPLAY.mAVATAR_OBJECT[i].mCheckValidState || !mPLAY.mAVATAR_OBJECT[i].mDATA.aVisibleState || !mPLAY.CheckPossibleAvatarTarget(mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aSort) || mPLAY.mAVATAR_OBJECT[i].mIndex != mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetObjectIndex || mPLAY.mAVATAR_OBJECT[i].mUniqueNumber != mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetObjectUniqueNumber); ++i)
        ;
    if (i == mPLAY.MAX_AVATAR_OBJECT)
    {
        return 0;
    }
    if (mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetObjectSort != 1)
    {
        if (mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetObjectSort <= 1 || mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetObjectSort > 3)
        {
            return 0;
        }
        v2 = mUTIL.GetLengthXYZ( mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation);
        if ((float)mFACTOR.GetAttackRadius(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSkillNumber) + 4.5f < v2)
        {
            return 1;
        }
        if (!mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSkillNumber)
        {
            v1 = rand() % 3;
            if (v1 == 0)
            {
                mMYINFO.A005(mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetObjectSort, mPLAY.mAVATAR_OBJECT[i].mIndex, mPLAY.mAVATAR_OBJECT[i].mUniqueNumber, 0, 0, 0);
                return 1;
            }
            else if (v1 == 1)
            {
                mMYINFO.A006(mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetObjectSort, mPLAY.mAVATAR_OBJECT[i].mIndex, mPLAY.mAVATAR_OBJECT[i].mUniqueNumber, 0, 0, 0);
                return 1;
            }
            else if (v1 == 2)
            {
                mMYINFO.A007(mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetObjectSort, mPLAY.mAVATAR_OBJECT[i].mIndex, mPLAY.mAVATAR_OBJECT[i].mUniqueNumber, 0, 0, 0);
                return 1;
            }
            return 0;
        }
        return ProcessForSkill1(mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation,&mPLAY.mAVATAR_OBJECT[0].mDATA.aAction) != 0;
    }
    if (mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSkillNumber)
    {
        v3 = mUTIL.GetLengthXYZ( mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation);
        if ((float)mFACTOR.GetAttackRadius(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSkillNumber) + 4.5 < v3)
        {
            return 1;
        }
        return ProcessForSkill1( mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation, &mPLAY.mAVATAR_OBJECT[0].mDATA.aAction) != 0;
    }
    if (mUTIL.GetLengthXYZ(mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation) > 30.0)
    {
        return 1;
    }
    mMYINFO.A001();
    if (mPLAY.mAVATAR_OBJECT[i].mDATA.aPShopState)
    {
        mPSHOPUI.Off(2, mPLAY.mAVATAR_OBJECT[i].mDATA.aName, -1);
    }
    else
    {
        mAVATARUI.Set( mPLAY.mAVATAR_OBJECT[i].mDATA.aName, mPLAY.mAVATAR_OBJECT[i].mDATA.aLevel1, mPLAY.mAVATAR_OBJECT[i].mDATA.aLevel2, mPLAY.mAVATAR_OBJECT[i].mDATA.aTribe);
    }
    return 1;
}

void MAIN::ProcessForGetAvatar3()
{
    float tSpeed; 
    int v1; 
    float v2;
    int i;
    float tECoord[3]; 
    float tResult[3]; 

    for (i = 1; i < mPLAY.MAX_AVATAR_OBJECT && (!mPLAY.mAVATAR_OBJECT[i].mCheckValidState || !mPLAY.mAVATAR_OBJECT[i].mDATA.aVisibleState || !mPLAY.CheckPossibleAvatarTarget(mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aSort) || mPLAY.mAVATAR_OBJECT[i].mIndex != mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetObjectIndex || mPLAY.mAVATAR_OBJECT[i].mUniqueNumber != mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetObjectUniqueNumber); ++i)
        ;
    if (i != mPLAY.MAX_AVATAR_OBJECT)
    {
        v2 = mUTIL.GetLengthXYZ( mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation);
        if (mFACTOR.GetAttackRadius(0) + 4.5f >= v2)
        {
            v1 = rand() % 3;
            if (v1 == 0)
            {
                mMYINFO.A005(mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetObjectSort, mPLAY.mAVATAR_OBJECT[i].mIndex, mPLAY.mAVATAR_OBJECT[i].mUniqueNumber, 0, 0, 0);
            }
            else if (v1 == 1)
            {
                mMYINFO.A006(mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetObjectSort, mPLAY.mAVATAR_OBJECT[i].mIndex, mPLAY.mAVATAR_OBJECT[i].mUniqueNumber, 0, 0, 0);
            }
            else if (v1 == 2)
            {
                mMYINFO.A007(mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetObjectSort, mPLAY.mAVATAR_OBJECT[i].mIndex, mPLAY.mAVATAR_OBJECT[i].mUniqueNumber, 0, 0, 0);
            }
        }
        else
        {
            tECoord[0] = mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation[0];
            tECoord[1] = mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation[1];
            tECoord[2] = mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation[2];
            if (!mUTIL.CheckJumpRunMovingZoneForLocation(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation))
            {
                tSpeed = mFACTOR.GetRunSpeed();
                if (mUTIL.Collision(1, tECoord, tSpeed, tResult))
                {
                    mMYINFO.A002_2( tResult, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetObjectSort, mPLAY.mAVATAR_OBJECT[i].mIndex, mPLAY.mAVATAR_OBJECT[i].mUniqueNumber, 0, 0, 0);
                }
            }
        }
    }
}

void MAIN::ProcessForGetNPC1(int mIndex)
{
    float tSpeed;
    float tECoord[3]; 
    float tResult[3];

    if (mUTIL.GetLengthXYZ(mPLAY.mNPC_OBJECT[mIndex].mLocation, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation) <= 20.0f)
    {
        if (!mMYINFO.mCheckSendActionPacket && mPLAY.CheckPossibleChangeAction())
        {
            mMYINFO.A001();
            mNPCUI.Set(&mPLAY.mNPC_OBJECT[mIndex]);
        }
    }
    else
    {
        tECoord[0] = mPLAY.mNPC_OBJECT[mIndex].mLocation[0];
        tECoord[1] = mPLAY.mNPC_OBJECT[mIndex].mLocation[1];
        tECoord[2] = mPLAY.mNPC_OBJECT[mIndex].mLocation[2];
        if (!mUTIL.CheckJumpRunMovingZoneForLocation(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation))
        {
            tSpeed = mFACTOR.GetRunSpeed();
            if (mUTIL.Collision(1, &tECoord[0], tSpeed, &tResult[0]))
            {
                mMYINFO.A002_2(&tResult[0], 4, mIndex, 0, 0, 0, 0);
            }
        }
    }
}

int MAIN::ProcessForGetNPC3()
{
    if (mUTIL.GetLengthXYZ( mPLAY.mNPC_OBJECT[mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetObjectIndex].mLocation, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation) <= 20.0)
    {
        mMYINFO.A001();
        mNPCUI.Set( &mPLAY.mNPC_OBJECT[mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetObjectIndex]);
    }
    return 1;
}

void MAIN::ProcessForGetMonster1(int mIndex, DWORD mUniqueNumber)
{
    float tSpeed;
    int v3; 
    float v4; 
    int i; 
    float tECoord[3];
    float tResult[3];

    for (i = 0; i < mPLAY.MAX_MONSTER_OBJECT && (!mPLAY.mMONSTER_OBJECT[i].mCheckValidState || !mPLAY.CheckPossibleMonsterTarget(mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aSort) || mPLAY.mMONSTER_OBJECT[i].mServerIndex != mIndex || mPLAY.mMONSTER_OBJECT[i].mUniqueNumber != mUniqueNumber); ++i)
        ;
    if (i != mPLAY.MAX_MONSTER_OBJECT)
    {
        v4 = mUTIL.GetLengthXYZ( mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aLocation, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation);
        if ((float)mFACTOR.GetAttackRadius(0) + mPLAY.mMONSTER_OBJECT[i].mAttackRadius >= v4)
        {
            v3 = rand() % 3;
            if (v3 == 0)
            {
                mMYINFO.A005(mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aLocation, 5, mIndex, mUniqueNumber, 0, 0, 0);
            }
            else if (v3 == 1)
            {
                mMYINFO.A006(mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aLocation, 5, mIndex, mUniqueNumber, 0, 0, 0);
            }
            else if (v3 == 2)
            {
                mMYINFO.A007(mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aLocation, 5, mIndex, mUniqueNumber, 0, 0, 0);
            }
        }
        else
        {
            tECoord[0] = mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aLocation[0];
            tECoord[1] = mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aLocation[1];
            tECoord[2] = mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aLocation[2];
            if (!mUTIL.CheckJumpRunMovingZoneForLocation(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation))
            {
                tSpeed = mFACTOR.GetRunSpeed();
                if (mUTIL.Collision(1, &tECoord[0], tSpeed, &tResult[0]))
                {
                    mMYINFO.A002_2(&tResult[0], 5, mIndex, mUniqueNumber, 0, 0, 0);
                }
            }
        }
    }
}

BOOL MAIN::ProcessForGetMonster2()
{
    int v1; 
    float v2; 
    int i;

    for (i = 0; i < mPLAY.MAX_MONSTER_OBJECT && (!mPLAY.mMONSTER_OBJECT[i].mCheckValidState || !mPLAY.CheckPossibleMonsterTarget(mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aSort) || mPLAY.mMONSTER_OBJECT[i].mServerIndex != mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetObjectIndex || mPLAY.mMONSTER_OBJECT[i].mUniqueNumber != mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetObjectUniqueNumber); ++i)
        ;
    if (i == mPLAY.MAX_MONSTER_OBJECT)
    {
        return 0;
    }
    v2 = mUTIL.GetLengthXYZ( mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aLocation, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation);
    if ((float)mFACTOR.GetAttackRadius(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSkillNumber) + mPLAY.mMONSTER_OBJECT[i].mAttackRadius < v2)
    {
        return 1;
    }
    if (mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSkillNumber)
    {
        return ProcessForSkill1( mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aLocation, &mPLAY.mAVATAR_OBJECT[0].mDATA.aAction) != 0;
    }
    v1 = rand() % 3;
    if (v1 == 0)
    {
        mMYINFO.A005(mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aLocation, 5, mPLAY.mMONSTER_OBJECT[i].mServerIndex, mPLAY.mMONSTER_OBJECT[i].mUniqueNumber, 0, 0, 0);
        return 1;
    }
    else if (v1 == 1)
    {
        mMYINFO.A006(mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aLocation, 5, mPLAY.mMONSTER_OBJECT[i].mServerIndex, mPLAY.mMONSTER_OBJECT[i].mUniqueNumber, 0, 0, 0);
        return 1;
    }
    else if (v1 == 2)
    {
        mMYINFO.A007(mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aLocation, 5, mPLAY.mMONSTER_OBJECT[i].mServerIndex, mPLAY.mMONSTER_OBJECT[i].mUniqueNumber, 0, 0, 0);
        return 1;
    }
    return 0;
}

void MAIN::ProcessForGetMonster3()
{
    float tSpeed;
    int v1;
    float v2;
    int i; 
    float tECoord[3];
    float tResult[3]; 

    for (i = 0; i < mPLAY.MAX_MONSTER_OBJECT && (!mPLAY.mMONSTER_OBJECT[i].mCheckValidState || !mPLAY.CheckPossibleMonsterTarget(mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aSort) || mPLAY.mMONSTER_OBJECT[i].mServerIndex != mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetObjectIndex || mPLAY.mMONSTER_OBJECT[i].mUniqueNumber != mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetObjectUniqueNumber); ++i)
        ;
    if (i != mPLAY.MAX_MONSTER_OBJECT)
    {
        v2 = mUTIL.GetLengthXYZ(mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aLocation, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation);
        if (mFACTOR.GetAttackRadius(0) + mPLAY.mMONSTER_OBJECT[i].mAttackRadius >= v2)
        {
            v1 = rand() % 3;
            if (v1 == 0)
            {
                mMYINFO.A005(mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aLocation, 5, mPLAY.mMONSTER_OBJECT[i].mServerIndex, mPLAY.mMONSTER_OBJECT[i].mUniqueNumber, 0, 0, 0);
            }
            else if (v1 == 1)
            {
                mMYINFO.A006(mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aLocation, 5, mPLAY.mMONSTER_OBJECT[i].mServerIndex, mPLAY.mMONSTER_OBJECT[i].mUniqueNumber, 0, 0, 0);
            }
            else if (v1 == 2)
            {
                mMYINFO.A007(mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aLocation, 5, mPLAY.mMONSTER_OBJECT[i].mServerIndex, mPLAY.mMONSTER_OBJECT[i].mUniqueNumber, 0, 0, 0);
            }
        }
        else
        {
            tECoord[0] = mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aLocation[0];
            tECoord[1] = mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aLocation[1];
            tECoord[2] = mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aLocation[2];
            if (!mUTIL.CheckJumpRunMovingZoneForLocation(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation))
            {
                tSpeed = mFACTOR.GetRunSpeed();
                if (mUTIL.Collision(1, tECoord, tSpeed, tResult))
                {
                    mMYINFO.A002_2( tResult, 5, mPLAY.mMONSTER_OBJECT[i].mServerIndex, mPLAY.mMONSTER_OBJECT[i].mUniqueNumber, 0, 0, 0);
                }
            }
        }
    }
}

void MAIN::ProcessForGetDeputyPShop1(int mIndex)
{
    float tSpeed; 
    float tECoord[3];
    float tResult[3]; 

    if (mUTIL.GetLengthXYZ( mPLAY.mPROXY_OBJECT[mIndex].mDATA.tShopLocation, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation) <= 20.0)
    {
        if (!mMYINFO.mCheckSendActionPacket && mPLAY.CheckPossibleChangeAction())
        {
            mMYINFO.A001();
            if (!strcmp(mPLAY.mPROXY_OBJECT[mIndex].mDATA.tShopAvatarName, mPLAY.mAVATAR_OBJECT[0].mDATA.aName))
            {
                mPSHOPUI.Off( 4, mPLAY.mPROXY_OBJECT[mIndex].mDATA.tShopAvatarName, mPLAY.mPROXY_OBJECT[mIndex].mUniqueNumber);
            }
            else
            {
                mPSHOPUI.Off( 5, mPLAY.mPROXY_OBJECT[mIndex].mDATA.tShopAvatarName, mPLAY.mPROXY_OBJECT[mIndex].mUniqueNumber);
            }
        }
    }
    else
    {
        tECoord[0] = mPLAY.mPROXY_OBJECT[mIndex].mDATA.tShopLocation[0];
        tECoord[1] = mPLAY.mPROXY_OBJECT[mIndex].mDATA.tShopLocation[1];
        tECoord[2] = mPLAY.mPROXY_OBJECT[mIndex].mDATA.tShopLocation[2];
        if (!mUTIL.CheckJumpRunMovingZoneForLocation(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation))
        {
            tSpeed = mFACTOR.GetRunSpeed();
            if (mUTIL.Collision(1, &tECoord[0], tSpeed, &tResult[0]))
            {
                mMYINFO.A002_2(&tResult[0], 4, mIndex, 0, 0, 0, 0);
            }
        }
    }
}

int MAIN::ProcessForGetDeputyPShop2()
{
    if (mUTIL.GetLengthXYZ(mPLAY.mPROXY_OBJECT[mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetObjectIndex].mDATA.tShopLocation, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation) > 20.0)
    {
        return 1;
    }
    mMYINFO.A001();
    if (!strcmp(mPLAY.mPROXY_OBJECT[mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetObjectIndex].mDATA.tShopAvatarName, mPLAY.mAVATAR_OBJECT[0].mDATA.aName))
    {
        mPSHOPUI.Off( 4, mPLAY.mPROXY_OBJECT[mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetObjectIndex].mDATA.tShopAvatarName, mPLAY.mPROXY_OBJECT[mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetObjectIndex].mUniqueNumber);
    }
    else
    {
        mPSHOPUI.Off( 5, mPLAY.mPROXY_OBJECT[mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetObjectIndex].mDATA.tShopAvatarName, mPLAY.mPROXY_OBJECT[mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetObjectIndex].mUniqueNumber);
    }
    return 1;
}

void MAIN::ProcessForGetItem1(int mIndex, DWORD mUniqueNumber)
{
    char *tstr;
    float tSpeed;
    int tPage1;
    int tIndex1;
    int tPage2;
    int tIndex2;
    int tXPost1;
    int tYPost1;
    int i;
    float tECoord[3]; 
    float tResult[3]; 

    for (i = 0; i < mPLAY.MAX_ITEM_OBJECT && (!mPLAY.mITEM_OBJECT[i].mCheckValidState || mPLAY.mITEM_OBJECT[i].mServerIndex != mIndex || mPLAY.mITEM_OBJECT[i].mUniqueNumber != mUniqueNumber); ++i)
    {
        ;
    }
    if (i != mPLAY.MAX_ITEM_OBJECT)
    {
        if (!mPLAY.mITEM_OBJECT[i].CheckPossibleGetItem())
        {
            tstr = mMESSAGE.Return(115);
            mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
            return;
        }
        if (mUTIL.GetLengthX_Z(mPLAY.mITEM_OBJECT[i].mLocation, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation) <= 50.0)
        {
            if (mPLAY.mITEM_OBJECT[i].mITEM_INFO->iSort == 1)
            {
                if (mUTIL.CheckOverMaximum(mMYINFO.mAvatarInfo.aMoney, mPLAY.mITEM_OBJECT[i].mDATA.iQuantity))
                {
                    tstr = mMESSAGE.Return(116);
                    mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                    return;
                }
                tPage1 = mPLAY.mITEM_OBJECT[i].mServerIndex;
                tIndex1 = mPLAY.mITEM_OBJECT[i].mUniqueNumber;
                tPage2 = 0;
                tIndex2 = 0;
                tXPost1 = 0;
                tYPost1 = 0;
            }
            else
            {
                tPage1 = mPLAY.mITEM_OBJECT[i].mServerIndex;
                tIndex1 = mPLAY.mITEM_OBJECT[i].mUniqueNumber;
                mINVENUI.PutInventory1( -1, -1, mPLAY.mITEM_OBJECT[i].mDATA.iIndex, mPLAY.mITEM_OBJECT[i].mDATA.iQuantity, &tPage2, &tIndex2, &tXPost1, &tYPost1, -1);
                if (tPage2 == -1)
                {
                    tstr = mMESSAGE.Return(117);
                    mBASICUI.Insert1( tstr, mFONTCOLOR.mData[44]);
                    return;
                }
            }
            if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
            {
                mPLAY.PROCESS_DATA_201_SEND(tPage1, tIndex1, 0, tPage2, tIndex2, tXPost1, tYPost1);
                mMYINFO.mNetworkLock = 1;
                mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
            }
        }
        else
        {
            tECoord[0] = mPLAY.mITEM_OBJECT[i].mLocation[0];
            tECoord[1] = mPLAY.mITEM_OBJECT[i].mLocation[1];
            tECoord[2] = mPLAY.mITEM_OBJECT[i].mLocation[2];
            if (!mUTIL.CheckJumpRunMovingZoneForLocation(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation))
            {
                tSpeed = mFACTOR.GetRunSpeed();
                if (mUTIL.Collision(1, &tECoord[0], tSpeed, &tResult[0]))
                {
                    mMYINFO.A002_2(&tResult[0], 6, mIndex, mUniqueNumber, 0, 0, 0);
                }
            }
        }
    }
}

int MAIN::ProcessForGetItem2()
{
    int tPage2; 
    int tXPost1;
    int tIndex2;
    int tIndex1;
    int i; 
    int tYPost1;
    int tPage1; 

    for (i = 0; i < mPLAY.MAX_ITEM_OBJECT && (!mPLAY.mITEM_OBJECT[i].mCheckValidState || mPLAY.mITEM_OBJECT[i].mServerIndex != mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetObjectIndex || mPLAY.mITEM_OBJECT[i].mUniqueNumber != mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetObjectUniqueNumber); ++i)
        ;
    if (i == mPLAY.MAX_ITEM_OBJECT)
    {
        return 0;
    }
    if (!mPLAY.mITEM_OBJECT[i].CheckPossibleGetItem())
    {
        return 0;
    }
    if (mUTIL.GetLengthX_Z(mPLAY.mITEM_OBJECT[i].mLocation, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation) > 50.0)
    {
        return 1;
    }
    if (mPLAY.mITEM_OBJECT[i].mITEM_INFO->iSort == 1)
    {
        if (mUTIL.CheckOverMaximum(mMYINFO.mAvatarInfo.aMoney, mPLAY.mITEM_OBJECT[i].mDATA.iQuantity))
        {
            return 0;
        }
        tPage1 = mPLAY.mITEM_OBJECT[i].mServerIndex;
        tIndex1 = mPLAY.mITEM_OBJECT[i].mUniqueNumber;
        tPage2 = 0;
        tIndex2 = 0;
        tXPost1 = 0;
        tYPost1 = 0;
    }
    else
    {
        tPage1 = mPLAY.mITEM_OBJECT[i].mServerIndex;
        tIndex1 = mPLAY.mITEM_OBJECT[i].mUniqueNumber;
        mINVENUI.PutInventory1( -1, -1, mPLAY.mITEM_OBJECT[i].mDATA.iIndex, mPLAY.mITEM_OBJECT[i].mDATA.iQuantity, &tPage2, &tIndex2, &tXPost1, &tYPost1, -1);
        if (tPage2 == -1)
        {
            return 0;
        }
    }
    if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
    {
        mPLAY.PROCESS_DATA_201_SEND(tPage1, tIndex1, 0, tPage2, tIndex2, tXPost1, tYPost1);
        mMYINFO.mNetworkLock = 1;
        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
        return 1;
    }
    return 0;
}

void MAIN::ProcessForGetItem3()
{
    int i, j, k;
    int tPage1, tIndex1, tQuantity1, tPage2, tIndex2, tXPost1, tYPost1;
    BOOL tPickupMoney = 0, tPickUpItem = 0;

    // Pickup Money
    for (i = 0; i < mPLAY.MAX_ITEM_OBJECT; ++i)
    {
        if (mPLAY.mITEM_OBJECT[i].mCheckValidState && mUTIL.GetLengthXYZ(mPLAY.mITEM_OBJECT[i].mLocation, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation) <= 50.0f && mPLAY.mITEM_OBJECT[i].CheckPossibleGetItem() && mPLAY.mITEM_OBJECT[i].mITEM_INFO->iSort == 1)
        {
            if (!mUTIL.CheckOverMaximum(mMYINFO.mAvatarInfo.aMoney, mPLAY.mITEM_OBJECT[i].mDATA.iQuantity))
            {
                tPage1 = mPLAY.mITEM_OBJECT[i].mServerIndex;
                tIndex1 = mPLAY.mITEM_OBJECT[i].mUniqueNumber;
                tQuantity1 = 0;
                tPage2 = 0;
                tIndex2 = 0;
                tXPost1 = 0;
                tYPost1 = 0;
                break;
            }
            tPickupMoney = 1;
        }
    }
    if (i < mPLAY.MAX_ITEM_OBJECT)
    {
        if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
        {
            mPLAY.PROCESS_DATA_201_SEND(tPage1, tIndex1, tQuantity1, tPage2, tIndex2, tXPost1, tYPost1);
            mMYINFO.mNetworkLock = 1;
            mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
        }
        return;
    }

    // Pickup Legendary
    for (i = 0; i < mPLAY.MAX_ITEM_OBJECT; ++i)
    {
        if (mPLAY.mITEM_OBJECT[i].mCheckValidState && mUTIL.GetLengthXYZ(mPLAY.mITEM_OBJECT[i].mLocation, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation) <= 50.0f && mPLAY.mITEM_OBJECT[i].CheckPossibleGetItem() && mPLAY.mITEM_OBJECT[i].mITEM_INFO->iSort != 1 && (mPLAY.mITEM_OBJECT[i].mITEM_INFO->iType == 5 || mPLAY.mITEM_OBJECT[i].mITEM_INFO->iType == 6))
        {
            tPage1 = mPLAY.mITEM_OBJECT[i].mServerIndex;
            tIndex1 = mPLAY.mITEM_OBJECT[i].mUniqueNumber;
            tQuantity1 = 0;
            mINVENUI.PutInventory1( -1, -1, mPLAY.mITEM_OBJECT[i].mDATA.iIndex, mPLAY.mITEM_OBJECT[i].mDATA.iQuantity, &tPage2, &tIndex2, &tXPost1, &tYPost1, -1);
            if (tPage2 != -1)
            {
                break;
            }
            tPickUpItem = 1;
        }
    }
    if (i < mPLAY.MAX_ITEM_OBJECT)
    {
        if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
        {
            mPLAY.PROCESS_DATA_201_SEND(tPage1, tIndex1, tQuantity1, tPage2, tIndex2, tXPost1, tYPost1);
            mMYINFO.mNetworkLock = 1;
            mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
            return;
        }
    }

    // Pickup Elite
    for (i = 0; i < mPLAY.MAX_ITEM_OBJECT; ++i)
    {
        if (mPLAY.mITEM_OBJECT[i].mCheckValidState && mUTIL.GetLengthXYZ(mPLAY.mITEM_OBJECT[i].mLocation, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation) <= 50.0f && mPLAY.mITEM_OBJECT[i].CheckPossibleGetItem() && mPLAY.mITEM_OBJECT[i].mITEM_INFO->iSort != 1 && mPLAY.mITEM_OBJECT[i].mITEM_INFO->iType == 4)
        {
            tPage1 = mPLAY.mITEM_OBJECT[i].mServerIndex;
            tIndex1 = mPLAY.mITEM_OBJECT[i].mUniqueNumber;
            tQuantity1 = 0;
            mINVENUI.PutInventory1( -1, -1, mPLAY.mITEM_OBJECT[i].mDATA.iIndex, mPLAY.mITEM_OBJECT[i].mDATA.iQuantity, &tPage2, &tIndex2, &tXPost1, &tYPost1, -1);
            if (tPage2 != -1)
            {
                break;
            }
            tPickUpItem = 1;
        }
    }
    if (i < mPLAY.MAX_ITEM_OBJECT)
    {
        if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
        {
            mPLAY.PROCESS_DATA_201_SEND(tPage1, tIndex1, tQuantity1, tPage2, tIndex2, tXPost1, tYPost1);
            mMYINFO.mNetworkLock = 1;
            mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
            return;
        }
    }

    // Pickup Rare
    for (i = 0; i < mPLAY.MAX_ITEM_OBJECT; ++i)
    {
        if (mPLAY.mITEM_OBJECT[i].mCheckValidState && mUTIL.GetLengthXYZ(mPLAY.mITEM_OBJECT[i].mLocation, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation) <= 50.0f && mPLAY.mITEM_OBJECT[i].CheckPossibleGetItem() && mPLAY.mITEM_OBJECT[i].mITEM_INFO->iSort != 1 && mPLAY.mITEM_OBJECT[i].mITEM_INFO->iType == 3)
        {
            tPage1 = mPLAY.mITEM_OBJECT[i].mServerIndex;
            tIndex1 = mPLAY.mITEM_OBJECT[i].mUniqueNumber;
            tQuantity1 = 0;
            mINVENUI.PutInventory1( -1, -1, mPLAY.mITEM_OBJECT[i].mDATA.iIndex, mPLAY.mITEM_OBJECT[i].mDATA.iQuantity, &tPage2, &tIndex2, &tXPost1, &tYPost1, -1);
            if (tPage2 != -1)
            {
                break;
            }
            tPickUpItem = 1;
        }
    }
    if (i < mPLAY.MAX_ITEM_OBJECT)
    {
        if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
        {
            mPLAY.PROCESS_DATA_201_SEND(tPage1, tIndex1, tQuantity1, tPage2, tIndex2, tXPost1, tYPost1);
            mMYINFO.mNetworkLock = 1;
            mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
            return;
        }
    }

    // Pickup Unique
    for (i = 0; i < mPLAY.MAX_ITEM_OBJECT; ++i)
    {
        if (mPLAY.mITEM_OBJECT[i].mCheckValidState && mUTIL.GetLengthXYZ(mPLAY.mITEM_OBJECT[i].mLocation, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation) <= 50.0f && mPLAY.mITEM_OBJECT[i].CheckPossibleGetItem() && mPLAY.mITEM_OBJECT[i].mITEM_INFO->iSort != 1 && mPLAY.mITEM_OBJECT[i].mITEM_INFO->iType == 2)
        {
            tPage1 = mPLAY.mITEM_OBJECT[i].mServerIndex;
            tIndex1 = mPLAY.mITEM_OBJECT[i].mUniqueNumber;
            tQuantity1 = 0;
            mINVENUI.PutInventory1( -1, -1, mPLAY.mITEM_OBJECT[i].mDATA.iIndex, mPLAY.mITEM_OBJECT[i].mDATA.iQuantity, &tPage2, &tIndex2, &tXPost1, &tYPost1, -1);
            if (tPage2 != -1)
            {
                break;
            }
            tPickUpItem = 1;
        }
    }
    if (i < mPLAY.MAX_ITEM_OBJECT)
    {
        if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
        {
            mPLAY.PROCESS_DATA_201_SEND(tPage1, tIndex1, tQuantity1, tPage2, tIndex2, tXPost1, tYPost1);
            mMYINFO.mNetworkLock = 1;
            mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
            return;
        }
    }

    // Pickup Common
    for (i = 0; i < mPLAY.MAX_ITEM_OBJECT; ++i)
    {
        if (mPLAY.mITEM_OBJECT[i].mCheckValidState && mUTIL.GetLengthXYZ(mPLAY.mITEM_OBJECT[i].mLocation, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation) <= 50.0f && mPLAY.mITEM_OBJECT[i].CheckPossibleGetItem() && mPLAY.mITEM_OBJECT[i].mITEM_INFO->iSort != 1 && mPLAY.mITEM_OBJECT[i].mITEM_INFO->iType == 1)
        {
            tPage1 = mPLAY.mITEM_OBJECT[i].mServerIndex;
            tIndex1 = mPLAY.mITEM_OBJECT[i].mUniqueNumber;
            tQuantity1 = 0;
            mINVENUI.PutInventory1( -1, -1, mPLAY.mITEM_OBJECT[i].mDATA.iIndex, mPLAY.mITEM_OBJECT[i].mDATA.iQuantity, &tPage2, &tIndex2, &tXPost1, &tYPost1, -1);
            if (tPage2 != -1)
            {
                break;
            }
            tPickUpItem = 1;
        }
    }
    if (i < mPLAY.MAX_ITEM_OBJECT)
    {
        if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
        {
            mPLAY.PROCESS_DATA_201_SEND(tPage1, tIndex1, tQuantity1, tPage2, tIndex2, tXPost1, tYPost1);
            mMYINFO.mNetworkLock = 1;
            mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
            return;
        }
    }

    if (tPickupMoney == 1 || tPickUpItem == 1)
    {
        if (tPickupMoney == 1)
        {
            mBASICUI.Insert1(mMESSAGE.Return(116), mFONTCOLOR.mData[44]);
        }
        else
        {
            mBASICUI.Insert1(mMESSAGE.Return(117), mFONTCOLOR.mData[44]);
        }
    }
    else
    {
        mBASICUI.Insert1(mMESSAGE.Return(632), mFONTCOLOR.mData[44]);
    }
}
void MAIN::ProcessForGetItem4()
{
    ITEM_INFO* tITEM;
    int tPage1, tIndex1, tQuantity1, tPage2, tIndex2, tXPost1, tYPost1;
    int i, j, k;

    if (mMYINFO.mAvatarInfo.aEquip[8][0] < 1)
    {
        return;
    }
    tITEM = mITEM.Search(mMYINFO.mAvatarInfo.aEquip[8][0]);;
    if (!tITEM)
    {
        return;
    }
    if (tITEM->iSort != 22 || mPET.ReturnGrowPercent(mMYINFO.mAvatarInfo.aEquip[8][0], mMYINFO.mAvatarInfo.aEquip[8][2]) >= 100.0f && mMYINFO.mAvatarInfo.aEquip[8][1] >= 1)
    {
        for (i = 0; i < mPLAY.MAX_ITEM_OBJECT; ++i)
        {
            if (mPLAY.mITEM_OBJECT[i].mCheckValidState && mUTIL.GetLengthXYZ(mPLAY.mITEM_OBJECT[i].mLocation, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation) <= 50.0f && mPLAY.mITEM_OBJECT[i].CheckPossibleGetItem())
            {
                if (mPLAY.mITEM_OBJECT[i].mITEM_INFO->iSort == 1)
                {
                    if (!mUTIL.CheckOverMaximum(mMYINFO.mAvatarInfo.aMoney, mPLAY.mITEM_OBJECT[i].mDATA.iQuantity))
                    {
                        tPage1 = mPLAY.mITEM_OBJECT[i].mServerIndex;
                        tIndex1 = mPLAY.mITEM_OBJECT[i].mUniqueNumber;
                        tQuantity1 = 0;
                        tPage2 = 0;
                        tIndex2 = 0;
                        tXPost1 = 0;
                        tYPost1 = 0;
                        break;
                    }
                }
                else if (mPLAY.mITEM_OBJECT[i].mITEM_INFO->iIndex != 1401 && mPLAY.mITEM_OBJECT[i].mITEM_INFO->iIndex != 2132 && mPLAY.mITEM_OBJECT[i].mITEM_INFO->iIndex != 1401)
                {
                    if ((mPLAY.mITEM_OBJECT[i].mITEM_INFO->iType == 3 || mPLAY.mITEM_OBJECT[i].mITEM_INFO->iType == 4) && mUTIL.AutoPatSort(mMYINFO.mAvatarInfo.aEquip[8][0]) == 1)
                    {
                        tPage1 = mPLAY.mITEM_OBJECT[i].mServerIndex;
                        tIndex1 = mPLAY.mITEM_OBJECT[i].mUniqueNumber;
                        tQuantity1 = 0;
                        mINVENUI.PutInventory1(-1, -1, mPLAY.mITEM_OBJECT[i].mDATA.iIndex, mPLAY.mITEM_OBJECT[i].mDATA.iQuantity, &tPage2, &tIndex2, &tXPost1, &tYPost1, -1);
                        if (tPage2 != -1)
                        {
                            break;
                        }
                    }
                }
                else if (mPLAY.mITEM_OBJECT[i].mITEM_INFO->iType == 4 && mUTIL.AutoPatSort(mMYINFO.mAvatarInfo.aEquip[8][0]) == 2)
                {
                    tPage1 = mPLAY.mITEM_OBJECT[i].mServerIndex;
                    tIndex1 = mPLAY.mITEM_OBJECT[i].mUniqueNumber;
                    tQuantity1 = 0;
                    mINVENUI.PutInventory1(-1, -1, mPLAY.mITEM_OBJECT[i].mDATA.iIndex, mPLAY.mITEM_OBJECT[i].mDATA.iQuantity, &tPage2, &tIndex2, &tXPost1, &tYPost1, -1);
                    if (tPage2 != -1)
                    {
                        break;
                    }
                }
            }
        }
        if (i != mPLAY.MAX_ITEM_OBJECT && !mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
        {
            mPLAY.PROCESS_DATA_201_SEND(tPage1, tIndex1, tQuantity1, tPage2, tIndex2, tXPost1, tYPost1);
            mMYINFO.mNetworkLock = 1;
            mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
        }
    }
}
int MAIN::ProcessForSkill1(float tLocation[3], ACTION_INFO* tAction)
{
    int sIndex; 
    int sPoint; 
    SKILL_INFO* tSKILL; 
    int tManaUse;
    int sPoint2; 
    int tMinusMana;

    sIndex = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSkillNumber;
    sPoint = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSkillGradeNum1;
    sPoint2 = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSkillGradeNum2;
    tManaUse = (int)mSKILL.ReturnSkillValue(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSkillNumber, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSkillGradeNum1, 1);
    tMinusMana = mFACTOR.GetReduceManaRatio();
    if (tMinusMana > 0)
    {
        tManaUse -= tMinusMana * tManaUse / 100;
    }
    if (mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue < tManaUse )
    {
        mBASICUI.Insert1(mMESSAGE.Return(147), mFONTCOLOR.mData[44]);
        return false;
    }

    tSKILL = mSKILL.Search(sIndex);
    if( !tSKILL )
    {
        return false;
    }
    //
   /* if (tSKILL->sIsUsingProtect != 1 && mMYINFO.CheckPossibleAttackForProtect(sIndex))
    {
        return true;
    }*/
    //
    if((mMYINFO.mPresentZoneNumber == 88 || mMYINFO.mPresentZoneNumber == 54) && (tSKILL->sAttackType == 4 || tSKILL->sAttackType == 5 || tSKILL->sIndex == 78))
    {
        mBASICUI.Insert1(mMESSAGE.Return(1920), mFONTCOLOR.mData[44]);
        return false;
    }
    switch (sIndex)
    {
    case 4:
    case 23:
    case 42:
        if (!mZONEMAININFO.CheckLevelBattleZoneNumber2() && !mZONEMAININFO.Check267TypeZoneNumber2() && mMYINFO.mAvatarInfo.aRebirth < 6)
        {
            //mBASICUI.Insert1(mMESSAGE.Return(1146), mFONTCOLOR.mData[44]);
            //return false;
        }
        if (mMYINFO.mPresentZoneNumber == 234 || mMYINFO.mPresentZoneNumber == 235 || mMYINFO.mPresentZoneNumber == 236 || mMYINFO.mPresentZoneNumber == 237 || mMYINFO.mPresentZoneNumber == 238 || mMYINFO.mPresentZoneNumber == 239 || mMYINFO.mPresentZoneNumber == 240)
        {
            mBASICUI.Insert1(mMESSAGE.Return(1212), mFONTCOLOR.mData[44]);
            return false;
        }
        if (mMYINFO.A034( tLocation, tAction->aTargetObjectSort, tAction->aTargetObjectIndex, tAction->aTargetObjectUniqueNumber, sIndex, sPoint, sPoint2))
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
            return true;
        }
        return false;

    case 8:
    case 27:
    case 46:
        if (mMYINFO.A042( tLocation, tAction->aTargetObjectSort, tAction->aTargetObjectIndex, tAction->aTargetObjectUniqueNumber, sIndex, sPoint, sPoint2))
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
            return true;
        }
        return false;

    case 9:
    case 28:
    case 47:
        if (mMYINFO.A043( tLocation, tAction->aTargetObjectSort, tAction->aTargetObjectIndex, tAction->aTargetObjectUniqueNumber, sIndex, sPoint, sPoint2))
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
            return true;
        }
        return false;

    case 12:
    case 31:
    case 50:
        if (mMYINFO.A047( tLocation, tAction->aTargetObjectSort, tAction->aTargetObjectIndex, tAction->aTargetObjectUniqueNumber, sIndex, sPoint, sPoint2))
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
            return true;
        }
        return false;

    case 13:
    case 32:
    case 51:
        if (mMYINFO.A049( tLocation, tAction->aTargetObjectSort, tAction->aTargetObjectIndex, tAction->aTargetObjectUniqueNumber, sIndex, sPoint, sPoint2))
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
            return true;
        }
        return false;

    case 16:
    case 35:
    case 54:
        if (mMYINFO.A053( tLocation, tAction->aTargetObjectSort, tAction->aTargetObjectIndex, tAction->aTargetObjectUniqueNumber, sIndex, sPoint, sPoint2))
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
            return true;
        }
        return false;

    case 17:
    case 36:
    case 55:
        if (mMYINFO.A055( tLocation, tAction->aTargetObjectSort, tAction->aTargetObjectIndex, tAction->aTargetObjectUniqueNumber, sIndex, sPoint, sPoint2))
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
            return true;
        }
        return false;

    case 58:
    case 64:
    case 70:
        if (mMYINFO.A045( tLocation, tAction->aTargetObjectSort, tAction->aTargetObjectIndex, tAction->aTargetObjectUniqueNumber, sIndex, sPoint, sPoint2))
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
            return true;
        }
        return false;

    case 59:
    case 65:
    case 71:
        if (mMYINFO.A046( tLocation, tAction->aTargetObjectSort, tAction->aTargetObjectIndex, tAction->aTargetObjectUniqueNumber, sIndex, sPoint, sPoint2))
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
            return true;
        }
        return false;

    case 60:
    case 66:
    case 72:
        if (mMYINFO.A051( tLocation, tAction->aTargetObjectSort, tAction->aTargetObjectIndex, tAction->aTargetObjectUniqueNumber, sIndex, sPoint, sPoint2))
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
            return true;
        }
        return false;

    case 61:
    case 67:
    case 73:
        if (mMYINFO.A052( tLocation, tAction->aTargetObjectSort, tAction->aTargetObjectIndex, tAction->aTargetObjectUniqueNumber, sIndex, sPoint, sPoint2))
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
            return true;
        }
        return false;

    case 62:
    case 68:
    case 74:
        if (mMYINFO.A057( tLocation, tAction->aTargetObjectSort, tAction->aTargetObjectIndex, tAction->aTargetObjectUniqueNumber, sIndex, sPoint, sPoint2))
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
            return true;
        }
        return false;

    case 63:
    case 69:
    case 75:
        if (mMYINFO.A058( tLocation, tAction->aTargetObjectSort, tAction->aTargetObjectIndex, tAction->aTargetObjectUniqueNumber, sIndex, sPoint, sPoint2))
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
            return true;
        }
        return false;

    case 85:
    case 91:
    case 97:
        if (mMYINFO.A069( tLocation, tAction->aTargetObjectSort, tAction->aTargetObjectIndex, tAction->aTargetObjectUniqueNumber, sIndex, sPoint, sPoint2))
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
            return true;
        }
        return false;

    case 86:
    case 92:
    case 98:
        if (mMYINFO.A070( tLocation, tAction->aTargetObjectSort, tAction->aTargetObjectIndex, tAction->aTargetObjectUniqueNumber, sIndex, sPoint, sPoint2))
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
            return true;
        }
        return false;

    case 87:
    case 93:
    case 99:
        if (mMYINFO.A071( tLocation, tAction->aTargetObjectSort, tAction->aTargetObjectIndex, tAction->aTargetObjectUniqueNumber, sIndex, sPoint, sPoint2))
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
            return true;
        }
        return false;

    case 88:
    case 94:
    case 100:
        if (mMYINFO.A072( tLocation, tAction->aTargetObjectSort, tAction->aTargetObjectIndex, tAction->aTargetObjectUniqueNumber, sIndex, sPoint, sPoint2))
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
            return true;
        }
        return false;

    case 89:
    case 95:
    case 101:
        if (mMYINFO.A073( tLocation, tAction->aTargetObjectSort, tAction->aTargetObjectIndex, tAction->aTargetObjectUniqueNumber, sIndex, sPoint, sPoint2))
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
            return true;
        }
        return false;

    case 90:
    case 96:
    case 102:
        if (mMYINFO.A074( tLocation, tAction->aTargetObjectSort, tAction->aTargetObjectIndex, tAction->aTargetObjectUniqueNumber, sIndex, sPoint, sPoint2))
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
            return true;
        }
        return false;

    case 106:
    case 107:
    case 108:
    case 109:
    case 110:
    case 111:
        if (mMYINFO.A076( tLocation, tAction->aTargetObjectSort, tAction->aTargetObjectIndex, tAction->aTargetObjectUniqueNumber, sIndex, sPoint, sPoint2))
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
            return true;
        }
        return false;

    case 121:
    case 127:
    case 133:
        if (mMYINFO.A085( tLocation, tAction->aTargetObjectSort, tAction->aTargetObjectIndex, tAction->aTargetObjectUniqueNumber, sIndex, sPoint, sPoint2))
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
            return true;
        }
        return false;

    case 122:
    case 128:
    case 134:
        if (mMYINFO.A086( tLocation, tAction->aTargetObjectSort, tAction->aTargetObjectIndex, tAction->aTargetObjectUniqueNumber, sIndex, sPoint, sPoint2))
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
            return true;
        }
        return false;

    case 123:
    case 129:
    case 135:
        if (mMYINFO.A087( tLocation, tAction->aTargetObjectSort, tAction->aTargetObjectIndex, tAction->aTargetObjectUniqueNumber, sIndex, sPoint, sPoint2))
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
            return true;
        }
        return false;

    case 124:
    case 130:
    case 136:
        if (mMYINFO.A088( tLocation, tAction->aTargetObjectSort, tAction->aTargetObjectIndex, tAction->aTargetObjectUniqueNumber, sIndex, sPoint, sPoint2))
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
            return true;
        }
        return false;

    case 125:
    case 131:
    case 137:
        if (mMYINFO.A089( tLocation, tAction->aTargetObjectSort, tAction->aTargetObjectIndex, tAction->aTargetObjectUniqueNumber, sIndex, sPoint, sPoint2))
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
            return true;
        }
        return false;

    case 126:
    case 132:
    case 138:
        if (mMYINFO.A090( tLocation, tAction->aTargetObjectSort, tAction->aTargetObjectIndex, tAction->aTargetObjectUniqueNumber, sIndex, sPoint, sPoint2))
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
            return true;
        }
        return false;

    default:
        return false;
    }
}
BOOL MAIN::ProcessForSkill2(int tHotkeyIndex, int mX, int mY, int tSort1, int tSort2)
{
    int tBonusSkillValue;
    int tManaUse;
    int tMinusMana;
    int sIndex;
    int sPoint;
    SKILL_INFO* tSKILL;
    ITEM_INFO* tITEM;
    float tLocation[3];
    float tSpeed;
    int tTrisIndex;
    float tCoord[3];
    float tAddRange;
    int index01;
    int index02;
    int index03;
    int index04;

    if (mMYINFO.mCheckSendActionPacket || !mPLAY.CheckPossibleChangeAction())
    {
        return 0;
    }
    if (tSort2)
    {
        if (tSort2 == 1)
        {
            mMYINFO.mHotKeyIndex = -1;
            sPoint = mMYINFO.mAvatarInfo.aAutoSkillAttack[1][1];
            sIndex = mMYINFO.mAvatarInfo.aAutoSkillAttack[1][0];
        }
        else if (tSort2 == 2)
        {
            sPoint = mMYINFO.mAvatarInfo.aAutoSkillAttack[0][1];
            sIndex = mMYINFO.mAvatarInfo.aAutoSkillAttack[0][0];
            mMYINFO.mHotKeyIndex = -1;
        }
    }
    else
    {
        mMYINFO.mHotKeyIndex = tHotkeyIndex;
        sIndex = mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][tHotkeyIndex][0];
        sPoint = mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][tHotkeyIndex][1];
    }
    tBonusSkillValue = mFACTOR.GetBonusSkillValue(sIndex);
    tSKILL = mSKILL.Search(sIndex);
    if (!tSKILL)
    {
        return 0;
    }
    /*if (tSKILL->sIsUsingProtect != 1 && mMYINFO.CheckPossibleAttackForProtect(sIndex))
    {
        return true;
    }*/
    if ((mMYINFO.mPresentZoneNumber == 88 || mMYINFO.mPresentZoneNumber == 54) && (tSKILL->sAttackType == 4 || tSKILL->sAttackType == 5 || tSKILL->sIndex == 78))
    {
        SYSMSG(1920);
        return 0;
    }
    if (tSKILL->sTribeInfo[0] != 1 && tSKILL->sTribeInfo[0] - 2 != mMYINFO.mAvatarInfo.aPreviousTribe)
    {
        if (tSort1)
        {
            SYSMSG(145);
        }
        return 0;
    }
    if (tSKILL->sTribeInfo[1] != 1)
    {
        tITEM = mITEM.Search(mMYINFO.mAvatarInfo.aEquip[7][0]);
        if (!tITEM)
        {
            return 0;
        }
        if (tSKILL->sTribeInfo[1] != tITEM->iSort - 11)
        {
            if (tSort1)
            {
                SYSMSG(146);
            }
            return 0;
        }
    }
    tManaUse = (int)mSKILL.ReturnSkillValue(tSKILL->sIndex, sPoint, 1);
    tMinusMana = mFACTOR.GetReduceManaRatio();
    if (tMinusMana > 0)
    {
        tManaUse -= tMinusMana * tManaUse / 100;
    }
    if (mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue < tManaUse)
    {
        if (tSort1)
        {
            SYSMSG(147);
        }
        if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
        {
            SYSMSG(147);
        }
        return 0;
    }

    // Begin Skill Conditions
    switch (sIndex)
    {
    case 140:
    case 141:
    case 144:
    case 145:
    case 148:
    case 149:
        if (mMYINFO.mAvatarInfo.aSecretSkillCooldown <= 0)
        {
            break;
        }
        SYSMSG(2397);
        return 0;
    default:
        break;
    }
    switch (sIndex)
    {
    case 1:
    case 20:
    case 39:
        return mMYINFO.A024(tLocation, 0, -1, 0, sIndex, sPoint, tBonusSkillValue) != 0;

    case 2:
    case 21:
    case 40:
        if (mUTIL.CheckJumpRunMovingZoneForLocation(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation))
        {
            return 0;
        }
        if (!mGDATA.mZONE.mWORLD2.ScreenCoordToWorldCoord(mX, mY, &tTrisIndex, tCoord, 0))
        {
            return 0;
        }
        tSpeed = mFACTOR.GetFastRunSpeed(sIndex, tBonusSkillValue + sPoint);
        if (!mUTIL.Collision(1, tCoord, tSpeed, tLocation))
        {
            return 0;
        }
        if (!mMYINFO.A031(tLocation, 0, -1, 0, sIndex, sPoint, tBonusSkillValue))
        {
            return 0;
        }
        mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
        return 1;

    case 3:
    case 22:
    case 41:
        if (mPLAY.mAVATAR_OBJECT[0].mDATA.aAnimalNumber && !mPLAY.mAVATAR_OBJECT[0].mDATA.aAnimalAbsorbState)
        {
            SYSMSG(1186);
            return false;
        }
        if (!mZONEMAININFO.CheckPossibleJumpRun())
        {
            SYSMSG(247);
            return false;
        }
        if (!mGDATA.mZONE.mWORLD3.ScreenCoordToWorldCoord(mX, mY, &tTrisIndex, tCoord, 1))
        {
            if (!mGDATA.mZONE.mWORLD2.ScreenCoordToWorldCoord(mX, mY, &tTrisIndex, tCoord, 1))
            {
                SYSMSG(248);
                return false;
            }
            if (mUTIL.GetLengthXYZ(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation, tCoord) < 10.0f)
            {
                if (tSort1)
                {
                    SYSMSG(249);
                }
                return false;
            }
            if (mSKILL.ReturnSkillValue(sIndex, tBonusSkillValue + sPoint, 6) < mUTIL.GetLengthXYZ(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation, tCoord))
            {
                if (tSort1)
                {
                    SYSMSG(250);
                }
                return false;
            }
            if (!mUTIL.CheckValidTarget(tCoord))
            {
                if (mMYINFO.A033(tCoord, 0, -1, 0, sIndex, sPoint, tBonusSkillValue))
                {
                    mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
                    return true;
                }
                return false;
            }
            if (tSort1)
            {
                SYSMSG(733);
            }
            return false;
        }
        if (mUTIL.GetLengthXYZ(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation, tCoord) < 10.0f)
        {
            if (tSort1)
            {
                SYSMSG(249);
            }
            return false;
        }
        if (mSKILL.ReturnSkillValue(sIndex, tBonusSkillValue + sPoint, 6) < mUTIL.GetLengthXYZ(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation, tCoord))
        {
            if (tSort1)
            {
                SYSMSG(250)
            }
            return false;
        }
        if (!mUTIL.CheckValidTarget(tCoord))
        {
            if (mMYINFO.A033(tCoord, 0, -1, 0, sIndex, sPoint, tBonusSkillValue))
            {
                mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
                return true;
            }
            return false;
        }
        if (tSort1)
        {
            SYSMSG(733)
        }
        return false;

    case 4:
    case 23:
    case 42:
        if (!mZONEMAININFO.CheckLevelBattleZoneNumber2() && !mZONEMAININFO.Check267TypeZoneNumber2())//70 UNSTUN
        {
            //SYSMSG(1146);
            //return false;
        }
        if (mMYINFO.mPresentZoneNumber == 234 || mMYINFO.mPresentZoneNumber == 235 || mMYINFO.mPresentZoneNumber == 236 || mMYINFO.mPresentZoneNumber == 237 || mMYINFO.mPresentZoneNumber == 238 || mMYINFO.mPresentZoneNumber == 239 || mMYINFO.mPresentZoneNumber == 240)
        {
            SYSMSG(1212);
            return false;
        }
        if (mMYINFO.mSelectObjSort)
        {
            if (mMYINFO.mSelectObjSort > 1 && mMYINFO.mSelectObjSort <= 3)
            {
                for (index01 = 0; index01 < mPLAY.MAX_AVATAR_OBJECT; index01++)
                {
                    if (!mPLAY.mAVATAR_OBJECT[index01].mCheckValidState)
                        continue;
                    if (!mPLAY.mAVATAR_OBJECT[index01].mDATA.aVisibleState)
                        continue;
                    if (mPLAY.mAVATAR_OBJECT[index01].mIndex != mMYINFO.mSelectObjIndex)
                        continue;
                    if (mPLAY.mAVATAR_OBJECT[index01].mUniqueNumber != mMYINFO.mSelectObjUniqueNumber)
                        continue;
                    break;
                }
                if (index01 == mPLAY.MAX_AVATAR_OBJECT)
                {
                    if (tSort1)
                    {
                        SYSMSG(457);
                    }
                    return false;
                }
                if (mPLAY.CheckPossibleAvatarTarget(mPLAY.mAVATAR_OBJECT[index01].mDATA.aAction.aSort))
                {
                    tCoord[0] = mPLAY.mAVATAR_OBJECT[index01].mDATA.aAction.aLocation[0];
                    tCoord[1] = mPLAY.mAVATAR_OBJECT[index01].mDATA.aAction.aLocation[1];
                    tCoord[2] = mPLAY.mAVATAR_OBJECT[index01].mDATA.aAction.aLocation[2];
                    if ( (float)(mFACTOR.GetAttackRadius(sIndex) + 4.5f) >= mUTIL.GetLengthXYZ(tCoord, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation) )
                    {
                        if (mMYINFO.A034(tCoord, mMYINFO.mSelectObjSort, mMYINFO.mSelectObjIndex, mMYINFO.mSelectObjUniqueNumber, sIndex, sPoint, tBonusSkillValue))
                        {
                            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
                            return true;
                        }
                        return false;
                    }
                    else
                    {
                        tCoord[0] = tCoord[0];
                        tCoord[1] = tCoord[1];
                        tCoord[2] = tCoord[2];
                        if (!mUTIL.CheckJumpRunMovingZoneForLocation(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation))
                        {
                            if (mUTIL.Collision(1, tCoord, mFACTOR.GetRunSpeed(), tLocation))
                            {
                                mMYINFO.A002_2( tLocation, mMYINFO.mSelectObjSort, mMYINFO.mSelectObjIndex, mMYINFO.mSelectObjUniqueNumber, sIndex, sPoint, tBonusSkillValue);
                                return true;
                            }
                            return false;
                        }
                        return false;
                    }
                }
                else
                {
                    if (tSort1)
                    {
                        SYSMSG(458);
                    }
                    return false;
                }
            }
            else
            {
                if (tSort1)
                {
                    SYSMSG(138);
                }
                return false;
            }
        }
        else
        {
            if (tSort1)
            {
                SYSMSG(456);
            }
            return false;
        }
        return false;

    case 5:
    case 24:
    case 43:
        if (!mZONEMAININFO.CheckLevelBattleZoneNumber2() && !mZONEMAININFO.Check267TypeZoneNumber2())//70 UNSTUN
        {
            //SYSMSG(1147);
            //return 0;
        }
        for (index01 = 0; index01 < mPLAY.MAX_AVATAR_OBJECT; index01++)
        {
            if (!mPLAY.mAVATAR_OBJECT[index01].mCheckValidState)
                continue;
            if (!mPLAY.mAVATAR_OBJECT[index01].mDATA.aVisibleState)
                continue;
            if (mPLAY.mAVATAR_OBJECT[index01].mDATA.aTribe != mMYINFO.mAvatarInfo.aTribe && mPLAY.mAVATAR_OBJECT[index01].mDATA.aTribe != mPLAY.ReturnAlliance(mMYINFO.mAvatarInfo.aTribe))
                continue;
            if (mPLAY.mAVATAR_OBJECT[index01].mDATA.aAction.aSort != 11)
                continue;
            if ((float)(mFACTOR.GetAttackRadius(sIndex) + 4.5f) <= mUTIL.GetLengthXYZ(mPLAY.mAVATAR_OBJECT[index01].mDATA.aAction.aLocation, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation))
                continue;
            break;
        }
        if (index01 == mPLAY.MAX_AVATAR_OBJECT)
        {
            if (tSort1)
            {
                SYSMSG(459);
            }
            return false;
        }
        if (mMYINFO.A039(mPLAY.mAVATAR_OBJECT[index01].mDATA.aAction.aLocation, 2, mPLAY.mAVATAR_OBJECT[index01].mIndex, mPLAY.mAVATAR_OBJECT[index01].mUniqueNumber, sIndex, sPoint, tBonusSkillValue))
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
            return true;
        }
        return false;

    case 6:
    case 25:
    case 44:
        if (mMYINFO.A040(tLocation, 0, -1, 0, sIndex, sPoint, tBonusSkillValue))
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
            return true;
        }
        return false;

    case 7:
    case 26:
    case 45:
    case 139:
    case 142:
    case 143:
    case 146:
    case 147:
    case 150:
        if (mMYINFO.A041(tLocation, 0, -1, 0, sIndex, sPoint, tBonusSkillValue))
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
            return true;
        }
        return false;

    case 8:
    case 9:
    case 12:
    case 13:
    case 16:
    case 17:
    case 27:
    case 28:
    case 31:
    case 32:
    case 35:
    case 36:
    case 46:
    case 47:
    case 50:
    case 51:
    case 54:
    case 55:
    case 58:
    case 59:
    case 60:
    case 61:
    case 62:
    case 63:
    case 64:
    case 65:
    case 66:
    case 67:
    case 68:
    case 69:
    case 70:
    case 71:
    case 72:
    case 73:
    case 74:
    case 75:
    case 85:
    case 86:
    case 87:
    case 88:
    case 89:
    case 90:
    case 91:
    case 92:
    case 93:
    case 94:
    case 95:
    case 96:
    case 97:
    case 98:
    case 99:
    case 100:
    case 101:
    case 102:
    case 121:
    case 122:
    case 123:
    case 124:
    case 125:
    case 126:
    case 127:
    case 128:
    case 129:
    case 130:
    case 131:
    case 132:
    case 133:
    case 134:
    case 135:
    case 136:
    case 137:
    case 138:
        switch (mMYINFO.mSelectObjSort)
        {
        case 0:
            if (tSort1)
            {
                SYSMSG(148);
            }
            return false;

        case 2:
        case 3:
            for (index01 = 0; index01 < mPLAY.MAX_AVATAR_OBJECT; index01++)
            {
                if (!mPLAY.mAVATAR_OBJECT[index01].mCheckValidState)
                    continue;
                if (!mPLAY.mAVATAR_OBJECT[index01].mDATA.aVisibleState)
                    continue;
                if (mPLAY.mAVATAR_OBJECT[index01].mIndex != mMYINFO.mSelectObjIndex)
                    continue;
                if (mPLAY.mAVATAR_OBJECT[index01].mUniqueNumber != mMYINFO.mSelectObjUniqueNumber)
                    continue;
                break;
            }
            if (index01 == mPLAY.MAX_AVATAR_OBJECT)
            {
                if (tSort1)
                {
                    SYSMSG(150);
                }
                return false;
            }
            if (!mPLAY.CheckPossibleAvatarTarget(mPLAY.mAVATAR_OBJECT[index01].mDATA.aAction.aSort))
            {
                if (tSort1)
                {
                    SYSMSG(151);
                }
                return false;
            }
            tAddRange = 4.5f;
            tCoord[0] = mPLAY.mAVATAR_OBJECT[index01].mDATA.aAction.aLocation[0];
            tCoord[1] = mPLAY.mAVATAR_OBJECT[index01].mDATA.aAction.aLocation[1];
            tCoord[2] = mPLAY.mAVATAR_OBJECT[index01].mDATA.aAction.aLocation[2];
            goto GENERAL;

        case 5:
            for (index01 = 0; index01 < mPLAY.MAX_MONSTER_OBJECT; index01++)
            {
                if (!mPLAY.mMONSTER_OBJECT[index01].mCheckValidState)
                    continue;
                if (mPLAY.mMONSTER_OBJECT[index01].mServerIndex != mMYINFO.mSelectObjIndex)
                    continue;
                if (mPLAY.mMONSTER_OBJECT[index01].mUniqueNumber != mMYINFO.mSelectObjUniqueNumber)
                    continue;
                break;
            }
            if (index01 == mPLAY.MAX_MONSTER_OBJECT)
            {
                if (tSort1)
                {
                    SYSMSG(150);
                }
                return false;
            }
            if (!mPLAY.CheckPossibleMonsterTarget(mPLAY.mMONSTER_OBJECT[index01].mMONSTER.mAction.aSort))
            {
                if (tSort1)
                {
                    SYSMSG(151);
                }
                return false;
            }
            tAddRange = mPLAY.mMONSTER_OBJECT[index01].mAttackRadius;
            tCoord[0] = mPLAY.mMONSTER_OBJECT[index01].mMONSTER.mAction.aLocation[0];
            tCoord[1] = mPLAY.mMONSTER_OBJECT[index01].mMONSTER.mAction.aLocation[1];
            tCoord[2] = mPLAY.mMONSTER_OBJECT[index01].mMONSTER.mAction.aLocation[2];
        GENERAL:
            if ((float)(mFACTOR.GetAttackRadius(sIndex) + tAddRange) >= mUTIL.GetLengthXYZ(tCoord, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation))
            {
                switch (sIndex)
                {
                case 8:
                case 27:
                case 46:
                    if (mMYINFO.A042( tCoord, mMYINFO.mSelectObjSort, mMYINFO.mSelectObjIndex, mMYINFO.mSelectObjUniqueNumber, sIndex, sPoint, tBonusSkillValue))
                    {
                        mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
                        return true;
                    }
                    return false;

                case 9:
                case 28:
                case 47:
                    if (mMYINFO.A043( tCoord, mMYINFO.mSelectObjSort, mMYINFO.mSelectObjIndex, mMYINFO.mSelectObjUniqueNumber, sIndex, sPoint, tBonusSkillValue))
                    {
                        mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
                        return true;
                    }
                    return false;

                case 12:
                case 31:
                case 50:
                    if (mMYINFO.A047( tCoord, mMYINFO.mSelectObjSort, mMYINFO.mSelectObjIndex, mMYINFO.mSelectObjUniqueNumber, sIndex, sPoint, tBonusSkillValue))
                    {
                        mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
                        return true;
                    }
                    return false;

                case 13:
                case 32:
                case 51:
                    if (mMYINFO.A049( tCoord, mMYINFO.mSelectObjSort, mMYINFO.mSelectObjIndex, mMYINFO.mSelectObjUniqueNumber, sIndex, sPoint, tBonusSkillValue))
                    {
                        mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
                        return true;
                    }
                    return false;

                case 16:
                case 35:
                case 54:
                    if (mMYINFO.A053( tCoord, mMYINFO.mSelectObjSort, mMYINFO.mSelectObjIndex, mMYINFO.mSelectObjUniqueNumber, sIndex, sPoint, tBonusSkillValue))
                    {
                        mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
                        return true;
                    }
                    return false;

                case 17:
                case 36:
                case 55:
                    if (mMYINFO.A055( tCoord, mMYINFO.mSelectObjSort, mMYINFO.mSelectObjIndex, mMYINFO.mSelectObjUniqueNumber, sIndex, sPoint, tBonusSkillValue))
                    {
                        mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
                        return true;
                    }
                    return false;

                case 58:
                case 64:
                case 70:
                    if (mMYINFO.A045( tCoord, mMYINFO.mSelectObjSort, mMYINFO.mSelectObjIndex, mMYINFO.mSelectObjUniqueNumber, sIndex, sPoint, tBonusSkillValue))
                    {
                        mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
                        return true;
                    }
                    return false;

                case 59:
                case 65:
                case 71:
                    if (mMYINFO.A046( tCoord, mMYINFO.mSelectObjSort, mMYINFO.mSelectObjIndex, mMYINFO.mSelectObjUniqueNumber, sIndex, sPoint, tBonusSkillValue))
                    {
                        mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
                        return true;
                    }
                    return false;

                case 60:
                case 66:
                case 72:
                    if (mMYINFO.A051( tCoord, mMYINFO.mSelectObjSort, mMYINFO.mSelectObjIndex, mMYINFO.mSelectObjUniqueNumber, sIndex, sPoint, tBonusSkillValue))
                    {
                        mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
                        return true;
                    }
                    return false;

                case 61:
                case 67:
                case 73:
                    if (mMYINFO.A052( tCoord, mMYINFO.mSelectObjSort, mMYINFO.mSelectObjIndex, mMYINFO.mSelectObjUniqueNumber, sIndex, sPoint, tBonusSkillValue))
                    {
                        mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
                        return true;
                    }
                    return false;

                case 62:
                case 68:
                case 74:
                    if (mMYINFO.A057( tCoord, mMYINFO.mSelectObjSort, mMYINFO.mSelectObjIndex, mMYINFO.mSelectObjUniqueNumber, sIndex, sPoint, tBonusSkillValue))
                    {
                        mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
                        return true;
                    }
                    return false;

                case 63:
                case 69:
                case 75:
                    if (mMYINFO.A058( tCoord, mMYINFO.mSelectObjSort, mMYINFO.mSelectObjIndex, mMYINFO.mSelectObjUniqueNumber, sIndex, sPoint, tBonusSkillValue))
                    {
                        mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
                        return true;
                    }
                    return false;

                case 85:
                case 91:
                case 97:
                    if (mMYINFO.A069( tCoord, mMYINFO.mSelectObjSort, mMYINFO.mSelectObjIndex, mMYINFO.mSelectObjUniqueNumber, sIndex, sPoint, tBonusSkillValue))
                    {
                        mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
                        return true;
                    }
                    return false;

                case 86:
                case 92:
                case 98:
                    if (mMYINFO.A070( tCoord, mMYINFO.mSelectObjSort, mMYINFO.mSelectObjIndex, mMYINFO.mSelectObjUniqueNumber, sIndex, sPoint, tBonusSkillValue))
                    {
                        mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
                        return true;
                    }
                    return false;

                case 87:
                case 93:
                case 99:
                    if (mMYINFO.A071( tCoord, mMYINFO.mSelectObjSort, mMYINFO.mSelectObjIndex, mMYINFO.mSelectObjUniqueNumber, sIndex, sPoint, tBonusSkillValue))
                    {
                        mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
                        return true;
                    }
                    return false;

                case 88:
                case 94:
                case 100:
                    if (mMYINFO.A072( tCoord, mMYINFO.mSelectObjSort, mMYINFO.mSelectObjIndex, mMYINFO.mSelectObjUniqueNumber, sIndex, sPoint, tBonusSkillValue))
                    {
                        mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
                        return true;
                    }
                    return false;

                case 89:
                case 95:
                case 101:
                    if (mMYINFO.A073( tCoord, mMYINFO.mSelectObjSort, mMYINFO.mSelectObjIndex, mMYINFO.mSelectObjUniqueNumber, sIndex, sPoint, tBonusSkillValue))
                    {
                        mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
                        return true;
                    }
                    return false;

                case 90:
                case 96:
                case 102:
                    if (mMYINFO.A074( tCoord, mMYINFO.mSelectObjSort, mMYINFO.mSelectObjIndex, mMYINFO.mSelectObjUniqueNumber, sIndex, sPoint, tBonusSkillValue))
                    {
                        mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
                        return true;
                    }
                    return false;

                case 121:
                case 127:
                case 133:
                    if (mMYINFO.A085( tCoord, mMYINFO.mSelectObjSort, mMYINFO.mSelectObjIndex, mMYINFO.mSelectObjUniqueNumber, sIndex, sPoint, tBonusSkillValue))
                    {
                        mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
                        return true;
                    }
                    return false;

                case 122:
                case 128:
                case 134:
                    if (mMYINFO.A086( tCoord, mMYINFO.mSelectObjSort, mMYINFO.mSelectObjIndex, mMYINFO.mSelectObjUniqueNumber, sIndex, sPoint, tBonusSkillValue))
                    {
                        mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
                        return true;
                    }
                    return false;

                case 123:
                case 129:
                case 135:
                    if (mMYINFO.A087( tCoord, mMYINFO.mSelectObjSort, mMYINFO.mSelectObjIndex, mMYINFO.mSelectObjUniqueNumber, sIndex, sPoint, tBonusSkillValue))
                    {
                        mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
                        return true;
                    }
                    return false;

                case 124:
                case 130:
                case 136:
                    if (mMYINFO.A088( tCoord, mMYINFO.mSelectObjSort, mMYINFO.mSelectObjIndex, mMYINFO.mSelectObjUniqueNumber, sIndex, sPoint, tBonusSkillValue))
                    {
                        mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
                        return true;
                    }
                    return false;

                case 125:
                case 131:
                case 137:
                    if (mMYINFO.A089( tCoord, mMYINFO.mSelectObjSort, mMYINFO.mSelectObjIndex, mMYINFO.mSelectObjUniqueNumber, sIndex, sPoint, tBonusSkillValue))
                    {
                        mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
                        return true;
                    }
                    return false;

                case 126:
                case 132:
                case 138:
                    if (mMYINFO.A090( tCoord, mMYINFO.mSelectObjSort, mMYINFO.mSelectObjIndex, mMYINFO.mSelectObjUniqueNumber, sIndex, sPoint, tBonusSkillValue))
                    {
                        mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
                        return true;
                    }
                    return false;

                default:
                    return false;
                }
            }
            else
            {
                tCoord[0] = tCoord[0];
                tCoord[1] = tCoord[1];
                tCoord[2] = tCoord[2];
                if (!mUTIL.CheckJumpRunMovingZoneForLocation(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation))
                {
                    if (mUTIL.Collision(1, tCoord, mFACTOR.GetRunSpeed(), tLocation))
                    {
                        mMYINFO.A002_2( tLocation, mMYINFO.mSelectObjSort, mMYINFO.mSelectObjIndex, mMYINFO.mSelectObjUniqueNumber, sIndex, sPoint, tBonusSkillValue);
                        return true;
                    }
                }
                return false;
            }
            return false;

        default:
            if (tSort1)
            {
                SYSMSG(149);
            }
            return false;
        }
        return false;

    case 10:
    case 29:
    case 48:
        if (mMYINFO.A044(tLocation, 0, -1, 0, sIndex, sPoint, tBonusSkillValue))
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
            return 1;
        }
        return 0;
      
    case 11:
    case 30:
    case 49:
        if (mMYINFO.A059(tLocation, 0, -1, 0, sIndex, sPoint, tBonusSkillValue))
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
            return 1;
        }
        return 0;

    case 14:
    case 33:
    case 52:
        if (mMYINFO.A050(tLocation, 0, -1, 0, sIndex, sPoint, tBonusSkillValue))
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
            return 1;
        }
        return 0;

    case 15:
    case 34:
    case 53:
        if (mMYINFO.A061(tLocation, 0, -1, 0, sIndex, sPoint, tBonusSkillValue))
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
            return 1;
        }
        return 0;

    case 18:
    case 37:
    case 56:
        if (mMYINFO.A056(tLocation, 0, -1, 0, sIndex, sPoint, tBonusSkillValue))
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
            return 1;
        }
        return 0;

    case 19:
    case 38:
    case 57:
        if (mMYINFO.A062(tLocation, 0, -1, 0, sIndex, sPoint, tBonusSkillValue))
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
            return 1;
        }
        return 0;

    case 76:
    case 77:
    case 79:
    case 80:
    case 81:
        if (mZONEMAININFO.CheckLevelBattleZoneNumber2())
        {
            if (tSort1)
            {
                SYSMSG(247);
            }
            return 0;
        }
        if (sIndex != 80)
        {
            goto PASSPT;
        }
        if (!mZONEMAININFO.CheckLevelBattleZoneNumber2() && !mZONEMAININFO.Check267TypeZoneNumber2())//70
        {
 //           if (tSort1)
 //           {
 ////               SYSMSG(893);
 //           }
 //           return false;
        }
        if (!mZONEMAININFO.CheckPossibleUseJump(mMYINFO.mPresentZoneNumber))
        {
            if (tSort1)
            {
                SYSMSG(1212);
            }
            return false;
        }
    PASSPT:
        if (!strcmp(mMYINFO.mAvatarInfo.aPartyName, ""))
        {
            if (tSort1)
            {
                SYSMSG(525);
            }
            return false;
        }
        //if (mUTIL.CheckJumpRunMovingZoneForLocation(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation))
        //{
        //    if (tSort1)
        //    {
        //        SYSMSG(526);
        //    }
        //    return false;
        //}
        //for (index01 = 0; index01 < 5 ; index01++)
        //{
        //    if (!mPLAY.GetPartySkillLocation(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aFront, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation, sIndex, index01, tCoord))
        //    {
        //        break;
        //    }
        //}
        //if (index01 == 5)
        //{
        //    if (tSort1)
        //    {
        //        SYSMSG(526);
        //    }
        //    return false;
        //}
        if (mMYINFO.A063(tLocation, 0, -1, 0, sIndex, sPoint, tBonusSkillValue, 1))
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
            return 1;
        }
        return false;

    case 78:
        if (mZONEMAININFO.CheckLevelBattleZoneNumber2())
        {
            if (tSort1)
            {
                SYSMSG(247);
            }
            return false;
        }
        if (mMYINFO.mPresentZoneNumber == 234 || mMYINFO.mPresentZoneNumber == 235 || mMYINFO.mPresentZoneNumber == 236 || mMYINFO.mPresentZoneNumber == 237 || mMYINFO.mPresentZoneNumber == 238 || mMYINFO.mPresentZoneNumber == 239 || mMYINFO.mPresentZoneNumber == 240)
        {
            if (tSort1)
            {
                SYSMSG(1212);
            }
            return 0;
        }
        if (!strcmp(mMYINFO.mAvatarInfo.aPartyName, ""))
        {
            if (tSort1)
            {
                SYSMSG(525);
            }
            return 0;
        }
        if (mUTIL.CheckJumpRunMovingZoneForLocation(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation))
        {
            if (tSort1)
            {
                SYSMSG(526);
            }
            return 0;
        }
        for (index01 = 0; index01 < 5; index01++)
        {
            if (mPLAY.GetPartySkillLocation( mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aFront, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation, sIndex, index01, tCoord))
            {
                continue;
            }
            break;
        }
        if (index01 < 5)
        {
            return false;
        }
        if (mMYINFO.mSelectObjSort)
        {
            if (mMYINFO.mSelectObjSort == 3)
            {
                for (index01 = 0; index01 < mPLAY.MAX_AVATAR_OBJECT; index01++)
                {
                    if (!mPLAY.mAVATAR_OBJECT[index01].mCheckValidState)
                        continue;
                    if (!mPLAY.mAVATAR_OBJECT[index01].mDATA.aVisibleState)
                        continue;
                    if (mPLAY.mAVATAR_OBJECT[index01].mIndex != mMYINFO.mSelectObjIndex)
                        continue;
                    if (mPLAY.mAVATAR_OBJECT[index01].mUniqueNumber != mMYINFO.mSelectObjUniqueNumber)
                        continue;
                    break;
                }
                if (index01 == mPLAY.MAX_AVATAR_OBJECT)
                {
                    if (tSort1)
                    {
                        SYSMSG(150);
                    }
                    return false;
                }
                if (mPLAY.CheckPossibleAvatarTarget(mPLAY.mAVATAR_OBJECT[index01].mDATA.aAction.aSort))
                {
                    if (mMYINFO.A063( tLocation, mMYINFO.mSelectObjSort, mMYINFO.mSelectObjIndex, mMYINFO.mSelectObjUniqueNumber, sIndex, sPoint, tBonusSkillValue, 1))
                    {
                        mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
                        return true;
                    }
                    return false;
                }
                else
                {
                    if (tSort1)
                    {
                        SYSMSG(151);
                    }
                    return false;
                }
            }
            else
            {
                if (tSort1)
                {
                    SYSMSG(149);
                }
                return false;
            }
        }
        else
        {
            if (tSort1)
            {
                SYSMSG(148);
            }
            return false;
        }
        return false;

    case 82:
        if (mMYINFO.A066(tLocation, 0, -1, 0, sIndex, sPoint, tBonusSkillValue))
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
            return 1;
        }
        return 0;

    case 83:
        if (mMYINFO.A067(tLocation, 0, -1, 0, sIndex, sPoint, tBonusSkillValue))
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
            return 1;
        }
        return 0;

    case 84:
        if (mMYINFO.A068(tLocation, 0, -1, 0, sIndex, sPoint, tBonusSkillValue))
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
            return 1;
        }
        return 0;

    case 103:
    case 104:
    case 105:
        if (mMYINFO.A075(tLocation, 0, -1, 0, sIndex, sPoint, tBonusSkillValue))
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
            return 1;
        }
        return 0;

    case 106:
    case 107:
    case 108:
    case 109:
    case 110:
    case 111:
        if (mMYINFO.mSelectObjSort)
        {
            if (mMYINFO.mSelectObjSort == 1)
            {
                for (index01 = 0; index01 < mPLAY.MAX_AVATAR_OBJECT; index01++)
                {
                    if (!mPLAY.mAVATAR_OBJECT[index01].mCheckValidState)
                        continue;
                    if (!mPLAY.mAVATAR_OBJECT[index01].mDATA.aVisibleState)
                        continue;
                    if(mPLAY.mAVATAR_OBJECT[index01].mIndex != mMYINFO.mSelectObjIndex)
                        continue;
                    if (mPLAY.mAVATAR_OBJECT[index01].mUniqueNumber != mMYINFO.mSelectObjUniqueNumber)
                        continue;
                    break;
                }
                if (index01 == mPLAY.MAX_AVATAR_OBJECT)
                {
                    if (tSort1)
                    {
                        SYSMSG(522);
                    }
                    return false;
                }
                if (!mPLAY.CheckPossibleAvatarTarget(mPLAY.mAVATAR_OBJECT[index01].mDATA.aAction.aSort))
                {
                    if (tSort1)
                    {
                        SYSMSG(523);
                    }
                    return false;
                }
                tCoord[0] = mPLAY.mAVATAR_OBJECT[index01].mDATA.aAction.aLocation[0];
                tCoord[1] = mPLAY.mAVATAR_OBJECT[index01].mDATA.aAction.aLocation[1];
                tCoord[2] = mPLAY.mAVATAR_OBJECT[index01].mDATA.aAction.aLocation[2];
                if ((float)(mFACTOR.GetAttackRadius(sIndex) + 4.5f) >= mUTIL.GetLengthXYZ(tCoord, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation))
                {
                    if (mMYINFO.A076( tCoord, mMYINFO.mSelectObjSort, mMYINFO.mSelectObjIndex, mMYINFO.mSelectObjUniqueNumber, sIndex, sPoint, tBonusSkillValue))
                    {
                        mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
                        return true;
                    }
                    return false;
                }
                else
                {
                    tCoord[0] = tCoord[0];
                    tCoord[1] = tCoord[1];
                    tCoord[2] = tCoord[2];
                    if (mUTIL.CheckJumpRunMovingZoneForLocation(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation))
                    {
                        return false;
                    }
                    if (mUTIL.Collision(1, tCoord, mFACTOR.GetRunSpeed(), tLocation))
                    {
                        mMYINFO.A002_2( tLocation, mMYINFO.mSelectObjSort, mMYINFO.mSelectObjIndex, mMYINFO.mSelectObjUniqueNumber, sIndex, sPoint, tBonusSkillValue);
                        return true;
                    }
                    return false;
                }
            }
            else
            {
                if (tSort1)
                {
                    SYSMSG(521);
                }
                return false;
            }
        }
        else
        {
            if (tSort1)
            {
                SYSMSG(520);
            }
            return false;
        }
        return false;

    case 112:
    case 115:
    case 118:
        if (mMYINFO.mPresentZoneNumber == 291 || mMYINFO.mPresentZoneNumber == 319 || mMYINFO.mPresentZoneNumber == 320 || mMYINFO.mPresentZoneNumber == 321 || mMYINFO.mPresentZoneNumber == 322 || mMYINFO.mPresentZoneNumber == 323)
        {
            if (tSort1)
            {
                SYSMSG(1496);
            }
            return false;
        }
        if (mMYINFO.A081(tLocation, 0, -1, 0, sIndex, sPoint, tBonusSkillValue))
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
            return true;
        }
        return false;

    case 113:
    case 116:
    case 119:
        if (mMYINFO.mPresentZoneNumber == 291 || mMYINFO.mPresentZoneNumber == 319 || mMYINFO.mPresentZoneNumber == 320 || mMYINFO.mPresentZoneNumber == 321 || mMYINFO.mPresentZoneNumber == 322 || mMYINFO.mPresentZoneNumber == 323)
        {
            if (tSort1)
            {
                SYSMSG(1496);
            }
            return false;
        }
        if (mMYINFO.A082(tLocation, 0, -1, 0, sIndex, sPoint, tBonusSkillValue))
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
            return true;
        }
        return false;

    case 114:
    case 117:
    case 120:
        if (mMYINFO.mPresentZoneNumber == 291 || mMYINFO.mPresentZoneNumber == 319 || mMYINFO.mPresentZoneNumber == 320 || mMYINFO.mPresentZoneNumber == 321 || mMYINFO.mPresentZoneNumber == 322 || mMYINFO.mPresentZoneNumber == 323)
        {
            if (tSort1)
            {
                SYSMSG(1496);
            }
            return false;
        }
        if (mMYINFO.A083(tLocation, 0, -1, 0, sIndex, sPoint, tBonusSkillValue))
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
            return true;
        }
        return false;

    case 140:
    case 144:
    case 148:
        switch (mFACTOR.GetWeaponClass2(mPLAY.mAVATAR_OBJECT[0].mDATA.aEquipForView))
        {
        case 1:
            if (mMYINFO.A044(tLocation, 0, -1, 0, sIndex, sPoint, tBonusSkillValue))
            {
                mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
                return 1;
            }
            break;

        case 2:
            if (mMYINFO.A050(tLocation, 0, -1, 0, sIndex, sPoint, tBonusSkillValue))
            {
                mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
                return 1;
            }
            break;

        case 3:
            if (mMYINFO.A056(tLocation, 0, -1, 0, sIndex, sPoint, tBonusSkillValue))
            {
                mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
                return 1;
            }
            break;

        default:
            return 1;
        }
        return false;

    case 141:
    case 145:
    case 149:
        switch (mFACTOR.GetWeaponClass2(mPLAY.mAVATAR_OBJECT[0].mDATA.aEquipForView))
        {
        case 1:
            if (mMYINFO.A081(tLocation, 0, -1, 0, sIndex, sPoint, tBonusSkillValue))
            {
                mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
                return 1;
            }
            break;

        case 2:
            if (mMYINFO.A082(tLocation, 0, -1, 0, sIndex, sPoint, tBonusSkillValue))
            {
                mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
                return 1;
            }
            break;

        case 3:
            if (mMYINFO.A083(tLocation, 0, -1, 0, sIndex, sPoint, tBonusSkillValue))
            {
                mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue -= tManaUse;
                return 1;
            }
            break;

        default:
            return 1;
        }
        return false;

    default:
        return false;
    }
}

void MAIN::ExamineSelectObject(int mX, int mY, int* tSelectSort, int* tSelectIndex, int tSort)
{
    int i, j, k;
    float v6;
    float v5;


    *tSelectSort = 0;
    *tSelectIndex = -1;
    for (i = 1; i < mPLAY.MAX_AVATAR_OBJECT; ++i)
    {
        if (mPLAY.mAVATAR_OBJECT[i].mCheckValidState && mPLAY.mAVATAR_OBJECT[i].mDATA.aVisibleState && mPLAY.CheckPossibleAvatarTarget(mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aSort) && mUTIL.MouseToAvatarBox(&mPLAY.mAVATAR_OBJECT[i], mX, mY))
        {
            v6 = mUTIL.GetLengthXYZ(&mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation[0], &mGXD.mCameraEye.x);
            if (mPLAY.mAVATAR_OBJECT[0].mDATA.aDuelState[0] == 1 && mPLAY.mAVATAR_OBJECT[i].mDATA.aDuelState[0] == 1 && mPLAY.mAVATAR_OBJECT[0].mDATA.aDuelState[1] == mPLAY.mAVATAR_OBJECT[i].mDATA.aDuelState[1] && mPLAY.mAVATAR_OBJECT[0].mDATA.aDuelState[2] != mPLAY.mAVATAR_OBJECT[i].mDATA.aDuelState[2])
            {
                if (*tSelectSort)
                {
                    if (v5 > v6)
                    {
                        *tSelectSort = 2;
                        *tSelectIndex = i;
                        v5 = v6;
                    }
                }
                else
                {
                    *tSelectSort = 2;
                    *tSelectIndex = i;
                    v5 = v6;
                }
            }
            else if (mPLAY.CheckPossibleTribeAttack( mPLAY.mAVATAR_OBJECT[i].mDATA.aTribe, mPLAY.mAVATAR_OBJECT[i].mDATA.aZone270TypeBattleTeam, mPLAY.mAVATAR_OBJECT[i].mDATA.aGuildName))
            {
                if (*tSelectSort)
                {
                    if (v5 > v6)
                    {
                        *tSelectSort = 3;
                        *tSelectIndex = i;
                        v5 = v6;
                    }
                }
                else
                {
                    *tSelectSort = 3;
                    *tSelectIndex = i;
                    v5 = v6;
                }
            }
            else if (mMYINFO.mPresentZoneNumber != 270 && mMYINFO.mPresentZoneNumber != 271 && mMYINFO.mPresentZoneNumber != 272 && mMYINFO.mPresentZoneNumber != 273 && mMYINFO.mPresentZoneNumber != 274)
            {
                if (tSort)
                {
                    if ((mGXD.mKeyboardImmediateData[42] & 0x80) != 0)
                    {
                        if (*tSelectSort)
                        {
                            if (v5 > v6)
                            {
                                *tSelectSort = 1;
                                *tSelectIndex = i;
                                v5 = v6;
                            }
                        }
                        else
                        {
                            *tSelectSort = 1;
                            *tSelectIndex = i;
                            v5 = v6;
                        }
                    }
                }
                else if (*tSelectSort)
                {
                    if (v5 > v6)
                    {
                        *tSelectSort = 1;
                        *tSelectIndex = i;
                        v5 = v6;
                    }
                }
                else
                {
                    *tSelectSort = 1;
                    *tSelectIndex = i;
                    v5 = v6;
                }
            }
        }
    }
    for (j = 0; j < mPLAY.MAX_NPC_OBJECT; ++j)
    {
        if (mPLAY.mNPC_OBJECT[j].mCheckValidState)
        {
            if (mUTIL.GetLengthXYZ(mPLAY.mNPC_OBJECT[j].mLocation, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation) <= 500.0)
            {
                if (mUTIL.MouseToNPCBox(&mPLAY.mNPC_OBJECT[j], mX, mY))
                {
                    float v7 = mUTIL.GetLengthXYZ(mPLAY.mNPC_OBJECT[j].mLocation, &mGXD.mCameraEye.x);
                    if (!*tSelectSort || v5 > v7)
                    {
                        *tSelectSort = 4;
                        *tSelectIndex = j;
                        v5 = v7;
                    }
                }
            }
        }
    }
    for (k = 0; k < mPLAY.MAX_MONSTER_OBJECT; ++k)
    {
        if (mPLAY.mMONSTER_OBJECT[k].mCheckValidState
            && mPLAY.CheckPossibleMonsterTarget(mPLAY.mMONSTER_OBJECT[k].mMONSTER.mAction.aSort)
            && mUTIL.MouseToMonsterBox(&mPLAY.mMONSTER_OBJECT[k], mX, mY)
            && (mPLAY.mMONSTER_OBJECT[k].mMONSTER_INFO->mType != 10
                && mPLAY.mMONSTER_OBJECT[k].mMONSTER_INFO->mType != 11
                && mPLAY.mMONSTER_OBJECT[k].mMONSTER_INFO->mType != 12
                && mPLAY.mMONSTER_OBJECT[k].mMONSTER_INFO->mType != 13
                || (mPLAY.mMONSTER_OBJECT[k].mMONSTER_INFO->mType != 10
                    || mMYINFO.mAvatarInfo.aTribe && mMYINFO.mAvatarInfo.aTribe != mPLAY.ReturnAlliance(0))
                && (mPLAY.mMONSTER_OBJECT[k].mMONSTER_INFO->mType != 11
                    || mMYINFO.mAvatarInfo.aTribe != 1 && mMYINFO.mAvatarInfo.aTribe != mPLAY.ReturnAlliance(1))
                && (mPLAY.mMONSTER_OBJECT[k].mMONSTER_INFO->mType != 12
                    || mMYINFO.mAvatarInfo.aTribe != 2 && mMYINFO.mAvatarInfo.aTribe != mPLAY.ReturnAlliance(2))
                && (mPLAY.mMONSTER_OBJECT[k].mMONSTER_INFO->mType != 13
                    || mMYINFO.mAvatarInfo.aTribe != 3 && mMYINFO.mAvatarInfo.aTribe != mPLAY.ReturnAlliance(3))))
        {
            float v8 = mUTIL.GetLengthXYZ(mPLAY.mMONSTER_OBJECT[k].mMONSTER.mAction.aLocation, &mGXD.mCameraEye.x);
            if (!*tSelectSort || v5 > v8)
            {
                *tSelectSort = 5;
                *tSelectIndex = k;
                v5 = v8;
            }
        }
    }
    for (i = 0; i < mPLAY.MAX_ITEM_OBJECT; ++i)
    {
        if (mPLAY.mITEM_OBJECT[i].mCheckValidState)
        {
            if (mUTIL.MouseToItemBox(&mPLAY.mITEM_OBJECT[i], mX, mY))
            {
                float v9 = mUTIL.GetLengthXYZ(mPLAY.mITEM_OBJECT[i].mLocation, &mGXD.mCameraEye.x);
                if (!*tSelectSort || v5 > v9)
                {
                    *tSelectSort = 6;
                    *tSelectIndex = i;
                    v5 = v9;
                }
            }
        }
    }
    for (i = 0; i < mPLAY.MAX_PROXY_OBJECT; ++i)
    {
        if (mPLAY.mPROXY_OBJECT[i].mCheckValidState && mUTIL.MouseToProxyBox(&mPLAY.mPROXY_OBJECT[i], mX, mY))
        {
            float v10 = mUTIL.GetLengthXYZ(mPLAY.mPROXY_OBJECT[i].mDATA.tShopLocation, &mGXD.mCameraEye.x);
            if (tSort)
            {
                if ((mGXD.mKeyboardImmediateData[42] & 0x80) != 0)
                {
                    if (*tSelectSort)
                    {
                        if (v5 > v10)
                        {
                            *tSelectSort = 7;
                            *tSelectIndex = i;
                            v5 = v10;
                        }
                    }
                    else
                    {
                        *tSelectSort = 7;
                        *tSelectIndex = i;
                        v5 = v10;
                    }
                }
            }
            else if (!*tSelectSort || v5 > v10)
            {
                *tSelectSort = 7;
                *tSelectIndex = i;
                v5 = v10;
            }
        }
    }
}