
        
            it 'is turned off for existing instances of Huginn' do
      stub(DefaultScenarioImporter).seed { fail 'seed should not have been called'}
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('IMPORT_DEFAULT_SCENARIO_FOR_ALL_USERS') { nil }
      DefaultScenarioImporter.import(user)
    end
    
        it 'should generate the correct last checkpoint url' do
      @checker.options['path'] = 'last_checkpoint/usps/9361289878905919630610'
      expect(@checker.send(:event_url)).to eq('https://api.aftership.com/v4/last_checkpoint/usps/9361289878905919630610')
    end
  end
    
        it 'requires with_header to be either 'true' or 'false'' do
      @checker.options['with_header'] = 'true'
      expect(@checker).to be_valid
      @checker.options['with_header'] = 'false'
      expect(@checker).to be_valid
      @checker.options['with_header'] = 'test'
      expect(@checker).not_to be_valid
    end
    
        # Ensure the file is removed
    project.bfg_object_map.remove!
    notification_service.repository_cleanup_failure(project, user, error)
  end
    
            filters = @filters.each_with_object([]) do |filter, parsed_filters|
          match = @raw_query.split.find { |part| part =~ /\A#{filter[:name]}:/ }
          next unless match
    
              diff_files.each do |diff_file|
            positions = positions_grouped_by_path.fetch(diff_file.file_path, [])
            positions.each { |position| diff_file.unfold_diff_lines(position) }
          end
        end
    
        it 'Gitlab::Diff::File is initialized with diff stats' do
      subject = described_class.new(diffable, collection_default_args)
    
            authorize!(:update_deploy_key, deploy_keys_project.deploy_key)
    
    describe Utils::Bottles::Collector do
  describe '#fetch_checksum_for' do
    it 'returns passed tags' do
      subject[:yosemite] = 'foo'
      subject[:el_captain] = 'bar'
      expect(subject.fetch_checksum_for(:el_captain)).to eq(['bar', :el_captain])
    end
    
                problem 'xcodebuild should be passed an explicit 'SYMROOT''
          end
    
        it 'hardcoded g++ compiler system' do
      expect_offense(<<~'RUBY')
        class Foo < Formula
          desc 'foo'
          url 'https://brew.sh/foo-1.0.tgz'
          def install
            system '/usr/bin/g++', '-o', 'foo', 'foo.cc'
                    ^^^^^^^^^^^^ Use '#{ENV.cxx}' instead of hard-coding 'g++'
          end
        end
      RUBY
    end
    
        it 'When go get is executed' do
      expect_offense(<<~RUBY)
        class Foo < Formula
          url 'https://brew.sh/foo-1.0.tgz'
          homepage 'https://brew.sh'
    
    class SoftwareSpec
  undef uses_from_macos
    
          def sdk(v = nil)
        @locator ||= CLTSDKLocator.new
    
      it 'properly handles Casks that are not present' do
    expect {
      described_class.run('notacask')
    }.to raise_error(Cask::CaskUnavailableError)
  end
end

    
      let(:iso_env) do
    # We have to create a Vagrantfile so there is a root path
    env = isolated_environment
    env.vagrantfile('')
    env.create_vagrant_env
  end
    
        # The persistent data directory where global data can be stored. It
    # is up to the creator of the data in this directory to properly
    # remove it when it is no longer needed.
    #
    # @return [Pathname]
    attr_reader :data_dir
    
    module Vagrant
  # This class provides a way to load and access the contents
  # of a Vagrantfile.
  #
  # This class doesn't actually load Vagrantfiles, parse them,
  # merge them, etc. That is the job of {Config::Loader}. This
  # class, on the other hand, has higher-level operations on
  # a loaded Vagrantfile such as looking up the defined machines,
  # loading the configuration of a specific machine/provider combo,
  # etc.
  class Vagrantfile
    # This is the configuration loaded as-is given the loader and
    # keys to #initialize.
    attr_reader :config
    
        it 'returns all the machines' do
      configure do |config|
        config.vm.define 'foo'
        config.vm.define 'bar', autostart: false
        config.vm.define 'baz', autostart: true
      end
    
              if !triggers.empty?
            @logger.info('Firing trigger for action #{action} on guest #{guest_name}')
            @ui.info(I18n.t('vagrant.trigger.start', type: type, stage: stage, action: action))
            fire(triggers, guest_name)
          end
        end
    
    describe VagrantPlugins::CommandGlobalStatus::Command do
  include_context 'unit'
    
        Rex::ThreadFactory.spawn('AESEncryption', false) {
      c2 = OpenSSL::Cipher.new('aes-128-cfb8')
      c2.decrypt
      c2.key=key
      iv=''
      while iv.length < 16
        iv << sock.read(16-iv.length)
      end
      c2.iv = iv
      buf2 = sock.read(4096)
      while buf2 and buf2 != ''
        socks[0].put(c2.update(buf2))
        buf2 = sock.read(4096)
      end
      socks[0].close()
    }
    
            # Timeout and datastore options need to be passed through to the client
        opts = {
          :datastore    => datastore,
          :expiration   => datastore['SessionExpirationTimeout'].to_i,
          :comm_timeout => datastore['SessionCommunicationTimeout'].to_i,
          :retry_total  => datastore['SessionRetryTotal'].to_i,
          :retry_wait   => datastore['SessionRetryWait'].to_i,
          :udp_session  => true
        }
    
        # Register command execution options
    register_options(
      [
        OptString.new('SHELL', [ true, 'The shell to execute.', '/bin/sh' ]),
        OptString.new('ARGV0', [ false, 'argv[0] to pass to execve', 'sh' ]) # mostly used for busybox
      ])
  end
    
      # @return [Bool] system version is at least 10.5
  def gte_leopard?
    ver_num =~ /10\.(\d+)/ and $1.to_i >= 5
  end
    
        it 'should return the result of echo 10 times' do
      10.times do
        test_string = Rex::Text.rand_text_alpha(4)
        if session.platform.eql? 'windows'
          output = cmd_exec('cmd.exe', '/c echo #{test_string}')
        else
          output = cmd_exec('echo #{test_string}')
        end
        return false unless output == test_string
      end
      true
    end
    vprint_status('Finished cmd_exec tests')
  end
    
      #
  # Displays information about the various creds commands
  #
  def cmd_creds_usage(provider)
    print_line('Usage: creds_#{provider} [options]')
    print_line
    print_line('Dump #{provider} credentials.')
    print_line(@@creds_opts.usage)
  end
    
    
    
    
    
          cl_image_path(src,
                    type: 'fetch',
                    width: '1000',
                    height: '500',
                    crop: 'imagga_scale',
                    quality: 'auto',
                    flags: 'progressive',
                    fetch_format: 'auto',
                    sign_url: true)
    end
  end
    
          def css # custom css
        @css
      end
    
          def has_sidebar
        if @sidebar
          @sidebar.formatted_data.strip.empty? ? false : true
        else
          @sidebar = (@page.sidebar || false)
          !!@sidebar
        end
      end
    
        def self.teardown(&block)
      define_method(:teardown, &block)
    end
  end
  (
  class << klass;
    self
  end).send(:define_method, :name) { name.gsub(/\W/, '_') }
  $contexts << klass
  klass.class_eval &block
end
    
    context 'Precious::Views::Page' do
  setup do
    examples = testpath 'examples'
    @path    = File.join(examples, 'test.git')
    FileUtils.cp_r File.join(examples, 'empty.git'), @path, :remove_destination => true
    @wiki = Gollum::Wiki.new(@path)
  end
    
      base_path = wiki_options[:base_path]
    
    module Gollum
  VERSION = '4.1.4'
    
          # Remove page file dir prefix from upload path if necessary -- committer handles this itself
      dir      = wiki.per_page_uploads ? params[:upload_dest] : ::File.join([wiki.page_file_dir, 'uploads'].compact)
      ext      = ::File.extname(fullname)
      format   = ext.split('.').last || 'txt'
      filename = ::File.basename(fullname, ext)
      contents = ::File.read(tempfile)
      reponame = filename + '.' + format
    
        csr = OpenSSL::X509::Request.new
    csr.subject = OpenSSL::X509::Name.new([['CN', self.domain, OpenSSL::ASN1::UTF8STRING]])
    private_key = OpenSSL::PKey::RSA.new(self.key)
    csr.public_key = private_key.public_key
    csr.sign(private_key, OpenSSL::Digest::SHA256.new)
    logger.info 'Getting certificate for #{self.domain}'
    order.finalize(:csr => csr)
    
      expansion(:status) {
    {
      :status => o.status,
      :last_delivery_attempt => o.last_delivery_attempt ? o.last_delivery_attempt.to_f : nil,
      :held => o.held == 1 ? true : false,
      :hold_expiry => o.hold_expiry ? o.hold_expiry.to_f : nil
    }
  }
    
      before_action { @server = organization.servers.present.find_by_permalink!(params[:server_id]) }
  before_action { params[:id] && @http_endpoint = @server.http_endpoints.find_by_uuid!(params[:id]) }