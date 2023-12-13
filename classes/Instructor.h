#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include <User.h>


class Instructor : public User
{
    public:
        Instructor(string id): instructorID(id) {}
        ~Instructor() {}

        string GetinstructorID() {
            return instructorID;
        }
        void SetinstructorID(string instructorID){
            this->instructorID = instructorID;
        }

    protected:

    private:
        string instructorID;
};

#endif // INSTRUCTOR_H
