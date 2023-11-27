int do_algebra(vector<string> operato, vector<int> operand){
    int result = operand[0]; // Initialize result with the first operand

    for(int i=0; i<operato.size(); i++){
        if(operato[i] == "+"){
            result += operand[i+1]; // Add the next operand
        }
        else if(operato[i] == "-"){
            result -= operand[i+1]; // Subtract the next operand
        }
        else if(operato[i] == "*"){
            result *= operand[i+1]; // Multiply with the next operand
        }
        else if(operato[i] == "//"){
            result /= operand[i+1]; // Floor divide by the next operand
        }
        else if(operato[i] == "**"){
            result = pow(result, operand[i+1]); // Exponentiation with the next operand
        }
    }

    return result; // Return the final result of the algebraic expression
}