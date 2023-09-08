
//   TASK : 3    Tic Tac Toe Game

#include<iostream>
using namespace std ;
#include<string>
void game();

int main()
{
    game();


    int ch;

    while(1)
        {
            cout<<"\nDo you want to play again..."<<endl;
            cout<<"1.Yes\n2.No\n"<<endl;
            cin>>ch;
            switch(ch)
            {
                case 1:game();
                break;
                case 2:exit(0);
            }
        }
    return 0;
}

void game()
    {
    	
    		cout<<"____________________TIC-TAC-TOE GAME______________________\n"<<endl;
    		
        int ct=1;
      char arr[3][3];
      int row;
      int col;
      int count=0;
      for(row=0; row<3;row++)
      {
          for(col=0; col<3; col++)
          {
              arr[row][col]='-';
          }
      }

    cout<<"Initial Matrix: "<<endl;
    for(row=0; row<3;row++)
    {
        for(col=0; col<3; col++)
        {
            cout<<arr[row][col]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
    int c;
    int r;
    int w=1;
    while(w<10)
        {
            cout<<"Player_X turns:"<<endl;
            cin>>r;
            cin>>c;
            cout<<endl;
            for(row=0; row<3;row++)
                {
                    for(col=0; col<3; col++)
                    {
                        arr[r][c]='O';
                    }
                }
            ct=ct+1;

            for(row=0; row<3;row++)
            {
                for(col=0; col<3; col++)
                {
                    cout<<arr[row][col]<<"  ";
                }
                cout<<endl;
            }

            for(row=0; row<3;row++)
                {
                    for(col=0; col<3; col++)
                    {
                        if(arr[0][0]=='O'&& arr[1][1]=='O' && arr[2][2]=='O')
                        {
                            count=1;
                        }
                        if(arr[0][0]=='O'&& arr[0][1]=='O' && arr[0][2]=='O')
                        {
                            count=1;
                        }
                        if(arr[0][0]=='O'&& arr[1][0]=='O' && arr[2][0]=='O')
                        {
                            count=1;
                        }
                        if(arr[0][2]=='O'&& arr[1][2]=='O' && arr[2][2]=='O')
                        {
                            count=1;
                        }
                        if(arr[1][0]=='O'&& arr[1][1]=='O' && arr[1][2]=='O')
                        {
                            count=1;
                        }
                        if(arr[2][0]=='O'&& arr[2][1]=='O' && arr[2][2]=='O')
                        {
                            count=1;
                        }
                        if(arr[0][1]=='O'&& arr[1][1]=='O' && arr[2][1]=='O')
                        {
                            count=1;
                        }
                        if(arr[0][2]=='O'&& arr[1][1]=='O' && arr[2][0]=='O')
                        {
                            count=1;
                        }
                    }
                }

            if(count==1)
            {
                cout<<"\nPlayer_X  won the match.................!"<<endl;
                cout<<"\nCongratulations.........."<<endl;
                break;
            }
            else if(ct==10)
            {
                cout<<"\nMatch drawn........."<<endl;
                cout<<"\nThank for Playing....."<<endl;
                break;
            }
            else
                {
                    cout<<"Match is ongoing......."<<endl;
                    cout<<endl;
                }

            cout<<"Player_O turns:"<<endl;
            cin>>r>>c;
            cout<<endl;
            for(row=0; row<3;row++)
                {
                    for(col=0; col<3; col++)
                        {
                            arr[r][c]='X';
                        }
                }
            ct=ct+1;
                 for(row=0; row<3;row++)
                    {
                        for(col=0; col<3; col++)
                        {
                            cout<<arr[row][col]<<"  ";
                        }
                        cout<<endl;
                    }

        for(row=0; row<3;row++)
            {
                for(col=0; col<3; col++)
                    {
                        if(arr[0][0]=='X'&& arr[1][1]=='X' && arr[2][2]=='X')
                        {
                            count=2;
                        }
                        if(arr[0][0]=='X'&& arr[0][1]=='X' && arr[0][2]=='X')
                        {
                            count=2;
                        }
                        if(arr[0][0]=='X'&& arr[1][0]=='X' && arr[2][0]=='X')
                        {
                            count=2;
                        }
                        if(arr[0][2]=='X'&& arr[1][2]=='X' && arr[2][2]=='X')
                        {
                            count=2;
                        }
                        if(arr[1][0]=='X'&& arr[1][1]=='X' && arr[1][2]=='X')
                        {
                            count=2;
                        }
                        if(arr[2][0]=='X'&& arr[2][1]=='X' && arr[2][2]=='X')
                        {
                            count=2;
                        }
                        if(arr[0][1]=='X'&& arr[1][1]=='X' && arr[2][1]=='X')
                        {
                            count=2;
                        }
                        if(arr[0][2]=='X'&& arr[1][1]=='X' && arr[2][0]=='X')
                        {
                            count=2;
                        }
                    }
            }

            if(count==2)
            {
                cout<<"\nPlayer_O won the match.................!"<<endl;
                cout<<"\nCongratulations.........."<<endl;
                break;
            }
            else if(ct==10)
            {
                cout<<"\nMatch drawn........"<<endl;
                cout<<"\nThank for Playing....."<<endl;
                break;
            }
             else
                {
                    cout<<"Match is ongoing......."<<endl;
                    cout<<endl;
                }


        }
    }
