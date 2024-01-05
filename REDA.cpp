#include <iostream>
/*
using namespace std;
اذا تخليهة تكدر تحذف ال 
std
وتخلي 
cout 
مباشره
*/

int main() {
    //اذا تريد تخلي اسم جوه اسم تضيف \n
std::cout<<"Reda\n";
std::cout<<"Emad\n";
//اذا تريد تضيف 4 فراغات تضيف \t
std::cout<<"Reda\t";
std::cout<<"Emad";
/*
تكدر تخلي ينزل صطر بهاي هم
std::cout<<endl;
*/
/*
تكدر تختصر الطباعات بطباعة وحده
std::cout<<"Reda"<<endl<<"Emad";
تكدر تستخدم هذه نفس الشي
std::cout<<"Reda\n"<<"Emad";
*/
/* 2
int عدد صحيح
int x=10;
cout<<x;
cout<<"x="<<x<<endl;
لاختصار الكود اذا اكو اكثر من متغير
int x=10 , y=5;
علمود كلهن يصيرن بتعريف واحد
او
int x ,y ;
x=10 , y=10;
*/
/*
float للاعداد العشرية
float x=3.5;
*/
/*
عدد عشري ايضا لكن بدقة اكبر ومراتب اكثر 
double x=2.5;
*/
/*
قيمة منطقية
bool z=false;
cout<<"z="<<z
راح يطلع صفر
واذا خليت ترو راح يطلع 1
*/
/*
لاضافة رمز
char s="#"
*/
/*3
لتحويل ال 
float
الى 
int
float x=2.5;
cout<<"x="<<int (x);
او
cout<<"x="<<(int) x;
او
static_cast<int> (x)
*/
/*4
الادخال input
int x;
cout<<"Age"
cin>>x;
cout<<"x="<<x;
*/
/*
int x,y;
cout<<"Age"<<"\n";
cin>>x;
cout<<"x="<<x<<"\n";
cout<<"Namber"<<"\n";
cin>>y;
cout<<"y="<<y;
لجمع العددين
cout<<"x+y="<<x+y;
*/
/* جمع الاعداد
int x,y;
cout<<"Age"<<"\n";
cin>>x;
cout<<"x="<<x<<"\n";
cout<<"Namber"<<"\n";
cin>>y;
cout<<"y="<<y<<"\n"; 
cout<<"x+y="<<x+y;
*/
/*
اذا تريد تطبع بس الارقام اللي راح ينجمعن
cout<<x<<"+"<<y<<"="<<x+y;
*/
/*
لطباعة كلمات مع المدخل
cout<<"your age"<<x<<wow;
*/
/*5
العمليات الحسابية 
cout<<5+5<<endl;
cout<<5-5<<endl;
cout<<5*5<<endl;
cout<<5/5<<endl; القسمة
cout<<5/5.0<<endl; القسمة مع الاعداد العشرية
cout<<5%5<<endl; باقي القسمة
*/
/*
هل 
x
اكاللبر من ال 
y
cout<<(x>y);
هل ال 
x
يطابق 
ال 
y
cout<<(x==y);
هل ال 
x
اكبر او يساوي ال 
y
cout<<(x>=y);
النفي في البرمجة يرمز له بلرمز !
x 
لا تساوي 
y
cout<<(x!=y);
الجوا يكو الترو معناهة 1 والفولس معناهة 0
*/
/*
ال &&
معناهة و 
تفيد بلتحقق من شرطين
واذا ما تحقق احد الشرطين فلناتج 0 يعني فولس
cout<<(5!=7 && 8>6)
*/
/*
ال ||
معناهة او
اذا تحقق احد الشرطين فيكون الناتج 1 يعني ترو
cout<<(5!=7 || 8>6)
*/
/*6
int x=0 ;
++ معناهة مقدار الزيادة بواحد
x++;
cout<<"x="<<x;
*/
/*
++x
x++
يختلفن اذا خليت الزائد بلبداية راح يزود وبعدين يطبع والعكس صحيح
Ex:
int x=0;
cout<<"x="<<x++;
cout<<"x="<<++x;
*/
/*
int x=0;
مقدار الزيادة او اي عملية رياضيه 
x=x+4;
cout<<"x="<<x;
*/
/*
x+=5
هم هاي طريقة اطور لمقدار الزيادة او اي عملية رياضية 
x*=7
*/
/*7
if الشرطية
#include <iostream>
using namespace std;
int main(){
int x;
cout<<"Enter namber"<<endl;
cin>>x;
if (x>5){
cout<<"Good";
}else{
    cout<<"NOOT GOOD";
}
    return 0;
}
*/
/*
اعطاء اكثر من شرط
#include <iostream>
using namespace std;
int main(){
int x;
cout<<"Enter namber"<<endl;
cin>>x;
if (x>5){
cout<<"Good";
تكدر تضيف الس اف الى ما لانهاية من الشروط
}else if (x<5){
    cout<<"NOOT GOOD";
}else{
    cout<<"Helo"
}
    return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main(){
int x;
cout<<"Enter namber"<<endl;
cin>>x;
if (x>5){
cout<<"Good";
تكدر تخلي كل ال اف و الس بداخل الس
}else{ if (x<5){
    cout<<"NOOT GOOD";
}else{
    cout<<"Helo";
}
}
    return 0;
}
*/
/*
تكدر تخلي ال اف كبل بدون اقواس 
if (x>5) cout<<"Nice"
*/
/* 
هنا كانما اسئلة سؤال هل ال6 اكبر من 3 يكون الجواب اما
نعم او لا
نعطي قيمة لل واي 5
فاذا كان الجواب صح يضهر 5 واذا غلط يطلع 9
int y=(6>3)? 5:9;
تكدر تضيف شرط ثان مثلا هسه اذا ما تحقق اول واحد راح يطب بالشرط الثاني واذا ما تحقق راح ينطي قيمه عدم التحقق اللي بليمين 
int y=(6>3)? ((7>2)? 5:9):9;
*/
/*8
swith حالات متعدده
case حاله
#include <iostream>
using namespace std;
int main(){
int x;
cout<<"Enter namber"<<endl;
cin>>x;
switch(x) {
    case 0: cout<<"NICE";
    case 1: cout<<"WOW";
    case 2: cout<<"NOT NOT";
    //ديفولت قيمة غير معرفة
    default : cout<<"eror";
}
    return 0;
}
*/
/*
شلون تسوي حالات بلنسبة للارقام
#include <iostream>
using namespace std;
int main(){
ريسلت معناهة نتيجة
int x,y,result;
الجير نص يحتوي على رمز
و ال op عملية
يعني رمز العملية ممكن تكون زائد او ناقص اوجمع اين يكن
char op ;
cout<<"Enter namber 1"<<endl;
cin>>x;
cout<<"Enter namber 2"<<endl;
cin>>y;
cout<<"Enter namber 3"<<endl;
cin>>op;
switch(op) {
    البريك يوقف عند الشي المطلوب
    case '-': result=x-y ; break;
    case '+': result=x+y ; break;
    case '*': result=x*y ; break;
    ديفولت قيمة غير معرفة
    default : cout<<"eror";break;
}
cout<<"result="<<result;
    return 0;
}
*/
/*
بامكانه اختصار الكود
#include <iostream>
using namespace std;
int main(){
/ريسلت معناهة نتيجة
int x,y,result=0;
الجير نص يحتوي على رمز
و ال op عملية
يعني رمز العملية ممكن تكون زائد او ناقص اوجمع اين يكن
char op ;
cout<<"Enter 2 namber";
cin>>x>>y;
cout<<"Enter the opration ";
cin>>op;
هنا يكلك اذا الادخال جمع ف اجمع
واذا لا فحول عل شرط الثاني اللي هو بعد النقطتين اذا جان الادخال طرح ف اطرح
وتستمر الشروط الى ما لا نهائية
result= (op=='+')? x+y:(op=='-')? x-y:(op=='*')? x*y:x+y;
cout<<"result="<<result;

return 0;
}
*/
/*9
loop
#include <iostream>
using namespace std;
int main(){
int i=0 ;
while (i<8)
{
    cout<<"HELOO"<<endl;
    cout<<"i="<<i<<endl;
    i++;

}
return 0;
}
}
*/
/*
حلقة تكرارية من كتابه الارقام
#include <iostream>
using namespace std ;
int main (){
    int i=0 ;
    while (i<5){
        cout<<i<<endl;\
        i++;
    }
    return 0;
}
*/
/*
         اذا تخلي ناقص ناقص يضل يعد بلعكس بس لازم تخلي قيمة ال ا الرقم اللي تريد يتنازل من عنده
#include <iostream>
using namespace std ;
int main (){
    int i=5 ;
    while (i>0){
        cout<<i<<endl;
        i--;
    }
    return 0;
}
*/
/*
ال do
ينفذ بعدين يتحقق من الشرط 
بينما الوايل تتحقق من الشرط وبعدين تنفذ
#include <iostream>
using namespace std ;
int main (){
    int i=5 ;
  do{
        cout<<i<<endl;
        i--;
    }  while (i>0);
    return 0;
}
*/
/*
الفور بي 3 اجزاء الجزء الاول تعريف المدخل
الجزء الثاني الشرط
الجزء الثالث حسب ما موضع جوه بلكود
#include <iostream>
using namespace std ;
int main (){
for (int i=5;i>0;i--)
  {
        cout<<i<<endl;
    }
    return 0;
}
*/
/*
لوب لانهائي
#include <iostream>
using namespace std ;
int main (){
int i=0 ;
while (i<5){
    cout<<"HELOO"<<endl;
    i--;
}
    return 0;
}
او
#include <iostream>
using namespace std ;
int main (){
int i=0 ;
while (i<5){
    cout<<"HELOO"<<endl;
    i--;
}
    return 0;
}
او 
#include <iostream>
using namespace std ;
int main (){
int i=0 ;
while (true){
    cout<<"reda"<<endl;
}

    return 0;
}
*/
/*10
حلقة تكرارية داخل حلقة تكرارية
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i=0;
    while (i<999999){
        while (i<99){
 cout<<"Nice\n";
        i++;
cout<<i<<"-";
        }
       
    }
    return 0;
}

*/
/*
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int x=0;
    اليساوي من تخلي يعني من ضمن الارقام رقم 10 اذا بدونه راح يصير لل9
    while (x<=10){
        x++;
    int y=0;
        while (y<=10){
 cout<<x<<"*"<<y<<"="<<x*y<<endl;
        y++;
        }
       
    }
    return 0;
}

*/
/*11
برنامج بسيط لتقيم الدرجات
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
 int x;
 cout<<"RRRRR";
 cin>>x;
 if (x>=90){cout<<"wow\n";}
else if (x>=80){cout<<"NO NO";}
else if (x>=70){cout<<"Nice";}
else{cout<<"fuck";}
    return 0;
}

*/
    return 0 ;
}