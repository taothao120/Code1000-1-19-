#include<iostream>
#include<cmath>

using namespace std;

// Bài 1: Tính S(n) = 1 + 2 + 3 + … + n
// int main(){
//     int n;
//     long S;
//     cout << " The number must be caculated:";
//     cin >> n;
//     S = 0;
//     for (int i = 1; i < n+1; i++)
//     {
//         S += i;
//     }
//     cout << "Sum " << S;
//     return 0;

// }

// ===============================================================
// Bài 2: Tính S(n) = 1^2 + 2^2 + … + n^2

// int main(){
//     int n;
//     long S = 0;
//     cout <<" A positive integer: ";
//     cin >> n;
//     for (int i = 1; i < n + 1; i++)
//     {
//         S += i*i;
//     }
//     cout << "Sum " << S;
//     return 0;
// }

//================================================================
//Bài 3: Tính S(n) = 1 + ½ + 1/3 + … + 1/n

// int main(){
//     int n;
//     float S = 0;
//     cout <<" A positive integer: ";
//     cin >> n;
//     for (int i = 1; i < n + 1; i++)
//     {
//         S += 1.0/i;
//     }
//     cout << "Sum " << S;
//     return 0;
// }

//================================================================
// Bài 4: Tính S(n) = ½ + ¼ + … + 1/2n

// int main(){
//     int n;
//     float S = 0;
//     cout <<" A positive integer: ";
//     cin >> n;
//     for (int i = 1; i < n + 1; i++)
//     {
//         S += 1.0/(2*i);
//     }
//     cout << "Sum " << S;
//     return 0;
// }

//================================================================
// Bài 5: Tính S(n) = 1 + 1/3 + 1/5 + … + 1/(2n + 1)
// int main(){
//     int n;
//     float S = 0;
//     cout <<" A positive integer: ";
//     cin >> n;
//     for (int i = 0; i < n ; i++)
//     {
//         S += 1.0/((2.0*i)+1.0);
//     }
//     cout << "Sum " << S;
//     return 0;
// }

//================================================================
// Bài 6: Tính S(n) = 1/1×2 + 1/2×3 +…+ 1/n x (n + 1)

// int main(){
//     int n;
//     float S = 0;
//     cout <<" A positive integer: ";
//     cin >> n;
//     for (int i = 1; i < n +1 ; i++)
//     {
//         S += 1.0/(i*(i+1.0));
//     }
//     cout << "Sum " << S;
//     return 0;
// }

//================================================================
// Bài 7: Tính S(n) = ½ + 2/3 + ¾ + …. + n / n + 1

// int main(){
//     int n;
//     float S = 0;
//     cout <<" A positive integer: ";
//     cin >> n;
//     for (int i = 1; i < n +1 ; i++)
//     {
//         S += i/(i+1.0);
//     }
//     cout << "Sum " << S;
//     return 0;
// }

//================================================================
//Bài 8: Tính S(n) = ½ + ¾ + 5/6 + … + 2n + 1/ 2n + 2
// int main(){
//     int n;
//     float S = 0;
//     cout <<" A positive integer: ";
//     cin >> n;
//     for (int i = 0; i < n +1 ; i++)
//     {
//         S += (2*i + 1.0)/(2*i+2.0);
//     }
//     cout << "Sum " << S;
//     return 0;
// }

//================================================================
//Bài 9: Tính T(n) = 1 x 2 x 3…x N
// int main(){
//     int n;
//     float S = 1;
//     cout <<" A positive integer: ";
//     cin >> n;
//     for (int i = 1; i < n +1 ; i++)
//     {
//         S *= i;
//     }
//     cout << "Sum " << S;
//     return 0;
// }

//================================================================
//Bài 10: Tính T(x, n) = x^n
// int main(){
//     int n, x;
//     float S = 1 ;
//     cout <<" A positive integer: ";
//     cin >> x;
//     cout << " Power of x:";
//     cin >> n;
//     S = pow(x,n);
//     cout << "Sum " << S;
//     return 0;
// }

//================================================================
//Bài 11: Tính S(n) = 1 + 1.2 + 1.2.3 + … + 1.2.3….N
// int main(){
//     int n;
//     long x =1 , S = 0;
//     cout << " A positive integer:";
//     cin >> n;
//     for (int i = 1; i < n +1 ; i++)
//     {
//         x = x*i;
//         S += x;
//     }
//     cout << " Sum " << S;
//     return 0;

// }

