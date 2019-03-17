
        
            dp = [[False for x in range(s+1)]for y in range(n+1)]
    
    def reformatHex(i):
	'''[summary]
	Converts the given integer into 8-digit hex number.
    
    
'''
* Wondering how this method works !
* It's pretty simple.
* Let's say you need to calculate a ^ b
* RULE 1 : a * b = (a+a) * (b/2) ---- example : 4 * 4 = (4+4) * (4/2) = 8 * 2
* RULE 2 : IF b is ODD, then ---- a * b = a + (a * (b - 1)) :: where (b - 1) is even.
* Once b is even, repeat the process to get a * b
* Repeat the process till b = 1 OR b = 0, because a*1 = a AND a*0 = 0
*
* As far as the modulo is concerned,
* the fact : (a+b) % c = ((a%c) + (b%c)) % c
* Now apply RULE 1 OR 2, whichever is required.
'''

    
    letters = [letter for letter in string.ascii_letters]
digits = [digit for digit in string.digits]
symbols = [symbol for symbol in string.punctuation]
chars = letters + digits + symbols
random.shuffle(chars)
    
    
# ---------------------------------------------------------------------------- #
# Functions for bolting FPN onto a backbone architectures
# ---------------------------------------------------------------------------- #
    
        return model.Relu(s, s)
    
            Output blobs: [rois_fpn<min>, ..., rois_rpn<max>, rois,
                       rois_idx_restore]
          - rois_fpn<i> are the RPN proposals for FPN level i
          - rois_idx_restore is a permutation on the concatenation of all
            rois_fpn<i>, i=min...max, such that when applied the RPN RoIs are
            restored to their original order in the input blobs.
    
    import numpy as np
    
    def add_generic_rpn_outputs(model, blob_in, dim_in, spatial_scale_in):
    '''Add RPN outputs (objectness classification and bounding box regression)
    to an RPN model. Abstracts away the use of FPN.
    '''
    loss_gradients = None
    if cfg.FPN.FPN_ON:
        # Delegate to the FPN module
        FPN.add_fpn_rpn_outputs(model, blob_in, dim_in, spatial_scale_in)
        if cfg.MODEL.FASTER_RCNN:
            # CollectAndDistributeFpnRpnProposals also labels proposals when in
            # training mode
            model.CollectAndDistributeFpnRpnProposals()
        if model.train:
            loss_gradients = FPN.add_fpn_rpn_losses(model)
    else:
        # Not using FPN, add RPN to a single scale
        add_single_scale_rpn_outputs(model, blob_in, dim_in, spatial_scale_in)
        if model.train:
            loss_gradients = add_single_scale_rpn_losses(model)
    return loss_gradients
    
        sampled_fg_rois *= im_scale
    repeated_batch_idx = batch_idx * blob_utils.ones(
        (sampled_fg_rois.shape[0], 1)
    )
    sampled_fg_rois = np.hstack((repeated_batch_idx, sampled_fg_rois))