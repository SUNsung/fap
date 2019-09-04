
        
            _TESTS = [{
        'url': 'http://southpark.cc.com/clips/104437/bat-daded#tab=featured',
        'info_dict': {
            'id': 'a7bff6c2-ed00-11e0-aca6-0026b9414f30',
            'ext': 'mp4',
            'title': 'South Park|Bat Daded',
            'description': 'Randy disqualifies South Park by getting into a fight with Bat Dad.',
            'timestamp': 1112760000,
            'upload_date': '20050406',
        },
    }, {
        'url': 'http://southpark.cc.com/collections/7758/fan-favorites/1',
        'only_matching': True,
    }]
    
    import codecs
import subprocess
    
        # Get the version from youtube_dl/version.py without importing the package
    exec(compile(open('youtube_dl/version.py').read(),
                 'youtube_dl/version.py', 'exec'))
    
    
def build_lazy_ie(ie, name):
    valid_url = getattr(ie, '_VALID_URL', None)
    s = ie_template.format(
        name=name,
        bases=', '.join(map(get_base_name, ie.__bases__)),
        valid_url=valid_url,
        module=ie.__module__)
    if ie.suitable.__func__ is not InfoExtractor.suitable.__func__:
        s += '\n' + getsource(ie.suitable)
    if hasattr(ie, '_make_valid_url'):
        # search extractors
        s += make_valid_template.format(valid_url=ie._make_valid_url())
    return s
    
    
if __name__ == '__main__':
    main()

    
    import sys
import os
# Allows to import youtube_dl
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
            if 'title' not in kwargs:
            url = 'http://pv.funshion.com/v5/video/profile/?id={}&cl=mweb&uc=111'.format(self.vid)
            meta = json.loads(get_content(url))
            self.title = meta['name']
        else:
            self.title = kwargs['title']
    
    def ifeng_download_by_id(id, title = None, output_dir = '.', merge = True, info_only = False):
    assert r1(r'([0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12})', id), id
    url = 'http://vxml.ifengimg.com/video_info_new/%s/%s/%s.xml' % (id[-2], id[-2:], id)
    xml = get_html(url, 'utf-8')
    title = r1(r'Name='([^']+)'', xml)
    title = unescape_html(title)
    url = r1(r'VideoPlayUrl='([^']+)'', xml)
    from random import randint
    r = randint(10, 19)
    url = url.replace('http://wideo.ifeng.com/', 'http://ips.ifeng.com/wideo.ifeng.com/')
    type, ext, size = url_info(url)
    
        def __init__(self):
        self._list = {None: self._get_list()}
    
            return ['git', 'clone', cls._repository_url, local_repository_dir]
    
    import os
import glob
import yaml
    
                answer.append(line)
    
    # pylint: disable=relative-import
    
                if '/' in keyword:
                search_options = keyword[::-1]
                search_options = search_options[:search_options.index('/')]
                keyword = keyword[:-len(search_options)-1]
    
    from __future__ import print_function
    
        def test_remove_min(self):
        # Test case: bottom [2, 8, 3, -6, 7, 3] top
        self.assertEqual([2, 8, 3, 7, 3], remove_min([2, 8, 3, -6, 7, 3]))
        # Test case: 2 smallest value [2, 8, 3, 7, 3]
        self.assertEqual([4, 8, 7], remove_min([4, 8, 3, 7, 3]))
    
    
# Using set
def valid_solution_set (board):
    valid = set(range(1, 10))
    
        def test_sparse_dot_vector(self):
        self.assertEqual(sparse_dot_vector.dot_product(sparse_dot_vector.vector_to_index_value_list(
            [1., 2., 3.]), sparse_dot_vector.vector_to_index_value_list([0., 2., 2.])), 10)
    
            if parent_node == self.root and not parent_node.keys:
            self.root = to_merge_node
    
    def remove_dups(head):
    '''
    Time Complexity: O(N)
    Space Complexity: O(N)
    '''
    hashset = set()
    prev = Node()
    while head:
        if head.val in hashset:
            prev.next = head.next
        else:
            hashset.add(head.val)
            prev = head
        head = head.next
    
        def get_random(self):
        idx = random.randint(0, len(self.nums)-1)
        return self.nums[idx]