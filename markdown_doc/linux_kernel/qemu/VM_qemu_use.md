---
title: "QEMU 기반 Virtural Machine 사용법(The Linux Kernel)"
---

# 목차


<br>

# QEMU
## The Linux Kernel 제공 VM - minicom
---
### **VM 부팅**
```ruby
.../linux/tools/labs$ make boot
```
### **minicom 연결**
minicom을 부팅한 쉘이 아닌 다른 쉘에 다음 명령어 입력
```ruby
.../linux/tools/labs$ minicom -D serial.pts
```
### **QEMU 콘솔 사용**
가상머신 부팅 시 옵션을 사용하여 따로 쉘을 열어 minicom을 연결하지 않아도 콘솔 image를 디스플레이 해준다.
```ruby
.../linux/tools/labs$ QEMU_DISPLAY=gtk make boot
```
### **KVM 사용**
가상머신 부팅 시 ENABLE_KVM 옵션을 true로 설정해주면 자동 부팅을 할 때 -enable-kvm 옵션을 추가해 kvm을 사용하도록 해준다.
```ruby
.../linux/tools/labs$ ENABLE_KVM=true make boot
```



<br><br>

[출처 : The Linux Kernel](https://linux-kernel-labs.github.io/refs/heads/master/info/vm.html "바로가기")