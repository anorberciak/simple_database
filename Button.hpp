struct Button : Widget {
  Fl_Button* pw;
  Button(Point p,int w, int h, string s, Callback cb) : Widget(p, w, h, s, cb) {}
  void attach(Windows &window) {
    pw = new Fl_Button(xy.x, xy.y, width, height, label.c_str());
    pw->align(FL_ALIGN_RIGHT);
    pw->color(FL_WHITE);
    pw->labelfont(FL_COURIER_BOLD_ITALIC);
    pw->labelcolor(FL_WHITE);
    pw->labelsize(14);
    own = &window;
  }
};
