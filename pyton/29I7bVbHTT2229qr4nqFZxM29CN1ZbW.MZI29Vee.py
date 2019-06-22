
        
        
def main():
    parser = optparse.OptionParser(usage='%prog OUTFILE.md')
    options, args = parser.parse_args()
    if len(args) != 1:
        parser.error('Expected an output filename')
    
    # General information about the project.
project = u'youtube-dl'
copyright = u'2014, Ricardo Garcia Gonzalez'
    
    
# And add them to TestDownload
for n, test_case in enumerate(defs):
    tname = 'test_' + str(test_case['name'])
    i = 1
    while hasattr(TestDownload, tname):
        tname = 'test_%s_%d' % (test_case['name'], i)
        i += 1
    test_method = generator(test_case, tname)
    test_method.__name__ = str(tname)
    ie_list = test_case.get('add_ie')
    test_method.add_ie = ie_list and ','.join(ie_list)
    setattr(TestDownload, test_method.__name__, test_method)
    del test_method
    
    from youtube_dl.jsinterp import JSInterpreter
    
    
class TestDailymotionSubtitles(BaseTestSubtitles):
    url = 'http://www.dailymotion.com/video/xczg00'
    IE = DailymotionIE
    
        # < Rotation > #
    # The old rotation method would rotate the image to find a face, then
    # store the rotated landmarks along with a rotation value to tell the
    # convert process that it had to rotate the frame to find the landmarks.
    # This is problematic for numerous reasons. The process now rotates the
    # landmarks to correctly correspond with the original frame. The below are
    # functions to convert legacy alignments to the currently supported
    # infrastructure.
    # This can eventually be removed
    
        def build(self):
        ''' Build the session graph '''
        logger.debug('Building session graph')
        self.toolbar_place(self)
        self.plotcanvas.draw()
        logger.debug('Built session graph')
    
    
class Color(Adjustment):
    ''' Seamless clone the swapped face into the old face with cv2
        NB: This probably isn't the best place for this, but it doesn't work well and
        and does not have a natural home, so here for now.
    '''