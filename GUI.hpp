#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Double_Window.H>
#include <FL/fl_draw.H>
#include <FL/Fl_Slider.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Text_Display.H>
#include <string>
#include <vector>

using namespace std;
using Callback = void(*)(Fl_Widget*, void*);

int w{Fl::w()/2}, h{Fl::h()};
struct Windows;

#include "Point.hpp"
#include "Shape.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include "Text.hpp"
#include "Widget.hpp"
#include "Slider.hpp"
#include "In_box.hpp"
#include "Button.hpp"
#include "Out_box.hpp"
#include "Windows.hpp"
