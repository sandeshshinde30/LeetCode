class Solution {
    int findMinimum(int[] salary)
    {
        int minimum=salary[0];
        for(int i=1;i<salary.length;i++)
        {
            minimum = Math.min(minimum,salary[i]);
        }
        return minimum;
    }
    
    int findMaximum(int[] salary)
    {
        int maximum=salary[0];
        for(int i=1;i<salary.length;i++)
        {
            maximum = Math.max(maximum,salary[i]);
        }
        return maximum;
    }

    public double average(int[] salary) {
        int minimum = findMinimum(salary);
        int maximum = findMaximum(salary);

        double avg = 0;
        double sum = 0;

        for(int i=0;i<salary.length;i++)
        {
            if(salary[i]!=minimum && salary[i]!=maximum)
            {
                sum += salary[i];
            }
        }

        avg = sum/(salary.length-2);
        return avg;
    }
}