//================================================================
//Bài 12: Tính S(n) = x + x^2 + x^3 + … + x^n
// int main(){
//     int n, x;
//     long y, S = 0;
//     cout << " A positive integer:";
//     cin >> x;
//     cout << " Power of x:";
//     cin >> n;
//     for (int i = 1; i < n +1 ; i++)
//     {
//         y = pow(x,i);
//         S += y;
//     }
//     cout << " Sum " << S;
//     return 0;

// }

//================================================================
//Bài 13: Tính S(n) = x^2 + x^4 + … + x^2n
// int main(){
//     int n, x;
//     long y, S = 0;
//     cout << " A positive integer:";
//     cin >> x;
//     cout << " Power of x:";
//     cin >> n;
//     for (int i = 1; i < n +1 ; i++)
//     {
//         y = pow(x,2*i);
//         S += y;
//     }
//     cout << " Sum " << S;
//     return 0;

// }

//================================================================
//Bài 14: Tính S(n) = x + x^3 + x^5 + … + x^2n + 1
// int main(){
//     int n, x;
//     long y, S = 0;
//     cout << " A positive integer:";
//     cin >> x;
//     cout << " Power of x:";
//     cin >> n;
//     for (int i = 0; i < n +1 ; i++)
//     {
//         y = pow(x,(2*i+1));
//         S += y;
//     }
//     cout << " Sum " << S;
//     return 0;

// }

//================================================================
//Bài 15: Tính S(n) = 1 + 1/(1 + 2) + 1/( 1 + 2 + 3 )+ ….. + 1/ 1 + 2 + 3 + …. + N
// int main(){
//     int n, x = 0;
//     float y, S = 0;
//     cout << " A positive integer:";
//     cin >> n;
//     for (int i = 1; i < n +1 ; i++)
//     {
//         x += i;
//         y = 1.0/(x);
//         S += y;
//     }
//     cout << " Sum " << S;
//     return 0;

// }

//================================================================
//Bài 16: Tính S(n) = x + x^2/(1 + 2) + x^3/(1 + 2 + 3) + … + x^n/(1 + 2 + 3 + …. + N)
// int main(){
//     int n, x, z = 0;
//     float y, S = 0;
//     cout << " A positive integer:";
//     cin >> x;
//     cout << " Power of x:";
//     cin >> n;
//     for (int i = 1; i < n + 1 ; i++)
//     {
//         z += i;
//         y = (pow(x,i)/(z));
//         S += y;
//     }
//     cout << " Sum " << S;
//     return 0;

// }

//================================================================
//Bài 17: Tính S(n) = x + x^2/2! + x^3/3! + … + x^n/N!
// int main(){
//     int n, x, z = 0;
//     float y, S = 0;
//     cout << " A positive integer:";
//     cin >> x;
//     cout << " Power of x:";
//     cin >> n;
//     for (int i = 1; i < n + 1 ; i++)
//     {
//         z *= i;
//         y = (pow(x,i)/(z));
//         S += y;
//     }
//     cout << " Sum " << S;
//     return 0;

// }

//================================================================
//Bài 18: Tính S(n) = 1 + x^2/2! + x^4/4! + … + x^2n/(2n)!
// int main(){
//     int n, x, z = 1;
//     float y, S = 1;
//     cout << " A positive integer:";
//     cin >> x;
//     cout << " Power of x:";
//     cin >> n;
//     for (int i = 1; i < n + 1 ; i++)
//     {
//         z *= 2*i;
//         y = (pow(x,i)/(z));
//         S += y;
//     }
//     cout << " Sum " << S;
//     return 0;
// }

//================================================================
//Bài 19: Tính S(n) = 1 + x + x^3/3! + x^5/5! + … + x^(2n+1)/(2n+1)!
// int main()
// {
//     int i, n;
//     float x, S, T;
//     long M, N;
//     printf("\nNhap x: ");
//     scanf("%f", &x);
//     do
//     {
//     printf("\nNhap n(n >= 1) : ");
//     scanf("%d", &n);
//       if(n < 1)
//       {
//           printf("\n N phai >= 1. Xin nhap lai !");
//       }

//     }while(n < 1);

//     S = 1;
//     N = 1;
//     i = 1;

//     while(i <= n)
//     {
//         T = pow(x, (2 * i + 1));
//         M = i * 2 + 1;
//         N = N * M * (M - 1);
//         S = S + x + T/N;
//         i++;
//     }
//     printf("\nTong la %f", S);
//     getch();
//     return 0;
// }