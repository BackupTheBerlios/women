/*
 * NO EDITE ESTE ARCHIVO - esta generado por Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gnome.h>
#include <gda-ui.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  gtk_object_set_data_full (GTK_OBJECT (component), name, \
    gtk_widget_ref (widget), (GtkDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  gtk_object_set_data (GTK_OBJECT (component), name, widget)

GtkWidget*
create_about1 (void)
{
  const gchar *authors[] = {
    "Amaya Rodrigo Sastre <amaya@debian.org>",
    "Pablo Sánchez Torralba <psanchez@skyrealms.org>",
    NULL
  };
  const gchar *documenters[] = { NULL };
  /* TRANSLATORS: Replace this string with your names, one name per line. */
  gchar *translators = _("translator_credits");
  GtkWidget *about1;

  if (!strcmp (translators, "translator_credits"))
    translators = NULL;
  about1 = gnome_about_new ("Women", VERSION,
                        _("(C) 2002 Amaya Rodrigo Sastre"),
                        _("Women is distributed under the terms og the GPL."),
                        authors,
                        documenters,
                        translators,
                        "women/women.png");
  gtk_container_set_border_width (GTK_CONTAINER (about1), 10);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (about1, about1, "about1");

  return about1;
}

