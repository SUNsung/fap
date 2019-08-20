
        
                machine.communicate.sudo(build_rsync_chown(opts))
      end
    
        let(:cmd) { 'find /vagrant -path /vagrant/.vagrant -prune -o '!' -type l -a '(' ! -user vagrant -or ! -group vagrant ')' -exec chown vagrant:vagrant '{}' +' }
    
    # Create a temporary directory where test vagrant will run. The reason we save
# this to a constant is so we can clean it up later.
VAGRANT_TEST_CWD = Dir.mktmpdir('vagrant-test-cwd')
    
      before do
    allow(machine).to receive(:communicate).and_return(communicator)
  end
    
        it 'has the valid configuration' do
      expect(subject.config.vm.box).to eq('foo')
    end
    
            def build(dir, **opts, &block)
          name = machine.name.to_s
          @logger.debug('Applying build for `#{name}` using `#{dir}` directory.')
          begin
            update_composition do |composition|
              services = composition['services'] ||= {}
              services[name] ||= {}
              services[name]['build'] = {'context' => dir}
              # Extract custom dockerfile location if set
              if opts[:extra_args] && opts[:extra_args].include?('--file')
                services[name]['build']['dockerfile'] = opts[:extra_args][opts[:extra_args].index('--file') + 1]
              end
              # Extract any build args that can be found
              case opts[:build_args]
              when Array
                if opts[:build_args].include?('--build-arg')
                  idx = 0
                  build_args = {}
                  while(idx < opts[:build_args].size)
                    arg_value = opts[:build_args][idx]
                    idx += 1
                    if arg_value.start_with?('--build-arg')
                      if !arg_value.include?('=')
                        arg_value = opts[:build_args][idx]
                        idx += 1
                      end
                      key, val = arg_value.to_s.split('=', 2).to_s.split('=')
                      build_args[key] = val
                    end
                  end
                end
              when Hash
                services[name]['build']['args'] = opts[:build_args]
              end
            end
          rescue => error
            @logger.error('Failed to apply build using `#{dir}` directory: #{error.class} - #{error}')
            update_composition do |composition|
              composition['services'].delete(name)
            end
            raise
          end
        end
    
        it 'returns an array of all known containers' do
      expect(subject).to receive(:execute).with('/sbin/ip', '-4', 'addr', 'show', 'scope', 'global', 'docker0')
      expect(subject.docker_bridge_ip).to eq('123.456.789.012')
    end
  end
end

    
      before { allow(controller).to receive(:doorkeeper_token) { token } }
    
      def inboxes
    return @inboxes if defined?(@inboxes)
    
      sidekiq_options queue: 'push'
    
      sidekiq_options queue: 'push'
    
          expect(response).to redirect_to(settings_preferences_other_path)
      user.reload
      expect(user.locale).to eq 'en'
      expect(user.chosen_languages).to eq ['es', 'fr']
    end
    
        # Register a new view key with the view factory
    #
    # eg:
    #
    #   factory = AbstractViewFactory.new
    #   factory.register my_view: SomeViewClass
    #
    # You can setup many at the same time:
    #
    #   factory.register  my_view: SomeClass,
    #                     another_view: OtherViewClass
    #
    def register(view_hash)
      self.class.register view_hash
    end
    
          # Override the default to_s to include a closing form tag
      def to_s
        content + closing_form_tag
      end
    
          def build(label_text = '')
        label do
          input type: 'checkbox', id: 'collection_selection_toggle_all', name: 'collection_selection_toggle_all', class: 'toggle_all'
          text_node label_text if label_text.present?
        end
      end
    end
    
    # Add a setting to the application to configure the ability
ActiveAdmin::Application.inheritable_setting :cancan_ability_class, 'Ability'
    
      class DynamicSetting
    def self.build(setting, type)
      (type ? klass(type) : self).new(setting)
    end