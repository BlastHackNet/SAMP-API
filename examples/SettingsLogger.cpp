#include <windows.h>
#include <fstream>
#include "Settings.h"

using namespace SAMP;

BOOL APIENTRY DllMain(HINSTANCE hInst, DWORD dwReason, LPVOID lpvReserved) {
	if (dwReason == DLL_PROCESS_ATTACH) {
		std::ofstream file("settings.txt", std::ofstream::trunc);
		
		if (!file.bad()) {
			file << "debug: " << (settings.m_bDebugMode ? "true" : "false") << "\n";
			file << "online: " << (settings.m_bOnlineGame ? "true" : "false") << "\n";
			file << "ip&port: " << settings.m_szHost << ":" << settings.m_szPort << "\n";
			file << "password: " << settings.m_szPass << "\n";
			file << "nickname: " << settings.m_szNick << "\n";
			file << "debug script: " << settings.m_szDebugScript;
		}
		
		file.close();
	}
	return TRUE;
}