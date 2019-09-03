
        
                def initialize(project, base_dir, extension, categories = {})
          @categories     = categories
          @extension      = extension
          @repository     = project.repository
          @commit         = @repository.head_commit if @repository.exists?
    
      def notification_service
    @notification_service ||= NotificationService.new
  end
end

    
        def search_filenames(query)
      repository.search_files_by_name(query, ref)
    end
  end
end

    
          include OmniAuth::Strategy
    
        before do
      entity.parent = group
    end
  end
end

    
            def diff_stats_collection
          strong_memoize(:diff_stats) do
            # There are scenarios where we don't need to request Diff Stats,
            # when caching for instance.
            next unless @include_stats
            next unless diff_refs
    
              if badge.valid?
            present_badges(source, badge, with: Entities::BasicBadgeDetails)
          else
            render_validation_error!(badge)
          end
        end
    
      #
  # Starts monitoring for an outbound connection to become established.
  #
  def start_handler
    
    puts 'size: #{output_data.length}'
add_dylib = 0x10000
padding = '\x00' * (add_dylib - output_data.length)
output_data = output_data + padding
    
      def initialize(info = {})
    super(update_info(info,
      'Name'           => 'WebKit not_number defineProperties UAF',
      'Description'    => %q{
          This module exploits a UAF vulnerability in WebKit's JavaScriptCore library.
      },
      'License'        => MSF_LICENSE,
      'Author'         => [
        'qwertyoruiop', # jbme.qwertyoruiop.com
        'siguza',       # PhoenixNonce
        'tihmstar',     # PhoenixNonce
        'benjamin-42',  # Trident
        'timwr',        # metasploit integration
        ],
      'References'     => [
          ['CVE', '2016-4655'],
          ['CVE', '2016-4656'],
          ['CVE', '2016-4657'],
          ['BID', '92651'],
          ['BID', '92652'],
          ['BID', '92653'],
          ['URL', 'https://blog.lookout.com/trident-pegasus'],
          ['URL', 'https://citizenlab.ca/2016/08/million-dollar-dissident-iphone-zero-day-nso-group-uae/'],
          ['URL', 'https://www.blackhat.com/docs/eu-16/materials/eu-16-Bazaliy-Mobile-Espionage-in-the-Wild-Pegasus-and-Nation-State-Level-Attacks.pdf'],
          ['URL', 'https://github.com/Siguza/PhoenixNonce'],
          ['URL', 'https://jndok.github.io/2016/10/04/pegasus-writeup/'],
          ['URL', 'https://sektioneins.de/en/blog/16-09-02-pegasus-ios-kernel-vulnerability-explained.html'],
          ['URL', 'https://github.com/benjamin-42/Trident'],
          ['URL', 'http://blog.tihmstar.net/2018/01/modern-post-exploitation-techniques.html'],
        ],
      'Arch'           => ARCH_AARCH64,
      'Platform'       => 'apple_ios',
      'DefaultTarget'  => 0,
      'DefaultOptions' => { 'PAYLOAD' => 'apple_ios/aarch64/meterpreter_reverse_tcp' },
      'Targets'        => [[ 'Automatic', {} ]],
      'DisclosureDate' => 'Aug 25 2016'))
    register_options(
      [
        OptPort.new('SRVPORT', [ true, 'The local port to listen on.', 8080 ]),
        OptString.new('URIPATH', [ true, 'The URI to use for this exploit.', '/' ])
      ])
  end
    
      def get_data_service
    raise 'No registered data_service' unless @current_data_service
    return @current_data_service
  end
    
        when /osx|bsd/
      [
        '/Applications/Google Chrome.app',
        '/Applications/Firefox.app'
      ].each do |browser_path|
        if file?(browser_path)
          found_browser_path = browser_path
          break
        end
      end
    when /linux|unix/
      # Need to add support for Linux in the future.
      # But you see, the Linux meterpreter is so broken there is no point
      # to do it now. You can't test anyway.
    end
    
    require 'msf/core/auxiliary/report'
    
      print_status('Creating a temporary installation directory #{tempdir}...')
  client.fs.dir.mkdir(tempdir)
    
        private
    
      # Disable Rails's static asset server (Apache or nginx will already do this).
  if config.respond_to?(:serve_static_files)
    # rails >= 4.2
    config.serve_static_files = true
  elsif config.respond_to?(:serve_static_assets)
    # rails < 4.2
    config.serve_static_assets = true
  end
    
        def self.format_pipeline_events(stats)
      result = {}
      (stats || {}).each { |stage, counter| result[stage.to_s] = counter.value }
      result
    end
    
    class LogStash::PluginManager::Pack < LogStash::PluginManager::PackCommand
  option '--tgz', :flag, 'compress package as a tar.gz file', :default => !LogStash::Environment.win_platform?
  option '--zip', :flag, 'compress package as a zip file', :default => LogStash::Environment.win_platform?
  option '--[no-]clean', :flag, 'clean up the generated dump of plugins', :default => true
  option '--overwrite', :flag, 'Overwrite a previously generated package file', :default => false
    
      private
    
        LINUX_OS_RE = /linux/
    WINDOW_OS_RE = /mswin|msys|mingw|cygwin|bccwin|wince|emc/
    MACOS_OS_RE = /darwin/
    
        it 'find test jars in the default location' do
      expect(subject).to receive(:find_jars).with(default_test_location).and_return([])
      subject.load_test_jars!
    end
    
      def build_docker(oss = false)
    env = {
      'ARTIFACTS_DIR' => ::File.join(Dir.pwd, 'build'),
      'RELEASE' => ENV['RELEASE'],
      'VERSION_QUALIFIER' => VERSION_QUALIFIER
    }
    Dir.chdir('docker') do |dir|
      if oss
        system(env, 'make build-from-local-oss-artifacts')
      else
        system(env, 'make build-from-local-artifacts')
      end
    end
  end
    
        class Node < Treetop::Runtime::SyntaxNode
    include Helpers
    
          it 'returns true if the pipeline is a system pipeline' do
        expect(subject.system?).to be_truthy
      end
    end
    
    RSpec.describe RuboCop::AST::AliasNode do
  let(:alias_node) { parse_source(source).ast }
    
          it { expect(class_node.parent_class.const_type?).to be(true) }
    end
    
      describe '#if_branch' do
    context 'with an if statement' do
      let(:source) do
        ['if foo?',
         '  :foo',
         'else',
         '  42',
         'end'].join('\n')
      end
    
          # Checks whether this `block` literal belongs to a lambda.
      #
      # @return [Boolean] whether the `block` literal belongs to a lambda
      def lambda?
        send_node.method?(:lambda)
      end
    
      describe '#flare_tag' do
    it 'returns nil if there is no flare tag' do
      expect(described_class.new(article).tag).to be nil
    end
    
      describe 'DELETE blocks' do
    it 'updates block from input data' do
      block = create(:block, user_id: user.id, input_css: '.blue { color: blue;}')
      delete '/blocks/#{block.id}'
      expect(Block.all.size).to eq(0)
    end
  end
end

    
      describe 'DELETE /chat_channel_memberships/:id' do
    before do
      user.add_role(:super_admin)
      post '/chat_channel_memberships', params: {
        chat_channel_membership: { user_id: second_user.id, chat_channel_id: chat_channel.id }
      }
    end
    
      def self.send_to_buffer(text, buffer_profile_id_code)
    client = Buffer::Client.new(ApplicationConfig['BUFFER_ACCESS_TOKEN'])
    client.create_update(
      body: {
        text:
        text,
        profile_ids: [
          buffer_profile_id_code,
        ]
      },
    )
  end