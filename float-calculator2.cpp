/*
4. รับ input 2 ตัว ในบรรทัดเดียวกัน เป็นจำนวนทศนิยม แล้วแสดงค่าของการบวก ลบ คูณ และหาร ของตัวเลข 2 ตัวนั้น

ตัวอย่าง
```
#input
2.5 4

#output
a+b = 6.5
a-b = -1.5
a*b = 10.0
a/b = 0.625
```*/
#include <iostream>

int main(){
    float a,b;
    std::cin>>a>>b;
    
    std::cout<<"a+b = "<<a+b<<"\n";
    std::cout<<"a-b = "<<a-b<<"\n";
    std::cout<<"a*b = "<<a*b<<"\n";
    std::cout<<"a/b = "<<a/b;
    return 0;


}