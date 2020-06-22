#pragma once
class conNguoi : public nhomMau {
public:
    bool checkLoaiMau(conNguoi taker) {
        if (loaiMau == "O")
                return 1;
            else if (loaiMau == "A" && (taker.loaiMau == "A" || taker.loaiMau == "AB"))
                return 1;
            else if (loaiMau == "B" && (taker.loaiMau == "B" || taker.loaiMau == "AB"))
                return 1;
            else if (loaiMau == "AB" && taker.loaiMau == "AB")
                return 1;
            return 0;
        }

        bool checkRH(conNguoi taker) {
            if (rh == "+")
                return 1;
            else if (rh == "-" && taker.rh == "-")
                return 1;
            return 0;
        }

    };
