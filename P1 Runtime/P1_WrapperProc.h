#ifndef __P1_WRAPPERPROC_HEADER_GUARD__
#define __P1_WRAPPERPROC_HEADER_GUARD__

#pragma comment(lib, "P1_FeedbackProc.lib")
#pragma comment(lib, "P1_WrapperProc.lib")
#define main main_
#define _time64(x) time64_(x)
#define rand rand_
extern int printf__DO_NOT_EDIT_THIS_FILE__CLOSE_THIS_FILE_AND_RUN_THE_PROGRAM_AGAIN_IN_DEBUG_MODE__(const char* _Format, ...);
extern int scanf__DO_NOT_EDIT_THIS_FILE__CLOSE_THIS_FILE_AND_RUN_THE_PROGRAM_AGAIN_IN_DEBUG_MODE__(const char* _Format, ...);
extern int sprintf__DO_NOT_EDIT_THIS_FILE__CLOSE_THIS_FILE_AND_RUN_THE_PROGRAM_AGAIN_IN_DEBUG_MODE__(char* _Dest, const char* _Format, ...);
extern int sscanf__DO_NOT_EDIT_THIS_FILE__CLOSE_THIS_FILE_AND_RUN_THE_PROGRAM_AGAIN_IN_DEBUG_MODE__(const char* _SrcBuf, const char* _Format, ...);
extern int fprintf__DO_NOT_EDIT_THIS_FILE__CLOSE_THIS_FILE_AND_RUN_THE_PROGRAM_AGAIN_IN_DEBUG_MODE__(void* _File, const char* _Format, ...);
extern int fscanf__DO_NOT_EDIT_THIS_FILE__CLOSE_THIS_FILE_AND_RUN_THE_PROGRAM_AGAIN_IN_DEBUG_MODE__(void* _File, const char* _Format, ...);
extern int printf__DO_NOT_EDIT_THIS_FILE__CLOSE_THIS_FILE_AND_RUN_THE_PROGRAM_AGAIN_IN_DEBUG_MODE___s(const char* _Format, ...);
extern int scanf__DO_NOT_EDIT_THIS_FILE__CLOSE_THIS_FILE_AND_RUN_THE_PROGRAM_AGAIN_IN_DEBUG_MODE___s(const char* _Format, ...);
extern int sprintf__DO_NOT_EDIT_THIS_FILE__CLOSE_THIS_FILE_AND_RUN_THE_PROGRAM_AGAIN_IN_DEBUG_MODE___s(char* _Dest, unsigned __int64 _SizeInBytes, const char* _Format, ...);
extern int sscanf__DO_NOT_EDIT_THIS_FILE__CLOSE_THIS_FILE_AND_RUN_THE_PROGRAM_AGAIN_IN_DEBUG_MODE___s(const char* _SrcBuf, const char* _Format, ...);
extern int fprintf__DO_NOT_EDIT_THIS_FILE__CLOSE_THIS_FILE_AND_RUN_THE_PROGRAM_AGAIN_IN_DEBUG_MODE___s(void* _File, const char* _Format, ...);
extern int fscanf__DO_NOT_EDIT_THIS_FILE__CLOSE_THIS_FILE_AND_RUN_THE_PROGRAM_AGAIN_IN_DEBUG_MODE___s(void* _File, const char* _Format, ...);

#endif