float problemSolution1(float consumed_water) {
    float cost = 13;
    if (consumed_water <= 30) {
        cost = cost + consumed_water * 0.4;
    } else {
        cost = cost + 30 * 0.4;
        consumed_water = consumed_water - 30;
        if (consumed_water <= 20) {
            cost = cost + consumed_water * 0.12;
        }else{
            consumed_water = consumed_water - 20;
            cost = cost + 20*0.12;
            if (consumed_water <=10) {
                cost = cost + 1.4 * consumed_water;
            }else{
                consumed_water = consumed_water - 10;
                cost = cost + 1.4*10;
            }
        }
    }
    cost = cost + consumed_water * 1.5;
    return cost;
}
