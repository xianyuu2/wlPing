
#include <winsock2.h>
#include "pch.h"


int main(void)
{
	CPing objPing;

	const char* cszDestIP = "127.0.0.1";
	char* szDestIP = new char[100];

	
	strcpy_s(szDestIP, strlen(szDestIP)+1,cszDestIP);


	PingReply reply;

	cout << "Pinging  with  bytes of data:" << szDestIP << DEF_PACKET_SIZE ;
	while (TRUE)
	{
		objPing.Ping(szDestIP, &reply);
		cout << "Reply from  bytes= time= ldms TTL="<< szDestIP<< reply.m_dwBytes<< reply.m_dwRoundTripTime<<reply.m_dwTTL;
		Sleep(500);
	}

	return 0;
}