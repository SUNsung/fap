
        
            groups
  end
end

    
      # Standard daemon things: become session leader, ignore SIGHUP, close stdin.
  Signal.trap('HUP', 'IGNORE')
  Process.setsid
  IO.new(0).close
    
      describe 'with photo' do
    before do
      @photos = [alice.build_post(:photo, pending: true, user_file: File.open(photo_fixture_name)),
                 alice.build_post(:photo, pending: true, user_file: File.open(photo_fixture_name))]
    
      # Creates a delayed logger wrapping `inner`.
  #
  # @param inner [Sass::Logger::Base] The wrapped logger.
  def initialize(inner)
    self.log_level = inner.log_level
    @inner = inner
    @messages = []
  end
    
      module Sass::Plugin::Configuration
    # Different default options in a m environment.
    def default_options
      @default_options ||= begin
        version = Merb::VERSION.split('.').map {|n| n.to_i}
        if version[0] <= 0 && version[1] < 5
          root = MERB_ROOT
          env  = MERB_ENV
        else
          root = Merb.root.to_s
          env  = Merb.environment
        end
    
          def stages
        names = Dir[stage_definitions].map { |f| File.basename(f, '.rb') }
        assert_valid_stage_names(names)
        names
      end
    
      mkdir_p tasks_dir
    
            context 'when the attribute `primary` is explicity set' do
          subject { dsl.primary(:app) }
          it 'returns the servers' do
            expect(subject.hostname).to eq 'example4.com'
          end
        end
      end
    end
    
      def command_line(*options)
    options.each { |opt| ARGV << opt }
    subject.define_singleton_method(:exit) do |*_args|
      throw(:system_exit, :exit)
    end
    subject.run
    subject.options
  end
    
    
  it 'should allow changing the protection mode to a string' do
    # I have no clue what other modes are available
    mock_app do
      use Rack::Protection::FrameOptions, :frame_options => 'ALLOW-FROM foo'
      run DummyApp
    end
    
        %w[/foo/bar /foo/bar/ / /.f /a.x].each do |path|
      it('does not touch #{path.inspect}') { expect(get(path).body).to eq(path) }
    end
    
          if File.directory?(source_entry)
        FileUtils.mkdir(target_entry) unless File.exists?(target_entry)
        transform_r(source_entry, target_entry)
      else
        # copy the new file, in case of being an .erb file should render first
        if source_entry.end_with?('erb')
          target_entry = target_entry.gsub(/.erb$/,'').gsub('example', name)
          File.open(target_entry, 'w') { |f| f.write(render(source_entry)) }
        else
          FileUtils.cp(source_entry, target_entry)
        end
        puts '\t create #{File.join(full_plugin_name, Pathname.new(target_entry).relative_path_from(Pathname.new(@target_path)))}'
      end
    end
  end
    
          origin = caller[1]
      if origin =~ /rubygems\/custom_require/
        origin = caller[3]
        if origin.nil?
          STDERR.puts 'Unknown origin'
          STDERR.puts caller.join('\n')
        end
      end
      origin = origin.gsub(/:[0-9]+:in .*/, '') if origin