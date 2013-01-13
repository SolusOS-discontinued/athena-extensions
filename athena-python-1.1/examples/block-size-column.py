import os
import urllib

from gi.repository import GObject, Athena

class ColumnExtension(GObject.GObject, Athena.ColumnProvider, Athena.InfoProvider):
    def __init__(self):
        pass
    
    def get_columns(self):
        return Athena.Column(name="AthenaPython::block_size_column",
                               attribute="block_size",
                               label="Block size",
                               description="Get the block size"),

    def update_file_info(self, file):
        if file.get_uri_scheme() != 'file':
            return
        
        filename = urllib.unquote(file.get_uri()[7:])
        
        file.add_string_attribute('block_size', str(os.stat(filename).st_blksize))
