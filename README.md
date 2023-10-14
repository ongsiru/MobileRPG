# MobileRPG
Developed with Unreal Engine 5 and Visual Studio 2022

## 1. Server
- <b>2023-10-04 | Dedicated Server Build</b><br>언리얼에서 제공하는 두 가지 서버-클라이언트 모델 중에서 Dedicated Server를 통해 모바일과 PC로 플레이 할 수 있는 멀티 게임을 제작할 계획이다. 현재 로컬 ip로 서버에 다중 접속이 가능하도록 구현했고 아래의 자료를 참고했다.<br>🔗 언리얼 공식문서 : https://docs.unrealengine.com/5.0/ko/setting-up-dedicated-servers-in-unreal-engine/ <br>🔗 ZepehWAVE 티스토리 : https://zepeh.tistory.com/577<br><br>다중 접속자의 수가 적다면 Dedicated Server가 유용하지만 싱글 쓰레드를 사용하기 때문에 MMORPG와 같이 실시간으로 대규모 트래픽을 처리해야하는 경우에 멀티 쓰레드를 사용하는 IOCP서버를 직접 구축한다. 언리얼 엔진에서 제공하는 소켓통신을 위한 API인 FSocket을 이용하거나 WinAPI인 Winsock을 이용하여 Overlapped I/O(비동기+논블락)를 구현해야 한다.<br>

- <b>2023-10-10 | Session Interface</b> 데디케이티드 서버로 접속할 수 있는 시스템을 구현했다. 로컬 IP의 서버가 유저의 오브젝트들을 동기화해준다. 앞선 과정에서 DB서버와 소켓통신을 이용한 인증 과정을 추가한다면 로그인 시스템을 구현할 수 있다. 구조도는 아래와 같다.<br> ![ServerArchitecture](https://github.com/ongsiru/MobileRPG/assets/99703356/a4b8f6c0-dcf2-4094-9bad-52c3de132fcf)

<br>

## 2. Client
- <b>2023-10-13 | Chatting System</b><br> 클라이언트에서 사용자가 Enter키 또는 Touch를 사용하여 문자열 정보가 담긴 패킷을 서버에 전달하면 서버가 모든 사용자들에게 문자를 Broadcasting 하는 시스템을 설계했다. 대규모 프로젝트의 경우, DB서버와 통신하는 것이 일반적이기 때문에 구조체를 만들어서 버퍼 형식으로 문자열 정보를 담을 수 있도록 작성했다. 뿐만 아니라, 이를 활용하여 추후에 왼쪽 하단 인터페이스에 정보 및 전투 로그를 뛰울 예정이다. 직접 작성한 서버 코어를 사용했다면 이러한 부분도 멀티쓰레딩으로 처리할 수 있었지 않았을까 아쉬움이 남는다. <br>
![스크린샷 2023-10-14 004314](https://github.com/ongsiru/MobileRPG/assets/99703356/ed2d6d7b-caf5-478e-9035-73dd6042111b)


<br>

## 3. Extras
- <b><a href="https://www.youtube.com/watch?v=n3x1fErlmYA">How to push or pull Unreal projects</a></b>
- <b><a href="https://www.youtube.com/watch?v=7payS86oJ0k">Android environment setting and packaging</a></b>
