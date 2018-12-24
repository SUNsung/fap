
        
            def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer)
        ]
    
        def get_person(self, person_id):
        person_server = self.lookup[person_id]
        return person_server.people[person_id]
    
        def remove_link_to_crawl(self, url):
        '''Remove the given link from `links_to_crawl`.'''
        pass
    
    
class CNTV(VideoExtractor):
    name = 'CNTV.com'
    stream_types = [
        {'id': '1', 'video_profile': '1280x720_2000kb/s', 'map_to': 'chapters4'},
        {'id': '2', 'video_profile': '1280x720_1200kb/s', 'map_to': 'chapters3'},
        {'id': '3', 'video_profile': '640x360_850kb/s', 'map_to': 'chapters2'},
        {'id': '4', 'video_profile': '480x270_450kb/s', 'map_to': 'chapters'},
        {'id': '5', 'video_profile': '320x180_200kb/s', 'map_to': 'lowChapters'},
    ]
    
    
def cleanup_files(files):
    for file in files:
        os.remove(file)
    
        html = get_content(rebuilt_url(url))
    info = json.loads(match1(html, r'qualities':({.+?}),''))
    title = match1(html, r''video_title'\s*:\s*'([^']+)'') or \
            match1(html, r''title'\s*:\s*'([^']+)'')
    title = unicodize(title)
    
                    mapping = KBaseMapping(base=int(base))
                sym_to_name = {}
                for no in range(int(size), 0, -1):
                    no_in_base = mapping.mapping(no)
                    val = names[no] if no < len(names) and names[no] else no_in_base
                    sym_to_name[no_in_base] = val
    
    def rabinMiller(num):
    s = num - 1
    t = 0
    
    def makeKeyFiles(name, keySize):
    if os.path.exists('%s_pubkey.txt' % (name)) or os.path.exists('%s_privkey.txt' % (name)):
        print('\nWARNING:')
        print(''%s_pubkey.txt' or '%s_privkey.txt' already exists. \nUse a different name or delete these files and re-run this program.' % (name, name))
        sys.exit()
    
        def __init__(self, arr):
        # we need a list not a string, so do something to change the type
        self.array = arr.split(',')
        print(('the input array is:', self.array))
    
        for i in range(1, s+1):
        dp[0][i] = False
    
    def md5me(testString):
	'''[summary]
	Returns a 32-bit hash code of the string 'testString'
    
    def getEnglishCount(message):
    message = message.upper()
    message = removeNonLetters(message)
    possibleWords = message.split()