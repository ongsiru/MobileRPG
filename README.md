# MobileRPG
Developed with Unreal Engine 5

## 1. Server
- <b>2023-10-04 | Dedicated Server Build</b><br>언리얼에서 제공하는 두 가지 서버-클라이언트 모델 중에서 Dedicated Server를 통해 모바일과 PC로 플레이 할 수 있는 멀티 게임을 제작할 계획이다. 현재 로컬 ip로 서버에 다중 접속이 가능하도록 구현했고 아래의 자료를 참고했다.<br>🔗 언리얼 공식문서 : https://docs.unrealengine.com/5.0/ko/setting-up-dedicated-servers-in-unreal-engine/ <br>🔗 ZepehWAVE 티스토리 : https://zepeh.tistory.com/577<br><br>다중 접속자의 수가 적다면 Dedicated Server가 유용하지만 싱글 쓰레드를 사용하기 때문에 MMORPG와 같이 실시간으로 대규모 트래픽을 처리해야하는 경우에 멀티 쓰레드를 사용하는 IOCP서버를 직접 구축한다. 언리얼 엔진에서 제공하는 소켓통신을 위한 API인 FSocket을 이용하거나 WinAPI인 Winsock을 이용하여 Overlapped IO(비동기+논블락)를 구현해야 한다.<br>

- <b>2023-10-05 | </b>

## 2. Client

## 3. Extras
- <b><a href="https://www.youtube.com/watch?v=n3x1fErlmYA">How to push or pull Unreal projects</a></b>
- <b><a href="https://www.youtube.com/watch?v=7payS86oJ0k">Android environment setting and packaging</a></b>
