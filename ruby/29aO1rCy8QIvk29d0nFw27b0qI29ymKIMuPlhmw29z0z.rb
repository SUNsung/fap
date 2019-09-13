
        
              def find_matching_tag(tag)
        # Used primarily by developers testing beta macOS releases.
        if OS::Mac.prerelease? && ARGV.skip_or_later_bottles?
          generic_find_matching_tag(tag)
        else
          generic_find_matching_tag(tag) ||
            find_older_compatible_tag(tag)
        end
      end
    
                problem '\'inreplace <filenames> do |s|\' is preferred over \'|#{block_arg.source}|\'.'
          end
    
          def detect_version_from_clang_version
        return 'dunno' if DevelopmentTools.clang_version.null?
    
            subject.fetch
      end
    end
  end
    
        def metadata_subdir(leaf, version: self.version, timestamp: :latest, create: false)
      raise CaskError, 'Cannot create metadata subdir when timestamp is :latest.' if create && timestamp == :latest
    
        # TODO stop escaping - HTML5 allows anything but space
    assert_ref @c2_c3_h1_meh, 'C2::C3::H1#m?'
    
      def test_definition
    m = RDoc::NormalModule.new 'M'
    
    class C2
  def b
  end
    
      def test_vi_paste_prev_for_mbchar_by_plural_code_points
    input_keys('か\u3099き\u3099く\u3099け\u3099こ\u3099\C-[3h')
    assert_line('か\u3099き\u3099く\u3099け\u3099こ\u3099')
    assert_byte_pointer_size('か\u3099')
    assert_cursor(2)
    assert_cursor_max(10)
    input_keys('P')
    assert_line('か\u3099き\u3099く\u3099け\u3099こ\u3099')
    assert_byte_pointer_size('か\u3099')
    assert_cursor(2)
    assert_cursor_max(10)
    input_keys('d$')
    assert_line('か\u3099')
    assert_byte_pointer_size('')
    assert_cursor(0)
    assert_cursor_max(2)
    input_keys('P')
    assert_line('き\u3099く\u3099け\u3099こ\u3099か\u3099')
    assert_byte_pointer_size('き\u3099く\u3099け\u3099')
    assert_cursor(6)
    assert_cursor_max(10)
    input_keys('2P')
    assert_line('き\u3099く\u3099け\u3099き\u3099く\u3099け\u3099き\u3099く\u3099け\u3099こ\u3099こ\u3099こ\u3099か\u3099')
    assert_byte_pointer_size('き\u3099く\u3099け\u3099き\u3099く\u3099け\u3099き\u3099く\u3099け\u3099')
    assert_cursor(18)
    assert_cursor_max(26)
  end
    
      def test_append_three_with_max_two
    @kill_ring = Reline::KillRing.new(2)
    assert_equal(Reline::KillRing::State::FRESH, @kill_ring.instance_variable_get(:@state))
    @kill_ring.append('a')
    assert_equal(Reline::KillRing::State::CONTINUED, @kill_ring.instance_variable_get(:@state))
    @kill_ring.process
    assert_equal(Reline::KillRing::State::PROCESSED, @kill_ring.instance_variable_get(:@state))
    @kill_ring.process
    assert_equal(Reline::KillRing::State::FRESH, @kill_ring.instance_variable_get(:@state))
    @kill_ring.append('b')
    assert_equal(Reline::KillRing::State::CONTINUED, @kill_ring.instance_variable_get(:@state))
    @kill_ring.process
    assert_equal(Reline::KillRing::State::PROCESSED, @kill_ring.instance_variable_get(:@state))
    @kill_ring.process
    assert_equal(Reline::KillRing::State::FRESH, @kill_ring.instance_variable_get(:@state))
    @kill_ring.append('c')
    assert_equal(Reline::KillRing::State::CONTINUED, @kill_ring.instance_variable_get(:@state))
    @kill_ring.process
    assert_equal(Reline::KillRing::State::PROCESSED, @kill_ring.instance_variable_get(:@state))
    assert_equal('c', @kill_ring.yank)
    assert_equal(Reline::KillRing::State::YANK, @kill_ring.instance_variable_get(:@state))
    assert_equal('c', @kill_ring.yank)
    assert_equal(Reline::KillRing::State::YANK, @kill_ring.instance_variable_get(:@state))
    assert_equal(['b', 'c'], @kill_ring.yank_pop)
    assert_equal(Reline::KillRing::State::YANK, @kill_ring.instance_variable_get(:@state))
    assert_equal(['c', 'b'], @kill_ring.yank_pop)
    assert_equal(Reline::KillRing::State::YANK, @kill_ring.instance_variable_get(:@state))
    assert_equal(['b', 'c'], @kill_ring.yank_pop)
    assert_equal(Reline::KillRing::State::YANK, @kill_ring.instance_variable_get(:@state))
  end
    
    ::Bundler.with_friendly_errors do
  ::Bundler::CLI.start(ARGV, :debug => true)
end

    
    ENV['GEM_HOME'] = ENV['GEM_PATH'] = LogStash::Environment.logstash_gem_home
Gem.use_paths(LogStash::Environment.logstash_gem_home)
    
    class LogStash::PluginManager::Update < LogStash::PluginManager::Command
  REJECTED_OPTIONS = [:path, :git, :github]
  # These are local gems used by LS and needs to be filtered out of other plugin gems
  NON_PLUGIN_LOCAL_GEMS = ['logstash-core', 'logstash-core-plugin-api']
    
    RSpec.configure do |c|
  c.include ServiceTester
end