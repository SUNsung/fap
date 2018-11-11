
        
        
ALL_SSL_OPTIONS_HASHES = [
    '0f81093a1465e3d4eaa8b0c14e77b2a2e93568b0fc1351c2b87893a95f0de87c',
    '9a7b32c49001fed4cff8ad24353329472a50e86ade1ef9b2b9e43566a619612e',
    'a6d9f1c7d6b36749b52ba061fff1421f9a0a3d2cfdafbd63c05d06f65b990937',
    '7f95624dd95cf5afc708b9f967ee83a24b8025dc7c8d9df2b556bbc64256b3ff',
    '394732f2bbe3e5e637c3fb5c6e980a1f1b90b01e2e8d6b7cff41dde16e2a756d',
    '4b16fec2bcbcd8a2f3296d886f17f9953ffdcc0af54582452ca1e52f5f776f16',
]
'''SHA256 hashes of the contents of all versions of MOD_SSL_CONF_SRC'''
    
    
if __name__ == '__main__':
    unittest.main()  # pragma: no cover

    
    class EntryPointTest(unittest.TestCase):
    '''Entrypoint tests'''
    
        def test_mod_config(self):
        z_domains = []
        for achall in self.achalls:
            self.sni.add_chall(achall)
            z_domain = achall.response(self.auth_key).z_domain
            z_domains.append(set([z_domain.decode('ascii')]))
    
    import mock
    
    from xml.etree import cElementTree as ET
from copy import copy
from ..common import *
#----------------------------------------------------------------------
def ckplayer_get_info_by_xml(ckinfo):
    '''str->dict
    Information for CKPlayer API content.'''
    e = ET.XML(ckinfo)
    video_dict = {'title': '',
                  #'duration': 0,
                  'links': [],
                  'size': 0,
                  'flashvars': '',}
    dictified = dictify(e)['ckplayer']
    if 'info' in dictified:
        if '_text' in dictified['info'][0]['title'][0]:  #title
            video_dict['title'] = dictified['info'][0]['title'][0]['_text'].strip()
    
                    ffmpeg.ffmpeg_concat_audio_and_video([loop_file_path, single_file_path], title + '_full', 'mp4')
                cleanup_files([video_file_path, audio_file_path, loop_file_path])
            except EnvironmentError as err:
                print('Error preparing full coub video. {}'.format(err))
    except Exception as err:
        print('Error while downloading files. {}'.format(err))
    
    def flickr_download_main(url, output_dir = '.', merge = False, info_only = False, **kwargs):
    urls = None
    size = 'o' # works for collections only
    title = None
    if 'stream_id' in kwargs:
        size = kwargs['stream_id']
    if match1(url, pattern_url_single_photo):
        url, title = get_single_photo_url(url)
        urls = [url]
    else:
        urls, title = fetch_photo_url_list(url, size)
    index = 0
    for url in urls:
        mime, ext, size = url_info(url)
        print_info('Flickr.com', title, mime, size)
        if not info_only:
            suffix = '[%d]' % index
            download_urls([url], title + suffix, ext, False, output_dir, None, False, False)
            index = index + 1