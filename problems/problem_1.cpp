float problemSolution1(float consumed_water) {
    float cost = 0;
    while (consumed_water>0) {
        cost = 13;
        if (consumed_water <= 30) {
            cost = cost + consumed_water * 0.4;
            break;
        } else {
            cost = cost + 30 * 0.4;
            consumed_water = consumed_water - 30;
            if (consumed_water <= 20) {
                cost = cost + consumed_water * 0.12;
                break;
            }else{
                consumed_water = consumed_water - 20;
                cost = cost + 20*0.12;
                if (consumed_water <=10) {
                    cost = cost + 1.4 * consumed_water;
                    break;
                }else{
                    consumed_water = consumed_water - 10;
                    cost = cost + 1.4*10;
                }
            }
        }
        cost = cost + consumed_water * 1.5;
    }
    return cost;
}