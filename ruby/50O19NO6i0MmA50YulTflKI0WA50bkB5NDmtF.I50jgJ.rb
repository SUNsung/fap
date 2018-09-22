
        
                # Sends a Kerberos Request over a tcp connection
        #
        # @param req [Rex::Proto::Kerberos::Model::KdcRequest] the request to send
        # @return [Integer] the number of bytes sent
        # @raise [RuntimeError] if the request can't be encoded
        def send_request_tcp(req)
          data = req.encode
          length = [data.length].pack('N')
          connection.put(length + data)
        end
    
              # Encodes a Rex::Proto::Kerberos::Model::Checksum into an ASN.1 String
          #
          # @return [String]
          def encode
            elems = []
            elems << OpenSSL::ASN1::ASN1Data.new([encode_type], 0, :CONTEXT_SPECIFIC)
            elems << OpenSSL::ASN1::ASN1Data.new([encode_checksum], 1, :CONTEXT_SPECIFIC)
    
        BUNDLE_DIR = ::File.join(LOGSTASH_HOME, 'vendor', 'bundle')
    GEMFILE_PATH = ::File.join(LOGSTASH_HOME, 'Gemfile')
    LOCAL_GEM_PATH = ::File.join(LOGSTASH_HOME, 'vendor', 'local_gems')
    CACHE_PATH = ::File.join(LOGSTASH_HOME, 'vendor', 'cache')
    LOCKFILE = Pathname.new(::File.join(LOGSTASH_HOME, 'Gemfile.lock'))
    GEMFILE = Pathname.new(::File.join(LOGSTASH_HOME, 'Gemfile'))
    
      option '--installed', :flag, 'List only explicitly installed plugins using bin/logstash-plugin install ...', :default => false
  option '--verbose', :flag, 'Also show plugin version number', :default => false
  option '--group', 'NAME', 'Filter plugins per group: input, output, filter or codec' do |arg|
    raise(ArgumentError, 'should be one of: input, output, filter or codec') unless ['input', 'output', 'filter', 'codec', 'pack'].include?(arg)
    arg
  end
    
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
    
      class OfflinePluginPackager
    LOGSTASH_DIR = 'logstash'
    DEPENDENCIES_DIR = ::File.join(LOGSTASH_DIR, 'dependencies')
    
        puts('Packaging plugins for offline usage')
    
              it 'successfully install the plugin' do
            command = logstash.run_command_in_path('bin/logstash-plugin install #{gem_path_on_vagrant}')
            expect(command).to install_successfully
            expect(logstash).to have_installed?('logstash-filter-dns')
          end
        end