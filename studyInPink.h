/*
    * Ho Chi Minh City University of Technology
    * Faculty of Computer Science and Engineering
    * Initial code for Assignment 0
    * Programming Fundamentals Spring 2022
    * Author: Tran Huy
    * Date: 06.01.2022
*/

//The library here is concretely set, students are not allowed to include any other libraries.
#ifndef studyInPink_h
#define studyInPink_h

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

////////////////////////////////////////////////////////////////////////
///STUDENT'S ANSWER BEGINS HERE
///Complete the following functions
///DO NOT modify any parameters in the functions.
////////////////////////////////////////////////////////////////////////

int firstMeet(int& EXP1, int& EXP2, const int& E1){
   //Complete this function to gain point on task 1
    if (E1<0||E1>999)
    {
        return -999;
    }
    else{
    //TH1 NHIEM VU 1 BAT DAU
    double EXP1F,EXP2F;
    EXP1F=EXP1;
    EXP2F=EXP2;
    if(E1>=0&&E1<=399){
    if(E1>=0&&E1<=49){
        EXP2F=EXP2F+25;
    }
    else if(E1>=50&&E1<=99){
        EXP2F=EXP2F+50;
    }
    else if(E1>=100&&E1<=149){
        EXP2F=EXP2F+85;
    }
    else if(E1>=150&&E1<=199){
        EXP2F=EXP2F+25+50;
    }
    else if(E1>=200&&E1<=249){
        EXP2F=EXP2F+25+85;
    }
    else if(E1>=250&&E1<=299){
        EXP2F=EXP2F+50+85;
    }
    else if(E1>=300&&E1<=399){
        EXP2F=EXP2F+25+50+85;
    }
    if(E1%2!=0){
        EXP1F=EXP1F+E1*1.0/10;
    }
    else{
        EXP1F=EXP1F-E1*1.0/5;     
    }
    // Toi day la co EXP1 voi EXP 2 roi bay gio can lam rton nua~
    EXP1F=ceil(EXP1F);
    EXP2F=ceil(EXP2F);
    if (EXP1F < 0){  // vuot qua gia tri
        EXP1F=0;
    }
    else if(EXP1F > 900){ 
        EXP1F =900;
    }
    if (EXP2F < 0){
        EXP2F=0;
    }
    else if(EXP2F  > 900){
        EXP2F =900;
    }
    }
    // TH1 NHIEM VU 1 KET THUC
    
    // TH2 NHIEM VU 1 BAT DAU
    if(E1>=400 && E1<=999){
        EXP1F=ceil(EXP1F-0.1*E1);// cua dong luu y
        if (E1>=400 && E1<=499){
            EXP2F=ceil(EXP2F+E1*1.0/7+9);
        }
        else if (E1>=500 && E1<=599){
            EXP2F=ceil(EXP2F+E1*1.0/9+11);
        }
        else if (E1>=600 && E1<=699){
            EXP2F=ceil(EXP2F+E1*1.0/5+6);
        }
        else if (E1>=700 && E1<=799){
            EXP2F=ceil(EXP2F+E1*1.0/7+9);
            if (EXP2F>200){
                EXP2F=ceil(EXP2F+E1*1.0/9+11);
            }
        }
        else if (E1>=800 && E1<=999){
            EXP2F=ceil(EXP2F+E1*1.0/7+9);
            EXP2F=ceil(EXP2F+E1*1.0/9+11);
            if (EXP2F>600){
                EXP2F=ceil(EXP2F+E1*1.0/5+6);
                EXP2F=ceil(EXP2F+EXP2F*0.15);
            }
    }
    if (EXP1F < 0){  // vuot qua gia tri
        EXP1F=0;
    }
    else if(EXP1F > 900){ 
        EXP1F =900;
    }
    if (EXP2F < 0){
        EXP2F=0;
    }
    else if(EXP2F  > 900){
        EXP2F =900;
    }}
    // TH2 NHIEM VU 1 KET THUC
    EXP1=EXP1F;
    EXP2=EXP2F;
    return (EXP1+EXP2);
    }  }

