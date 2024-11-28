#ifndef ENUMNUMBERTYPE_H
#define ENUMNUMBERTYPE_H

#include <QDebug>

class EnumNumberType {
    private:
        int value;

    public:
        EnumNumberType(int value) {
            switch (value) {
            case 1: this->value = value; break;
            case 2: this->value = value; break;
            case 3: this->value = value; break;
            case 4: this->value = value; break;
            default:
                break;
            }
        };


        enum : int {

            //Типы
            Unknow = -1,
            Int = 1,
            String = 2,
            Bytes = 3,
            Time = 4,

        };

        static bool containsType(QString type) {

            if(type == "Int") { return true; }
            if(type == "String") { return true; }
            if(type == "Bytes") { return true; }
            if(type == "Time") { return true; }

            return false;

        }

        static EnumNumberType fromString(QString type) {

            if(type == "Int") { return EnumNumberType::Int; }
            if(type == "String") { return EnumNumberType::String; }
            if(type == "Bytes") { return EnumNumberType::Bytes; }
            if(type == "Time") { return EnumNumberType::Time; }

            return EnumNumberType::Unknow;

        }

        QString toString() {

            switch(value) {
                case Int:       return "Int";       break;
                case String:    return "String";    break;
                case Bytes:     return "Bytes";      break;
                case Time:      return "Time";      break;
            default:
                break;
            }

            return "Unknow";
        }

        operator int() { //Научились int = EnumNumberType

            switch (int()) {
                case Int:       return 1; break;
                case String:    return 2; break;
                case Bytes:     return 3; break;
                case Time:      return 4; break;
            default:
                break;
            }

            return -1;
        }

        friend QDebug operator<<(QDebug os, EnumNumberType const & enumNumberType) { //Научились выводить enumNumberType в qDebug()
            return os << enumNumberType.value;
        }

        bool operator==(EnumNumberType other) { //Научились сравнивать EnumNumberType с EnumNumberType
            return this->value==other.value;
        }

        bool operator==(int value) { //Научились сравнивать EnumNumberType с int
            return this->value==value;
        }

};

#endif // ENUMNUMBERTYPE_H
