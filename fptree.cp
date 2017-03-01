#include<iostream>
#include<map>
#include<set>
#include<vector>
#include<fstream>
#define MAX 5;
using namespace std;
struct node
{
	node *child[5];
	int data;
	int count;
	
};
node *root;
map<int,int> mymap;
void constructroot()
{
	root=new node;
	root->data=99999;
	root->count=99999;
	for(int i=0;i<5;i++)
	root->child[i]=NULL;
}
void minetree(map<int, int>  &tmap)
{
	ifstream fin("input.txt");
	int x;
 	string s;
 	
 	while(getline(fin,s))
 	{				
	 				 
	 //				 cout<<"___________";
	 			// cout<<s<<endl;
	 				 //istringstream str1(s);
	 				 int j=0;
	 				 while(j<s.length())
	 				 {	
	 				 	int d=s[j]-'0';
	 				 	if(d>0)
	 				 	 x=tmap[d];
	 				 	cout<<d<<" "<<x<<" "<<endl;
	 				 	j++;
	 				 }
	 				 cout<<endl;
	 			}
	
}


int main()
{	
	int minsup;
	cout<<"enter the minimum support\n";
	cin>>minsup;
 	ifstream fin("input.txt");
 	string str1,token;
 	set< int > input;
 	int d;
 	
 	string s;
 	
 	while(getline(fin,s))
 	{				
	 				 
	 //				 cout<<"___________";
	 			// cout<<s<<endl;
	 				 //istringstream str1(s);
	 				 int j=0;
	 				 while(j<s.length())
	 				 {	
	 				 	d=s[j]-'0';
					 	//d=atoi(token.c_str());
						 if(d>0)
						 {				  
					  //	c[i].push_back(d);
						input.insert(d);
						mymap[d]++;
					}
						j++;
						}
						
		}
		for(map<int,int> :: iterator it=mymap.begin();it!=mymap.end();it++)
		{
			cout<<it->first<<" "<<it->second<<endl;
		}
	constructroot();
	minetree(mymap);
}