int investigateScene(int& EXP1, int& EXP2, int& HP2, int& M2, const int& E2){
    //Complete this function to gain point on task 2
    if (E2<0||E2>999)
    {
        return -999;
    }
    else{
    // NHIEM VU 2 BAT DAU
    //GIAI DOAN 1
    double EXP1D,EXP2D,HP2D,M2D,d1,d2;
    EXP1D=EXP1;
    EXP2D=EXP2;
    HP2D=HP2;
    M2D=M2;
    if (E2>=0&&E2<=999){
    if (E2>=0&&E2<=299){  //1
        d1=E2*1.0/9+10;
        EXP2D=EXP2D+d1;
        EXP1D=EXP1D+d1/3;
    EXP1D=ceil(EXP1D);
    EXP2D=ceil(EXP2D);
    }
    else if (E2>=300&&E2<=499){   //2
        d1=E2*1.0/9+10;
        d2=0.35*E2;
        EXP2D=EXP2D+d1;
        EXP1D=EXP1D+d1/3;
    EXP1D=ceil(EXP1D);
    EXP2D=ceil(EXP2D);
        EXP1D=EXP1D+d2/3;
        EXP2D=EXP2D+d2;
    }
    else if (E2>=500&&E2<=999){
        d1=E2*1.0/9+10;
        d2=0.35*E2;
        EXP2D=EXP2D+d1;
        EXP1D=EXP1D+d1/3;
    EXP1D=ceil(EXP1D);
    EXP2D=ceil(EXP2D);
        EXP1D=EXP1D+d2/3;
        EXP2D=EXP2D+d2;
    EXP1D=ceil(EXP1D);
    EXP2D=ceil(EXP2D); 
        EXP2D=EXP2D+(0.17)*(d1+d2);
        EXP1D=EXP1D+((d1+d2)*(0.17))/3;
    }           
        }
    //GIAI DOAN2
    HP2D=HP2D-(1.0*(pow(E2,3)))/((1.0*pow(2,23)));
    if (E2&2!=0){
        M2D=M2D;
    }
    else{
        M2D=M2D+pow(E2,2)*1.0/50;
    }
    EXP1D=ceil(EXP1D);
    EXP2D=ceil(EXP2D);
    HP2D=ceil(HP2D);
    M2D=ceil(M2D);
    // VUOT QUA GIA TRI
    if (EXP1D < 0){  
        EXP1D=0;
    }
    else if(EXP1D > 900){ 
        EXP1D =900;
    }
    if (EXP2D < 0){  
        EXP2D=0;
    }
    else if(EXP2D > 900){ 
        EXP2D =900;
    }
    if (HP2D < 0){
        HP2D=0;
    }
    else if(HP2D  > 999){
        HP2D =999;
    }
    if (M2D < 0){
        M2D=0;
    }
    else if(M2D  > 2000){
        M2D =2000;
    }
    EXP2=EXP2D;
    EXP1=EXP1D;
    M2=M2D;
    HP2=HP2D;
     return (EXP1+EXP2+M2+HP2);
    }}
