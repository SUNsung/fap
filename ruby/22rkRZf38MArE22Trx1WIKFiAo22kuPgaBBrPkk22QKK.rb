
        
          def primary_group_lookup
    @primary_group_lookup ||= options[:primary_group_lookup] || PrimaryGroupLookup.new(user_ids)
  end
end

    
      context 'when plugin registered fallback locale' do
    before do
      DiscoursePluginRegistry.register_locale('es_MX', fallbackLocale: 'es')
      DiscoursePluginRegistry.register_locale('de_AT', fallbackLocale: 'de')
    end
    
            upload = Fabricate(:upload)
        settings.logo = upload
        settings.refresh!
        setting = settings.all_settings.last
    
          rounded_new_value = if new_value.is_a?(Integer)
        if new_value > 9
          digits = new_value.digits.reverse
          (digits[0] * 10 + digits[1]) * 10.pow(digits[2..-1].size)
        else
          new_value
        end
      else
        new_value.round(2)
      end
    
          it 'changes settings when difference is significant' do
        expect {
          update_settings
        }.to change { UserHistory.count }.by(6)
        expect(SiteSetting.topic_views_heat_high).to eq(10_000)
        expect(SiteSetting.topic_views_heat_medium).to eq(4000)
        expect(SiteSetting.topic_views_heat_low).to eq(2000)
        expect(SiteSetting.topic_post_like_heat_high).to eq(2.2)
        expect(SiteSetting.topic_post_like_heat_medium).to eq(1.07)
        expect(SiteSetting.topic_post_like_heat_low).to eq(0.55)
      end
    
        converted_text = replace_duplicate_links(text)
    converted_text = escape_special_characters(converted_text)
    converted_text = indent_with_non_breaking_spaces(converted_text)
    converted_text
  end
    
        describe '#provisioning_profiles_via_xcode_api' do
      it 'makes a call to the developer portal API' do
        profiles = subject.provisioning_profiles_via_xcode_api
        expect(profiles).to be_instance_of(Array)
        expect(profiles.sample.keys).to include('provisioningProfileId',
                                                'name',
                                                'status',
                                                'type',
                                                'distributionMethod',
                                                'proProPlatform',
                                                'version',
                                                'dateExpire',
                                                # 'managingApp', not all profiles have it
                                                'deviceIds',
                                                'appId',
                                                'certificateIds')
        expect(a_request(:post, /developerservices2.apple.com/)).to have_been_made
      end
    end
    
            # Stub Time.now to return current time on first call and 6 minutes later on second
        before { allow(Time).to receive(:now).and_return(time_now, (time_now + 60 * 6)) }
        it 'throws a UI error' do
          allow(fake_app).to receive(:latest_version).and_return(fake_version)
          allow(fake_version).to receive(:candidate_builds).and_return([])
          expect do
            review_submitter.wait_for_build(fake_app, '1.2.3')
          end.to raise_error(FastlaneCore::Interface::FastlaneError, 'Could not find any available candidate builds on App Store Connect to submit')
        end
      end
    
          def resolve_result_bundle_path(language, locale)
        Snapshot.cache[:result_bundle_path] = {}
        language_key = locale || language
    
            return parts
      end
    
        ARGS_MAP = {
      workspace: '-w',
      project: '-p',
      configuration: '-c',
      scheme: '-s',
      clean: '--clean',
      archive: '--archive',
      destination: '-d',
      embed: '-m',
      identity: '-i',
      sdk: '--sdk',
      ipa: '--ipa',
      xcconfig: '--xcconfig',
      xcargs: '--xcargs'
    }
    
      def auth_options
    { scope: resource_name, recall: '#{controller_path}#new' }
  end
    
      # Gets the actual resource stored in the instance variable
  def resource
    instance_variable_get(:'@#{resource_name}')
  end
    
          generate_helpers!(Devise::URL_HELPERS)
    
          klass.devise_modules.each do |mod|
        constant = const_get(mod.to_s.classify)
    
          module ClassMethods
        Devise::Models.config(self, :timeout_in)
      end
    end
  end
end

    
      def wrap_aes_socket(sock)
    if datastore['PAYLOAD'] !~ /java\// or (datastore['AESPassword'] || '') == ''
      return sock
    end
    
    
    {        This will not work on circa 2009 and older Debian-based Linux
        distributions (including Ubuntu) because they compile bash
        without the /dev/tcp feature.
      },
      'Author'        => 'hdm',
      'License'       => MSF_LICENSE,
      'Platform'      => 'unix',
      'Arch'          => ARCH_CMD,
      'Handler'       => Msf::Handler::ReverseTcp,
      'Session'       => Msf::Sessions::CommandShell,
      'PayloadType'   => 'cmd_bash',
      'RequiredCmd'   => 'bash-tcp',
      'Payload'       =>
        {
          'Offsets' => { },
          'Payload' => ''
        }
      ))
  end
    
    # Wrappers
require 'msf/core/encoded_payload'
    
      def initialize(info = {})
    super(
      update_info(
        info,
        'Name'            => 'LNK Code Execution Vulnerability',
        'Description'     => %q{
          This module exploits a vulnerability in the handling of Windows Shortcut files (.LNK)
          that contain a dynamic icon, loaded from a malicious DLL.
    }
    
        com_opts = {}
    com_opts[:net_clr] = 4.0 # Min .NET runtime to load into a PS session
    com_opts[:target] = datastore['OUTPUT_TARGET'] || session.sys.config.getenv('TEMP') + '\\#{ Rex::Text.rand_text_alpha(rand(8)+8) }.exe'
    com_opts[:payload] = payload_script #payload.encoded
    vprint_good com_opts[:payload].length.to_s
    
    desc 'copy dot files for deployment'
task :copydot, :source, :dest do |t, args|
  FileList['#{args.source}/**/.*'].exclude('**/.', '**/..', '**/.DS_Store', '**/._*').each do |file|
    cp_r file, file.gsub(/#{args.source}/, '#{args.dest}') unless File.directory?(file)
  end
end
    
        # Outputs a single category as an <a> link.
    #
    #  +category+ is a category string to format as an <a> link
    #
    # Returns string
    #
    def category_link(category)
      dir = @context.registers[:site].config['category_dir']
      '<a class='category' href='/#{dir}/#{category.to_url}/'>#{category}</a>'
    end
    
    Liquid::Template.register_tag('img', Jekyll::ImageTag)

    
      class IncludeArrayTag < Liquid::Tag
    Syntax = /(#{Liquid::QuotedFragment}+)/
    def initialize(tag_name, markup, tokens)
      if markup =~ Syntax
        @array_name = $1
      else
        raise SyntaxError.new('Error in tag 'include_array' - Valid syntax: include_array [array from _config.yml]')
      end
    
    
    
      class VideoTag < Liquid::Tag
    @video = nil
    @poster = ''
    @height = ''
    @width = ''
    
      it 'calls Hooks.commands_from' do
    expect(Tmuxinator::Hooks).to receive(:commands_from).
      with(kind_of(Tmuxinator::Project), hook_name).once
    project.send('hook_#{hook_name}')
  end
    
        context 'when the file doesn't exist' do
      before do
        allow(File).to receive(:exist?).with(local_default) { false }
        allow(File).to receive(:exist?).with(proj_default) { false }
      end