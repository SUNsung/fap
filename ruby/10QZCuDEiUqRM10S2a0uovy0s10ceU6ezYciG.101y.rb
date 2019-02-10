
        
          it 'requires a URL or file uplaod' do
    visit new_scenario_imports_path
    click_on 'Start Import'
    expect(page).to have_text('Please provide either a Scenario JSON File or a Public Scenario URL.')
  end
    
            # Fix the order of receivers
        @agents.each do |agent|
          stub.proxy(agent).receivers { |orig| orig.order(:id) }
        end
      end
    
              expect(weather_agent_diff.name.current).to eq(agents(:bob_weather_agent).name)
          expect(weather_agent_diff.name.incoming).to eq(valid_parsed_weather_agent_data[:name])
          expect(weather_agent_diff.name.updated).to eq('a new name')
    
        it 'outputs control links to agents within the incoming set, but not outside it' do
      agents(:jane_rain_notifier_agent).control_targets = [agents(:jane_weather_agent), agents(:jane_basecamp_agent)]
      agents(:jane_rain_notifier_agent).save!
    
        it 'should generate the correct last checkpoint url' do
      @checker.options['path'] = 'last_checkpoint/usps/9361289878905919630610'
      expect(@checker.send(:event_url)).to eq('https://api.aftership.com/v4/last_checkpoint/usps/9361289878905919630610')
    end
  end
    
      #
  # Flushes all header pairs.
  #
  def reset
    self.cmd_string = ''
    self.clear
    self.dcase_hash.clear
  end
    
              # Rex::Proto::Kerberos::Model::ApReq decoding isn't supported
          #
          # @raise [NotImplementedError]
          def decode(input)
            raise ::NotImplementedError, 'AP-REQ decoding not supported'
          end
    
              # Encodes the type field
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_type
            bn = OpenSSL::BN.new(type.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
                int
          end
    
        it 'generates a jasmine fixture', fixture: true do
      session[:mobile_view] = true
      get :new, format: :mobile
      save_fixture(html_for('body'), 'conversations_new_mobile')
    end
  end
end

    
      describe '#new' do
    before do
      sign_in alice, scope: :user
    end
    
      describe '#index' do
    context 'with a private post' do
      before do
        @alices_aspect = alice.aspects.where(name: 'generic').first
        @post = alice.post(:status_message, text: 'hey', to: @alices_aspect.id)
      end
    
    if $0 == __FILE__
  begin
    LogStash::PluginManager::Main.run('bin/logstash-plugin', ARGV)
  rescue LogStash::PluginManager::Error => e
    $stderr.puts(e.message)
    exit(1)
  end
end

    
    module LogStash module PluginManager module PackFetchStrategy
  class Repository
    DEFAULT_PACK_URL = 'https://artifacts.elastic.co/downloads/logstash-plugins'
    PACK_EXTENSION = 'zip'
    
        private
    def uncompress(source)
      temporary_directory = Stud::Temporary.pathname
      LogStash::Util::Zip.extract(source, temporary_directory, LOGSTASH_PATTERN_RE)
      temporary_directory
    rescue Zip::Error => e
      # OK Zip's handling of file is bit weird, if the file exist but is not a valid zip, it will raise
      # a `Zip::Error` exception with a file not found message...
      raise InvalidPackError, 'Cannot uncompress the zip: #{source}'
    end
    
        desc 'Generate a valid ssh-config'
    task :ssh_config do
      require 'json'
      # Loop until the Vagrant box finishes SSH bootstrap
      raw_ssh_config = Stud.try(50.times, LogStash::CommandExecutor::CommandError) do
          LogStash::VagrantHelpers.fetch_config.stdout.split('\n');
      end
      parsed_ssh_config = LogStash::VagrantHelpers.parse(raw_ssh_config)
      File.write('.vm_ssh_config', parsed_ssh_config.to_json)
    end
    
          it 'list the plugins with their versions' do
        result = logstash.run_command_in_path('bin/logstash-plugin list --verbose')
        result.stdout.split('\n').each do |plugin|
          expect(plugin).to match(/^logstash-\w+-\w+\s\(\d+\.\d+.\d+(.\w+)?\)/)
        end
      end
    end
    
        context 'update all the plugins' do
      it 'has executed successfully' do
        logstash.run_command_in_path('bin/logstash-plugin update --no-verify')
        expect(logstash).to have_installed?(plugin_name, '0.1.1')
      end
    end
  end
end

    
    
  # Adds some extra filters used during the category creation process.
  module Filters
    
          if File.symlink?(includes_dir)
        return 'Includes directory '#{includes_dir}' cannot be a symlink'
      end