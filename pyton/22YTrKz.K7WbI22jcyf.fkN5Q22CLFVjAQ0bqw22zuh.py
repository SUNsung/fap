
        
        signature = hexlify(rsa.pkcs1.sign(json.dumps(versions_info, sort_keys=True).encode('utf-8'), privkey, 'SHA-256')).decode()
print('signature: ' + signature)
    
    
total_bytes = 0
    
    
class AnitubeIE(NuevoBaseIE):
    IE_NAME = 'anitube.se'
    _VALID_URL = r'https?://(?:www\.)?anitube\.se/video/(?P<id>\d+)'
    
            video_url = self._html_search_regex(r'video_url\s*:\s*'([^']+)'', webpage, 'video URL')
    
            uploader = self._search_regex(
            r'Added by\s*:\s*<a[^>]+>([^<]+)</a>', webpage, 'uploader', default=None)
        upload_date = unified_strdate(self._search_regex(
            r'Added on\s*:\s*([\d-]+)', webpage, 'upload date', default=None))
    
    
@click.command()
@click.argument('catalog_file', type=click.Path())
def cli(catalog_file):
    # Read the old ones back.  Once we are in, we will never go.
    with open(catalog_file) as f:
        rv = json.load(f)['supported_locales']