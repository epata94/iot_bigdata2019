// Socket Client
// 아래 라이브러리가 프로젝트 lib에 추가되어야 함
// Ws2_32.lib;Mswsock.lib;AdvApi32.lib 

#include <stdio.h>
#include <stdlib.h>
#include <winsock2.h>
#include <string.h>
#pragma warning (disable:4996)
void ErrorHandling(char* message);

int main(int argc, char* argv[])
{
	WSADATA wsaData;
	SOCKET hSocket;
	SOCKADDR_IN servAddr;
// 문제1] 아래에 통신을 위한 추가 변수를 선언 하시오.
	
	int strLen;
	if(argc!=3)
	{
		printf("Usage : %s <IP> <port>\n", argv[0]);
		exit(1);
	}

	puts("처음 도전하는 시스템 프로그래밍!");
	puts("소켓 클라이언트 ver1.0\n");
	printf("서버 접속 IP: %s, 접속 포트: %s", argv[1], argv[2]);

	if(WSAStartup(MAKEWORD(2, 2), &wsaData) !=0)
		ErrorHandling("WSAStartup() errer!");

	hSocket=socket(PF_INET, SOCK_STREAM, 0);
	if(hSocket==INVALID_SOCKET)
		ErrorHandling("hSocketet() error!");

	memset(&servAddr, 0, sizeof(servAddr));
	servAddr.sin_family=AF_INET;
	servAddr.sin_addr.s_addr=inet_addr(argv[1]);
	servAddr.sin_port=htons(atoi(argv[2]));

	if(connect(hSocket, (SOCKADDR*)&servAddr, sizeof(servAddr))==SOCKET_ERROR)
		ErrorHandling("connect() error!");

	puts("Connection 완료!");
	puts("이제 서버와 통신을 시작합니다.");
	puts("통신을 종료하려면 bye를 입력하세요.");

	while (1) {
// 시험2] 아래에 사용자의 메세지를 입력 받고 서버에 전송하는 코드를 완료하시오/
		
//		send(hSocket, , , 0);
//		strLen = recv(hSocket, , , 0);
		if (strLen == -1)
			ErrorHandling("read() error!");
// 시험3] 서버에서 받은 메세지를 Echoing 하시오

		if (!strcmp(message, "bye")) {
			break;
		}
	}
	closesocket(hSocket);
	WSACleanup();
	return 0;
}

void ErrorHandling(char* message)
{
	fputs(message, stderr);
	fputc('\n', stderr);
	exit(1);
}