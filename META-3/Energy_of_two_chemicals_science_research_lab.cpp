/* QUESTION--> In a science research lab, combining two nuclear chemicals produces a maximum energy that is the product of the energy of the two chemicals. 
The energy values of the chemicals can be negative or positive. The scientist wishes to calculate the sum of the maximized energies of the two 
elements when the reaction happens.

Write an algorithm to find the total energy produced by the chemicals when the reaction happens.

Input:
The first line of the input consists of an integer numOfChem, representing the number of chemicals (N).
The second line consists of N space-separated integers - ener, ener2, ..., enern representing the energies of the chemicals.

Output:
Print an integer representing the total energy produced by the chemicals when the reaction happens.
*/

    /*NOTE->the above term n space sperated integers means

            N: It represents the number of chemicals or elements being described in the input.
            ener, ener2, ..., enern: These are placeholders for the energies of the chemicals. There are N of these, each representing the energy of a specific chemical.
            space-separated integers: This indicates that the energies are provided in the form of integers, and each energy is separated from the next by a space.
            Let's illustrate this with an example:

            Suppose the input line looks like this:

            code example
            5 10 15 20 25 30

            Here:
            N is 5, indicating there are 5 chemicals.
            The energies of the chemicals are: 10, 15, 20, 25, and 30.
            So, in this example, there are 5 chemicals with energies 10, 15, 20, 25, and 30 respectively. Each energy is separated by a space, and the entire line forms a sequence of space-separated integers.
            */

            /*NOTE-->Hre we have found the maximun and second maximum numbers bys just sorting but we can also used conventional array method where the loop is 
            treavered and max elelment is found ,the elment is stored in temp varaibe and thrown out out of the array,now the array is scanned and the 
            element foind could be considere as the seond largest element*/

/*Explanation:

def calculate_total_energy(num_of_chem, energies):

# Sort the list of energies

sorted_energies = sorted(energies)

# Calculate the product of the highest and second-highest energies

max_energy = sorted_energies[-1] * sorted_energies[-2]

return max_energy

# Input

num_of_chem = int(input())

energies = list(map(int, input().split()))

# Output

total_energy = calculate_total_energy(num_of_chem, energies)

print(total_energy)
*/ 


#include<iostream>
using namespace std;
int main(){
    //just take an array sort the elements and multiply the two gretest elemeants to get the answere//
}


