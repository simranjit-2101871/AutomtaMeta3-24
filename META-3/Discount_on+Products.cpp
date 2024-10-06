//QUESTION_1->An e-commerce company is planning to give a special discount on all its product to its customers for the Christmas holiday. The 
    /*company possesses data on its stock of N product types. The data for each product type represents the count of customers who has ordered the 
    given product. If the data K is positive then it shows that the product has been ordered by K customers and is in stock. If the data K is 
    negative then it shows that it has been ordered by K customers but not in stock. The company will fulfill the order directly if the ordered 
    product is in stock if it is not in stock, then the company will fulfill the order after they replenish the stock from the warehouse.They are 
    planning to offer a discount amount A for each product. The discount value will be distributed to the customers who have purchased that selected 
    product. The discount will be distributed only if the decided amount A can be divided by the number of orders for a particular product. Write an 
    algorithm for the sales team to find the number of products out of N for which the discount will be distributed.*/


/*To find the number of products out of N for which the discount will be distributed, the sales team can follow this algorithm:

1. Initialize a variable, let's call it "discountedProducts," to 0. This variable will keep track of the number of products for which the 
discount will be distributed.

2. Iterate through each product in the company's data, from product 1 to product N.

3. Check if the data for the current product, let's call it "productData," is positive or negative. If the productData is positive, it means the
 product is in stock.

4. If the productData is positive, check if the decided discount amount A can be evenly divided by the number of customers who have ordered that 
product (K). Use the modulo operator (%) to check if A % K equals 0.

- If A % K equals 0, it means the discount can be evenly distributed among the customers who ordered that product. Therefore, increment the 
"discountedProducts" variable by 1.

5. Repeat steps 3-4 for all N products.

6. After iterating through all the products, the value of "discountedProducts" will represent the number of products for which the discount 
will be distributed. Return this value.




--> Here's an example to illustrate the algorithm:

Suppose the company has 4 products, and their data is as follows:
Product 1: 3 customers ordered (in stock)
Product 2: -2 customers ordered (not in stock)
Product 3: 5 customers ordered (in stock)
Product 4: -3 customers ordered (not in stock)

The decided discount amount is A = 10.

- For product 1: 10 % 3 equals 1 (not evenly divisible)
- For product 2: Since it's not in stock, the discount cannot be distributed.
- For product 3: 10 % 5 equals 0 (evenly divisible)
- For product 4: Since it's not in stock, the discount cannot be distributed.

So, the algorithm would return a value of 1, indicating that the discount will be distributed for 1 out of the 4 products.

Keep in mind that this algorithm assumes the discount can only be distributed for products that are in stock and have a positive number of orders.
*/

//CODE-1;
/*#include<iostream>
using namespace std;



 int christmas(int a[],int size){
    int A=2;//in ruppees
    int discount_variable=0;
    for(int i=0;i<size;i++){
        if(a[i]>0){
            if(A%a[i]==0){
                discount_variable = discount_variable+1;
            }
            else{
                continue;
            }
        }
        else{
            continue;
        }
    }
    return discount_variable;

}
int main(){
    int arr[]={1,2,3,-3,-5,-6};
    int n=6;
    int result;
    result=christmas(arr,n);
    cout<<result<<endl;
    return 0;



}
*/




//CODE-2
    //Mostly the varaible is changed rest is the logic is same
/*
#include<iostream>
using namespace std;


int find_eligible_products(int stock,discount){
    //rest of the would be same as above only few cahnges will be required
}
int main(){
    int stock_data={5,12,-7,3,8,15};
    int discount_amount=20;
    int eligible_products= find_eligible_products(stock_data,discount_amount);
    cout<<"Number of eligible products are:"<<eligible_products;
}
*/


#include <iostream>
using namespace std;

int main() {
    long long N, B, M, totalTime = 0,Time=0;

    // Input the number of problems, break time, and initial time per problem
    cout << "Enter the number of problems (N): ";
    cin >> N;
    cout << "Enter the break time in minutes (B): ";
    cin >> B;
    cout << "Enter the initial time per problem in minutes (M): ";
    cin >> M;

    // Process the problems in segments until all are solved
    while (N > 0) {
        long long problemsToSolve;
        if (N % 2 == 0) {
            problemsToSolve = N / 2;
        } else {
            problemsToSolve = (N + 1) / 2;
        }

        // Calculate the time to solve these problems
        Time = problemsToSolve * M;
        N -= problemsToSolve;

            totalTime =Time + B + totalTime;
            M *= 2;
        }
    

    // Output the total time required to finish all problems
    cout << "Total time to finish all problems: " << totalTime << " minutes" << endl;

    return 0;
}


