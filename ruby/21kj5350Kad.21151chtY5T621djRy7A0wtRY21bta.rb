
        
        class Jekyll::Commands::NewTheme < Jekyll::Command
  class << self
    def init_with_program(prog)
      prog.command(:'new-theme') do |c|
        c.syntax 'new-theme NAME'
        c.description 'Creates a new Jekyll theme scaffold'
        c.option 'code_of_conduct', \
          '-c', '--code-of-conduct', \
          'Include a Code of Conduct. (defaults to false)'
    
          private
      def grouped_array(groups)
        groups.each_with_object([]) do |item, array|
          array << {
            'name'  => item.first,
            'items' => item.last,
            'size'  => item.last.size,
          }
        end
      end
    end
  end
end

    
    module Jekyll
  class Layout
    include Convertible
    
          def warnings
        @template.warnings
      end
    
          _form_configurable_fields[name] = options
    end
    
      # Optional
  #   Override this method if you need to group multiple agents based on an API key,
  #   or server they connect to.
  #   Have a look at the TwitterStreamAgent for an example.
  def self.setup_worker; end
    
      def tumblr
    Tumblr.configure do |config|
      config.consumer_key = tumblr_consumer_key
      config.consumer_secret = tumblr_consumer_secret
      config.oauth_token = tumblr_oauth_token
      config.oauth_token_secret = tumblr_oauth_token_secret
    end
    
    Tumblr::Client.new
  end
end
    
      def test_realdirpath_junction
    Dir.mktmpdir('rubytest-realpath') {|tmpdir|
      Dir.chdir(tmpdir) do
        Dir.mkdir('foo')
        skip 'cannot run mklink' unless system('mklink /j bar foo > nul')
        assert_equal(File.realpath('foo'), File.realpath('bar'))
      end
    }
  end if /mswin|mingw/ =~ RUBY_PLATFORM
    
        $, = ':'
    a = @cls[1, 2, 3]
    assert_equal('[1, 2, 3]', a.to_s)
  ensure
    $, = nil
  end
    
      def test_transform_keys
    x = @cls[a: 1, b: 2, c: 3]
    y = x.transform_keys {|k| :'#{k}!' }
    assert_equal({a: 1, b: 2, c: 3}, x)
    assert_equal({a!: 1, b!: 2, c!: 3}, y)
    
      def test_compare_by_identity
    a1, a2 = 'a', 'a'
    b1, b2 = 'b', 'b'
    c = 'c'
    array = [a1, b1, c, a2, b2]
    
      quarantine! do
    
        prune
  end
    
        def self.clear
      instance.clear
    end
    
      private
    
              def find_plugins_gem_specs
            @specs ||= ::Gem::Specification.find_all.select{|spec| logstash_plugin_gem_spec?(spec)}
          end