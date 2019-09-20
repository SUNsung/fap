
        
            class ClearHelpersTest < ActiveSupport::TestCase
      def setup
        @controller = HelperyTestController.new
      end
    
        def test_kwarg_symbol_leak_no_rest
      foo = -> (arg: 42) {}
      assert_no_immortal_symbol_created('kwarg no rest') do |name|
        assert_raise(ArgumentError) { foo.call(name.to_sym => 42) }
      end
    end
    
    
class ScanError < StandardError; end
    
      # This is especially important for JRuby, since eof? there
  # is more than just a simple accessor.
  it 'does not affect the reading data' do
    gz = Zlib::GzipReader.new @io
    0.upto(9) do |i|
      gz.eof?.should be_false
      gz.read(1).should == @data[i, 1]
    end
    gz.eof?.should be_true
    gz.read().should == ''
    gz.eof?.should be_true
  end
    
    end

    
    describe 'GzipReader#pos' do
    
        describe 'with an empty string' do
      it 'does not append anything to the stream' do
        @gz.ungetc ''
        @gz.read.should == ''
      end
    
    describe 'GzipWriter#write' do
  before :each do
    @data = '12345abcde'
    @zip = [31, 139, 8, 0, 44, 220, 209, 71, 0, 3, 51, 52, 50, 54, 49, 77,
            76, 74, 78, 73, 5, 0, 157, 5, 0, 36, 10, 0, 0, 0].pack('C*')
    @io = StringIO.new ''.b
  end
    
      describe 'a false value from Ruby' do
    it 'is falsey in C' do
      @b.is_true(false).should == 2
    end
  end
    
    <script>
  // reading
  var es = new EventSource('/stream');
  es.onmessage = function(e) { $('#chat').append(e.data + '\n') };
    
    begin
  require 'bundler'
  Bundler::GemHelper.install_tasks
rescue LoadError => e
  $stderr.puts e
end
    
          NO_ARG_DIRECTIVES = %i(block_all_mixed_content disown_opener
                             upgrade_insecure_requests).freeze
    
          {
          :type => queue_type,
          :events_count => events,
          :queue_size_in_bytes => queue_size_in_bytes,
          :max_queue_size_in_bytes => max_queue_size_in_bytes,
      }
    end
  end
end; end;

    
        def oss_only?
      return true if ENV['OSS']=='true'
    
      def execute
    signal_deprecation_warning_for_pack
    
      def validate_cache_location
    cache_location = LogStash::Environment::CACHE_PATH
    if File.exist?(cache_location)
      puts('Directory #{cache_location} is going to be overwritten, do you want to continue? (Y/N)')
      override = ( 'y' == STDIN.gets.strip.downcase ? true : false)
      if override
        FileUtils.rm_rf(cache_location)
      else
        puts('Unpack cancelled: file #{cache_location} already exists, please delete or move it')
        exit
      end
    end
  end
end

    
        platforms.types.each do |type|
      desc 'Run acceptance test in #{type} machines'
      task type do
        ENV['LS_TEST_PLATFORM']=type
        exit(RSpec::Core::Runner.run([Rake::FileList['acceptance/spec/lib/*_spec.rb']]))
      end
    end
    
          it 'flashes an error message' do
        post '/users/api_secrets', params: { api_secret: invalid_params }
        expect(flash[:error]).to be_truthy
        expect(flash[:notice]).to be_nil
      end
    end
  end
end

    
      def create?
    !user_is_banned?
  end
    
      # Never trust parameters from the scary internet, only allow a subset to go through.
  def user_params
    accessible = %i[
      email
      shipping_name
      shipping_company
      shipping_address
      shipping_address_line_2
      shipping_city
      shipping_state
      shipping_country
      shipping_postal_code
      shipping_validated
      top_languages
      experience_level
      specialty
      tabs_or_spaces
      onboarding_package_requested
      onboarding_package_form_submmitted_at
      personal_data_updated_at
      shirt_size
      shirt_gender
    ]
    params.require(:user).permit(accessible)
  end
    
      private
    
    Gem::Specification.new do |s|
  s.name          = 'tmuxinator'
  s.version       = Tmuxinator::VERSION
  s.authors       = ['Allen Bargi', 'Christopher Chow']
  s.email         = ['allen.bargi@gmail.com', 'chris@chowie.net']
  s.description   = %q{Create and manage complex tmux sessions easily.}
  s.summary       = %q{Create and manage complex tmux sessions easily.}
  s.homepage      = 'https://github.com/tmuxinator/tmuxinator'
  s.license       = 'MIT'
    
        def tmux_split_command
      path = if tab.root?
               '#{Tmuxinator::Config.default_path_option} #{tab.root}'
             end
      '#{project.tmux} splitw #{path} -t #{tab.tmux_window_target}'
    end
    
      return captured_stdout.string, captured_stderr.string
ensure
  $stdout = orig_stdout
  $stderr = orig_stderr
end
    
      describe '#enviroment' do
    context 'environment variable $TMUXINATOR_CONFIG is not empty' do
      it 'is $TMUXINATOR_CONFIG' do
        allow(ENV).to receive(:[]).with('TMUXINATOR_CONFIG').
          and_return 'expected'
        # allow(XDG).to receive(:[]).with('CONFIG').and_return 'expected'
        allow(File).to receive(:directory?).and_return true
        expect(described_class.environment).to eq 'expected'
      end
    end
    
          scripts_path(filename).tap do |pkgscript|
        logger.info('Writing pkg script', :source => filename, :target => pkgscript)
        File.write(pkgscript, script(scriptname))
        # scripts are required to be executable
        File.chmod(0755, pkgscript)
      end
    end
  end # def write_scripts
    
        File.write(build_path('packlist'), files.sort.join('\n'))
    
        begin
      safesystem('#{attributes[:python_bin]} -c 'import pkg_resources'')
    rescue FPM::Util::ProcessFailed => e
      logger.error('Your python environment is missing a working setuptools module. I tried to find the 'pkg_resources' module but failed.', :python => attributes[:python_bin], :error => e)
      raise FPM::Util::ProcessFailed, 'Python (#{attributes[:python_bin]}) is missing pkg_resources module.'
    end
    
        args = [ tar_cmd,
             '-C',
             staging_path,
             '-cf',
             payload_tar,
             '--owner=0',
             '--group=0',
             '--numeric-owner',
             '.' ]