---
title: "에러 리스트 및 해결법"
date: 2021-06-10T19:35:04+09:00
draft: false
---
# 목차
* [VS 2013](#visual-studio-2013)
* [VS Code](#vs-code)
* [C/C++](#cc)
<br>

# Visual Studio 2013
## github에서 한글 주석 깨짐
---
깃허브에 주석을 한글로 달아 올린 일부 파일에서 한글이 깨지는 현상이 발생하여서 비주얼스튜디오2013이 UTF-16으로 인코딩 하도록 설정을 강제로 변경하여 문제를 해결하였다. UTF-8로 인코딩 설정을 하려 했으나 인코딩 관련한 변경 사항이 로컬 repository에 자동으로 적용되지 않아 설정하지 못하였다.

 깃허브에서 지원하지 않는 멀티바이트로 인코딩 되어 있어서 한글이 깨졌던 것인데, 알 수 없는 부분은 일부 파일은 한글이 깨지지 않았다는 것이다. 후에 확인해보니 모든 파일에서 동일하게 멀티바이트 인코딩을 사용하고 있었는데 말이지.. 공통점이 있었다면, git 프로그램에서 


1st  
We’ve detected the file encoding as ISO-8859-1. When you commit changes we will transcode it to UTF-8.

2nd  
We’ve detected the file encoding as UTF-16LE. When you commit changes we will transcode it to UTF-8.

<br>

# VS Code

## command not found
---
VS 코드에서 마크다운 문서를 작성할 때 프로그램에서 지원하는 미리보기를 커맨드(Ctrl + Shift + V)를 이용해 띄운 후에 확인하며 작업을 하는데, 갑자기 dashy.view라는 command가 not found라며 에러가 뜨기 시작했다.

Keybord Shortcuts에서 커맨드를 보니 extension으로 되어 있던 두 개의 커맨드에 대해서만 에러가 떴던 것인데, 이때 처음 커맨드를 확인해서 몰랐지만 Ctrl + Shift + V에 Default로 매치 되어있는 커맨드는 'Markdown: Open Preview', 'Notebook: Paste Cell Above', 'Terminal: Paste into Active Termianl'이고 에러가 발생했던 dashy.view와 또 다른 에러가 났던 커맨드는 내가 추가로 설치한 툴에 포함되어 있던 커맨드였다.(디버그 툴이였던 것 같은데 이름은 기억이 안난다..)

마크다운 문서에 디버깅 툴에서 사용되는 커맨드를 계속 눌러댔으니 제대로 작동이 되지 않았던 듯 한데, 커맨드 작동의 우선 순위가 어떤 식으로 산정이 되어 있는지 궁금해진다. 프로그램을 잘 만지면 마크다운 문서에 대해서는 기존의 Markdown: Open Preview가 작동이 되도록 할 수 있을 것 같은데 VS 코드를 사용한지도 얼마 안되어서 그 정도까지는 잘 모르겠군..

설치했던 툴을 uninstall하니 마크다운 문서 미리보기를 되찾을 수 있었다. 굳이 제거하지 않았어도 그 겹쳤던 extension 커맨드를 둘 다 다른 커맨드로 설정하거나 혹은 커맨듯 설정을 아예 없애는 방법으로도 프로그램을 정상적으로 사용할 수 있었을 것 같다는 생각이 뒤늦게 들었지만, 제대로 모르고 설치했던 툴을 삭제하지 않았다간 다음에도 이런 상황이 있을 수 있으니 삭제한게 더 괜찮은 것 같기도 하다.
<br>

# C/C++
## unstable sort
---
### **백준 10814번 나이순 정렬**
