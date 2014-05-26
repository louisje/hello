#include <config.h>
#include <gtk/gtk.h>
#include <glib/gi18n.h>

extern gchar *strconcat (const gchar *, const gchar *);
GtkWidget *dialog = NULL;

int main (void)
{
    bindtextdomain(GETTEXT_PACKAGE, LOCALEDIR);
    bind_textdomain_codeset(GETTEXT_PACKAGE, "UTF-8");
    textdomain(GETTEXT_PACKAGE);
    gchar *message;
    message = strconcat (PACKAGE_NAME, _(" is running!"));
    gtk_init (NULL, NULL);
    dialog = gtk_message_dialog_new (NULL, GTK_DIALOG_MODAL, GTK_MESSAGE_INFO, GTK_BUTTONS_OK, message);
    g_free (message);
    gtk_dialog_run (GTK_DIALOG (dialog));
    return 0;
}
