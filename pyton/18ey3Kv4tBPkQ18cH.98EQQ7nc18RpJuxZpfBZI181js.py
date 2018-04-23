
        
            parser.add_argument('project',
                        metavar='account/project',
                        help='Shippable account/project')
    
        'ipv6': re.compile(
        r'''^
            (?:{0}:){{7}}{0}|           # uncompressed: 1:2:3:4:5:6:7:8
            (?:{0}:){{1,6}}:|           # compressed variants, which are all
            (?:{0}:)(?::{0}){{1,6}}|    # a::b for various lengths of a,b
            (?:{0}:){{2}}(?::{0}){{1,5}}|
            (?:{0}:){{3}}(?::{0}){{1,4}}|
            (?:{0}:){{4}}(?::{0}){{1,3}}|
            (?:{0}:){{5}}(?::{0}){{1,2}}|
            (?:{0}:){{6}}(?::{0})|      # ...all with 2 <= a+b <= 7
            :(?::{0}){{1,6}}|           # ::ffff(:ffff...)
            {0}?::|                     # ffff::, ::
                                        # ipv4-in-ipv6 variants
            (?:0:){{6}}(?:{0}\.){{3}}{0}|
            ::(?:ffff:)?(?:{0}\.){{3}}{0}|
            (?:0:){{5}}ffff:(?:{0}\.){{3}}{0}
            $
        '''.format(ipv6_component), re.X | re.I
    ),
    
            return data['current_version']
    
        def remove(self, key):
        hash_index = self._hash_function(key)
        for index, item in enumerate(self.table[hash_index]):
            if item.key == key:
                del self.table[hash_index][index]
                return
        raise KeyError('Key not found')
    
    
class Transaction(object):
    
    
if __name__ == '__main__':
    RemoveDuplicateUrls.run()

    
    
class Deck(object):
    
        def bfs(self, source, dest):
        # Use self.visited_ids to track visited nodes
        # Use self.lookup to translate a person_id to a Person
        pass
