
        
        class BugTest < Minitest::Test
  def test_stuff
    assert 'zomg'.present?
    refute ''.present?
  end
end

    
          def test_invert_drop_join_table
        block = Proc.new { }
        create_join_table = @recorder.inverse_of :drop_join_table, [:musics, :artists, table_name: :catalog], &block
        assert_equal [:create_join_table, [:musics, :artists, table_name: :catalog], block], create_join_table
      end
    
          # 2FA: Request security code to trusted phone
      stub_request(:put, 'https://idmsa.apple.com/appleauth/auth/verify/phone').
        with(body: '{\'phoneNumber\':{\'id\':1},\'mode\':\'sms\'}').
        to_return(status: 200, body: '', headers: {})
    
            all_tvos = devices.map do |device|
          device = device.downcase
          device.include?('apple tv')
        end
        # Return true if all devices are iOS devices
        return true unless all_tvos.include?(false)
    
          def xcodebuild_log_path(device_type: nil, language: nil, locale: nil)
        name_components = [Snapshot.project.app_name, Snapshot.config[:scheme]]
    
              # It is valid to have the same name for multiple devices
          device = client.create_device!(name, udid, mac: mac)
    
              # Raise a custom exception, as the the normal one is useless for the user
          UI.user_error!('A build error occurred, this is usually related to code signing. Take a look at the error above')
        end
      end
    
          # Some providers have a lot (> 100) entries, which makes browsing them unwieldy.
      # Any present in the list below will have an extra set of types added, breaking the pages out into the different
      # products they offer.
      LARGE_PROVIDERS = {
        'aws'     => true,
        'azurerm' => true,
        'google'  => true,
      }
    
            at_css('h1').content = 'Apache Cordova' if root_page?
    
          def get_name
        name = context[:html_title]
        name.remove! 'SQLite Query Language: '
        name.remove! %r{\.\z}
        name = at_css('#document_title').content if name == 'No Title'
        name
      end
    
            def initialize(machine, config)
          super
    
    describe VagrantPlugins::Chef::Cap::FreeBSD::ChefInstalled do
  include_context 'unit'
    
            expect(box_collection).to receive(:add).with(any_args) { |path, name, version, **opts|
          expect(checksum(path)).to eq(checksum(box_path))
          expect(name).to eq('foo')
          expect(version).to eq('0')
          expect(opts[:metadata_url]).to be_nil
          true
        }.and_return(box)
    
    module VagrantPlugins
  module DockerProvider
    class Provider < Vagrant.plugin('2', :provider)
      @@host_vm_mutex = Mutex.new
    
          trigger = trigger_run.after_triggers.first
      shell_config = trigger.run_remote
      on_error = trigger.on_error
      exit_codes = trigger.exit_codes
    
        it 'searches current PATH if original PATH did not result in valid executable' do
      expect(Vagrant::Util::Which).to receive(:which).with('ssh', original_path: true).and_return(nil)
      expect(Vagrant::Util::Which).to receive(:which).with('ssh').and_return('valid-return')
      allow(Vagrant::Util::SafeExec).to receive(:exec).and_return(nil)
      described_class.exec(ssh_info)
    end
    
      if rss_url && rss_url.length > 0
    blogs.push(Struct::Blog.new(name, web_url, rss_url))
  else
    unavailable.push(Struct::Blog.new(name, web_url, rss_url))
  end
end
    
    module LogStash
  module PluginManager
  end
end
    
          explicit_plugins_specs = explicitly_declared_plugins_specs
    
              it 'successfully install the plugin' do
            command = logstash.run_command_in_path('bin/logstash-plugin install #{gem_path_on_vagrant}')
            expect(command).to install_successfully
            expect(logstash).to have_installed?('logstash-filter-dns')
          end
        end
    
        context 'without a specific plugin' do
      it 'display a list of plugins' do
        result = logstash.run_command_in_path('bin/logstash-plugin list')
        expect(result.stdout.split('\n').size).to be > 1
      end
    
        after :each do
      logstash.uninstall
    end
    
      def send_sinatra_file(path, &missing_file_block)
    file_path = File.join(File.dirname(__FILE__), 'public',  path)
    file_path = File.join(file_path, 'index.html') unless file_path =~ /\.[a-z]+$/i
    File.exist?(file_path) ? send_file(file_path) : missing_file_block.call
  end
    
    Liquid::Template.register_tag('blockquote', Jekyll::Blockquote)

    
      # Condenses multiple spaces and tabs into a single space
  def condense_spaces(input)
    input.gsub(/\s{2,}/, ' ')
  end
    
      class RenderPartialTag < Liquid::Tag
    include OctopressFilters
    def initialize(tag_name, markup, tokens)
      @file = nil
      @raw = false
      if markup =~ /^(\S+)\s?(\w+)?/
        @file = $1.strip
        @raw = $2 == 'raw'
      end
      super
    end