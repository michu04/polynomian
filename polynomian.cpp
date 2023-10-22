#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int st (vector<double> w){
return (w.size()-1);}

vector<double> add (vector<double> a, vector<double> b){
    if(a.size() >= b.size()){
        for(int i=0; i<b.size(); i++)
            a[i] += b[i];
    return a;}

    if(a.size() < b.size()){
        for(int i=0; i<a.size(); i++)
            b[i] += a[i];
    return b;}}

vector<double> substract (vector<double> a, vector<double> b){
  if(a.size() >= b.size())
    for(int i=0; i<a.size(); i++)
      a[i] -= b[i];
  else{
    for(int i = 0; i<b.size(); i++)
      b[i] *= -1;
    a = add(a,b);}
  return a;}

vector<double> multiply (vector<double> a, vector<double> b){
    double q[a.size()+b.size()];
    vector<double> w;
    for(int i=0; i<a.size(); i++)
        for(int j=0; j<b.size(); j++)
            q[i+j] += a[i]*b[j];
    for(int i=0; i<a.size()+b.size()-1; i++)
      w.push_back(q[i]);
return w;}
