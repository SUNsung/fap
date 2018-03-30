
        
        def test_dir(*subdirs)
  File.join(TEST_DIR, *subdirs)
end
    
    MODE = ARGV.first || 'cpu'
PROF_OUTPUT_FILE = File.expand_path('../tmp/stackprof-#{MODE}-#{Time.now.strftime('%Y%m%d%H%M')}.dump', __dir__)
    
    config = File.expand_path '../lib/jekyll/mime.types', __dir__
    
        # --
    # Check if an entry matches a specific pattern and return true,false.
    # Returns true if path matches against any glob pattern.
    # --
    def glob_include?(enum, e)
      entry = Pathutil.new(site.in_source_dir).join(e)
      enum.any? do |exp|
        # Users who send a Regexp knows what they want to
        # exclude, so let them send a Regexp to exclude files,
        # we will not bother caring if it works or not, it's
        # on them at this point.
    
    module Jekyll
  class Layout
    include Convertible
    
          def warnings
        @template.warnings
      end
    
      # Resets the internal state after modification to existing elements
  # and returns self.
  #
  # Elements will be reindexed and deduplicated.
  def reset
    if @hash.respond_to?(:rehash)
      @hash.rehash # This should perform frozenness check.
    else
      raise 'can't modify frozen #{self.class.name}' if frozen?
    end
    self
  end
    
      it 'decodes the remaining doubles when passed the '*' modifier' do
    array = '@\x07333333?\xf6ffffff@\x20ffffff'.unpack(unpack_format('*'))
    array.should == [2.9, 1.4, 8.2]
  end
    
      it 'decodes the number of shorts requested by the count modifier' do
    'badcfe'.unpack(unpack_format(3)).should == [25185, 25699, 26213]
  end
    
      it 'does not result in a deadlock' do
    t = Thread.new do
      100.times { Thread.stop }
    end