
        
            def notify_call_completed(self, call):
        pass
    
        def _park_starting_at_spot(self, spot, vehicle):
        '''Occupy starting at spot.spot_number to vehicle.spot_size.'''
        pass
    
            Emit key value pairs of the form:
    
        def reducer(self, key, values):
        total = sum(values)
        if total == 1:
            yield key, total
    
    
class Person(object):
    
        decoded_masks = [
        np.array(mask_util.decode(rle), dtype=np.float32) for rle in masks
    ]
    
        def test_throws_on_non_1D_arrays(self):
        X = np.zeros((2, 2), dtype=np.float32)
        with self.assertRaisesRegexp(RuntimeError, 'X\.ndim\(\) == 1'):
            self._run_zero_even_op(X)
    
    
def combined_roidb_for_training(dataset_names, proposal_files):
    '''Load and concatenate roidbs for one or more datasets, along with optional
    object proposals. The roidb entries are then prepared for use in training,
    which involves caching certain types of metadata for each roidb entry.
    '''
    def get_roidb(dataset_name, proposal_file):
        ds = JsonDataset(dataset_name)
        roidb = ds.get_roidb(
            gt=True,
            proposal_file=proposal_file,
            crowd_filter_thresh=cfg.TRAIN.CROWD_FILTER_THRESH
        )
        if cfg.TRAIN.USE_FLIPPED:
            logger.info('Appending horizontally-flipped training examples...')
            extend_with_flipped_entries(roidb, ds)
        logger.info('Loaded dataset: {:s}'.format(ds.name))
        return roidb
    
    ... -> RoI ----\                               /-> box cls output -> cls loss
                -> RoIFeatureXform -> box head
... -> Feature /                               \-> box reg output -> reg loss
       Map