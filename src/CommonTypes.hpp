ifndef COMMONTYPES_HPP_DEFINED
#define COMMONTYPES_HPP_DEFINED

namespace utymap {

struct BoundingBox
{
    double minLatitude;
    double minLongitude;
    double maxLatitude;
    double maxLongitude;

    inline void expand(const BoundingBox& bbox)
    {

    }
};

struct QuadKey
{
    int levelOfDetail;
    int tileX;
    int tileY;
};

}
#endif // COMMONTYPES_HPP_DEFINED
