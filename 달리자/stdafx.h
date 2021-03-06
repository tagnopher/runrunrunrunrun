// stdafx.h : 자주 사용하지만 자주 변경되지는 않는
// 표준 시스템 포함 파일 또는 프로젝트 관련 포함 파일이
// 들어 있는 포함 파일입니다.
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // 거의 사용되지 않는 내용은 Windows 헤더에서 제외합니다.
// Windows 헤더 파일:
#include <windows.h>

// C 런타임 헤더 파일입니다.
#include <stdlib.h>
//#include <malloc.h> 커리큘럼상 미사용
#include <memory.h>
#include <tchar.h>

#include <iostream> 
#include <math.h> //
//
//// TODO: 프로그램에 필요한 추가 헤더는 여기에서 참조합니다.//
//
#include "commonMacroFunction.h"
#include "randomFunction.h"
#include "keyManager.h"
#include "imageManager.h"
#include "sceneManager.h"
#include "timeManager.h"
#include "utils.h"
#include "txtData.h"

using namespace std;
using namespace THETA_UTIL;

//// define문 
#define WINNAME (LPTSTR)(TEXT("Theta API")) //윈도우 창 이름
#define WINSTARTX 100						//윈도우 시작좌표X
#define WINSTARTY 20						//윈도우 시작좌표Y
#define WINSIZEX 600						//윈도우 가로크기
#define WINSIZEY 800						//윈도우 세로크기
#define WINSTYLE WS_CAPTION | WS_SYSMENU 

//싱글톤화 시킨 클래스 디파인화
#define RND randomFunction::getSingleton()
#define KEYMANAGER keyManager::getSingleton()
#define IMAGEMANAGER imageManager::getSingleton()
#define SCENEMANAGER sceneManager::getSingleton()
#define TIMEMANAGER timeManager::getSingleton()
#define TXTDATA txtData::getSingleton()

//==============================
// ## 매크로함수 ## 17.04.26 ##
//==============================

#define SAFE_DELETE(p) {if(p) {delete(p); (p) = NULL;}}
#define SAFE_RELEASE(p) {if(p) {(p)->release(); (p)=NULL;}}
//p 위치에 다른것을 집어넣어서 사용

//==============================
// ## 전역변수 ## 17.05.01 ##
//==============================

extern HINSTANCE _hInstance;     //window App 고유번호
extern HWND _hWnd;               //윈도우 핸들
extern POINT _ptMouse;			 //POINT는 두개의 정수를 담는 구조체
								 //이 전역변수들의 정의(메모리 할당)은 API 복습.cpp에서
