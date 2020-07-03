//
//  terminalitem.h
//  Shift_Reduce
//
//  Created by 양준식 on 2020/06/05.
//  Copyright © 2020 양준식. All rights reserved.
//

#ifndef terminalitem_h
#define terminalitem_h
#include <iostream>
using namespace std;
#include <vector>


// X->B.aw 과 같이. terminal a 바로 앞에 .이 찍혀있는 상태의 item을 terminal a가 무엇인지에 따라 20개 벡터로 나누었다. 벡터안의 숫자들은 .뒤에 해당 terminal이 있는 item(nfa state)의 번호

vector<int> ti0={9,13,21,31,37};//vtype
vector<int> ti1={108};//num
vector<int> ti2={110};//float
vector<int> ti3={88};//literal
vector<int> ti4={10,17,22,32,38,106};//id
vector<int> ti5={51};//if
vector<int> ti6={80};//else
vector<int> ti7={60};//while
vector<int> ti8={68};//for
vector<int> ti9={116};//return
vector<int> ti10={91};//addsub
vector<int> ti11={97};//multdiv
vector<int> ti12={18};//assign
vector<int> ti13={113};//comp
vector<int> ti14={11,15,49,71,73,118};//semi
vector<int> ti15={36};//comma
vector<int> ti16={23,52,61,69,102};//lparen
vector<int> ti17={25,54,63,75,104};//rparen
vector<int> ti18={26,55,64,76,81};//lbrace
vector<int> ti19={29,57,66,78,83};//rbrace
    
vector<vector<int>> terminalItem={
   ti0,ti1,ti2,ti3,ti4,ti5,ti6,ti7,ti8,ti9,ti10,ti11,ti12,ti13,ti14,ti15,ti16,ti17,ti18,ti19};
    


#endif /* terminalitem_h */
