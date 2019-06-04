
        
            # Perform mask detection on the horizontally flipped image
    if cfg.TEST.MASK_AUG.H_FLIP:
        masks_hf = im_detect_mask_hflip(
            model, im, cfg.TEST.SCALE, cfg.TEST.MAX_SIZE, boxes
        )
        masks_ts.append(masks_hf)
    
        # conv 1x1 -> BN (no ReLU)
    # NB: for now this AffineChannel op cannot be in-place due to a bug in C2
    # gradient computation for graphs like this
    cur = model.ConvAffine(
        cur,
        prefix + '_branch2c',
        dim_inner,
        dim_out,
        kernel=1,
        stride=1,
        pad=0,
        inplace=False
    )
    return cur
    
    def send(self, msg, toUserName=None, mediaId=None):
    if not msg:
        r = ReturnValue({'BaseResponse': {
            'ErrMsg': 'No message.',
            'Ret': -1005, }})
    elif msg[:5] == '@fil@':
        if mediaId is None:
            r = self.send_file(msg[5:], toUserName)
        else:
            r = self.send_file(msg[5:], toUserName, mediaId)
    elif msg[:5] == '@img@':
        if mediaId is None:
            r = self.send_image(msg[5:], toUserName)
        else:
            r = self.send_image(msg[5:], toUserName, mediaId)
    elif msg[:5] == '@msg@':
        r = self.send_msg(msg[5:], toUserName)
    elif msg[:5] == '@vid@':
        if mediaId is None:
            r = self.send_video(msg[5:], toUserName)
        else:
            r = self.send_video(msg[5:], toUserName, mediaId)
    else:
        r = self.send_msg(msg, toUserName)
    return r