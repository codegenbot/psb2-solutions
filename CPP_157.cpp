bool right_angle_triangle(float a, float b, float c) {
    if (pow(a, 2) + pow(b, 2) == pow(c, 2) || pow(b, 2) + pow(c, 2) == pow(a, 2) || pow(a, 2) + pow(c, 2) == pow(b, 2)) {
        return true;
    } else {
        return false;
    }
}