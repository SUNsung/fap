
        
        
if __name__ == '__main__':
    main()

    
            monitoring_policy = oneandone_conn.delete_monitoring_policy_process(
            monitoring_policy_id=monitoring_policy_id,
            process_id=process_id)
        return monitoring_policy
    except Exception as ex:
        module.fail_json(msg=str(ex))
    
    
if __name__ == '__main__':
    main()

    
            # check if scaling needs to be done to be in new_range
        if arr_min < new_range[0] or arr_max > new_range[1]:
            # perform min-max scaling
            scaled = (new_range[1] - new_range[0]) * (arr - arr_min) / (arr_max -
                                                                        arr_min) + new_range[0]
        else:
            # return array if already in range
            scaled = arr
    
        def unsharp_mask(self, new_face, kernel_center, amount):
        ''' Sharpen using unsharp mask '''
        kernel_size = kernel_center[0]
        threshold = self.config['threshold'] / 255.0
        blur = cv2.GaussianBlur(new_face, kernel_size, 0)  # pylint: disable=no-member
        low_contrast_mask = (abs(new_face - blur) < threshold).astype('float32')
        sharpened = (new_face * (1.0 + amount)) + (blur * -amount)
        new_face = (new_face * (1.0 - low_contrast_mask)) + (sharpened * low_contrast_mask)
        return new_face

    
        def pre_encode(self, image):
        logger.trace('Pre-encoding image')
        image = cv2.imencode(self.extension, image, self.args)[1]  # pylint: disable=no-member
        return image
    
    
class YAMLSerializer(Serializer):
    ''' YAML Serializer '''
    ext = 'yml'
    woptions = 'w'
    roptions = 'r'
    
        def draw_landmarks(self, color_id=3, radius=1):
        ''' Draw the facial landmarks '''
        color = self.colors[color_id]
        for alignment in self.alignments:
            landmarks = alignment['landmarksXY']
            logger.trace('Drawing Landmarks: (landmarks: %s, color: %s, radius: %s)',
                         landmarks, color, radius)
            for (pos_x, pos_y) in landmarks:
                cv2.circle(self.image,  # pylint: disable=no-member
                           (pos_x, pos_y),
                           radius,
                           color,
                           -1)
    
                # New terminal setting unbuffered
            self.new_term[3] = (self.new_term[3] & ~termios.ICANON & ~termios.ECHO)
            termios.tcsetattr(self.file_desc, termios.TCSAFLUSH, self.new_term)