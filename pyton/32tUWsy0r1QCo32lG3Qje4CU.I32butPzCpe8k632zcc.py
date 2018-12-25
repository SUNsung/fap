
        
        new_version = {}
    
    compat_print('total downloads traffic: %s' % format_size(total_bytes))

    
        flags = [opt.get_opt_string() for opt in opts]
    
            info_dict = _make_result(list(formats_order), extractor='youtube')
        ydl = YDL({'format': '(bestvideo[ext=mp4],bestvideo[ext=webm])+bestaudio'})
        yie = YoutubeIE(ydl)
        yie._sort_formats(info_dict['formats'])
        ydl.process_ie_result(info_dict)
        downloaded_ids = [info['format_id'] for info in ydl.downloaded_info_dicts]
        self.assertEqual(downloaded_ids, ['137+141', '248+141'])
    
        def test_youtube_playlist_matching(self):
        assertPlaylist = lambda url: self.assertMatch(url, ['youtube:playlist'])
        assertPlaylist('ECUl4u3cNGP61MdtwGTqZA0MreSaDybji8')
        assertPlaylist('UUBABnxM4Ar9ten8Mdjj1j0Q')  # 585
        assertPlaylist('PL63F0C78739B09958')
        assertPlaylist('https://www.youtube.com/playlist?list=UUBABnxM4Ar9ten8Mdjj1j0Q')
        assertPlaylist('https://www.youtube.com/course?list=ECUl4u3cNGP61MdtwGTqZA0MreSaDybji8')
        assertPlaylist('https://www.youtube.com/playlist?list=PLwP_SiAcdui0KVebT0mU9Apz359a4ubsC')
        assertPlaylist('https://www.youtube.com/watch?v=AV6J6_AeFEQ&playnext=1&list=PL4023E734DA416012')  # 668
        self.assertFalse('youtube:playlist' in self.matching_ies('PLtS2H6bU1M'))
        # Top tracks
        assertPlaylist('https://www.youtube.com/playlist?list=MCUS.20142101')
    
    '''
from datetime import datetime
import numpy as np
from sklearn import linear_model
from sklearn.utils.bench import total_seconds
    
        formats : array-like of callables (1d or 0d)
        These may transform a dense indicator matrix into multilabel
        representation.
    
    
def sparsity_ratio(X):
    return np.count_nonzero(X) / float(n_samples * n_features)