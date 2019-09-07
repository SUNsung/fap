
        
            def to_xml(options = {})
      { a: 'b' }.to_xml(options)
    end
  end
    
            def ==(type)
          @symbol == type.to_sym unless type.blank?
        end
      end
    
    # Sample contents
WITHOUT_LIQUID = <<-TEXT.freeze
Lorem ipsum dolor sit amet, consectetur adipiscing elit. Fusce auctor libero at
pharetra tempus. Etiam bibendum magna et metus fermentum, eu cursus lorem
mattis. Curabitur vel dui et lacus rutrum suscipit et eget neque.
    
          #
    
              theme.create!
          Jekyll.logger.info 'Your new Jekyll theme, #{theme.name.cyan},' \
                             ' is ready for you in #{theme.path.to_s.cyan}!'
          Jekyll.logger.info 'For help getting started, read #{theme.path}/README.md.'
        end
        # rubocop:enable Metrics/AbcSize
      end
    end
  end
end

    
            # Non Localised
        FastlaneCore::ConfigItem.new(key: :app_icon,
                                     description: 'Metadata: The path to the app icon',
                                     optional: true,
                                     short_option: '-l',
                                     verify_block: proc do |value|
                                       UI.user_error!('Could not find png file at path '#{File.expand_path(value)}'') unless File.exist?(value)
                                       UI.user_error!(''#{value}' doesn't seem to be one of the supported files. supported: #{Deliver::UploadAssets::SUPPORTED_ICON_EXTENSIONS.join(',')}') unless Deliver::UploadAssets::SUPPORTED_ICON_EXTENSIONS.include?(File.extname(value).downcase)
                                     end),
        FastlaneCore::ConfigItem.new(key: :apple_watch_app_icon,
                                     description: 'Metadata: The path to the Apple Watch app icon',
                                     optional: true,
                                     short_option: '-q',
                                     verify_block: proc do |value|
                                       UI.user_error!('Could not find png file at path '#{File.expand_path(value)}'') unless File.exist?(value)
                                       UI.user_error!(''#{value}' doesn't seem to be one of the supported files. supported: #{Deliver::UploadAssets::SUPPORTED_ICON_EXTENSIONS.join(',')}') unless Deliver::UploadAssets::SUPPORTED_ICON_EXTENSIONS.include?(File.extname(value).downcase)
                                     end),
        FastlaneCore::ConfigItem.new(key: :copyright,
                                     description: 'Metadata: The copyright notice',
                                     optional: true,
                                     is_string: true),
        FastlaneCore::ConfigItem.new(key: :primary_category,
                                     description: 'Metadata: The english name of the primary category (e.g. `Business`, `Books`)',
                                     optional: true,
                                     is_string: true),
        FastlaneCore::ConfigItem.new(key: :secondary_category,
                                     description: 'Metadata: The english name of the secondary category (e.g. `Business`, `Books`)',
                                     optional: true,
                                     is_string: true),
        FastlaneCore::ConfigItem.new(key: :primary_first_sub_category,
                                     description: 'Metadata: The english name of the primary first sub category (e.g. `Educational`, `Puzzle`)',
                                     optional: true,
                                     is_string: true),
        FastlaneCore::ConfigItem.new(key: :primary_second_sub_category,
                                     description: 'Metadata: The english name of the primary second sub category (e.g. `Educational`, `Puzzle`)',
                                     optional: true,
                                     is_string: true),
        FastlaneCore::ConfigItem.new(key: :secondary_first_sub_category,
                                     description: 'Metadata: The english name of the secondary first sub category (e.g. `Educational`, `Puzzle`)',
                                     optional: true,
                                     is_string: true),
        FastlaneCore::ConfigItem.new(key: :secondary_second_sub_category,
                                     description: 'Metadata: The english name of the secondary second sub category (e.g. `Educational`, `Puzzle`)',
                                     optional: true,
                                     is_string: true),
        FastlaneCore::ConfigItem.new(key: :trade_representative_contact_information,
                                     description: 'Metadata: A hash containing the trade representative contact information',
                                     optional: true,
                                     is_string: false,
                                     type: Hash),
        FastlaneCore::ConfigItem.new(key: :app_review_information,
                                     description: 'Metadata: A hash containing the review information',
                                     optional: true,
                                     is_string: false,
                                     type: Hash),
        FastlaneCore::ConfigItem.new(key: :app_review_attachment_file,
                                     description: 'Metadata: Path to the app review attachment file',
                                     optional: true,
                                     is_string: true),
        # Localised
        FastlaneCore::ConfigItem.new(key: :description,
                                     description: 'Metadata: The localised app description',
                                     optional: true,
                                     is_string: false),
        FastlaneCore::ConfigItem.new(key: :name,
                                     description: 'Metadata: The localised app name',
                                     optional: true,
                                     is_string: false),
        FastlaneCore::ConfigItem.new(key: :subtitle,
                                     description: 'Metadata: The localised app subtitle',
                                     optional: true,
                                     is_string: false,
                                     type: Hash,
                                     verify_block: proc do |value|
                                       UI.user_error!(':subtitle must be a hash, with the language being the key') unless value.kind_of?(Hash)
                                     end),
        FastlaneCore::ConfigItem.new(key: :keywords,
                                     description: 'Metadata: An array of localised keywords',
                                     optional: true,
                                     is_string: false,
                                     type: Hash,
                                     verify_block: proc do |value|
                                       UI.user_error!(':keywords must be a hash, with the language being the key') unless value.kind_of?(Hash)
                                       value.each do |language, keywords|
                                         # Auto-convert array to string
                                         keywords = keywords.join(', ') if keywords.kind_of?(Array)
                                         value[language] = keywords
    
        # Make sure to call `load_from_filesystem` before calling upload
    def upload(options)
      return if options[:skip_metadata]
      # it is not possible to create new languages, because
      # :keywords is not write-able on published versions
      # therefore skip it.
      verify_available_languages!(options) unless options[:edit_live]
    
          def update_podspec(version = nil)
        new_version = version || @version_value
        updated_podspec_content = @podspec_content.gsub(@version_regex, '#{@version_match[:begin]}#{new_version}#{@version_match[:end]}')
    
            options = []
        options += project_path_array
        options << '-sdk '#{config[:sdk]}'' if config[:sdk]
        options << '-derivedDataPath '#{derived_data_path}''
        options << '-resultBundlePath '#{result_bundle_path}'' if result_bundle_path
        options << config[:xcargs] if config[:xcargs]
        return options
      end
    
            device = find_device(device_name, os_version)
        if device.nil?
          UI.user_error!('No device found named '#{device_name}' for version '#{os_version}'')
        elsif device.os_version != os_version
          UI.important('Using device named '#{device_name}' with version '#{device.os_version}' because no match was found for version '#{os_version}'')
        end
        value = 'platform=#{os} Simulator,id=#{device.udid},OS=#{device.os_version}'
    
      subject(:all_watches) { Spaceship::Device.all_watches }
  it 'successfully loads and parses all Watches' do
    expect(all_watches.count).to eq(1)
    device = all_watches.first
    expect(device.id).to eq('FFFFFFFFFF')
    expect(device.name).to eq('Tracy\'s Watch')
    expect(device.udid).to eq('8defe35b2cad44aff7d8e9dfe4ca4d2fb94ae509')
    expect(device.platform).to eq('ios')
    expect(device.status).to eq('c')
    expect(device.model).to eq('Apple Watch 38mm')
    expect(device.device_type).to eq('watch')
  end
    
          def self.find_ipa_file(dir)
        # Finds last modified .ipa in the destination directory
        Dir[File.join(dir, '*.ipa')].sort { |a, b| File.mtime(b) <=> File.mtime(a) }.first
      end
    
            UI.message('Setting Provisioning Profile type to '#{profile_type}'')
    
          #####################################################
      # @!group Documentation
      #####################################################
    
              Fastlane::FastFile.new.parse('lane :test do
            get_managed_play_store_publishing_rights(
              json_key: '#{json_key_path}'
            )
          end').runner.execute(:test)
        end
    
      describe '#old_identifier' do
    let(:source) do
      'alias foo bar'
    end
    
      describe '.new' do
    let(:source) do
      'class Foo; end'
    end
    
          def process_args(args)
        # If there is a trailing hash arg without explicit braces, like this:
        #
        #    method(1, 'key1' => value1, 'key2' => value2)
        #
        # ...then each key/value pair is treated as a method 'argument'
        # when determining where line breaks should appear.
        if (last_arg = args.last)
          if last_arg.hash_type? && !last_arg.braces?
            args = args.concat(args.pop.children)
          end
        end
        args
      end
    
    RSpec.describe RuboCop::AST::IfNode do
  let(:if_node) { parse_source(source).ast }
    
        def self.cache_root(config_store)
      root = config_store.for('.').for_all_cops['CacheRootDirectory']
      root ||= if ENV.key?('XDG_CACHE_HOME')
                 # Include user ID in the path to make sure the user has write
                 # access.
                 File.join(ENV['XDG_CACHE_HOME'], Process.uid.to_s)
               else
                 File.join(ENV['HOME'], '.cache')
               end
      File.join(root, 'rubocop_cache')
    end
    
      shared_examples 'registers an offense' do |klass|
    context 'target ruby version < 2.4', :ruby23 do
      context 'when #{klass}' do
        context 'without any decorations' do
          let(:source) { '1.is_a?(#{klass})' }
    
            def correct_style?(node)
          !contains_guard_clause?(node) ||
            next_line_rescue_or_ensure?(node) ||
            next_sibling_parent_empty_or_else?(node) ||
            next_sibling_empty_or_guard_clause?(node)
        end
    
        class SetWorker
      include Sidekiq::Worker
      sidekiq_options :queue => :foo, 'retry' => 12
    end
    
      it 'shuts down the system' do
    mgr = new_manager(options)
    mgr.stop(::Process.clock_gettime(::Process::CLOCK_MONOTONIC))
  end
    
      describe 'require/load sidekiq/testing/inline.rb' do
    before do
      require 'sidekiq/testing/inline'
    end
    
          it 'should have the correct description' do
        pending('Ruby 1.x and 2.0.x are unsupported for Snap because it lacks Psych::safe_load') if is_old_ruby
        insist { input.description } == original.description
      end
    
      config.vm.define 'debian7' do |debian7|
    debian7.vm.box = 'puppetlabs/centos-7.0-64-puppet'
  end
    
    # Set some attributes
package.name = 'my-service'
package.version = '1.0'
    
      option '--zonetype', 'ZONETYPE',
    'Set the allowed zone types (global, nonglobal, both)',
    :default => 'value=global value=nonglobal' do |value|
      case @value
      when 'both'
        value = 'value=global value=nonglobal'
      else
        value = 'value=#{value}'
      end
    end # value
    
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