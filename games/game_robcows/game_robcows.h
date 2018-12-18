// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� GAME_FISHLORD_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// GAME_FISHLORD_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�

#if defined(_MSC_VER)

#ifdef GAME_ROBCOWS_EXPORTS
#define GAME_ROBCOWS_API __declspec(dllexport)
#else
#define GAME_ROBCOWS_API __declspec(dllimport)
#endif
#elif defined(LINUX)
#ifdef GAME_ROBCOWS_EXPORTS
#define GAME_ROBCOWS_API __attribute__((visibility("default")))
#else
#define GAME_ROBCOWS_API
#endif

#else
//  do nothing and hope for the best?
#define EXPORT
#define IMPORT
#pragma warning Unknown dynamic link import/export semantics.

#endif

//#ifdef GAME_ROBCOWS_EXPORTS
//#define GAME_ROBCOWS_API __declspec(dllexport)
//#else
//#define GAME_ROBCOWS_API __declspec(dllimport)
//#endif

extern "C" {

	GAME_ROBCOWS_API void* get_game_engine();

	GAME_ROBCOWS_API void* get_packet_mgr();
}