float problemSolution2(float i, float j, float k) {
    float result;
    result = (j < i ? i : j);
    result = (k < result ? result : k);
    return result;
}