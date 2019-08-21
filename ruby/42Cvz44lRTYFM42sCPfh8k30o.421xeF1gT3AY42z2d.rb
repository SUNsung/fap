
        
                # The token is only valid if:
        # 1. we have a date
        # 2. the current time does not pass the expiry period
        # 3. the record has a remember_created_at date
        # 4. the token date is bigger than the remember_created_at
        # 5. the token matches
        generated_at.is_a?(Time) &&
         (self.class.remember_for.ago < generated_at) &&
         (generated_at > (remember_created_at || Time.now).utc) &&
         Devise.secure_compare(rememberable_value, token)
      end
    
          module ClassMethods
        Devise::Models.config(self, :timeout_in)
      end
    end
  end
end

    
              # Exit immediately if there is nothing to watch
          if paths.empty?
            @env.ui.info(I18n.t('vagrant.rsync_auto_no_paths'))
            return 1
          end
    
              # Create a temporary file to store the data so we can upload it.
          remote_file = File.join(guest_provisioning_path, filename)
          @machine.communicate.sudo(remove_command(remote_file), error_check: false)
          Tempfile.open('vagrant-chef-provisioner-config') do |f|
            f.binmode
            f.write(config_file)
            f.fsync
            f.close
            @machine.communicate.upload(f.path, remote_file)
          end
        end
    
    require Vagrant.source_root.join('plugins/provisioners/chef/cap/freebsd/chef_installed')
    
        it 'returns false if not installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(false)
      expect(subject.chef_installed(machine, 'chef_solo', version)).to be_falsey
    end
  end
end

    
      describe '#primary_machine_name' do
    it 'returns the default name when single-VM' do
      configure { |config| }
    
          with_temp_env('VAGRANT_DEFAULT_PROVIDER' => nil,
                    'VAGRANT_PREFERRED_PROVIDERS' => nil) do
        expect(subject.default_provider).to eq(:foo)
      end
    end
    
                expect(action_runner).to receive(:run).with(any_args) { |action, opts|
              expect(opts[:box_url]).to eq(box.metadata_url)
              expect(opts[:box_provider]).to eq('virtualbox')
              expect(opts[:box_version]).to eq('1.1')
              expect(opts[:ui]).to equal(machine.ui)
              true
            }
    
    def source_version
  @source_version ||= File.read(File.expand_path('../VERSION', __FILE__)).strip
end
    
      <script type='text/javascript'>
  //<!--
  function toggle(id) {
    var pre  = document.getElementById('pre-' + id);
    var post = document.getElementById('post-' + id);
    var context = document.getElementById('context-' + id);
    }
    
            elsif masked_token?(token)
          token = unmask_token(token)
    
          def redirect(env)
        request = Request.new(env)
        warn env, 'attack prevented by #{self.class}'
        [302, {'Content-Type' => 'text/html', 'Location' => request.path}, []]
      end
    
    module Rack
  module Protection
    ##
    # Prevented attack::   CSRF
    # Supported browsers:: all
    # More infos::         http://flask.pocoo.org/docs/0.10/security/#json-security
    #                      http://haacked.com/archive/2008/11/20/anatomy-of-a-subtle-json-vulnerability.aspx
    #
    # JSON GET APIs are vulnerable to being embedded as JavaScript when the
    # Array prototype has been patched to track data. Checks the referrer
    # even on GET requests if the content type is JSON.
    #
    # If request includes Origin HTTP header, defers to HttpOrigin to determine
    # if the request is safe. Please refer to the documentation for more info.
    #
    # The `:allow_if` option can be set to a proc to use custom allow/deny logic.
    class JsonCsrf < Base
      default_options :allow_if => nil
    
      it 'should remove all but last Sidekiq::DeadSet.max_jobs-1 jobs' do
    Sidekiq::DeadSet.stub(:max_jobs, 3) do
      dead_set.kill(Sidekiq.dump_json(jid: '000101', class: 'MyWorker1', args: []))
      dead_set.kill(Sidekiq.dump_json(jid: '000102', class: 'MyWorker2', args: []))
      dead_set.kill(Sidekiq.dump_json(jid: '000103', class: 'MyWorker3', args: []))
    end
    
        it 'logs the exception to Sidekiq.logger' do
      Component.new.invoke_exception(:a => 1)
      @str_logger.rewind
      log = @str_logger.readlines
      assert_match(/'a':1/, log[0], 'didn't include the context')
      assert_match(/Something didn't work!/, log[1], 'didn't include the exception message')
      assert_match(/test\/test_exception_handler.rb/, log[2], 'didn't include the backtrace')
    end
    
          assert Sidekiq::Client.push_bulk('class' => SomeScheduledWorker, 'args' => [['mike'], ['mike']], 'at' => 600)
      assert_equal 5, ss.size
    
    Sidekiq::Extensions.enable_delay!

    
      <form method='post' action='/msg'>
    <input type='text' name='msg'>
    <input type='submit' value='Add Message'>
  </form>
    
        def tmux_pre_window_command
      _send_target(project.pre_window.shellescape) if project.pre_window
    end
    
    describe Tmuxinator::Doctor do
  describe '.installed?' do
    context 'tmux is installed' do
      before do
        allow(Kernel).to receive(:system) { true }
      end