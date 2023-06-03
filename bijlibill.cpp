#include<iostream>

using namespace std;
int main(){

int units;
units = 450;
                           //Bijli Bill - Description on Graphic
                           //          units                 price
                           //          up-100              Rs 4.2/unit
                            //          100-200             Rs 6/unit
                            //200-400             Rs 8/unit   
                            //more than 400         Rs 13/unit\
                            450


if(units >= 100){
    return 100*4.2;
}
else if(units > 100 && units <=200){
    return 100 ;
}
else if(units > 200 && units <=400){
    return 100*8;
}
else
{
    return 100*13;
}

}