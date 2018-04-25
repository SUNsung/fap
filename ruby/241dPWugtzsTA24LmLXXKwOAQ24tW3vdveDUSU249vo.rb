
        
              if options[:type] == :array && (options[:values].blank? || !options[:values].is_a?(Array))
        raise ArgumentError.new('When using :array as :type you need to provide the :values as an Array')
      end
    
      def index
    set_table_sort sorts: %w[provider name global], default: { provider: :asc }
    
          # This returns the keys (or ids) that are in the string.
      #
      # @return [<Array<String>]
      def keys
        regexp = /^#\s*VAGRANT-BEGIN:\s*(.+?)$\r?\n?(.*)$\r?\n?^#\s*VAGRANT-END:\s(\1)$/m
        @value.scan(regexp).map do |match|
          match[0]
        end
      end
    
                o.on('--box-version VERSION', String,
                 'The specific version of the box to remove') do |v|
              options[:version] = v
            end
    
    module VagrantPlugins
  module CommandBox
    module Command
      class Repackage < Vagrant.plugin('2', :command)
        def execute
          opts = OptionParser.new do |o|
            o.banner = 'Usage: vagrant box repackage <name> <provider> <version>'
          end
    
        Tempfile.create(name.to_s) {|f|
      f.sync = true
      expected = ''
      result = nil
      bytes[0...-1].each do |x|
        f.write x
        f.write ' '
        f.pos -= 1
        expected << x
        assert_nothing_raised(bug6487) {result = File.read(f.path, mode: 'rb:bom|utf-8')}
        assert_equal('#{expected} '.force_encoding('utf-8'), result)
      end
      f.write bytes[-1]
      assert_nothing_raised(bug6487) {result = File.read(f.path, mode: 'rb:bom|utf-8')}
      assert_equal '', result, 'valid bom'
    }
  end
    
      it 'decodes the remaining floats when passed the '*' modifier after another directive' do
    array = '@\xa9\x99\x9aA\x1333'.unpack(unpack_format()+unpack_format('*'))
    array.should == [5.300000190734863, 9.199999809265137]
  end
    
      it 'decodes the remaining longs when passed the '*' modifier' do
    array = 'hfgedbcabcahfged'.unpack(unpack_format('*'))
    array.should == [7522813912742519649, 7089617339433837924]
  end
    
      # Hangs on 1.8.6.114 OS X, possibly also on Linux
  quarantine! do
    it 'is deferred if ensure clause sleeps' do
      ThreadSpecs.wakeup_dying_sleeping_thread(@method) { sleep; ScratchPad.record :after_sleep }
      ScratchPad.recorded.should == :after_sleep
    end
  end
    
      it 'raises an ArgumentError if not passed a block' do
    lambda {
      Thread.send(@method)
    }.should raise_error(ArgumentError)
  end
    
      it 'handles bad leap seconds by carrying values forward' do
    with_timezone 'UTC' do
      time = Time.send(@method, 2017, 7, 5, 23, 59, 60)
      time.sec.should == 0
      time.min.should == 0
      time.hour.should == 0
      time.day.should == 6
      time.month.should == 7
    end
  end
    
        def log_processing(name)
      puts yellow '  #{File.basename(name)}'
    end
    
      # Configure static asset server for tests with Cache-Control for performance.
  if config.respond_to?(:serve_static_files)
    # rails >= 4.2
    config.serve_static_files = true
  elsif config.respond_to?(:serve_static_assets)
    # rails < 4.2
    config.serve_static_assets = true
  end
  config.static_cache_control = 'public, max-age=3600'
    
    desc 'Dumps output to a CSS file for testing'
task :debug do
  require 'sass'
  path = Bootstrap.stylesheets_path
  %w(bootstrap).each do |file|
    engine = Sass::Engine.for_file('#{path}/#{file}.scss', syntax: :scss, load_paths: [path])
    File.open('./#{file}.css', 'w') { |f| f.write(engine.render) }
  end
end
    
    @@ login
<form action='/'>
  <label for='user'>User Name:</label>
  <input name='user' value='' />
  <input type='submit' value='GO!' />
</form>
    
          def session_key
        @session_key ||= options[:session_key]
      end
    end
  end
end

    
      it 'accepts requests with a changing Accept-Encoding header' do
    # this is tested because previously it led to clearing the session
    session = {:foo => :bar}
    get '/', {}, 'rack.session' => session, 'HTTP_ACCEPT_ENCODING' => 'a'
    get '/', {}, 'rack.session' => session, 'HTTP_ACCEPT_ENCODING' => 'b'
    expect(session).not_to be_empty
  end