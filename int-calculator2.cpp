/*
3. รับ input 2 ตัว ในบรรทัดเดียวกัน เป็นจำนวนเต็ม แล้วแสดงค่าของการบวก ลบ คูณ และหาร ของตัวเลข 2 ตัวนั้น

ตัวอย่าง
```
#input
2 5

#output
a+b = 7
a-b = -3
a*b = 10
a/b = 0.4
```*/
#include <iostream>

int main(){
    int a,b;
    std::cin>>a>>b;
    
    std::cout<<"a+b = "<<a+b<<"\n";
    std::cout<<"a-b = "<<a-b<<"\n";
    std::cout<<"a*b = "<<a*b<<"\n";
    std::cout<<"a/b = "<<a/b;
    return 0;


}