int traceLuggage(int& HP1, int& EXP1, int& M1, const int& E3){
    //Complete this function to gain point on task 3
    if (E3<0||E3>999)
    {
        return -999;
    }
    else{
    double HP1F,EXP1F,M1F;
    HP1F=HP1;
    EXP1F=EXP1;
    M1F=M1;
    // BAT DAU CON DUONG 1
    //CĐ1
    int p1[20];
    p1[1] = 1;
    p1[2] = 3;
    p1[3] = 5;
    p1[4] = 7;
    p1[5] = 9;
    p1[6] = 11;
    p1[7] = 13;
    p1[8] = 15;
    p1[9] = 17;
    for (int i = 1; i <= 9; i++) {
        p1[i] = (p1[i] + E3) % 26 + 65;
    }
    for (int i=1;i<=9;i++){
        if (p1[i]==80){
            HP1F=HP1F-80*i*2;
            EXP1F=EXP1F+(1000-80*i)%101;
            M1F=ceil(M1F-i*E3*1.0/9);
        }
    if (M1F < 0){
       M1F=0;
    }
    else if(M1F  > 2000){
        M1F =2000;
    }
    if (HP1F < 0){
        HP1F=0;
    }
    else if(HP1F  > 999){
        HP1F =999;
    } 
    if (EXP1F < 0){
        EXP1F=0;
    }
    else if(EXP1F  > 900){
        EXP1F =900;}
    }
    if (p1[1]!=80&&p1[2]!=80&&p1[3]!=80&&p1[4]!=80&&p1[5]!=80&&p1[6]!=80&&p1[7]!=80&&p1[8]!=80&&p1[9]!=80){
       M1F = ceil(M1F=M1F-9*9*E3*1.0/9);
    }
  
    if (M1F < 0){
        M1F=0;
    }
    else if(M1F  > 2000){
        M1F =2000;
    }
    if (HP1F < 0){
        HP1F=0;
    }
    else if(HP1F  > 999){
        HP1F =999;
    } 
    if (EXP1F < 0){
        EXP1F=0;
    }
    else if(EXP1F  > 900){
        EXP1F =900;}
    //KET THUC CON DUONG 1
    // BAT DAU CON DUONG 2
    int p2[20];
    p2[1] = 2;
    p2[2] = 3;
    p2[3] = 5;
    p2[4] = 7;
    p2[5] = 11;
    p2[6] = 13;
    p2[7] = 17;
    float s = 0;
    float m = 0;
    for (int i = 1; i <= 7; i++) {
        p2[i] = ceil((p2[i] + E3) % 26);
    }
    for (int i = 1; i <= 7; i++) {
        s = s + p2[i];
    }
    m = ceil(s / 7.0);
    for (int i = 1; i <= 7; i++) {

        p2[i] = int(p2[i] + s + m) % 26 + 65;
    }
    for (int i=1;i<=7;i++){
        if (p2[i]==80){
        HP1F=HP1F-80*i*2;
        EXP1F=EXP1F+(1000-80*i)%101;
        M1F=ceil((M1F-(i*E3)/9.0));
        break;
        }
     if (M1F < 0){
        M1F=0;
    }
    else if(M1F  > 2000){
        M1F =2000;
    }
    if (HP1F < 0){
        HP1F=0;
    }
    else if(HP1F  > 999){
        HP1F =999;
    } 
    if (EXP1F < 0){
        EXP1F=0;
    }
    else if(EXP1F  > 900){
        EXP1F =900;}
        }
    if (p2[1]!=80&&p2[2]!=80&&p2[3]!=80&&p2[4]!=80&&p2[5]!=80&&p2[6]!=80&&p2[7]!=80){
        M1F=ceil(M1F-7*7*E3*1.0/9);
    }
    if (EXP1F < 0){  // vuot qua gia tri
        EXP1F=0;
    }
    else if(EXP1F > 900){ 
        EXP1F =900;
    }
    if (M1F < 0){
        M1F=0;
    }
    else if(M1F  > 2000){
        M1F =2000;
    }
    if (HP1F < 0){
        HP1F=0;
    }
    else if(HP1F  > 999){
        HP1F =999;
    }  
    // KET THUC CON DUONG 2
    // BAT DAU CON DUONG 3
     int p3[30];
    p3[1] = 4;
    p3[2] = 16;
    p3[3] = 36;
    p3[4] = 64;
    p3[5] = 100;
    p3[6] = 144;
    p3[7] = 196;
    p3[8] = 256;
    p3[9] = 324;
    p3[10] = 400;
    p3[11] = 484;
    p3[12] = 576;
    p3[13] = 676;
    p3[14] = 784;
    p3[15] = 900;
    p3[16] = 1024;
    p3[17] = 1156;
    p3[18] = 1296;
    p3[19] = 1444;
    p3[20] = 1600;
    int k;
    //Biến đổi lần 1
    for (int i = 1; i <= 20; i++) {
        p3[i] = ceil((int(p3[i] + pow(E3, 2))) % 113);

    }
    //Tìm max
    float max = p3[1];
    for (int i = 1; i <= 20; i++) {
        if (p3[i] > max)
            max = p3[i];
    }
    //Biến đổi lần 2
    for (int i = 20; i >= 1; i--) {

        p3[i] = ceil((p3[i] + E3) / float(max));
        p3[i] = p3[i] % 26 + 65;
    }
    for (int i=20;i>=1;i--){
        k=21-i;
        if(p3[i]==80){
            HP1F=HP1F-80*k*3;
            EXP1F=EXP1F+(3500-80*k)%300;
            M1F=ceil((M1F-(k*E3)*1.0/9));
            break;
        }
    if (EXP1F < 0){ 
        EXP1F=0;
    }
    else if(EXP1F > 900){ 
        EXP1F =900;
    }
    if (M1F < 0){
        M1F=0;
    }
    else if(M1F  > 2000){
        M1F =2000;
    }
    if (HP1F < 0){
        HP1F=0;
    }
    else if(HP1F  > 999){
        HP1F =999;
    }

    }
    if (p3[1]!=80&&p3[2]!=80&&p3[3]!=80&&p3[4]!=80&&p3[5]!=80&&p3[6]!=80&&p3[7]!=80&&p3[8]!=80&&p3[9]!=80&&p3[10]!=80&&p3[11]!=80&&p3[12]!=80&&p3[13]!=80&&p3[14]!=80&&p3[15]!=80&&p3[16]!=80&&p3[17]!=80&&p3[18]!=80&&p3[19]!=80&&p3[20]!=80){
        M1F=ceil(M1F-20*20*E3*1.0/9);
    }
    if (EXP1F < 0){  // vuot qua gia tri
        EXP1F=0;
    }
    else if(EXP1F > 900){ 
        EXP1F =900;
    }
    if (M1F < 0){
        M1F=0;
    }
    else if(M1F  > 2000){
        M1F =2000;
    }
    if (HP1F < 0){
        HP1F=0;
    }
    else if(HP1F  > 999){
        HP1F =999;
    }  
    // CON DUONG 3 KET THUC
    // CON DUONG 4 BAT DAU
     int p4[20];
    int k1;
    p4[1] = 31;
    p4[2] = 28;
    p4[3] = 31;
    p4[4] = 30;
    p4[5] = 31;
    p4[6] = 30;
    p4[7] = 31;
    p4[8] = 31;
    p4[9] = 30;
    p4[10] = 31;
    p4[11] = 30;
    p4[12] = 31;
    //Biến đổi lần 1
    for (int i = 1; i <= 12; i++)
    {
        p4[i] = p4[i] + ceil(pow(ceil(E3 / 29.0), 3.0));
        p4[i] = p4[i] % 9;
    }
    //Tìm min
    float min = p4[1];
    float min_idx = 1;

    for (int i = 1; i <= 12; i++) {
        if (p4[i] < min)
        {
            min = p4[i];
        }
    
    
        if (p4[i] == min)
        {
            min_idx = i;
            
        }
    }

    //Biến đổi lần 2
    for (int i = 12; i >= 1; i--)
    {
        p4[i] = (p4[i] + E3) * ceil(min / float(min_idx));
        p4[i] = (p4[i] % 26 + 65);
    }
    for (int i=12;i>=1;i--){
        k1=13-i;
        if (p4[i]==80)
        {
        HP1F=HP1F-80*k1*4;
        EXP1F=EXP1F+(4500-80*k1)%400;
        M1F=ceil((M1F-k1*E3*1.0/9));
        break;
        } 
        if (EXP1F < 0){  // vuot qua gia tri
        EXP1F=0;
         }
        else if(EXP1F > 900){ 
        EXP1F =900;
         }
        if (M1F < 0){
        M1F=0;
        }
        else if(M1F  > 2000){
        M1F =2000;
        }
         if (HP1F < 0){
        HP1F=0;
          }
          else if(HP1F  > 999){
        HP1F =999;
    }
         } 
        if (p4[1]!=80&&p4[2]!=80&&p4[3]!=80&&p4[4]!=80&&p4[5]!=80&&p4[6]!=80&&p4[7]!=80&&p4[8]!=80&&p4[9]!=80&&p4[10]!=80&&p4[11]!=80&&p4[12]!=80){
        M1F=M1F-12*12*E3*1.0/9;
        if (M1F < 0){
        M1F=0;
        }
         else if(M1F  > 2000){
        M1F =2000;
        }
        }   
    if (p1[1]!=80&&p1[2]!=80&&p1[3]!=80&&p1[4]!=80&&p1[5]!=80&&p1[6]!=80&&p1[7]!=80&&p1[8]!=80&&p1[9]!=80&&p2[1]!=80&&p2[2]!=80&&p2[3]!=80&&p2[4]!=80&&p2[5]!=80&&p2[6]!=80&&p2[7]!=80&&p3[1]!=80&&p3[2]!=80&&p3[3]!=80&&p3[4]!=80&&p3[5]!=80&&p3[6]!=80&&p3[7]!=80&&p3[8]!=80&&p3[9]!=80&&p3[10]!=80&&p3[11]!=80&&p3[12]!=80&&p3[13]!=80&&p3[14]!=80&&p3[15]!=80&&p3[16]!=80&&p3[17]!=80&&p3[18]!=80&&p3[19]!=80&&p3[20]!=80&&p4[1]!=80&&p4[2]!=80&&p4[3]!=80&&p4[4]!=80&&p4[5]!=80&&p4[6]!=80&&p4[7]!=80&&p4[8]!=80&&p4[9]!=80&&p4[10]!=80&&p4[11]!=80&&p4[12]!=80)
    {
        
        HP1=HP1-((59*E3)%900);
        EXP1=EXP1-((79*E3)%300);
        M1=ceil(M1F);
    if (EXP1 < 0){  // vuot qua gia tri
        EXP1=0;
    }
    else if(EXP1 > 900){ 
        EXP1 =900;
    }
    if (M1 < 0){
        M1=0;
    }
    else if(M1  > 2000){
        M1 =2000;
    }
    if (HP1 < 0){
        HP1=0;
    }
    else if(HP1  > 999){
        HP1 =999;
    } 
        return -1;
    }
    M1F=ceil(M1F);
    if (EXP1F < 0){  // vuot qua gia tri
        EXP1F=0;
    }
    else if(EXP1F > 900){ 
        EXP1F =900;
    }
    if (M1F < 0){
        M1F=0;
    }
    else if(M1F  > 2000){
        M1F =2000;
    }
    if (HP1F < 0){
        HP1F=0;
    }
    else if(HP1F  > 999){
        HP1F =999;
    }  
    M1=M1F;
    EXP1=EXP1F;
    HP1=HP1F;
    return (HP1+EXP1+M1);
    }}
////////////////////////////////////////////////
///END OF STUDENT'S ANSWER
////////////////////////////////////////////////
#endif /* studyInPink_h */
