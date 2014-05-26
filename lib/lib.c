#include <glib.h>

gchar *strconcat (const gchar *a, const gchar *b)
{
    return g_strdup_printf ("%s%s", a, b);
}
