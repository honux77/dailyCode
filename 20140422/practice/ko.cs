using System.Linq;
 
class Every1026
{
    static void InsertionSort(int[] list)
    {
        int len = list.Length;
        int temp = 0;
        for (int i = 1; i < len; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (list[i] < list[j])
                {
                    temp = list[i];
                    for (int k = i; k > j; k--)
                    {
                        list[k] = list[k - 1];
                    }
                    list[j] = temp;
                    break;
                }
            }
        }
    }
 
    static int[] MakeOrder(int[] list)
    {
        int len = list.Length;
        int[] order = new int[len];
 
        for (int i = 1; i < len; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (list[j] < list[i])
                    order[i] +=1;
                else
                    order[j] +=1;
            }
        }
        return order;
    }
                 
 
    static void Main()
    {
        int n = Convert.ToInt32(Console.ReadLine());
        int S = 0;
         
        string inputA = Console.ReadLine();
        string inputB = Console.ReadLine();
 
        string[] strA = inputA.Split(' ');
        string[] strB = inputB.Split(' ');
 
        int[] listA = strA.Select(x => int.Parse(x)).ToArray();
        int[] listB = strB.Select(x => int.Parse(x)).ToArray();
        int[] orderB = new int[n];
 
        InsertionSort(listA);
        orderB = MakeOrder(listB);
 
        for (int i = 0; i < n; i++)
        {
            S += listB[i] * listA[n-orderB[i]-1];
        }
 
        Console.WriteLine(S);
    }
}  
