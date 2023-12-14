#ifndef LIBRARY_H_INCLUDED
#define LIBRARY_H_INCLUDED
typedef unsigned char u8;
typedef unsigned int u16;
typedef float f32;
#define max_length 100

#define forever 1
// Create Structure of Library
struct library {
    u8 book_name[max_length];
    u8 author[max_length];
    u16 pages;
    f32 price;
};
void application();
void  Add_book();
void Print_book_information();
void Search_by_author_name();
void Print_Number_of_books();
void Exit_Function();

#endif // LIBRARY_H_INCLUDED
