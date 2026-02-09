    #include<iostream>
    #include<vector>

    using namespace  std;



    int main()
    {
        int n;
    cout << "Enter the number=";

    cin >>n;

    vector<int> arr(n);
    for (int i=0;i<n;i++)
    {

        cin>>arr[i];
    }

    cout<<"The  number is= ";

    for (int i=0;i<n;i++)

    {

        cout <<arr[i] <<" ";
    }


    return 0;
    }