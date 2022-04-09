#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

//PowerSet :
class alg
{
	
public:
void printPowerSet(vector<int> set, int set_size)
{
	
	unsigned int pow_set_size = pow(2, set_size);
	int counter, j;
	
	cout << "{";
	/*anda bit a bit de 000..0 até 111..1*/
	for(counter = 0; counter < pow_set_size; counter++)
	{
		cout << "{";
	for(j = 0; j < set_size; j++)
	{
		if(counter & (1 << j))
			cout << set[j];
	}
	cout << "}, ";
	cout << endl;
	}
	cout << "}";
}
};




template<typename T>

//auxiliary function to print sets
void printVectorElements(vector<T> &vec)
{
    cout << "{ ";
    for (const auto &item : vec) {
        cout << item << ", ";
    }
    cout << "\b\b }" << endl;
}

//linear search function
bool isThere(vector<int> x, int k)
{
  	for (int  j = 0; j<x.size(); j++)
  	{
  		if(k == x[j]) return 1;
	}
	
	return 0;
}




int main() {
	
	alg g;
	
	//declaring the sets
	int opt, op, optc, sair, tmp;
    set<int> s1;
    set<int> s2;
    set<int> s1s2_difference;
    set<int> s1s2_comp;
    vector<int> s1s2_intsec;
    vector<int> s1s2_union;
 



	// driver code
	do {
		//copying the sets to the vectors
		vector<int> v1(s1.begin(), s1.end());
    	vector<int> v2(s2.begin(), s2.end());
    	//menu
	cout << "\t\t\tWELCOME\n ";
	cout << "FILL THE SETS TO OPERATE IT! : )\n ";
	cout << "1 - ADD ELEMENT TO SET 1 ?\n ";
	cout << "2 - ADD ELEMENT TO SET 2 ?\n ";
	cout << "3 - PRINT SET 1 ?\n ";
	cout << "4 - PRINT SET 2 ?\n ";
	cout << "5 - OPERATE SETS ?\n ";
	cin >> op;
	switch(op) {
			case 1:
				cout << "ENTER THE NUMBER:";
				cin >> tmp;
				s1.insert(tmp);
				break;
			case 2:
				cout << "ENTER THE NUMBER:";
				cin >> tmp;
				s2.insert(tmp);
				break;
			case 3:
				for (auto it = s1.begin(); it !=s1.end(); ++it)
        			cout << ' ' << *it;
        			cout << '\n';
			break;
			case 4:
				for (auto it = s2.begin(); it !=s2.end(); ++it)
        			cout << ' ' << *it;
        			cout << '\n';
			break;
			case 5:
			cout << "CHOOSE AN OPTION: ?\n ";
			cout << "\t1 - UNARY OPERATION \n\t2 - BINARY OPRATION\n ";
			cin >> opt;
		switch(opt)
		{
			case 1:
					cout << "\t1 - PARTITION\n ";
					cout <<"\t2 - CARDINAL\n ";
					cin >> opt;
					cout << "\t1 - SET 1\n ";
					cout <<"\t2 - SET 2\n ";
					cin >> optc;
					if ( opt == 1)
					{	
						
						if (optc == 1)
						g.printPowerSet(v1, v1.size());
						else if (optc == 2)
						g.printPowerSet(v2, v2.size());
						else cout << "INVALID ENTRY!";
					}
					else if ( opt == 2)
					{	
						
						if (optc == 1)
						cout << "# SET 1: " << s1.size();
						else if (optc == 2)
						cout << "# SET 2: " << s2.size();
						else cout << "INVALID ENTRY!";
					}
					else cout << "INVALID ENTRY!";
						cout << '\n';
					
			break;
			case 2: 
						cout << "1 - UNION ?\n ";
						cout << "2 - INTERSECTION?\n ";
						cout << "3 - DIFFERENCE?\n ";
						cout << "4 - COMPLEMENT ?\n ";
						cout << "5 - INNER PRODUCT ?\n ";
						cin >> opt;
						switch(opt){
						
							case 1: 
								set_union(s1.begin(), s1.end(),
                          			s2.begin(), s2.end(),
                          			back_inserter(s1s2_union));
							
							    cout << "s1 u s2: ";
							    printVectorElements(s1s2_union);
							break;
							case 2: 
								set_intersection(s1.begin(), s1.end(),
			                        s2.begin(), s2.end(),
			                        back_inserter(s1s2_intsec));
			                    cout << "s1 n s2: ";
    							printVectorElements(s1s2_intsec);
  								break;
							case 3: 
								  //calculating the complement
									if(v1.size()>v2.size()){
									  for (int i = 0; i<v1.size(); i++)
									  {
											if(!isThere(v2, v1[i]))
											s1s2_comp.insert(v1[i]);
											
									  }
									
									
									  }else 
									  {
									  	  for (int i = 0; i<v2.size(); i++)
									  {
											if(!isThere(v1, v2[i]))
											s1s2_comp.insert(v2[i]);
											
									  }
									  }  
									  cout << "s1 - s2: ";
									for (auto it = s1s2_comp.begin(); it !=
								    s1s2_comp.end(); ++it)
									cout << ' ' << *it;
									cout << '\n';
							break;
							case 4: 
							  //calculating the diff
								  if(v1.size()>v2.size()){
								for (int i = 0; i<v1.size(); i++)
								  {
										if(!!isThere(v2, v1[i]))
										s1s2_difference.insert(v1[i]);
										
								  }
								
								
								  }else 
								  {
								  	  for (int i = 0; i<v2.size(); i++)
								  {
										if(!!isThere(v1, v2[i]))
										s1s2_difference.insert(v2[i]);
										
								  }
								  }
								  	cout << "s1 c s2: ";
									for (auto it = s1s2_difference.begin(); it !=
								    s1s2_difference.end(); ++it)
									cout << ' ' << *it;
									cout << '\n';
							break;
							case 5: 
								cout << "s1 x s2: ";
								cout << '\n';
								for (int i=0; i<v1.size(); i++)
								{
									for ( int j =0; j< v2.size(); j++){
										cout << "( " << v1[i] << "," << v2[j] << ")" ;
									}
										cout << '\n';
								}
							break;
						}
		}

	}
	
	cout << "ENTER A NON NULL NUMBER TO CONTINUE!";
	cin >> sair;
	
	system("cls");
	
}while(sair!=0);












    exit(EXIT_SUCCESS);
}

