#pragma once

class EDITBOX
{
public:
	int mDataIndex;
	HWND mDATA[MAX_EDITBOX_NUM];
	WNDPROC mEditBoxProc;
	int mEditBoxInfo[MAX_EDITBOX_NUM][4];


	EDITBOX();
	BOOL Init();
	void Free();
	void Set(int tDataIndex);


};
extern EDITBOX mEDITBOX;


class POINTER
{
public:
	int mDataIndex;
	HCURSOR mDATA[9];



	BOOL Init();
	void Set(int tDataIndex);
	void Set();

};
extern POINTER mPOINTER;


class GINPUT
{
public:
	BOOL mCheckDisplayUI;
	int mDisplayInfoState;
	int mSelectSort;
	int mSelectIndex;
	char mCameraRecordPostAvatarName[16];
	int mCameraRecordChangeSpeedIndex;
	float mCameraRecordSpeed[4];
	POINT mMounsePosition;
	float mCameraHRotateSpeed;
	float mCameraVRotateSpeed;
	float mMinCameraAngle;
	float mMaxCameraAngle;
	float mCameraStrafeSpeed;
	float mPostCameraLength;
	float mMinCameraLength;
	float mMaxCameraLength;


	BOOL Init();
	void Free();
	void InitForCameraRecord();
	void LBUTTONDOWN(int mX, int mY);
	void LBUTTONUP(int mX, int mY);
	void RBUTTONDOWN(int mX, int mY);
	void RBUTTONUP(int mX, int mY);
	void MBUTTONDOWN(int mX, int mY);
	void MOUSEWHEEL(short mD);
	void MOUSEMOVE(int mX, int mY, WPARAM wPrm);
	void KEYBOARD();

};
extern GINPUT mINPUT;