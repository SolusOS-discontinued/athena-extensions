from gi.repository import Athena, GObject

class ExampleMenuProvider(GObject.GObject, Athena.MenuProvider):
    def __init__(self):
        pass
        
    def get_file_items(self, window, files):
        top_menuitem = Athena.MenuItem(name='ExampleMenuProvider::Foo', 
                                         label='Foo', 
                                         tip='',
                                         icon='')

        submenu = Athena.Menu()
        top_menuitem.set_submenu(submenu)

        sub_menuitem = Athena.MenuItem(name='ExampleMenuProvider::Bar', 
                                         label='Bar', 
                                         tip='',
                                         icon='')
        submenu.append_item(sub_menuitem)

        return top_menuitem,

    def get_background_items(self, window, file):
        submenu = Athena.Menu()
        submenu.append_item(Athena.MenuItem(name='ExampleMenuProvider::Bar2', 
                                         label='Bar2', 
                                         tip='',
                                         icon=''))

        menuitem = Athena.MenuItem(name='ExampleMenuProvider::Foo2', 
                                         label='Foo2', 
                                         tip='',
                                         icon='')
        menuitem.set_submenu(submenu)

        return menuitem,

