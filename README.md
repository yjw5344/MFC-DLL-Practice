# DLL 예제 프로젝트

## 개요
>
> MFC - QT 통신 관련하여 공부한 내용입니다.
>
> : MFC로 구성된 DLL파일 프로젝트와 QT로 구성된 프로젝트 사이의 함수를 이용한 통신 과정을 다루는 예제입니다.
>


---

## 설명

> dllTest (MFC 프로젝트)
>
> : MFC 기반 프로젝트로 예제에서 데이터 처리(DataProcess)를 담당한다.
>
>> 상세설명
>>
>> [SendDLLFuction.cpp](dllTest/SendDLLFuction.cpp) 에서 통신을 위한 함수 외부 선언을 한다.
>>
>> ~~~cpp
>> extern "C" _declspec(dllexport) char *test(char *inStr)
>>{
>>	return "test";
>>}
>>~~~
>
<br><br><br>
> dllClient (QT 프로젝트)
>
> : QT 기반 프로젝트로 예제에서 사용자 인터페이스(UI)를 담당한다.
>
>> 상세설명
>>
>> [dllClient.cpp](dllClient/dllClient.cpp) 에서 DLL 프로젝트의 함수를 호출하여 사용한다.
>>
>> ~~~cpp
>> char *(*testFunc)(char *);
>> HINSTANCE hInst = ::LoadLibrary(_T("./dlltest.dll"));
>>
>> if (!hInst){
>>  MessageBox(NULL, _T("err"), _T(""), MB_OK);
>> }
>>
>> testFunc = (char *(*)(char *))GetProcAddress(hInst, "test");
>> char *pStr = testFunc("");
>> QMessageBox::critical(this, "aa", pStr);
>> ~~~
>
