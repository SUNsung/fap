
        
            date = date.to_date
    
        def start_thread
      @mutex.synchronize do
        if !@reactor
          @reactor = MessageBus::TimerThread.new
        end
        if !@thread&.alive?
          @thread = Thread.new { do_work while true }
        end
      end
    end
    
          expect(builder.build).to eq(previous)
    end
  end
    
    end

    
      def self.path
    '/highlight-js/#{Discourse.current_hostname}/#{version SiteSetting.highlighted_languages}.js'
  end
end

    
      def build(theme_ids)
    builder = Builder.new
    
        def site_setting_extension
      { script_src: SiteSetting.content_security_policy_script_src.split('|') }
    end
    
      def self.ensure_consistency!(last_seen = 1.hour.ago)
    reset_bounce_scores
    update_view_counts(last_seen)
    update_first_unread(last_seen)
  end
    
    module Docs
  class Entry
    class Invalid < StandardError; end
    
            css('h2:not([id]) a[id]:not([href])').each do |node|
          node.parent['id'] = node['id']
          node.before(node.children).remove
        end
    
            # Executes a command and returns true if the command succeeded,
        # and false otherwise. By default, this executes as a normal user,
        # and it is up to the communicator implementation if they expose an
        # option for running tests as an administrator.
        #
        # @see #execute
        def test(command, opts=nil)
        end
      end
    end
  end
end

    
            # Mounts a shared folder.
        #
        # This method should create, mount, and properly set permissions
        # on the shared folder. This method should also properly
        # adhere to any configuration values such as `shared_folder_uid`
        # on `config.vm`.
        #
        # @param [String] name The name of the shared folder.
        # @param [String] guestpath The path on the machine which the user
        #   wants the folder mounted.
        # @param [Hash] options Additional options for the shared folder
        #   which can be honored.
        def mount_shared_folder(name, guestpath, options)
          raise BaseError, _key: :unsupported_shared_folder
        end
    
            # Defines a capability for the given guest. The block should return
        # a class/module that has a method with the capability name, ready
        # to be executed. This means that if it is an instance method,
        # the block should return an instance of the class.
        #
        # @param [String] guest The name of the guest
        # @param [String] cap The name of the capability
        def self.guest_capability(guest, cap, &block)
          components.guest_capabilities[guest.to_sym].register(cap.to_sym, &block)
          nil
        end
    
        # Register a key with a lazy-loaded value.
    #
    # If a key with the given name already exists, it is overwritten.
    def register(key, &block)
      raise ArgumentError, 'block required' if !block_given?
      @items[key] = block
    end
    
      #
  # HTTP server.
  #
  def alias
    super || 'HTTP Server'
  end
    
        head + [data.length].pack('v') + data
  end
    
              # Encodes the components field
          #
          # @return [String]
          def encode_components
            encoded = ''
    
              # Encodes the end_time field
          #
          # @return [String]
          def encode_end_time
            [end_time].pack('N')
          end
    
                decrypted
          end
    
              # Encodes a Rex::Proto::Kerberos::Model::EncryptionKey into an
          # ASN.1 String
          #
          # @return [String]
          def encode
            elems = []
            elems << OpenSSL::ASN1::ASN1Data.new([encode_type], 0, :CONTEXT_SPECIFIC)
            elems << OpenSSL::ASN1::ASN1Data.new([encode_value], 1, :CONTEXT_SPECIFIC)
            seq = OpenSSL::ASN1::Sequence.new(elems)
    
              # Rex::Proto::Kerberos::Model::KdcResponse encoding isn't supported
          #
          # @raise [NotImplementedError]
          def encode
            raise ::NotImplementedError, 'KdcResponse encoding not supported'
          end
    
      # The test environment is used exclusively to run your application's
  # test suite. You never need to work with it otherwise. Remember that
  # your test database is 'scratch space' for the test suite and is wiped
  # and recreated between test runs. Don't rely on the data there!
  config.cache_classes = true
    
    # Create two output packages!
output_packages = []
output_packages << pleaserun.convert(FPM::Package::RPM)
output_packages << pleaserun.convert(FPM::Package::Deb)
    
    class FPM::Package::NPM < FPM::Package
  class << self
    include FPM::Util
  end
  # Flags '--foo' will be accessable  as attributes[:npm_foo]
  option '--bin', 'NPM_EXECUTABLE',
    'The path to the npm executable you wish to run.', :default => 'npm'
    
      # Extract name and version from PackageInfo XML
  def extract_info(package)
    build_path('expand').tap do |path|
      doc = REXML::Document.new File.open(File.join(path, 'PackageInfo'))
      pkginfo_elem = doc.elements['pkg-info']
      identifier = pkginfo_elem.attribute('identifier').value
      self.version = pkginfo_elem.attribute('version').value
      # set name to the last dot element of the identifier
      self.name = identifier.split('.').last
      logger.info('inferring name #{self.name} from pkg-id #{identifier}')
    end
  end # def extract_info
    
          # TODO(sissel): preinstall/postinstall
      # strip @prefix, since BASEDIR will set prefix via the pkginfo file
      IO.popen('pkgproto #{staging_path}/#{@prefix}=').each_line do |line|
        type, klass, path, mode, user, group = line.split
    
    module FPM
  module Issues
    module TarWriter
      # See https://github.com/rubygems/rubygems/issues/1608
      def self.has_issue_1608?
        name, prefix = nil,nil
        io = StringIO.new
        ::Gem::Package::TarWriter.new(io) do |tw|
          name, prefix = tw.split_name('/123456789'*9 + '/1234567890') # abs name 101 chars long
        end
        return prefix.empty?
      end
    
    Given /^I add this snippet to the User model:$/ do |snippet|
  file_name = 'app/models/user.rb'
  cd('.') do
    content = File.read(file_name)
    File.open(file_name, 'w') { |f| f << content.sub(/end\Z/, '#{snippet}\nend') }
  end
end
    
      def self.source_root
    @source_root ||= File.expand_path('../templates', __FILE__)
  end
    
        # Returns a String describing the file's content type
    def detect
      if blank_name?
        SENSIBLE_DEFAULT
      elsif empty_file?
        EMPTY_TYPE
      elsif calculated_type_matches.any?
        calculated_type_matches.first
      else
        type_from_file_contents || SENSIBLE_DEFAULT
      end.to_s
    end
    
        def scaling dst, ratio
      if ratio.horizontal? || ratio.square?
        [ '%dx' % dst.width, ratio.width ]
      else
        [ 'x%d' % dst.height, ratio.height ]
      end
    end
    
        # Returns a sorted list of all interpolations.
    def self.all
      self.instance_methods(false).sort!
    end