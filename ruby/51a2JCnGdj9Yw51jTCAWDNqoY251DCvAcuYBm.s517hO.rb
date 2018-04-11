
        
          def test_recursive_key
    h = @cls[]
    assert_nothing_raised { h[h] = :foo }
    h.rehash
    assert_equal(:foo, h[h])
  end
    
      it 'decodes the number of shorts requested by the count modifier' do
    'abcdef'.unpack(unpack_format(3)).should == [25185, 25699, 26213]
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
    
        def log_http_get_files(files, from, cached = false)
      return if files.empty?
      s = '  #{'CACHED ' if cached}GET #{files.length} files from #{from} #{files * ' '}...'
      if cached
        puts dark green s
      else
        puts dark cyan s
      end
    end
    
      def setup
    tmp_dir = File.join GEM_PATH, 'tmp/node-mincer'
    success = Dir.chdir DUMMY_PATH do
      silence_stdout_if !ENV['VERBOSE'] do
        system 'node', 'manifest.js', tmp_dir
      end
    end
    assert success, 'Node.js Mincer compilation failed'
    manifest = JSON.parse(File.read('#{tmp_dir}/manifest.json'))
    css_name = manifest['assets']['application.css']
    @css = File.read('#{tmp_dir}/#{css_name}')
  end
end

    
    desc 'Start a dummy (test) Rails app server'
task :dummy_rails do
  require 'rack'
  require 'term/ansicolor'
  port = ENV['PORT'] || 9292
  puts %Q(Starting on #{Term::ANSIColor.cyan 'http://localhost:#{port}'})
  Rack::Server.start(
    config: 'test/dummy_rails/config.ru',
    Port: port)
end
    
      private