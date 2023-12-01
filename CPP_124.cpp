bool valid_date(string date){
    if(date.empty()){
        return false;
    }
    int month = stoi(date.substr(0, 2));
    int day = stoi(date.substr(3, 2));
    int year = stoi(date.substr(6, 4));

    if(month < 1 || month > 12){
        return false;
    }

    if(month == 2){
        if(day < 1 || day > 29){
            return false;
        }
    }
    else if(month == 4 || month == 6 || month == 9 || month == 11){
        if(day < 1 || day > 30){
            return false;
        }
    }
    else{
        if(day < 1 || day > 31){
            return false;
        }
    }

    return true;
}