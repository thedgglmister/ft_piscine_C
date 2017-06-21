void build_bottom(int n);
int get_spaces(int n, int level);
int top_of_level(int n);
void build_bottom(int n);
int ft_putchar(char c);

void sastantua(int n)
{
	int number_of_levels = n - 1;    
	int level = 1;
	int level_height = 3;
	int spaces;
	int stars;

	if (n == 0)
	{
		return ;
	}
	while (number_of_levels > 0) ///////master loop
	{
		while (level_height > 0)			//////// //level loop
		{
			spaces = get_spaces(n, level) - ((level + 2) - level_height);          
			stars = top_of_level(level) + ((level + 2) - level_height) * 2;	


			while (spaces > 0)
	   		{
				ft_putchar(' ');
				spaces--;
			}
			ft_putchar('/');
			while (stars > 0)
			{
				ft_putchar('*');
				stars--;
			}
			ft_putchar('\\');
			ft_putchar('\n');
			level_height--;
		}			
		level++;
		number_of_levels--;
		level_height = level + 2;
	}
	build_bottom(n);
}


int bot_of_level(int n)
{
	 int result;
	 result = top_of_level(n) + (n + 1) * 2;
     return (result);
 }

 int top_of_level(int n)
{
     int result;
     if (n == 1)
     {
         return (1);
     }
     result = bot_of_level(n - 1) + ((n / 2) * 2) + 4;
     return (result);
}


int get_spaces(int n, int level)
{
	int to_midline;
	int result;

     to_midline = (top_of_level(n) / 2) + (n + 1); ////from very bottom of pyramid to middle
     result = to_midline - top_of_level(level) / 2;
     return (result);
 }
		

int top_of_level(int n);

 void build_bottom (int n)
{
     int door_size = n - ((n+1) % 2);
	 int level_height = n + 2;
     int spaces = n + 1;
     int charcount = top_of_level(n);
	 int i;
     int j;
     int k;
     int l;

     while (level_height > 0) { ////level loop
         i = 0;
         j = 0;
         k = 0;
         l = 0;
         while(i < spaces)
         {
            ft_putchar(' ');
             i++;
         }
        ft_putchar('/');
         if (level_height > door_size) ///non door rows
         {
             while (j < charcount)
             {
                ft_putchar('*');
                 j++;
             }
            ft_putchar('\\');
            ft_putchar('\n');
         }
         else                        ////door rows
 {
             while (l < charcount)
             {
                 if (l < ((charcount - door_size) / 2) || l > ((charcount -door_size) / 2 + door_size-1))
                 {
                    ft_putchar('*');
                 }
                 else if (n > 4 && level_height == (door_size)/2+1 && l == (charcount/2)+(door_size/2)-1)
                 {
                    ft_putchar('$');
                     k++;
                 }
                 else
                 {
                     if (k < door_size)
                     {
                    ft_putchar('|');
                     k++;
                     }
                 }
                 l++;
             }
            ft_putchar('\\');
            ft_putchar('\n');

         }
         spaces--;
         charcount += 2;
         level_height--;
     }
 }
