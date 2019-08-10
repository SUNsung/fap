
        
          def test_recreate_mysql_database_with_encoding
    create_database(:luca, charset: 'latin1')
    assert_equal 'CREATE DATABASE `luca` DEFAULT CHARACTER SET `latin1`', recreate_database(:luca, charset: 'latin1')
  end
    
        initializer 'action_mailbox.config' do
      config.after_initialize do |app|
        ActionMailbox.logger = app.config.action_mailbox.logger || Rails.logger
        ActionMailbox.incinerate = app.config.action_mailbox.incinerate.nil? ? true : app.config.action_mailbox.incinerate
        ActionMailbox.incinerate_after = app.config.action_mailbox.incinerate_after || 30.days
        ActionMailbox.queues = app.config.action_mailbox.queues || {}
        ActionMailbox.ingress = app.config.action_mailbox.ingress
      end
    end
  end
end

    
    require 'isolation/abstract_unit'
    
      test 'rails routes with controller search key' do
    app_file 'config/routes.rb', <<-RUBY
      Rails.application.routes.draw do
        get '/cart', to: 'cart#show'
        get '/basketball', to: 'basketball#index'
        get '/user_permission', to: 'user_permission#index'
      end
    RUBY
    
    module ActionView
  class Template #:nodoc:
    class Types
      class Type
        SET = Struct.new(:symbols).new([ :html, :text, :js, :css, :xml, :json ])
    
        cmd_args = nil
    cmd_func = nil
    arguments = []
    
        # Similarly, when we seperate large payloads into chunks to avoid the
    # 998-byte problem mentioned above, we have to make sure that the first
    # character of each chunk is an alpha character.  This simple algorithm
    # will create a broken string in the case of 99 consecutive digits,
    # slashes, and plusses in the base64 encoding, but the likelihood of
    # that is low enough that I don't care.
    i = 900;
    while i < b64.length
      while (b64[i].chr =~ %r{[0-9/+]})
        i += 1
      end
      b64.insert(i,'.')
      i += 900
    end
    
      def initialize(info = {})
    super(merge_info(info,
      'Name'          => 'Unix Command Shell, Reverse TCP (/dev/tcp)',
      'Description'   => %q{
        Creates an interactive shell via bash's builtin /dev/tcp.
    }
    
            ; perform the call to accept...
        xor r8, r8             ; we set length for the sockaddr struct to zero
        xor rdx, rdx           ; we dont set the optional sockaddr param
        mov rcx, rdi           ; listening socket
        mov r10d, #{Rex::Text.block_api_hash('ws2_32.dll', 'accept')}
        call rbp               ; accept( s, 0, 0 );
    
      # Generate a Payload UUID
  def generate_payload_uuid
    
    GEMFILE_EXTENSIONS = [
    '.local',
    ''
]
    
        if valid
    
        # LinkHeader
    ret = [
      0x4c, 0x00, 0x00, 0x00, # HeaderSize, must be 0x0000004C
      0x01, 0x14, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, # LinkCLSID, must be 00021401-0000-0000-C000-000000000046
      0x81, 0x00, 0x00, 0x00, # LinkFlags (HasLinkTargetIDList | IsUnicode)
      0x00, 0x00, 0x00, 0x00, # FileAttributes
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, # CreationTime
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, # AccessTime
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, # WriteTime
      0x00, 0x00, 0x00, 0x00, # FileSize
      0x00, 0x00, 0x00, 0x00, # IconIndex
      0x00, 0x00, 0x00, 0x00, # ShowCommand
      0x00, 0x00, # HotKey
      0x00, 0x00, # Reserved1
      0x00, 0x00, 0x00, 0x00, # Reserved2
      0x00, 0x00, 0x00, 0x00  # Reserved3
    ].pack('C*')
    
        # Report proxy creds
    if session.db_record
      source_id = session.db_record.id
    else
      source_id = nil
    end
    
      def run
    # Make sure we meet the requirements before running the script
    unless session.type == 'meterpreter' || have_powershell?
      print_error 'Incompatible Environment'
      return 0
    end
    
            return nil
      end
    end
  end
end end end

    
        def user_feedback_string_for(action, platform, machines, options={})
      experimental_string = options['experimental'] ? 'experimental' : 'non experimental'
      message  = '#{action} all #{experimental_string} VM's defined in acceptance/Vagrantfile'
      '#{message} for #{platform}: #{machines}' if !platform.nil?
    end
    
    describe FPM::Package::CPAN, :if => have_cpanm do
  subject { FPM::Package::CPAN.new }
    
        self.name = [attributes[:npm_package_name_prefix], name].join('-')
    self.version = info.fetch('version', '0.0.0')
    
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
    
          # TODO(sissel): preinstall/postinstall
      # strip @prefix, since BASEDIR will set prefix via the pkginfo file
      IO.popen('pkgproto #{staging_path}/#{@prefix}=').each_line do |line|
        type, klass, path, mode, user, group = line.split
    
        def initialize(index, project, tab, *commands)
      @commands = commands
      @index = index
      @project = project
      @tab = tab
    end