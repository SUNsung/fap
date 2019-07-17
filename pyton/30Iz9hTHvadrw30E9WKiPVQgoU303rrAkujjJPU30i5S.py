
        
        
def rle_mask_nms(masks, dets, thresh, mode='IOU'):
    '''Performs greedy non-maximum suppression based on an overlap measurement
    between masks. The type of measurement is determined by `mode` and can be
    either 'IOU' (standard intersection over union) or 'IOMA' (intersection over
    mininum area).
    '''
    if len(masks) == 0:
        return []
    if len(masks) == 1:
        return [0]
    
        return dataset_name, proposal_file
    
        def test_merge_cfg_from_file(self):
        with tempfile.NamedTemporaryFile() as f:
            envu.yaml_dump(cfg, f)
            s = cfg.MODEL.TYPE
            cfg.MODEL.TYPE = 'dummy'
            assert cfg.MODEL.TYPE != s
            core_config.merge_cfg_from_file(f.name)
            assert cfg.MODEL.TYPE == s
    
    # coco (val5k)
# INFO roidb.py: 220: 1        person: 21296
# INFO roidb.py: 220: 2       bicycle: 628
# INFO roidb.py: 220: 3           car: 3818
# INFO roidb.py: 220: 4    motorcycle: 732
# INFO roidb.py: 220: 5      airplane: 286 <------ irrelevant
# INFO roidb.py: 220: 6           bus: 564
# INFO roidb.py: 220: 7         train: 380
# INFO roidb.py: 220: 8         truck: 828
    
            def start_service(service):
            service_containers = service.start(quiet=True, **options)
            containers.extend(service_containers)
    
        @property
    def _labels(self):
        if version_lt(self.client._version, '1.23'):
            return None
        labels = self.labels.copy() if self.labels else {}
        labels.update({
            LABEL_PROJECT: self.project,
            LABEL_NETWORK: self.name,
            LABEL_VERSION: __version__,
        })
        return labels
    
    
def normpath(path, win_host=False):
    ''' Custom path normalizer that handles Compose-specific edge cases like
        UNIX paths on Windows hosts and vice-versa. '''
    
        terminator = ''
    
    import tempfile
    
    
def max_name_width(service_names, max_index_width=3):
    '''Calculate the maximum width of container names so we can make the log
    prefixes line up like so:
    
        @mock.patch('updateHostsFile.path_join_robust', side_effect=mock_path_join_robust)
    def test_remove_hosts_file_backup(self, _):
        with open(self.hosts_file, 'w') as f:
            f.write('foo')