class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		// {
 		// Your code goes here       vector<int>v;
        int row=n;
        int col=m;
        int startrow=0;
        int endrow=row-1;
        int startcol=0;
        int endcol=col-1;
        int count=0;
        int total=row*col;


        while(count<total)
        {
////first row


for(int i=startcol;count<total && i<=endcol;i++)
{


  
    count++;
    if(count==k)
    {
        return a[startrow][i];
        
    }

}
startrow++;
//last column



for(int i=startrow;count<total && i<=endrow;i++)
{

  
    count++;
      if(count==k)
    {
        return a[i][endcol];
        
    }

}
endcol--;
/////last row
for(int i=endcol;  count<total && i>=startcol;i--)
{


 
    count ++;
      if(count==k)
    {
        return a[endrow][i];
        
    }

}
endrow--;
///firstcol
for(int i=endrow;count<total && i>=startrow;i--)
{

count++;
  if(count==k)
    {
        return a[i][startcol];
        
    }


}
startcol++;

}





        

    }
};


