
        
              # `Site#documents` cannot be memoized so that `Site#docs_to_write` can access the
      # latest state of the attribute.
      #
      # Since this method will be called after `Site#pre_render` hook, the `Site#documents`
      # array shouldn't thereafter change and can therefore be safely memoized to prevent
      # additional computation of `Site#documents`.
      def documents
        @documents ||= @obj.documents
      end
    
                  'coderay'
            else
              @main_fallback_highlighter
            end
          end
        end
    
        build_phases = [:reset, :read, :generate, :render, :cleanup, :write]
    safe_mode    = false
    
    CONTENT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
          def after_background(_background)
        @in_background = nil
      end
    
    module Jekyll
  module Commands
    class NewTheme < Jekyll::Command
      class << self
        def init_with_program(prog)
          prog.command(:'new-theme') do |c|
            c.syntax 'new-theme NAME'
            c.description 'Creates a new Jekyll theme scaffold'
            c.option 'code_of_conduct', \
                     '-c', '--code-of-conduct', \
                     'Include a Code of Conduct. (defaults to false)'
    
      describe '#scenario_label' do
    it 'creates a scenario label with the scenario name' do
      expect(scenario_label(scenario)).to eq(
        '<span class='label scenario' style='color:#AAAAAA;background-color:#000000'>Scene</span>'
      )
    end
    
            end
        it 'restarts dead workers' do
          stub.instance_of(HuginnScheduler).thread { OpenStruct.new(alive?: false) }
          mock.instance_of(HuginnScheduler).run!
          @agent_runner.send(:restart_dead_workers)
        end
      end
    end
  end
    
      describe 'migrating an actual agent' do
    before do
      valid_params = {
                        'auth_token' => 'token',
                        'room_name' => 'test',
                        'room_name_path' => '',
                        'username' => 'Huginn',
                        'username_path' => '$.username',
                        'message' => 'Hello from Huginn!',
                        'message_path' => '$.message',
                        'notify' => false,
                        'notify_path' => '',
                        'color' => 'yellow',
                        'color_path' => '',
                      }
    
        it 'should raise error when invalid response arrives' do
      stub(HTTParty).post { {'blah' => 'blah'} }
      expect { @checker.send_notification({}) }.to raise_error(StandardError, /Invalid response from Boxcar:/)
    end
    
          context 'arrays' do
        it 'does not write a header' do
          @checker.options['with_header'] = 'false'
          event = Event.new(payload: { 'data' => ['value1', 'value2'] })
          event2 = Event.new(payload: { 'data' => ['value3', 'value4'] })
          expect { @checker.receive([event, event2])}.to change(Event, :count).by(1)
          expect(Event.last.payload).to eq('data' => '\'value1\',\'value2\'\n\'value3\',\'value4\'\n')
        end
    
        desc 'Get the text for a specific license' do
      detail 'This feature was introduced in GitLab 8.7.'
      success ::API::Entities::License
    end
    params do
      requires :name, type: String, desc: 'The name of the template'
    end
    get 'templates/licenses/:name', requirements: { name: /[\w\.-]+/ } do
      template = TemplateFinder.build(:licenses, nil, name: params[:name]).execute
    
        AES256_GCM_OPTIONS = {
      algorithm: 'aes-256-gcm',
      key: Settings.attr_encrypted_db_key_base_32,
      iv: Settings.attr_encrypted_db_key_base_12
    }.freeze
    
          expect(diff_file.added_lines).to eq(stats_mock.additions)
      expect(diff_file.removed_lines).to eq(stats_mock.deletions)
    end
  end
    
            if key
          present key, with: Entities::SSHKey
        else
          not_found!('Deploy Key')
        end
      end
    
              def plist
          ^^^^^^^^^ Please set plist_options when using a formula-defined plist.
            <<~XML
              <?xml version='1.0' encoding='UTF-8'?>
              <!DOCTYPE plist PUBLIC '-//Apple Computer//DTD PLIST 1.0//EN' 'http://www.apple.com/DTDs/PropertyList-1.0.dtd'>
              <plist version='1.0'>
              <dict>
                <key>Label</key>
                <string>org.nrpe.agent</string>
              </dict>
              </plist>
            XML
          end
        end
      RUBY
    end
    
      def reason(reason)
    @formula.pour_bottle_check_unsatisfied_reason = reason
  end
    
        # rubocop:disable Naming/ConstantName
    # rubocop:disable Style/MutableConstant
    ::MacOS = self
    # rubocop:enable Naming/ConstantName
    # rubocop:enable Style/MutableConstant
    
        def fetch
      downloader.fetch
      @downloaded_path = downloader.cached_location
    rescue => e
      error = CaskError.new('Download failed on Cask '#{cask}' with message: #{e}')
      error.set_backtrace e.backtrace
      raise error
    end
    
      # Removes /s from resource names; this allows go package names
  # to be used as resource names without confusing software that
  # interacts with download_name, e.g. github.com/foo/bar
  def escaped_name
    name.tr('/', '-')
  end
    
          put :update, params: {
        user: {
          setting_boost_modal: '1',
          setting_delete_modal: '0',
        }
      }