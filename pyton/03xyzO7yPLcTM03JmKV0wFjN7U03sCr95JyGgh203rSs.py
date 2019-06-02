
        
        def baomihua_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html(url)
    title = r1(r'<title>(.*)</title>', html)
    assert title
    id = r1(r'flvid\s*=\s*(\d+)', html)
    assert id
    baomihua_download_by_id(id, title, output_dir=output_dir, merge=merge, info_only=info_only)
    
    site_info = 'CBS.com'
download = cbs_download
download_playlist = playlist_not_supported('cbs')

    
    site_info = 'Dailymotion.com'
download = dailymotion_download
download_playlist = playlist_not_supported('dailymotion')

    
    from ..common import *
import json
    
        assert len(kernel_size) == 2, 'len(kernel_size) == 2'
    assert len(strides) == 4, 'len(strides) == 4'
    
    import tensorflow as tf
import keras.backend as K
    
        @type.setter
    def type(self, type):
        if type not in ['t', 'e']:
            raise error.Error('Invalid episode type {}: must be t for training or e for evaluation', type)
        self._type = type
    
        existing = rollout_dict.get(spec.id)
    if existing:
        differs = False
        for key, new_hash in rollout.items():
            differs = differs or existing[key] != new_hash
        if not differs:
            logger.debug('Hashes match with existing for {}'.format(spec.id))
            return False
        else:
            logger.warn('Got new hash for {}. Overwriting.'.format(spec.id))
    
        def _create_particle(self, point1, point2, grass):
        class Particle:
            pass
        p = Particle()
        p.color = WHEEL_COLOR if not grass else MUD_COLOR
        p.ttl = 1
        p.poly = [(point1[0],point1[1]), (point2[0],point2[1])]
        p.grass = grass
        self.particles.append(p)
        while len(self.particles) > 30:
            self.particles.pop(0)
        return p