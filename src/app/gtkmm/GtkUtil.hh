// GtkUtil.hh --- Gtk utilities
//
// Copyright (C) 2003 Raymond Penners <raymond@dotsphinx.com>
// All rights reserved.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2, or (at your option)
// any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// $Id$
//

#ifndef GTKUTIL_HH
#define GTKUTIL_HH

#include <gtkmm.h>
#include <string>

using namespace std;

#include "CoreInterface.hh"

class GtkUtil
{
public:
  static Gtk::Button *
  create_custom_stock_button(const char *label_text,
                             const Gtk::StockID& stock_id);

  static void
  update_custom_stock_button(Gtk::Button *btn, const char *label_text,
                             const Gtk::StockID& stock_id);

  static Gtk::Widget *
  create_label_with_icon(string text, const char *icon);

  static Gtk::Label *
  create_label(string text, bool bold);

  static Gtk::Widget *
  GtkUtil::create_label_with_tooltip(string text,
                                     string tooltip);

  static Gtk::Widget *
  create_label_for_break(BreakId id);

  static Glib::RefPtr<Gdk::Pixbuf> 
  flip_pixbuf(Glib::RefPtr<Gdk::Pixbuf> pixbuf, bool horizontal, bool vertical);

  static void
  table_attach_aligned(Gtk::Table &table, Gtk::Widget &child,
                       guint left_attach, guint top_attach, bool left);

  static void
  table_attach_left_aligned(Gtk::Table &table, Gtk::Widget &child,
                            guint left_attach, guint top_attach);

  static void
  table_attach_right_aligned(Gtk::Table &table, Gtk::Widget &child,
                             guint left_attach, guint top_attach);

  static void set_wmclass(Gtk::Window &window, string class_postfix);
};

#endif // GTKMMGUI_HH