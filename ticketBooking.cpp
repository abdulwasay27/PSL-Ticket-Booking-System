//       Name: Abdul Wasay         Roll no:22I-1198                Assignment no#2
#include<iostream>
using namespace std;
int main()
{    
    int n, n1, ik, jm, ja, am, st, sa, ib, ya, cnic, adultTickets, childTickets;
    char option;
    
    
       ik=rand()%1000 ; //Imran Khan
       jm=rand()%1000;  //Javed Miandad
       ja=rand()%1000;  //Javed Akhtar
       am=rand()%1000;  //Azhar Mehmood
       st=rand()%3000;  //Sohail Tanveer
       sa=rand()%3000;  //Shoaib Akhtar
       ib=rand()%2500;  //Imran Buksh
       ya=rand()%2500;  //Yasir Arafat
    
   
   
	cout<<"1. 27 Feb 2020 – Islamabad United v Quetta Gladiators, Pindi Cricket Stadium (7pm-10.15pm)"<<endl;
	cout<<"2. 28 Feb 2020 – Peshawar Zalmi v Lahore Qalandars, Pindi Cricket Stadium (8pm-11.15pm)"<<endl;	
	cout<<"3. 29 Feb 2020 – Islamabad United v Peshawar Zalmi, Pindi Cricket Stadium (7pm-10.15pm)"<<endl;
	cout<<"4. 1 Mar 2020 – Islamabad United v Karachi Kings, Pindi Cricket Stadium (7pm-10.15pm)"<<endl;
	cout<<"5. 2 Mar 2020 – Peshawar Zalmi v Karachi Kings, Pindi Cricket Stadium (7pm-10.15pm)"<<endl;
	cout<<"6. 5 Mar 2020 – Peshawar Zalmi v Quetta Gladiators, Pindi Cricket Stadium (7pm-10.15pm)"<<endl;
	cout<<"7. 7 Mar 2020 – Peshawar Zalmi v Islamabad United, Pindi Cricket Stadium (2pm-5.15pm)"<<endl;
	cout<<"8. 8 Mar 2020 – Multan Sultans v Islamabad United, Pindi Cricket Stadium (2pm-5.15pm)"<<endl;
	
	cout<<"Enter your choice: ";
	cin>>n;
	cout<<endl<<endl;

	switch(n)
	{
	case 1:
	cout<<"1. 27 February 2020 | Islamabad United v Quetta Gladiators (7 pm-10.15 pm)\n(VIP – Rs. 3000, Premium – Rs. 1500, First-class – Rs. 1000, General – Rs. 500)"<<endl<<endl;
	cout<<"\t\t|VIP|"<<endl;
	cout<<"1. Imran Khan-Available seats: "<<ik<<endl;
	cout<<"2. Javed Miandad-Available seats: "<<jm<<endl;
	cout<<"3. Javed Akhtar-Available seats: "<<ja<<endl;
	cout<<"4. Azhar Mehmodd-Available seats: "<<am<<endl<<endl;
	cout<<"\t\t|Premium|"<<endl;
	cout<<"5. Shoaib Akhtar-Available seats: "<<sa<<endl<<endl;
	cout<<"\t\t|First-Class|"<<endl;
	cout<<"6. Sohail Tanveer-Available seats: "<<st<<endl<<endl;
	cout<<"\t\t|General|"<<endl;
	cout<<"7. Imran Buksh-Available seats: "<<ib<<endl;
	cout<<"8. Yasir Arafat-Available seats: "<<ya<<endl<<endl;
	
	cout<<"Select an option: "; 
	 cin>>n1;
	 if(n1==1)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*3000)-(adultTickets*0.1*3000))+((childTickets*3000)-(childTickets*0.20*3000)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	     
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	   cout<<"The total amount is: "<<((adultTickets*3000)-(adultTickets*0.10*3000))<<endl;
	   else
	   cout<<"The total amount is: "<<(adultTickets*3000)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 
	 //---------------------------------------------------------------
	 else if(n1==2)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*3000)-(adultTickets*0.1*3000))+((childTickets*3000)-(childTickets*0.20*3000)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	     
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	   cout<<"The total amount is: "<<((adultTickets*3000)-(adultTickets*0.10*3000))<<endl;
	   else
	   cout<<"The total amount is: "<<(adultTickets*3000)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 
	 
	 
	 
	//----------------------------------------------------
	else if(n1==3)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*3000)-(adultTickets*0.1*3000))+((childTickets*3000)-(childTickets*0.20*3000)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	     
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	   cout<<"The total amount is: "<<((adultTickets*3000)-(adultTickets*0.10*3000))<<endl;
	   else
	   cout<<"The total amount is: "<<(adultTickets*3000)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 
	 
	 //-----------------------------------------------------------------------
	 else if(n1==4)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*3000)-(adultTickets*0.1*3000))+((childTickets*3000)-(childTickets*0.20*3000)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	     
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	   cout<<"The total amount is: "<<((adultTickets*3000)-(adultTickets*0.10*3000))<<endl;
	   else
	   cout<<"The total amount is: "<<(adultTickets*3000)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 
	 
	 
	 //-----------------------------------------------------------------
	 else if(n1==5)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*1000)-(adultTickets*0.1*1000))+((childTickets*1000)-(childTickets*0.20*1000)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	    cout<<"The total amount is: "<<((adultTickets*1500)-(adultTickets*0.10*1500))<<endl;
	    else
	   cout<<"The total amount is: "<<(adultTickets*1500)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 
	 //-------------------------------------------------------------------
	 else if(n1==6)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*1500)-(adultTickets*0.1*1500))+((childTickets*1500)-(childTickets*0.20*1500)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	    cout<<"The total amount is: "<<((adultTickets*1500)-(adultTickets*0.10*1500))<<endl;
	    else
	   cout<<"The total amount is: "<<(adultTickets*1500)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 //----------------------------------------------------------
	 else if(n1==7)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*500)-(adultTickets*0.1*500))+((childTickets*500)-(childTickets*0.20*500)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	    cout<<"The total amount is: "<<((adultTickets*500)-(adultTickets*0.10*500))<<endl;
	    else
	   cout<<"The total amount is: "<<(adultTickets*500)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 //----------------------------------------------------------------------
	 else if(n1==8)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*500)-(adultTickets*0.1*500))+((childTickets*500)-(childTickets*0.20*500)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	    cout<<"The total amount is: "<<((adultTickets*500)-(adultTickets*0.10*500))<<endl;
	    else
	   cout<<"The total amount is: "<<(adultTickets*500)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl<<endl;
	 } }
	
	break;
	
	case 2:
	cout<<"2. 28 February 2020 | Peshawar Zalmi v Lahore Qalandars (7 pm-10.15 pm)\n(VIP – Rs. 3000, Premium – Rs. 1500, First-class – Rs. 1000, General – Rs. 500)"<<endl<<endl;
	cout<<"\t\t|VIP|"<<endl;
	cout<<"1. Imran Khan-Available seats: "<<ik<<endl;
	cout<<"2. Javed Miandad-Available seats: "<<jm<<endl;
	cout<<"3. Javed Akhtar-Available seats: "<<ja<<endl;
	cout<<"4. Azhar Mehmodd-Available seats: "<<am<<endl<<endl;
	cout<<"\t\t|Premium|"<<endl;
	cout<<"5. Shoaib Akhtar-Available seats: "<<sa<<endl<<endl;
	cout<<"\t\t|First-Class|"<<endl;
	cout<<"6. Sohail Tanveer-Available seats: "<<st<<endl<<endl;
	cout<<"\t\t|General|"<<endl;
	cout<<"7. Imran Buksh-Available seats: "<<ib<<endl;
	cout<<"8. Yasir Arafat-Available seats: "<<ya<<endl<<endl;
	
	cout<<"Select an option: "; 
	 cin>>n1;
	 if(n1==1)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*3000)-(adultTickets*0.1*3000))+((childTickets*3000)-(childTickets*0.20*3000)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	     
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	   cout<<"The total amount is: "<<((adultTickets*3000)-(adultTickets*0.10*3000))<<endl;
	   else
	   cout<<"The total amount is: "<<(adultTickets*3000)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 
	 //---------------------------------------------------------------
	 else if(n1==2)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*3000)-(adultTickets*0.1*3000))+((childTickets*3000)-(childTickets*0.20*3000)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	     
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	   cout<<"The total amount is: "<<((adultTickets*3000)-(adultTickets*0.10*3000))<<endl;
	   else
	   cout<<"The total amount is: "<<(adultTickets*3000)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 
	 
	 
	 
	//----------------------------------------------------
	else if(n1==3)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*3000)-(adultTickets*0.1*3000))+((childTickets*3000)-(childTickets*0.20*3000)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	     
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	   cout<<"The total amount is: "<<((adultTickets*3000)-(adultTickets*0.10*3000))<<endl;
	   else
	   cout<<"The total amount is: "<<(adultTickets*3000)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 
	 
	 //-----------------------------------------------------------------------
	 else if(n1==4)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*3000)-(adultTickets*0.1*3000))+((childTickets*3000)-(childTickets*0.20*3000)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	     
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	   cout<<"The total amount is: "<<((adultTickets*3000)-(adultTickets*0.10*3000))<<endl;
	   else
	   cout<<"The total amount is: "<<(adultTickets*3000)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 
	 
	 
	 //-----------------------------------------------------------------
	 else if(n1==5)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*1000)-(adultTickets*0.1*1000))+((childTickets*1000)-(childTickets*0.20*1000)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	    cout<<"The total amount is: "<<((adultTickets*1500)-(adultTickets*0.10*1500))<<endl;
	    else
	   cout<<"The total amount is: "<<(adultTickets*1500)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 
	 //-------------------------------------------------------------------
	 else if(n1==6)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*1500)-(adultTickets*0.1*1500))+((childTickets*1500)-(childTickets*0.20*1500)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	    cout<<"The total amount is: "<<((adultTickets*1500)-(adultTickets*0.10*1500))<<endl;
	    else
	   cout<<"The total amount is: "<<(adultTickets*1500)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 //----------------------------------------------------------
	 else if(n1==7)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*500)-(adultTickets*0.1*500))+((childTickets*500)-(childTickets*0.20*500)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	    cout<<"The total amount is: "<<((adultTickets*500)-(adultTickets*0.10*500))<<endl;
	    else
	   cout<<"The total amount is: "<<(adultTickets*500)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 //----------------------------------------------------------------------
	 else if(n1==8)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*500)-(adultTickets*0.1*500))+((childTickets*500)-(childTickets*0.20*500)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	    cout<<"The total amount is: "<<((adultTickets*500)-(adultTickets*0.10*500))<<endl;
	    else
	   cout<<"The total amount is: "<<(adultTickets*500)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl<<endl;
	 } }
	break;
	
	case 3:
	cout<<"3. 29 February 2020 | Islamabad United v Peshawar Zalmi (7 pm-10.15 pm)\n(VIP – Rs. 3000, Premium – Rs. 1500, First-class – Rs. 1000, General – Rs. 500)"<<endl<<endl;
	cout<<"\t\t|VIP|"<<endl;
	cout<<"1. Imran Khan-Available seats: "<<ik<<endl;
	cout<<"2. Javed Miandad-Available seats: "<<jm<<endl;
	cout<<"3. Javed Akhtar-Available seats: "<<ja<<endl;
	cout<<"4. Azhar Mehmodd-Available seats: "<<am<<endl<<endl;
	cout<<"\t\t|Premium|"<<endl;
	cout<<"5. Shoaib Akhtar-Available seats: "<<sa<<endl<<endl;
	cout<<"\t\t|First-Class|"<<endl;
	cout<<"6. Sohail Tanveer-Available seats: "<<st<<endl<<endl;
	cout<<"\t\t|General|"<<endl;
	cout<<"7. Imran Buksh-Available seats: "<<ib<<endl;
	cout<<"8. Yasir Arafat-Available seats: "<<ya<<endl<<endl;
	
	cout<<"Select an option: "; 
	 cin>>n1;
	 if(n1==1)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*3000)-(adultTickets*0.1*3000))+((childTickets*3000)-(childTickets*0.20*3000)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	     
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	   cout<<"The total amount is: "<<((adultTickets*3000)-(adultTickets*0.10*3000))<<endl;
	   else
	   cout<<"The total amount is: "<<(adultTickets*3000)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 
	 //---------------------------------------------------------------
	 else if(n1==2)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*3000)-(adultTickets*0.1*3000))+((childTickets*3000)-(childTickets*0.20*3000)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	     
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	   cout<<"The total amount is: "<<((adultTickets*3000)-(adultTickets*0.10*3000))<<endl;
	   else
	   cout<<"The total amount is: "<<(adultTickets*3000)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 
	 
	 
	 
	//----------------------------------------------------
	else if(n1==3)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*3000)-(adultTickets*0.1*3000))+((childTickets*3000)-(childTickets*0.20*3000)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	     
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	   cout<<"The total amount is: "<<((adultTickets*3000)-(adultTickets*0.10*3000))<<endl;
	   else
	   cout<<"The total amount is: "<<(adultTickets*3000)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 
	 
	 //-----------------------------------------------------------------------
	 else if(n1==4)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*3000)-(adultTickets*0.1*3000))+((childTickets*3000)-(childTickets*0.20*3000)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	     
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	   cout<<"The total amount is: "<<((adultTickets*3000)-(adultTickets*0.10*3000))<<endl;
	   else
	   cout<<"The total amount is: "<<(adultTickets*3000)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 
	 
	 
	 //-----------------------------------------------------------------
	 else if(n1==5)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*1000)-(adultTickets*0.1*1000))+((childTickets*1000)-(childTickets*0.20*1000)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	    cout<<"The total amount is: "<<((adultTickets*1500)-(adultTickets*0.10*1500))<<endl;
	    else
	   cout<<"The total amount is: "<<(adultTickets*1500)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 
	 //-------------------------------------------------------------------
	 else if(n1==6)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*1500)-(adultTickets*0.1*1500))+((childTickets*1500)-(childTickets*0.20*1500)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	    cout<<"The total amount is: "<<((adultTickets*1500)-(adultTickets*0.10*1500))<<endl;
	    else
	   cout<<"The total amount is: "<<(adultTickets*1500)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 //----------------------------------------------------------
	 else if(n1==7)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*500)-(adultTickets*0.1*500))+((childTickets*500)-(childTickets*0.20*500)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	    cout<<"The total amount is: "<<((adultTickets*500)-(adultTickets*0.10*500))<<endl;
	    else
	   cout<<"The total amount is: "<<(adultTickets*500)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 //----------------------------------------------------------------------
	 else if(n1==8)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*500)-(adultTickets*0.1*500))+((childTickets*500)-(childTickets*0.20*500)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	    cout<<"The total amount is: "<<((adultTickets*500)-(adultTickets*0.10*500))<<endl;
	    else
	   cout<<"The total amount is: "<<(adultTickets*500)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl<<endl;
	 } }
	break;
	
	case 4:
	cout<<"1 March 2020 | Islamabad United v Karachi Kings (7 pm-10.15 pm)\n(VIP – Rs. 2000, Premium – Rs. 1000, First-class – Rs. 500, General – Rs. 250)"<<endl<<endl;
	cout<<"\t\t|VIP|"<<endl;
	cout<<"1. Imran Khan-Available seats: "<<ik<<endl;
	cout<<"2. Javed Miandad-Available seats: "<<jm<<endl;
	cout<<"3. Javed Akhtar-Available seats: "<<ja<<endl;
	cout<<"4. Azhar Mehmodd-Available seats: "<<am<<endl<<endl;
	cout<<"\t\t|Premium|"<<endl;
	cout<<"5. Shoaib Akhtar-Available seats: "<<sa<<endl<<endl;
	cout<<"\t\t|First-Class|"<<endl;
	cout<<"6. Sohail Tanveer-Available seats: "<<st<<endl<<endl;
	cout<<"\t\t|General|"<<endl;
	cout<<"7. Imran Buksh-Available seats: "<<ib<<endl;
	cout<<"8. Yasir Arafat-Available seats: "<<ya<<endl<<endl;
	
	cout<<"Select an option: "; 
	 cin>>n1;
	 if(n1==1)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*2000)-(adultTickets*0.1*2000))+((childTickets*2000)-(childTickets*0.20*2000)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	     
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	   cout<<"The total amount is: "<<((adultTickets*2000)-(adultTickets*0.10*2000))<<endl;
	   else
	   cout<<"The total amount is: "<<(adultTickets*2000)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 
	 //---------------------------------------------------------------
	 else if(n1==2)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*2000)-(adultTickets*0.1*2000))+((childTickets*2000)-(childTickets*0.20*2000)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	     
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	   cout<<"The total amount is: "<<((adultTickets*2000)-(adultTickets*0.10*2000))<<endl;
	   else
	   cout<<"The total amount is: "<<(adultTickets*2000)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 
	 
	 
	//----------------------------------------------------
	else if(n1==3)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*2000)-(adultTickets*0.1*2000))+((childTickets*2000)-(childTickets*0.20*2000)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	     
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	   cout<<"The total amount is: "<<((adultTickets*2000)-(adultTickets*0.10*2000))<<endl;
	   else
	   cout<<"The total amount is: "<<(adultTickets*2000)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 
	 //-----------------------------------------------------------------------
	 else if(n1==4)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*2000)-(adultTickets*0.1*2000))+((childTickets*2000)-(childTickets*0.20*2000)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	     
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	   cout<<"The total amount is: "<<((adultTickets*2000)-(adultTickets*0.10*2000))<<endl;
	   else
	   cout<<"The total amount is: "<<(adultTickets*2000)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 
	 
	 //-----------------------------------------------------------------
	 else if(n1==5)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*500)-(adultTickets*0.1*500))+((childTickets*500)-(childTickets*0.20*1000)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	    cout<<"The total amount is: "<<((adultTickets*500)-(adultTickets*0.10*500))<<endl;
	    else
	   cout<<"The total amount is: "<<(adultTickets*500)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 
	 //-------------------------------------------------------------------
	 else if(n1==6)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*1000)-(adultTickets*0.1*1000))+((childTickets*1000)-(childTickets*0.20*1000)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	    cout<<"The total amount is: "<<((adultTickets*1000)-(adultTickets*0.10*1000))<<endl;
	    else
	   cout<<"The total amount is: "<<(adultTickets*1000)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 //----------------------------------------------------------
	 else if(n1==7)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*250)-(adultTickets*0.1*250))+((childTickets*250)-(childTickets*0.20*250)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	    cout<<"The total amount is: "<<((adultTickets*250)-(adultTickets*0.10*250))<<endl;
	    else
	   cout<<"The total amount is: "<<(adultTickets*250)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 //----------------------------------------------------------------------
	 else if(n1==8)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*250)-(adultTickets*0.1*250))+((childTickets*250)-(childTickets*0.20*250)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	    cout<<"The total amount is: "<<((adultTickets*250)-(adultTickets*0.10*250))<<endl;
	    else
	   cout<<"The total amount is: "<<(adultTickets*250)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl<<endl;
	 } }
	break;
	
	case 5:
	cout<<"2 March 2020 | Peshawar Zalmi v Karachi Kings (7 pm-10.15 pm)\n(VIP – Rs. 1500, Premium – Rs. 1000, First-class – Rs. 500, General – Rs. 250)"<<endl<<endl;
	cout<<"\t\t|VIP|"<<endl;
	cout<<"1. Imran Khan-Available seats: "<<ik<<endl;
	cout<<"2. Javed Miandad-Available seats: "<<jm<<endl;
	cout<<"3. Javed Akhtar-Available seats: "<<ja<<endl;
	cout<<"4. Azhar Mehmodd-Available seats: "<<am<<endl<<endl;
	cout<<"\t\t|Premium|"<<endl;
	cout<<"5. Shoaib Akhtar-Available seats: "<<sa<<endl<<endl;
	cout<<"\t\t|First-Class|"<<endl;
	cout<<"6. Sohail Tanveer-Available seats: "<<st<<endl<<endl;
	cout<<"\t\t|General|"<<endl;
	cout<<"7. Imran Buksh-Available seats: "<<ib<<endl;
	cout<<"8. Yasir Arafat-Available seats: "<<ya<<endl<<endl;
	
	cout<<"Select an option: ";
	 cin>>n1;
	 if(n1==1)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*1500)-(adultTickets*0.1*1500))+((childTickets*1500)-(childTickets*0.20*1500)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	     
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	   cout<<"The total amount is: "<<((adultTickets*1500)-(adultTickets*0.10*1500))<<endl;
	   else
	   cout<<"The total amount is: "<<(adultTickets*1500)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 
	 //---------------------------------------------------------------
	 else if(n1==2)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*1500)-(adultTickets*0.1*1500))+((childTickets*1500)-(childTickets*0.20*1500)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	    cout<<"The total amount is: "<<((adultTickets*1500)-(adultTickets*0.10*1500))<<endl;
	    else
	   cout<<"The total amount is: "<<(adultTickets*1500)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 
	 
	//----------------------------------------------------
	else if(n1==3)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*1500)-(adultTickets*0.1*1500))+((childTickets*1500)-(childTickets*0.20*1500)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	    cout<<"The total amount is: "<<((adultTickets*1500)-(adultTickets*0.10*1500))<<endl;
	    else
	   cout<<"The total amount is: "<<(adultTickets*1500)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 //-----------------------------------------------------------------------
	 else if(n1==4)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*1500)-(adultTickets*0.1*1500))+((childTickets*1500)-(childTickets*0.20*1500)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	    cout<<"The total amount is: "<<((adultTickets*1500)-(adultTickets*0.10*1500))<<endl;
	    else
	   cout<<"The total amount is: "<<(adultTickets*1500)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 
	 //-----------------------------------------------------------------
	 else if(n1==5)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*500)-(adultTickets*0.1*500))+((childTickets*500)-(childTickets*0.20*500)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	    cout<<"The total amount is: "<<((adultTickets*500)-(adultTickets*0.10*500))<<endl;
	    else
	   cout<<"The total amount is: "<<(adultTickets*500)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 
	 //-------------------------------------------------------------------
	 else if(n1==6)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*1000)-(adultTickets*0.1*1000))+((childTickets*1000)-(childTickets*0.20*1000)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	    cout<<"The total amount is: "<<((adultTickets*1000)-(adultTickets*0.10*1000))<<endl;
	    else
	   cout<<"The total amount is: "<<(adultTickets*1000)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 //----------------------------------------------------------
	 else if(n1==7)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*250)-(adultTickets*0.1*250))+((childTickets*250)-(childTickets*0.20*250)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	    cout<<"The total amount is: "<<((adultTickets*250)-(adultTickets*0.10*250))<<endl;
	    else
	   cout<<"The total amount is: "<<(adultTickets*250)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 //----------------------------------------------------------------------
	 else if(n1==8)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*250)-(adultTickets*0.1*250))+((childTickets*250)-(childTickets*0.20*250)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	    cout<<"The total amount is: "<<((adultTickets*250)-(adultTickets*0.10*250))<<endl;
	    else
	   cout<<"The total amount is: "<<(adultTickets*250)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	break;
	
	case 6:
	cout<<"5 March 2020 | Peshawar Zalmi v Quetta Gladiators (7 pm-10.15 pm)\n(VIP – Rs. 1500, Premium – Rs. 1000, First-class – Rs. 500, General – Rs. 250)"<<endl<<endl;
	cout<<"\t\t|VIP|"<<endl;
	cout<<"1. Imran Khan-Available seats: "<<ik<<endl;
	cout<<"2. Javed Miandad-Available seats: "<<jm<<endl;
	cout<<"3. Javed Akhtar-Available seats: "<<ja<<endl;
	cout<<"4. Azhar Mehmodd-Available seats: "<<am<<endl<<endl;
	cout<<"\t\t|Premium|"<<endl;
	cout<<"5. Shoaib Akhtar-Available seats: "<<sa<<endl<<endl;
	cout<<"\t\t|First-Class|"<<endl;
	cout<<"6. Sohail Tanveer-Available seats: "<<st<<endl<<endl;
	cout<<"\t\t|General|"<<endl;
	cout<<"7. Imran Buksh-Available seats: "<<ib<<endl;
	cout<<"8. Yasir Arafat-Available seats: "<<ya<<endl;
	
	cout<<"Select an option: ";
	 cin>>n1;
	 if(n1==1)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*1500)-(adultTickets*0.1*1500))+((childTickets*1500)-(childTickets*0.20*1500)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	     
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	   cout<<"The total amount is: "<<((adultTickets*1500)-(adultTickets*0.10*1500))<<endl;
	   else
	   cout<<"The total amount is: "<<(adultTickets*1500)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 
	 //---------------------------------------------------------------
	 else if(n1==2)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*1500)-(adultTickets*0.1*1500))+((childTickets*1500)-(childTickets*0.20*1500)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	    cout<<"The total amount is: "<<((adultTickets*1500)-(adultTickets*0.10*1500))<<endl;
	    else
	   cout<<"The total amount is: "<<(adultTickets*1500)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 
	 
	//----------------------------------------------------
	else if(n1==3)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*1500)-(adultTickets*0.1*1500))+((childTickets*1500)-(childTickets*0.20*1500)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	    cout<<"The total amount is: "<<((adultTickets*1500)-(adultTickets*0.10*1500))<<endl;
	    else
	   cout<<"The total amount is: "<<(adultTickets*1500)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 //-----------------------------------------------------------------------
	 else if(n1==4)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*1500)-(adultTickets*0.1*1500))+((childTickets*1500)-(childTickets*0.20*1500)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	    cout<<"The total amount is: "<<((adultTickets*1500)-(adultTickets*0.10*1500))<<endl;
	    else
	   cout<<"The total amount is: "<<(adultTickets*1500)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 
	 //-----------------------------------------------------------------
	 else if(n1==5)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*500)-(adultTickets*0.1*500))+((childTickets*500)-(childTickets*0.20*500)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	    cout<<"The total amount is: "<<((adultTickets*500)-(adultTickets*0.10*500))<<endl;
	    else
	   cout<<"The total amount is: "<<(adultTickets*500)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 
	 //-------------------------------------------------------------------
	 else if(n1==6)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*1000)-(adultTickets*0.1*1000))+((childTickets*1000)-(childTickets*0.20*1000)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	    cout<<"The total amount is: "<<((adultTickets*1000)-(adultTickets*0.10*1000))<<endl;
	    else
	   cout<<"The total amount is: "<<(adultTickets*1000)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 //----------------------------------------------------------
	 else if(n1==7)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*250)-(adultTickets*0.1*250))+((childTickets*250)-(childTickets*0.20*250)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	    cout<<"The total amount is: "<<((adultTickets*250)-(adultTickets*0.10*250))<<endl;
	    else
	   cout<<"The total amount is: "<<(adultTickets*250)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 //----------------------------------------------------------------------
	 else if(n1==8)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*250)-(adultTickets*0.1*250))+((childTickets*250)-(childTickets*0.20*250)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	    cout<<"The total amount is: "<<((adultTickets*250)-(adultTickets*0.10*250))<<endl;
	    else
	   cout<<"The total amount is: "<<(adultTickets*250)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	
	
	break;
	
	case 7:
	cout<<"7 March 2020 | Peshawar Zalmi v Islamabad United (2 pm-5.15 pm)\n(VIP – Rs. 2000, Premium – Rs. 1000, First-class – Rs. 500, General – Rs. 250)"<<endl<<endl;
	cout<<"\t\t|VIP|"<<endl;
	cout<<"1. Imran Khan-Available seats: "<<ik<<endl;
	cout<<"2. Javed Miandad-Available seats: "<<jm<<endl;
	cout<<"3. Javed Akhtar-Available seats: "<<ja<<endl;
	cout<<"4. Azhar Mehmodd-Available seats: "<<am<<endl<<endl;
	cout<<"\t\t|Premium|"<<endl;
	cout<<"5. Shoaib Akhtar-Available seats: "<<sa<<endl<<endl;
	cout<<"\t\t|First-Class|"<<endl;
	cout<<"6. Sohail Tanveer-Available seats: "<<st<<endl<<endl;
	cout<<"\t\t|General|"<<endl;
	cout<<"7. Imran Buksh-Available seats: "<<ib<<endl;
	cout<<"8. Yasir Arafat-Available seats: "<<ya<<endl<<endl;
	
	
	cout<<"Select an option: "; 
	 cin>>n1;
	 if(n1==1)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*2000)-(adultTickets*0.1*2000))+((childTickets*2000)-(childTickets*0.20*2000)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	     
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	   cout<<"The total amount is: "<<((adultTickets*2000)-(adultTickets*0.10*2000))<<endl;
	   else
	   cout<<"The total amount is: "<<(adultTickets*2000)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 
	 //---------------------------------------------------------------
	 else if(n1==2)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*2000)-(adultTickets*0.1*2000))+((childTickets*2000)-(childTickets*0.20*2000)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	     
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	   cout<<"The total amount is: "<<((adultTickets*2000)-(adultTickets*0.10*2000))<<endl;
	   else
	   cout<<"The total amount is: "<<(adultTickets*2000)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 
	 
	 
	//----------------------------------------------------
	else if(n1==3)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*2000)-(adultTickets*0.1*2000))+((childTickets*2000)-(childTickets*0.20*2000)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	     
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	   cout<<"The total amount is: "<<((adultTickets*2000)-(adultTickets*0.10*2000))<<endl;
	   else
	   cout<<"The total amount is: "<<(adultTickets*2000)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 
	 //-----------------------------------------------------------------------
	 else if(n1==4)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*2000)-(adultTickets*0.1*2000))+((childTickets*2000)-(childTickets*0.20*2000)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	     
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	   cout<<"The total amount is: "<<((adultTickets*2000)-(adultTickets*0.10*2000))<<endl;
	   else
	   cout<<"The total amount is: "<<(adultTickets*2000)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 
	 
	 //-----------------------------------------------------------------
	 else if(n1==5)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*500)-(adultTickets*0.1*500))+((childTickets*500)-(childTickets*0.20*1000)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	    cout<<"The total amount is: "<<((adultTickets*500)-(adultTickets*0.10*500))<<endl;
	    else
	   cout<<"The total amount is: "<<(adultTickets*500)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 
	 //-------------------------------------------------------------------
	 else if(n1==6)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*1000)-(adultTickets*0.1*1000))+((childTickets*1000)-(childTickets*0.20*1000)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	    cout<<"The total amount is: "<<((adultTickets*1000)-(adultTickets*0.10*1000))<<endl;
	    else
	   cout<<"The total amount is: "<<(adultTickets*1000)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 //----------------------------------------------------------
	 else if(n1==7)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*250)-(adultTickets*0.1*250))+((childTickets*250)-(childTickets*0.20*250)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	    cout<<"The total amount is: "<<((adultTickets*250)-(adultTickets*0.10*250))<<endl;
	    else
	   cout<<"The total amount is: "<<(adultTickets*250)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 //----------------------------------------------------------------------
	 else if(n1==8)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*250)-(adultTickets*0.1*250))+((childTickets*250)-(childTickets*0.20*250)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	    cout<<"The total amount is: "<<((adultTickets*250)-(adultTickets*0.10*250))<<endl;
	    else
	   cout<<"The total amount is: "<<(adultTickets*250)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl<<endl;
	 } }
	break;
	
	case 8:
	cout<<"8 March 2020 | Multan Sultans v Islamabad United (2 pm-5.15 pm)\n(VIP – Rs. 1500, Premium – Rs. 1000, First-class – Rs. 500, General – Rs. 250)"<<endl<<endl;
	cout<<"\t\t|VIP|"<<endl;
	cout<<"1. Imran Khan-Available seats: "<<ik<<endl;
	cout<<"2. Javed Miandad-Available seats: "<<jm<<endl;
	cout<<"3. Javed Akhtar-Available seats: "<<ja<<endl;
	cout<<"4. Azhar Mehmodd-Available seats: "<<am<<endl<<endl;
	cout<<"\t\t|Premium|"<<endl;
	cout<<"5. Shoaib Akhtar-Available seats: "<<sa<<endl<<endl;
	cout<<"\t\t|First-Class|"<<endl;
	cout<<"6. Sohail Tanveer-Available seats: "<<st<<endl<<endl;
	cout<<"\t\t|General|"<<endl;
	cout<<"7. Imran Buksh-Available seats: "<<ib<<endl;
	cout<<"8. Yasir Arafat-Available seats: "<<ya<<endl<<endl;
	
	cout<<"Select an option: ";
	 cin>>n1;
	 if(n1==1)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*1500)-(adultTickets*0.1*1500))+((childTickets*1500)-(childTickets*0.20*1500)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	     
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	   cout<<"The total amount is: "<<((adultTickets*1500)-(adultTickets*0.10*1500))<<endl;
	   else
	   cout<<"The total amount is: "<<(adultTickets*1500)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 
	 //---------------------------------------------------------------
	 else if(n1==2)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*1500)-(adultTickets*0.1*1500))+((childTickets*1500)-(childTickets*0.20*1500)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	    cout<<"The total amount is: "<<((adultTickets*1500)-(adultTickets*0.10*1500))<<endl;
	    else
	   cout<<"The total amount is: "<<(adultTickets*1500)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 
	 
	//----------------------------------------------------
	else if(n1==3)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*1500)-(adultTickets*0.1*1500))+((childTickets*1500)-(childTickets*0.20*1500)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	    cout<<"The total amount is: "<<((adultTickets*1500)-(adultTickets*0.10*1500))<<endl;
	    else
	   cout<<"The total amount is: "<<(adultTickets*1500)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 //-----------------------------------------------------------------------
	 else if(n1==4)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*1500)-(adultTickets*0.1*1500))+((childTickets*1500)-(childTickets*0.20*1500)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	    cout<<"The total amount is: "<<((adultTickets*1500)-(adultTickets*0.10*1500))<<endl;
	    else
	   cout<<"The total amount is: "<<(adultTickets*1500)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 
	 //-----------------------------------------------------------------
	 else if(n1==5)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*500)-(adultTickets*0.1*500))+((childTickets*500)-(childTickets*0.20*500)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	    cout<<"The total amount is: "<<((adultTickets*500)-(adultTickets*0.10*500))<<endl;
	    else
	   cout<<"The total amount is: "<<(adultTickets*500)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 
	 //-------------------------------------------------------------------
	 else if(n1==6)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*1000)-(adultTickets*0.1*1000))+((childTickets*1000)-(childTickets*0.20*1000)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	    cout<<"The total amount is: "<<((adultTickets*1000)-(adultTickets*0.10*1000))<<endl;
	    else
	   cout<<"The total amount is: "<<(adultTickets*1000)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 //----------------------------------------------------------
	 else if(n1==7)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*250)-(adultTickets*0.1*250))+((childTickets*250)-(childTickets*0.20*250)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	    cout<<"The total amount is: "<<((adultTickets*250)-(adultTickets*0.10*250))<<endl;
	    else
	   cout<<"The total amount is: "<<(adultTickets*250)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	 } }
	 
	 //----------------------------------------------------------------------
	 else if(n1==8)
	 {cout<<endl<<"Do you wish to buy tickets for a family [y/n]? ";
	 cin>>option;
	 if(option=='y')
	 {
	 cout<<"Enter number of adult tickets required[max 4]: ";
	 cin>>adultTickets;
	    if((adultTickets<=4)&&(ya-adultTickets>0)&&(adultTickets>0))
	   {
	 
	 cout<<endl<<"Enter number of child tickets required[min 1 max 5]: ";
	 cin>>childTickets;
	 if((childTickets<=5)&&(ya-childTickets>0)&&(childTickets>1))
	 {cout<<"Enter your CNIC: ";
	 cin>>cnic;
	 cout<<"The total amount is "<<(((adultTickets*250)-(adultTickets*0.1*250))+((childTickets*250)-(childTickets*0.20*250)))<<endl;
	  }
	  else 
	  cout<<"Invalid input or not enough tickets available."<<endl;	 
	    }
	     }
	 
	 else if(option=='n')
	 {  cout<<"Enter number of adult tickets required[max 8]: ";
	 cin>>adultTickets;
	 if((adultTickets<=8)&&(adultTickets>0)&&(ya-adultTickets>0))
	   {cout<<"Enter your CNIC: ";
	   cin>>cnic;
	   if(adultTickets>4)
	    cout<<"The total amount is: "<<((adultTickets*250)-(adultTickets*0.10*250))<<endl;
	    else
	   cout<<"The total amount is: "<<(adultTickets*250)<<endl;
	   }
	   else
	   cout<<"Invalid input or not enough tickets available."<<endl;
	   
	   default:
	   cout<<"Invalid input"<<endl;
	 } }
	 }
	 
	 
return 0;
}
