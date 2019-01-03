#include "stdafx.h"

// 다른 외부의 프로젝트에서 DLL 프로젝트의 함수 사용을 위한 함수 외부 접근 선언부 입니다!
extern "C" _declspec(dllexport) char *test(char *inStr)
{
	return "test";
}
