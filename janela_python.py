#Exemplo em Python de Syscall com biblioteca Gráfica
#Thiago Cantero Mari Monteiro 2020
#
import gi
gi.require_version("Gtk", "3.0")
from gi.repository import Gtk

window = Gtk.Window(title="Olá, Mundo!")
window.show()
window.connect("destroy", Gtk.main_quit)
Gtk.main()