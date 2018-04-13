
        
          end
    
      def revoke_moderation!
    set_permission('moderator', false)
  end
    
        find_union(segments, Group).order_id_desc
  end
    
        def to_a
      @filters.dup
    end
    
      def test_frozen
    ENV[PATH_ENV] = '/'
    ENV.each do |k, v|
      assert_predicate(k, :frozen?)
      assert_predicate(v, :frozen?)
    end
    ENV.each_key do |k|
      assert_predicate(k, :frozen?)
    end
    ENV.each_value do |v|
      assert_predicate(v, :frozen?)
    end
    ENV.each_key do |k|
      assert_predicate(ENV[k], :frozen?, '[#{k.dump}]')
      assert_predicate(ENV.fetch(k), :frozen?, 'fetch(#{k.dump})')
    end
  end
    
      class Honda < Car
    def initialize(*args)
      self.make = 'Honda'
      super(*args)
    end
  end
    
      it 'respects Thread subclasses' do
    c = Class.new(Thread)
    t = c.send(@method) { }
    t.should be_kind_of(c)
    
        def metadata_subdir(leaf, version: self.version, timestamp: :latest, create: false)
      if create && timestamp == :latest
        raise CaskError, 'Cannot create metadata subdir when timestamp is :latest.'
      end
    
      # Clean a top-level (bin, sbin, lib) directory, recursively, by fixing file
  # permissions and removing .la files, unless the files (or parent
  # directories) are protected by skip_clean.
  #
  # bin and sbin should not have any subdirectories; if either do that is
  # caught as an audit warning
  #
  # lib may have a large directory tree (see Erlang for instance), and
  # clean_dir applies cleaning rules to the entire tree
  def clean_dir(d)
    d.find do |path|
      path.extend(ObserverPathnameExtension)
    
      context 'called with three colors' do
    it 'applies second color to left and right' do
      rule = 'border-color: #f00 #0f0 #00f'
    
          expect('.all-buttons-active').to have_ruleset(ruleset)
    end
  end
    
      context 'called with null values' do
    it 'writes rules for other three' do
      ruleset = 'margin-top: 11px; ' +
                'margin-right: 12px; ' +
                'margin-left: 13px;'
      bad_rule = 'margin-bottom: null;'
    
      context 'called with one size' do
    it 'applies same width to all sides' do
      rule = 'padding: 1px'
    
      context 'called with two sizes' do
    it 'applies to alternating sides' do
      ruleset = 'position: absolute; ' +
                'top: 2px; ' +
                'right: 3px; ' +
                'bottom: 2px; ' +
                'left: 3px;'
    
          expect('.prefix--moz-ms').to have_ruleset(rule)
    end
  end
end
