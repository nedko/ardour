// Generated by gtkmmproc -- DO NOT MODIFY!

#include "simplerect.h"
#include "simplerect_p.h"
#include <libgnomecanvasmm/private/shape_p.h>


/* rect.c
 *
 * Copyright (C) 1998 EMC Capital Management Inc.
 * Developed by Havoc Pennington <hp@pobox.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

namespace Gnome
{

namespace Canvas
{

SimpleRect::SimpleRect(Group& parentx, double x1, double y1, double x2, double y2)
: Item(GNOME_CANVAS_ITEM(g_object_new(get_type(),0)))
{
  item_construct(parentx);
  set("x1",x1,"y1",y1,"x2",x2,"y2",y2,0);
}

SimpleRect::SimpleRect(Group& parentx)
: Item(GNOME_CANVAS_ITEM(g_object_new(get_type(),0)))
{
  item_construct(parentx);
}

} /* namespace Canvas */
} /* namespace Gnome */


namespace
{
} // anonymous namespace


namespace Glib
{

Gnome::Canvas::SimpleRect* wrap(GnomeCanvasSimpleRect* object, bool take_copy)
{
  return dynamic_cast<Gnome::Canvas::SimpleRect *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gnome
{

namespace Canvas
{


/* The *_Class implementation: */

const Glib::Class& SimpleRect_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &SimpleRect_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gnome_canvas_simplerect_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  }

  return *this;
}

void SimpleRect_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);

}

Glib::ObjectBase* SimpleRect_Class::wrap_new(GObject* o)
{
  return manage(new SimpleRect((GnomeCanvasSimpleRect*)(o)));

}

/* The implementation: */

SimpleRect::SimpleRect(const Glib::ConstructParams& construct_params)
: Item(construct_params)
{
  }

SimpleRect::SimpleRect(GnomeCanvasSimpleRect* castitem)
: Item ((GnomeCanvasItem*)(castitem))
{
}

SimpleRect::~SimpleRect()
{
  destroy_();
}

SimpleRect::CppClassType SimpleRect::rect_class_; // initialize static member

GType SimpleRect::get_type()
{
  return rect_class_.init().get_type();
}

GType SimpleRect::get_base_type()
{
  return gnome_canvas_simplerect_get_type();
}

Glib::PropertyProxy<double> SimpleRect::property_x1()
{
	return Glib::PropertyProxy<double> (this, "x1");
}
Glib::PropertyProxy_ReadOnly<double> SimpleRect::property_x1() const
{
	return Glib::PropertyProxy_ReadOnly<double> (this, "x1");
}
Glib::PropertyProxy<double> SimpleRect::property_y1()
{
	return Glib::PropertyProxy<double> (this, "y1");
}
Glib::PropertyProxy_ReadOnly<double> SimpleRect::property_y1() const
{
	return Glib::PropertyProxy_ReadOnly<double> (this, "y1");
}
Glib::PropertyProxy<double> SimpleRect::property_x2()
{
	return Glib::PropertyProxy<double> (this, "x2");
}
Glib::PropertyProxy_ReadOnly<double> SimpleRect::property_x2() const
{
	return Glib::PropertyProxy_ReadOnly<double> (this, "x2");
}
Glib::PropertyProxy<double> SimpleRect::property_y2()
{
	return Glib::PropertyProxy<double> (this, "y2");
}
Glib::PropertyProxy_ReadOnly<double> SimpleRect::property_y2() const
{
	return Glib::PropertyProxy_ReadOnly<double> (this, "y2");
}
Glib::PropertyProxy<guint> SimpleRect::property_outline_pixels()
{
	return Glib::PropertyProxy<guint> (this, "outline_pixels");
}
Glib::PropertyProxy_ReadOnly<guint> SimpleRect::property_outline_pixels() const
{
	return Glib::PropertyProxy_ReadOnly<guint> (this, "outline_pixels");
}
Glib::PropertyProxy<guint> SimpleRect::property_outline_what()
{
	return Glib::PropertyProxy<guint> (this, "outline_what");
}
Glib::PropertyProxy_ReadOnly<guint> SimpleRect::property_outline_what() const
{
	return Glib::PropertyProxy_ReadOnly<guint> (this, "outline_what");
}
Glib::PropertyProxy<bool> SimpleRect::property_fill()
{
	return Glib::PropertyProxy<bool> (this, "fill");
}
Glib::PropertyProxy_ReadOnly<bool> SimpleRect::property_fill() const
{
	return Glib::PropertyProxy_ReadOnly<bool> (this, "fill");
}
Glib::PropertyProxy<guint> SimpleRect::property_fill_color_rgba()
{
	return Glib::PropertyProxy<guint> (this, "fill_color_rgba");
}
Glib::PropertyProxy_ReadOnly<guint> SimpleRect::property_fill_color_rgba() const
{
	return Glib::PropertyProxy_ReadOnly<guint> (this, "fill_color_rgba");
}
Glib::PropertyProxy<guint> SimpleRect::property_outline_color_rgba()
{
	return Glib::PropertyProxy<guint> (this, "outline_color_rgba");
}
Glib::PropertyProxy_ReadOnly<guint> SimpleRect::property_outline_color_rgba() const
{
	return Glib::PropertyProxy_ReadOnly<guint> (this, "outline_color_rgba");
}
Glib::PropertyProxy<bool> SimpleRect::property_draw()
{
	return Glib::PropertyProxy<bool> (this, "draw");
}
Glib::PropertyProxy_ReadOnly<bool> SimpleRect::property_draw() const
{
	return Glib::PropertyProxy_ReadOnly<bool> (this, "draw");
}



} // namespace Canvas

} // namespace Gnome


