
        
          def test_inspect_instance
    topic = topics(:first)
    assert_equal %(#<Topic id: 1, title: 'The First Topic', author_name: 'David', author_email_address: 'david@loudthinking.com', written_on: '#{topic.written_on.to_s(:db)}', bonus_time: '#{topic.bonus_time.to_s(:db)}', last_read: '#{topic.last_read.to_s(:db)}', content: 'Have a nice day', important: nil, approved: false, replies_count: 1, unique_replies_count: 0, parent_id: nil, parent_title: nil, type: nil, group: nil, created_at: '#{topic.created_at.to_s(:db)}', updated_at: '#{topic.updated_at.to_s(:db)}'>), topic.inspect
  end
    
            assert_equal <<~MESSAGE, run_rake_routes
                                         Prefix Verb   URI Pattern                                                                              Controller#Action
                                           cart GET    /cart(.:format)                                                                          cart#show
                  rails_mandrill_inbound_emails POST   /rails/action_mailbox/mandrill/inbound_emails(.:format)                                  action_mailbox/ingresses/mandrill/inbound_emails#create
                  rails_postmark_inbound_emails POST   /rails/action_mailbox/postmark/inbound_emails(.:format)                                  action_mailbox/ingresses/postmark/inbound_emails#create
                     rails_relay_inbound_emails POST   /rails/action_mailbox/relay/inbound_emails(.:format)                                     action_mailbox/ingresses/relay/inbound_emails#create
                  rails_sendgrid_inbound_emails POST   /rails/action_mailbox/sendgrid/inbound_emails(.:format)                                  action_mailbox/ingresses/sendgrid/inbound_emails#create
                   rails_mailgun_inbound_emails POST   /rails/action_mailbox/mailgun/inbound_emails/mime(.:format)                              action_mailbox/ingresses/mailgun/inbound_emails#create
                 rails_conductor_inbound_emails GET    /rails/conductor/action_mailbox/inbound_emails(.:format)                                 rails/conductor/action_mailbox/inbound_emails#index
                                                POST   /rails/conductor/action_mailbox/inbound_emails(.:format)                                 rails/conductor/action_mailbox/inbound_emails#create
              new_rails_conductor_inbound_email GET    /rails/conductor/action_mailbox/inbound_emails/new(.:format)                             rails/conductor/action_mailbox/inbound_emails#new
             edit_rails_conductor_inbound_email GET    /rails/conductor/action_mailbox/inbound_emails/:id/edit(.:format)                        rails/conductor/action_mailbox/inbound_emails#edit
                  rails_conductor_inbound_email GET    /rails/conductor/action_mailbox/inbound_emails/:id(.:format)                             rails/conductor/action_mailbox/inbound_emails#show
                                                PATCH  /rails/conductor/action_mailbox/inbound_emails/:id(.:format)                             rails/conductor/action_mailbox/inbound_emails#update
                                                PUT    /rails/conductor/action_mailbox/inbound_emails/:id(.:format)                             rails/conductor/action_mailbox/inbound_emails#update
                                                DELETE /rails/conductor/action_mailbox/inbound_emails/:id(.:format)                             rails/conductor/action_mailbox/inbound_emails#destroy
          rails_conductor_inbound_email_reroute POST   /rails/conductor/action_mailbox/:inbound_email_id/reroute(.:format)                      rails/conductor/action_mailbox/reroutes#create
                             rails_service_blob GET    /rails/active_storage/blobs/:signed_id/*filename(.:format)                               active_storage/blobs#show
                      rails_blob_representation GET    /rails/active_storage/representations/:signed_blob_id/:variation_key/*filename(.:format) active_storage/representations#show
                             rails_disk_service GET    /rails/active_storage/disk/:encoded_key/*filename(.:format)                              active_storage/disk#show
                      update_rails_disk_service PUT    /rails/active_storage/disk/:encoded_token(.:format)                                      active_storage/disk#update
                           rails_direct_uploads POST   /rails/active_storage/direct_uploads(.:format)                                           active_storage/direct_uploads#create
        MESSAGE
      end
    
          # Pure data class which describes an umbrella target.
      #
      class UmbrellaTargetDescription
        # @return [Xcodeproj::Project] The user project into which this target
        #         is integrated.
        #
        attr_reader :user_project
    
        it 'prints the correct output to the console' do
      io = ''
      UI.indentation_level = 1
      config.verbose = true
      Executable::Indenter.any_instance.stubs(:io).returns(io)
      cmd = ['-e', <<-RB]
        3.times { |i| puts i }
      RB
      Executable.execute_command('ruby', cmd, true)
      io.should == ' 0\n 1\n 2\n'
    end
    
        it 'writes the module map to the disk for a library' do
      path = temporary_directory + 'BananaLib.modulemap'
      @pod_target.stubs(:build_type => Target::BuildType.static_library)
      @gen.save_as(path)
      path.read.should == <<-EOS.strip_heredoc
        module BananaLib {
          umbrella header 'BananaLib-umbrella.h'
    }
    
            it 'does not use testspecs for equality' do
          k0 = PodVariant.new(@specs, @testspecs, [], @platform, false)
          k1 = PodVariant.new(@specs, [], [], @platform, false)
          k0.should == k1
        end
    
                  FileUtils.expects(:ln_sf).with(relative_path, target_module_path)
              native_target = mock(:build_configurations => [])
              @installer.send(:create_module_map, native_target)
            end
          end
    
              BuildType.infer_from_spec(stub('spec', :root => stub('root_spec', :static_framework => true)), :host_requires_frameworks => false).
            should == BuildType.static_library
          BuildType.infer_from_spec(stub('spec', :root => stub('root_spec', :static_framework => false)), :host_requires_frameworks => false).
            should == BuildType.static_library
          BuildType.infer_from_spec(stub('spec', :root => stub('root_spec', :static_framework => true)), :host_requires_frameworks => true).
            should == BuildType.static_framework
          BuildType.infer_from_spec(stub('spec', :root => stub('root_spec', :static_framework => false)), :host_requires_frameworks => true).
            should == BuildType.dynamic_framework
        end
      end
    
          alias eql? ==
    
    require 'clamp'
require 'pluginmanager/util'
require 'pluginmanager/gemfile'
require 'pluginmanager/install'
require 'pluginmanager/remove'
require 'pluginmanager/list'
require 'pluginmanager/update'
require 'pluginmanager/pack'
require 'pluginmanager/unpack'
require 'pluginmanager/generate'
require 'pluginmanager/prepare_offline_pack'
require 'pluginmanager/proxy_support'
configure_proxy
    
          options = {:debug => ENV['LS_QA_DEBUG']}
      puts 'Destroying #{machines}'
      LogStash::VagrantHelpers.destroy(machines, options)
      puts 'Bootstrapping #{machines}'
      LogStash::VagrantHelpers.bootstrap(machines, options)
    end
    
              it 'fails when installing a non logstash plugin' do
            command = logstash.run_command_in_path('bin/logstash-plugin install  bundler')
            expect(command).not_to install_successfully
          end
    
        def default_attributes(&block)
      return if @options.nil?
      @options.each do |flag, param, help, options, _block|
        attr = flag.first.gsub(/^-+/, '').gsub(/-/, '_').gsub('[no_]', '')
        attr += '?' if param == :flag
        yield attr.to_sym, options[:default]
      end
    end # def default_attributes
    
              # directories have a magic string inserted into their name
          full_record_path = extension_header[TAR_NAME_OFFSET_START..TAR_NAME_OFFSET_END].delete('\0')
          full_record_path = add_paxstring(full_record_path)
    
      option '--php-bin', 'PHP_BIN',
    'Specify php executable path if differs from the os used for packaging'
    
      option '--name', 'SERVICE_NAME', 'The name of the service you are creating'
  option '--chdir', 'CHDIR', 'The working directory used by the service'
    
      def build!(params)
    # TODO(sissel): Support these somehow, perhaps with execs and files.
    self.scripts.each do |name, path|
      case name
        when 'pre-install'
        when 'post-install'
        when 'pre-uninstall'
        when 'post-uninstall'
      end # case name
    end # self.scripts.each
    
    # Support for self extracting sh files (.sh files)
#
# This class only supports output of packages.
#
# The sh package is a single sh file with a tar payload concatenated to the end.
# The script can unpack the tarball to install it and call optional post install scripts.
class FPM::Package::Sh < FPM::Package
    
          # TODO(sissel): preinstall/postinstall
      # strip @prefix, since BASEDIR will set prefix via the pkginfo file
      IO.popen('pkgproto #{staging_path}/#{@prefix}=').each_line do |line|
        type, klass, path, mode, user, group = line.split