
        
            def initialize(analytics_ingester_client: AnalyticsIngesterClient.new(GA_TRACKING))
      require 'securerandom'
      @session_id = SecureRandom.uuid
      @client = analytics_ingester_client
      @threads = []
      @launch_event_sent = false
    end
    
        def rescue_connection_failed_error(e)
      if e.message.include?('Connection reset by peer - SSL_connect')
        handle_tls_error!(e)
      else
        handle_unknown_error!(e)
      end
    end
    
          it 'handles the extensions parameter with no elements correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', extensions: [])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}'')
      end
    
          it 'passes the deprecated pathspec parameter to path parameter' do
        with_verbose(true) do
          allow(Fastlane::Actions).to receive(:sh).with(anything, { log: true }).and_return('')
          result = Fastlane::FastFile.new.parse('lane :test do
            git_add(pathspec: 'myfile.txt')
          end').runner.execute(:test)
        end
      end
    
    # Here be monkey patches
    
          describe 'Use a valid Configuration Manager' do
        before do
          @options = [
            FastlaneCore::ConfigItem.new(key: :cert_name,
                                    env_name: 'SIGH_PROVISIONING_PROFILE_NAME',
                                 description: 'Set the profile name',
                               default_value: 'production_default',
                                verify_block: nil),
            FastlaneCore::ConfigItem.new(key: :output,
                                    env_name: 'SIGH_OUTPUT_PATH',
                                 description: 'Directory in which the profile should be stored',
                               default_value: '.',
                                verify_block: proc do |value|
                                  UI.user_error!('Could not find output directory '#{value}'') unless File.exist?(value)
                                end),
            FastlaneCore::ConfigItem.new(key: :wait_processing_interval,
                                short_option: '-k',
                                    env_name: 'PILOT_WAIT_PROCESSING_INTERVAL',
                                 description: 'Interval in seconds to wait for App Store Connect processing',
                               default_value: 30,
                                        type: Integer,
                                verify_block: proc do |value|
                                  UI.user_error!('Please enter a valid positive number of seconds') unless value.to_i > 0
                                end)
          ]
          @values = {
            cert_name: 'asdf',
            output: '..',
            wait_processing_interval: 10
          }
          @config = FastlaneCore::Configuration.create(@options, @values)
        end
    
      it 'should allow changing the protection settings' do
    mock_app do
      use Rack::Protection::ContentSecurityPolicy, :default_src => 'none', :script_src => 'https://cdn.mybank.net', :style_src => 'https://cdn.mybank.net', :img_src => 'https://cdn.mybank.net', :connect_src => 'https://api.mybank.com', :frame_src => 'self', :font_src => 'https://cdn.mybank.net', :object_src => 'https://cdn.mybank.net', :media_src => 'https://cdn.mybank.net', :report_uri => '/my_amazing_csp_report_parser', :sandbox => 'allow-scripts'
    
      def send_sinatra_file(path, &missing_file_block)
    file_path = File.join(File.dirname(__FILE__), 'public',  path)
    file_path = File.join(file_path, 'index.html') unless file_path =~ /\.[a-z]+$/i
    File.exist?(file_path) ? send_file(file_path) : missing_file_block.call
  end
    
    module Jekyll
    
            Dir.chdir(includes_dir) do
          choices = Dir['**/*'].reject { |x| File.symlink?(x) }
          if choices.include?(file)
            source = File.read(file)
            partial = Liquid::Template.parse(source)
            context.stack do
              rtn = rtn + partial.render(context)
            end
          else
            rtn = rtn + 'Included file '#{file}' not found in _includes directory'
          end
        end
      end
      rtn
    end
  end
    
    
module OctopressLiquidFilters