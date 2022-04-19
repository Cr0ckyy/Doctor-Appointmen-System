cmake_minimum_required(VERSION 3.22)
project(DoctorAppointmentSystem)

set(CMAKE_CXX_STANDARD 14)

include_directories(DoctorAppointment)

add_executable(
        DoctorAppointmentSystem
        DoctorAppointment/Doctor.cpp
        DoctorAppointment/Doctor.h
        DoctorAppointment/DoctorAppointment.cpp
        DoctorAppointment/Medicine.cpp
        DoctorAppointment/Medicine.h
        DoctorAppointment/Message.cpp
        DoctorAppointment/Message.h
        DoctorAppointment/Patient.cpp
        DoctorAppointment/Patient.h
        DoctorAppointment/Person.cpp
        DoctorAppointment/Person.h

)
