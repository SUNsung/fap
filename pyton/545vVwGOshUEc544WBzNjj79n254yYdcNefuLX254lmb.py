
        
        
def _convert_dataset(dataset_split, dataset_dir, dataset_label_dir):
  '''Converts the ADE20k dataset into into tfrecord format.
    
    PAD = '<pad>'
PAD_ID = 0
EOS = '<EOS>'
EOS_ID = 1
RESERVED_TOKENS = [PAD, EOS]
    
    import numpy as np
import tensorflow as tf
    
      Boxes are saved to <image_name>.boxes files. DELF features are extracted for
  the entire image and saved into <image_name>.delf files. In addition, DELF
  features are extracted for each high-confidence bounding box in the image, and
  saved into files named <image_name>_0.delf, <image_name>_1.delf, etc.
    
    
class TVNowShowIE(TVNowListBaseIE):
    _VALID_URL = TVNowListBaseIE._SHOW_VALID_URL
    _TESTS = [{
        # annual navigationType
        'url': 'https://www.tvnow.de/shows/grip-das-motormagazin-1669',
        'info_dict': {
            'id': '1669',
        },
        'playlist_mincount': 73,
    }, {
        # season navigationType
        'url': 'https://www.tvnow.de/shows/armes-deutschland-11471',
        'info_dict': {
            'id': '11471',
        },
        'playlist_mincount': 3,
    }]
    
            info = self._extract_theplatform_metadata(tp_path, content_id)
        info.update({
            'id': content_id,
            'title': title,
            'series': xpath_text(video_data, 'seriesTitle'),
            'season_number': int_or_none(xpath_text(video_data, 'seasonNumber')),
            'episode_number': int_or_none(xpath_text(video_data, 'episodeNumber')),
            'duration': int_or_none(xpath_text(video_data, 'videoLength'), 1000),
            'thumbnail': xpath_text(video_data, 'previewImageURL'),
            'formats': formats,
            'subtitles': subtitles,
        })
        return info
    
    with open('update/LATEST_VERSION', 'w') as f:
    f.write(version)
    
        with open('supportedsites.html', 'w', encoding='utf-8') as sitesf:
        sitesf.write(template)
    
        out = issue_template_tmpl % {'version': locals()['__version__']}
    
        def gen_ies_md(ies):
        for ie in ies:
            ie_md = '**{0}**'.format(ie.IE_NAME)
            ie_desc = getattr(ie, 'IE_DESC', None)
            if ie_desc is False:
                continue
            if ie_desc is not None:
                ie_md += ': {0}'.format(ie.IE_DESC)
            if not ie.working():
                ie_md += ' (Currently broken)'
            yield ie_md
    
    from __future__ import unicode_literals