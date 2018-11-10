
        
            # Get rid of any info 'dir' files, so they don't conflict at the link stage
    info_dir_file = @f.info + 'dir'
    if info_dir_file.file? && !@f.skip_clean?(info_dir_file)
      observe_file_removal info_dir_file
    end
    
            if Pathname::BOTTLE_EXTNAME_RX === file.to_s
          version = bottle_resolve_version(file) rescue file.version
        else
          version = file.version
        end
        next unless version
        next unless (name = file.basename.to_s[/(.*)-(?:#{Regexp.escape(version)})/, 1])
    
          # Find commands in the path
      unless (exts = external_commands).empty?
        puts
        puts 'External commands'
        puts_columns exts
      end
    end
  end
    
          return_val = nil
    
        def run(action_named: nil, action_class_ref: nil, parameter_map: nil)
      action_return = runner.execute_action(action_named, action_class_ref, [parameter_map], custom_dir: '.')
      return action_return
    end
    
    require_relative '../env'
require_relative '../globals'
require_relative '../analytics/action_completion_context'
require_relative '../analytics/action_launch_context'
require_relative 'errors'
    
          it 'adds install_docset param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            install_docset: true
          )
        end').runner.execute(:test)
    
          it 'handles the extensions parameter with no elements correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', extensions: [])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}'')
      end
    
          it 'generates the correct git command with a shell-escaped message' do
        message = 'message with 'quotes' (and parens)'
        result = Fastlane::FastFile.new.parse('lane :test do
          git_commit(path: './fastlane/README.md', message: \'#{message}\')
        end').runner.execute(:test)
        expect(result).to eq('git commit -m #{message.shellescape} ./fastlane/README.md')
      end
    end
  end
end

    
            it 'can push and pop configuration values' do
          name = FastlaneCore::ConfigItem.new(key: :name)
          platform = FastlaneCore::ConfigItem.new(key: :platform)
          other = FastlaneCore::ConfigItem.new(key: :other)
    
        os = 'other'
    shellescape_testcases.each do |testcase|
      it testcase['it'] + ': ' + testcase['it_result'][os] do
        str = testcase['str'].to_s
        expect_correct_implementation_to_be_called(str, :shellescape, os)
        escaped = str.shellescape
        expect(escaped).to eq(testcase['expect'][os])
      end
    end
  end
end
    
            # this command is also sent on macOS Sierra and we need to allow it or else the test will fail
        allowed_command = 'security set-key-partition-list -S apple-tool:,apple: -k #{''.shellescape} #{Dir.home}/Library/Keychains/login.keychain-db &> /dev/null'
    
    Given(/^I make (\d+) deployments$/) do |count|
  step 'all linked files exists in shared path'
    
        def print_config_variables
      ['--print-config-variables', '-p',
       'Display the defined config variables before starting the deployment tasks.',
       lambda do |_value|
         Configuration.env.set(:print_config_variables, true)
       end]
    end
  end
end

    
          # Parse through mail to get the from/sender headers
      mail = Mail.new(raw_message.split('\r\n\r\n', 2).first)
      from_headers = {'from' => mail.from, 'sender' => mail.sender}
      authenticated_domain = identity.server.find_authenticated_domain_from_headers(from_headers)
    
      before_action { @server = organization.servers.present.find_by_permalink!(params[:server_id]) }
  before_action { params[:id] && @address_endpoint = @server.address_endpoints.find_by_uuid!(params[:id]) }
    
      def update
    if @ip_address.update(safe_params)
      redirect_to_with_json [:edit, @ip_pool]
    else
      render_form_errors 'edit', @ip_address
    end
  end
    
      class TimeUndetermined < Postal::Error; end
    
      def ip
    render :plain => 'ip: #{request.ip} remote ip: #{request.remote_ip}'
  end
    
      def index
    @track_domains = @server.track_domains.order(:name).to_a
  end
    
      def update
    @organization_user = organization.user_assignment(@user)
    if @organization_user.update(params.require(:organization_user).permit(:admin))
      redirect_to_with_json [organization, :users], :notice => 'Permissions for #{@organization_user.user.name} have been updated successfully.'
    else
      render_form_errors 'edit', @organization_user
    end
  end
    
          # $TMUXINATOR_CONFIG (and create directory) or ''.
      def environment
        environment = ENV['TMUXINATOR_CONFIG']
        return '' if environment.to_s.empty? # variable is unset (nil) or blank
        FileUtils::mkdir_p(environment) unless File.directory?(environment)
        environment
      end
    
          it 'returns false' do
        expect(Tmuxinator::Doctor.installed?).to be_falsey
      end
    end
  end
    
      it { expect(instance).to respond_to :wemux? }
  it { expect(instance).to respond_to :load_wemux_overrides }