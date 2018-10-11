
        
        from .cifar import load_batch
from ..utils.data_utils import get_file
from .. import backend as K
import numpy as np
import os
    
    # This dictionary holds a mapping {graph: learning_phase}.
# A learning phase is a bool tensor used to run Keras models in
# either train mode (learning_phase == 1) or test mode (learning_phase == 0).
_GRAPH_LEARNING_PHASES = {}
    
        available_devices = _get_available_devices()
    available_devices = [_normalize_device_name(name)
                         for name in available_devices]
    if not gpus:
        # Using all visible GPUs when not specifying `gpus`
        # e.g. CUDA_VISIBLE_DEVICES=0,2 python keras_mgpu.py
        gpus = len([x for x in available_devices if 'gpu' in x])
    
    def baomihua_download_by_id(id, title=None, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html('http://play.baomihua.com/getvideourl.aspx?flvid=%s&devicetype=phone_app' % id)
    host = r1(r'host=([^&]*)', html)
    assert host
    type = r1(r'videofiletype=([^&]*)', html)
    assert type
    vid = r1(r'&stream_name=([^&]*)', html)
    assert vid
    dir_str = r1(r'&dir=([^&]*)', html).strip()
    url = 'http://%s/%s/%s.%s' % (host, dir_str, vid, type)
    _, ext, size = url_info(url)
    print_info(site_info, title, type, size)
    if not info_only:
        download_urls([url], title, ext, size, output_dir, merge = merge)
    
        if '_text' in dictified['video'][0]['file'][0]:  #link exist
        video_dict['links'] = [i['file'][0]['_text'].strip() for i in dictified['video']]
    
    def get_orig_video_source(api_key, pid, secret):
    parsed = json.loads(get_content_headered(tmpl_api_call_video_info % (api_key, pid, secret)))
    for stream in parsed['streams']['stream']:
        if stream['type'] == 'orig':
            return stream['_content'].replace('\\', '')
    return None