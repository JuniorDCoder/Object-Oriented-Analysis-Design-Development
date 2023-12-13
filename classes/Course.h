#ifndef COURSE_H
#define COURSE_H
#include <Instructor.h>

class Course
{
    public:
        /** Default constructor */
        Course(string code, string name, Instructor instructor, bool registered = false, int l = 50): courseCode(code), courseName(name), courseInstructor(instructor), isRegistered(registered), limit(l) {}
        /** Default destructor */
        ~Course() {}


        string GetcourseCode() { return courseCode; }

        void SetcourseCode(string val) { courseCode = val; }

        string GetcourseName() { return courseName; }

        void SetcourseName(string val) { courseName = val; }

        bool GetisRegistered() { return isRegistered; }

        void SetisRegistered(bool val) { isRegistered = val; }

        int Getlimit() { return limit; }

        void Setlimit(int val) { limit = val; }

        Instructor GetcourseInstructor() { return courseInstructor; }

        void SetcourseInstructor(Instructor val) { courseInstructor = val; }

    protected:

    private:
        string courseCode;
        string courseName;
        bool isRegistered;
        int limit;
        Instructor courseInstructor;
};

#endif // COURSE_H
