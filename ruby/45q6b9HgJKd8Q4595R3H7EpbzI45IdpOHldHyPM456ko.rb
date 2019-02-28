
        
          it 'imports a scenario which requires a service' do
    visit new_scenario_imports_path
    attach_file('Option 2: Upload a Scenario JSON File', File.join(Rails.root, 'spec/data_fixtures/twitter_scenario.json'))
    click_on 'Start Import'
    check('I confirm that I want to import these Agents.')
    expect { click_on 'Finish Import' }.to change(Scenario, :count).by(1)
    expect(page).to have_text('Import successful!')
  end
end

    
        it 'has a default when options[:name] is nil' do
      expect(AgentsExporter.new(:name => nil).filename).to eq('exported-agents.json')
    end
    
      describe '#helpers' do
    it 'should return the correct request header' do
      expect(@checker.send(:request_options)).to eq({:headers => {'aftership-api-key' => '800deeaf-e285-9d62-bc90-j999c1973cc9', 'Content-Type'=>'application/json'}})
    end
    
        def initialize(machine, guests, capabilities)
      @capabilities = capabilities
      @guests       = guests
      @machine      = machine
    end
    
        # Merge one registry with another and return a completely new
    # registry. Note that the result cache is completely busted, so
    # any gets on the new registry will result in a cache miss.
    def merge(other)
      self.class.new.tap do |result|
        result.merge!(self)
        result.merge!(other)
      end
    end
    
        desc 'Removes the stored VCR fixture'
    task :clean_vcr do
      sh 'rm -f spec/fixtures/vcr/tarballs.yml'
    end
    
    abstract_target 'Abstract Target' do
    use_modular_headers!
    
            def initialize(argv)
          @pod_name = argv.shift_argument
          @short_output = argv.flag?('short')
          super
        end
    
    Gem::Specification.new do |s|
  s.platform    = Gem::Platform::RUBY
  s.name        = '<%= file_name %>'
  s.version     = <%= class_name %>.version
  s.summary     = 'Add extension summary here'
  s.description = 'Add (optional) extension description here'
  s.required_ruby_version = '>= 2.3.3'
    
      before { ensure_order_totals }
end
    
        context 'with params 'include=default_billing_address'' do
      before { get '/api/v2/storefront/account?include=default_billing_address', headers: headers }
    
      describe '#show' do
    context 'as a guest user' do
      before { get '/api/v2/storefront/order_status/#{order.number}' }
    
          it 'returns taxons by roots' do
        expect(json_response['data'].size).to eq(1)
        expect(json_response['data'][0]).to have_type('taxon')
        expect(json_response['data'][0]).to have_id(taxonomy.root.id.to_s)
        expect(json_response['data'][0]).to have_relationship(:parent).with_data(nil)
        expect(json_response['data'][0]).to have_relationships(:parent, :taxonomy, :children, :products, :image)
      end
    end
    
    # Requires supporting ruby files with custom matchers and macros, etc,
# in spec/support/ and its subdirectories.
Dir[File.dirname(__FILE__) + '/support/**/*.rb'].each { |f| require f }
    
            if requires_authentication? && api_key.blank? && order_token.blank?
          must_specify_api_key and return
        elsif order_token.blank? && (requires_authentication? || api_key.present?)
          invalid_api_key and return
        else
          # An anonymous user
          @current_api_user = Spree.user_class.new
        end
      end
    
            def log_state_changes
          if @order.previous_changes[:state]
            @order.log_state_changes(
              state_name: 'order',
              old_state: @order.previous_changes[:state].first,
              new_state: @order.previous_changes[:state].last
            )
          end
        end
    
    # and write them both.
begin
  output_packages.each do |output_package|
    output = output_package.to_s
    output_package.output(output)
    
      private
  # Copy a file or directory to a destination
  #
  # This is special because it respects the full path of the source.
  # Aditionally, hardlinks will be used instead of copies.
  #
  # Example:
  #
  #     clone('/tmp/hello/world', '/tmp/example')
  #
  # The above will copy, recursively, /tmp/hello/world into
  # /tmp/example/hello/world
  def clone(source, destination)
    logger.debug('Cloning path', :source => source, :destination => destination)
    # Edge case check; abort if the temporary directory is the source.
    # If the temporary dir is the same path as the source, it causes
    # fpm to recursively (and forever) copy the staging directory by
    # accident (#542).
    if File.expand_path(source) == File.expand_path(::Dir.tmpdir)
      raise FPM::InvalidPackageConfiguration,
        'A source directory cannot be the root of your temporary ' \
        'directory (#{::Dir.tmpdir}). fpm uses the temporary directory ' \
        'to stage files during packaging, so this setting would have ' \
        'caused fpm to loop creating staging directories and copying ' \
        'them into your package! Oops! If you are confused, maybe you could ' \
        'check your TMPDIR, TMP, or TEMP environment variables?'
    end
    
    class FPM::Package::NPM < FPM::Package
  class << self
    include FPM::Util
  end
  # Flags '--foo' will be accessable  as attributes[:npm_foo]
  option '--bin', 'NPM_EXECUTABLE',
    'The path to the npm executable you wish to run.', :default => 'npm'
    
      dont_obsolete_paths = []
  option '--dont-obsolete', 'DONT_OBSOLETE_PATH',
    'A file path for which to 'dont-obsolete' in the built PackageInfo. ' \
    'Can be specified multiple times.' do |path|
      dont_obsolete_paths << path
    end
    
        # Arch has no notion of vendor, so...
    #self.vendor =
    
      private
  def input(command)
    platforms = [
      ::PleaseRun::Platform::Systemd.new('default'), # RHEL 7, Fedora 19+, Debian 8, Ubuntu 16.04
      ::PleaseRun::Platform::Upstart.new('1.5'), # Recent Ubuntus
      ::PleaseRun::Platform::Upstart.new('0.6.5'), # CentOS 6
      ::PleaseRun::Platform::Launchd.new('10.9'), # OS X
      ::PleaseRun::Platform::SYSV.new('lsb-3.1') # Ancient stuff
    ]
    pleaserun_attributes = [ 'chdir', 'user', 'group', 'umask', 'chroot', 'nice', 'limit_coredump',
                             'limit_cputime', 'limit_data', 'limit_file_size', 'limit_locked_memory',
                             'limit_open_files', 'limit_user_processes', 'limit_physical_memory', 'limit_stack_size',
                             'log_directory', 'log_file_stderr', 'log_file_stdout']
    
        # Unpack the tarball to the staging path
    args = ['-cf', output_path, '-C', staging_path]
    tar_compression_flag(output_path).tap do |flag|
      args << flag unless flag.nil?
    end
    args << '.'
    
      # wrapper around mknod ffi calls
  def mknod_w(path, mode, dev)
    rc = -1
    case %x{uname -s}.chomp
    when 'Linux'
      # bits/stat.h #define _MKNOD_VER_LINUX  0
      rc = xmknod(0, path, mode, FFI::MemoryPointer.new(dev))
    else
      rc = mknod(path, mode, dev)
    end
    rc
  end