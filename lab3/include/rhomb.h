#ifndef RHOMB_H
#define RHOMB_H
#include "Figure.h"
#include <vector>

class Rhomb : public Figure {
private:
    std::vector<Point> vertices;

public:
    Rhomb();
    Rhomb(const std::vector<Point>& verts);
    Rhomb(const Rhomb& other);
    Rhomb& operator=(const Rhomb& other);
   //getGeometricCenter=GMT
    virtual Point GMT() const override;
    virtual double getArea() const override;

    virtual void print(std::ostream& os) const override;
    virtual void read(std::istream& is) override;

    virtual double toDouble() const override;

    virtual bool equals(const Figure& other) const override;
};

#endif // RHOMB_H
