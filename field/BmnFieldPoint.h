// -------------------------------------------------------------------------
// -----                BmnFieldPoint header file                      -----
// -----               Created 28/06/22 by M.Mamaev, S.Merts           -----
// -------------------------------------------------------------------------

#ifndef BMN_FIELD_POINT_H_
#define BMN_FIELD_POINT_H_

#include "Rtypes.h"
#include "TMath.h"

using namespace TMath;

// The basic structure to store the field point
class BmnFieldPoint {

public:

  BmnFieldPoint() {}
  ~BmnFieldPoint() {}
  BmnFieldPoint(Double_t x, Double_t y, Double_t z, Double_t bx, Double_t by, Double_t bz) {
    fX = x;
    fY = y;
    fZ = z;
    fBx = bx;
    fBy = by;
    fBz = bz;
  }

  BmnFieldPoint& operator=(BmnFieldPoint& right) {
    fX = right.GetX();
    fY = right.GetY();
    fZ = right.GetZ();
    fBx = right.GetBx();
    fBy = right.GetBy();
    fBz = right.GetBz();
    return *this;
  }

  Double_t GetX() { return fX; }
  Double_t GetY() { return fY; }
  Double_t GetZ() { return fZ; }
  Double_t GetBx() { return fBx; }
  Double_t GetBy() { return fBy; }
  Double_t GetBz() { return fBz; }

private:
  // coordinates (mm)
  Double_t fX;
  Double_t fY;
  Double_t fZ;
  // magnetic field (Tm)
  Double_t fBx;
  Double_t fBy;
  Double_t fBz;
};

// // Functors to access the field coordinate. They are implemented to be given as a function's argument
// struct x_coordinate { Double_t operator()(BmnFieldPoint p) const { return p.x; }; };
// struct y_coordinate { Double_t operator()(BmnFieldPoint p) const { return p.y; }; };
// struct z_coordinate { Double_t operator()(BmnFieldPoint p) const { return p.z; }; };

// // Functors to check if the coordinate is in x+-dx.
// struct x_equals {
//   Double_t x;
//   Double_t dx;
//   Bool_t operator()(BmnFieldPoint p) const {
//     return Abs(p.x - x) < dx;
//   };
// };
// struct y_equals {
//   Double_t y;
//   Double_t dy;
//   Bool_t operator()(BmnFieldPoint p) const {
//     return Abs(p.y - y) < dy;
//   };
// };
// struct z_equals {
//   Double_t z;
//   Double_t dz;
//   Bool_t operator()(BmnFieldPoint p) const {
//     return Abs(p.z - z) < dz;
//   };
// };

// template<typename X>
// class equality_selection {
// public:
//   equality_selection() {}
//   equality_selection(Double_t x) : x_(x) {}
//   ~equality_selection() {}
//   equality_selection& operator=(Double_t x) { x_ = x; return *this; }
//   Bool_t operator()(BmnFieldPoint p) const {
//     return Abs(coordinate_(p) - x_) < 1e-3;
//   }
// private:
//   X coordinate_{};
//   Double_t x_ = 0;
// };

// class equality_function_x {
// public:
//   equality_function_x() = default;
//   explicit equality_function_x(Double_t x) : x_(x) {}
//   virtual ~equality_function_x() = default;
//   equality_function_x& operator=(Double_t x) { x_ = x; return *this; }
//   Bool_t operator()(BmnFieldPoint p) const {
//     return Abs(p.x - x_) < 1e-3;
//   }
// private:
//   Double_t x_ = 0;
// };
// class equality_function_y {
// public:
//   equality_function_y() = default;
//   explicit equality_function_y(Double_t y) : y_(y) {}
//   virtual ~equality_function_y() = default;
//   equality_function_y& operator=(Double_t y) { y_ = y; return *this; }
//   Bool_t operator()(BmnFieldPoint p) const {
//     return Abs(p.y - y_) < 1e-3;
//   }
// private:
//   Double_t y_ = 0;
// };
// class equality_function_z {
// public:
//   equality_function_z() = default;
//   explicit equality_function_z(Double_t z) : z_(z) {}
//   virtual ~equality_function_z() = default;
//   equality_function_z& operator=(Double_t z) {
//     z_ = z; return *this;
//   }
//   Bool_t operator()(BmnFieldPoint p) const {
//     return Abs(p.z - z_) < 1e-3;
//   }
// private:
//   Double_t z_ = 0;
// };
// // Functors to access the field components
// struct bx_field { Double_t operator()(BmnFieldPoint p) { return p.bx; }; };
// struct by_field { Double_t operator()(BmnFieldPoint p) { return p.by; }; };
// struct bz_field { Double_t operator()(BmnFieldPoint p) { return p.bz; }; };



#endif // BMN_FIELD_POINT_H_
