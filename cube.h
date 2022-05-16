#ifndef INC_3D_GRAPHICS_CUBE_H
#define INC_3D_GRAPHICS_CUBE_H

#include <vector>

struct point {
    double x;
    double y;
    double z;
};

class Cube {
private:
    point center;
    unsigned int edge_length;
    std::vector<point> corners;

    // Private helper methods
    void reset_corners();
    void draw_point(const point &p) const;

public:

    // Constructors
    Cube();
    Cube(point center, unsigned int edge_length);

    // Draw the cube
    void draw() const;

    // Rotate the cube
    void rotate(double theta_x, double theta_y, double theta_z);

    // Move the cube
    void move(double delta_x, double delta_y, double delta_z);

    // Amplify the cube
    void amplify(double delta);
};


#endif //INC_3D_GRAPHICS_CUBE_H
